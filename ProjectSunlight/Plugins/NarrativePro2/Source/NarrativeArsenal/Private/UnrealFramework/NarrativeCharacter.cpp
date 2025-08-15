// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeCharacter.h"
#include "Net/UnrealNetwork.h"
#include "GAS/NarrativeAttributeSetBase.h"
#include "GAS/NarrativeGameplayAbility.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "GAS/AbilityConfiguration.h"
#include "Navigation/NavigationMarkerComponent.h"
#include <Components/SkeletalMeshComponent.h>
#include <Components/CapsuleComponent.h>
#include "Components/EquipmentComponent.h"
#include "Character/NarrativeCharacterMovement.h"
#include <GameFramework/CharacterMovementComponent.h>
#include <GameFramework/PlayerState.h>
#include <MotionWarpingComponent.h>
#include "Items/EquippableItem.h"
#include <GameplayEffectTypes.h>
#include <GameplayEffectExtension.h>
#include "NarrativeGameplayTags.h"
#include <AbilitySystemGlobals.h>
#include "Items/WeaponItem.h"
#include <Runtime/AIModule/Classes/Perception/AISense_Damage.h>
#include <UObject/ConstructorHelpers.h>
#include "Engine/World.h"
#include <Engine/Texture2D.h>
#include "Character/CharacterAppearance.h"
#include "Character/NarrativeCharacterVisual.h"
#include <GroomComponent.h>
#include "Character/CharacterDefinition.h"
#include "Character/CharacterMapMarker.h"
#include <Materials/MaterialInstanceDynamic.h>
#include "Tales/NarrativeEvent.h"
#include "Tales/NarrativeCondition.h"
#include "AI/NarrativeCharacterSubsystem.h"
#include "Tales/NarrativeTrigger.h"
#include <Engine/AssetManager.h>

#include "ArsenalSettings.h"
#include "Tales/TriggerSet.h"
#include "UnrealFramework/NarrativeGameState.h"
#include "SaveSystemStatics.h"
#include "UnrealFramework/NarrativeGameMode.h"
#include "ArsenalStatics.h"
#include "NarrativeLogChannels.h"
#include "Navigation/NavigatorGameplayTags.h"

// Sets default values
ANarrativeCharacter::ANarrativeCharacter(const class FObjectInitializer& ObjectInitializer) : 
	Super(ObjectInitializer.SetDefaultSubobjectClass<UNarrativeCharacterMovement>(ACharacter::CharacterMovementComponentName))
{
	
	SetReplicates(true);

	//We use a Lyra style setup where we use a hidden mesh and leader pose the other meshes to follow it. So hide main mesh, its simply there to drive anims
	GetMesh()->SetVisibility(false);
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	GetMesh()->ComponentTags.Add("Body");

	EquipmentComp = CreateDefaultSubobject<UEquipmentComponent>("EquipmentComp");

	MotionWarpingComponent = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpingComponent"));

	//Nice default values for level scaling. 
	LevelExponentX = 0.07f;
	LevelExponentY = 2.f;

	UnarmedAttackDamage = 10.f;

	//This probably needs to be configurable in the CharacterDefinition. 
	BaseEyeHeight = 72.f;
}

void ANarrativeCharacter::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode /*= 0*/)
{
	Super::OnMovementModeChanged(PrevMovementMode, PreviousCustomMode);

	if (UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		if (UNarrativeCharacterMovement* NCMC = GetNarrativeCharacterMovement())
		{
			//Add some nice tags so GAS can access move state via tags
			if (NCMC->IsFalling())
			{
				ASC->AddLooseGameplayTag(FNarrativeGameplayTags::Get().State_Movement_Falling);
			}
			else
			{
				ASC->RemoveLooseGameplayTag(FNarrativeGameplayTags::Get().State_Movement_Falling);
			}

			if (NCMC->IsSwimming())
			{
				ASC->AddLooseGameplayTag(FNarrativeGameplayTags::Get().State_Movement_Swimming);
			}
			else
			{
				ASC->RemoveLooseGameplayTag(FNarrativeGameplayTags::Get().State_Movement_Swimming);
			}
		}
	}

}

void ANarrativeCharacter::Destroyed()
{
	Super::Destroyed();

	if (CharVisual)
	{
		CharVisual->Destroy();
	}
}

#if WITH_GAMEPLAY_DEBUGGER

void ANarrativeCharacter::DescribeSelfToGameplayDebugger(FGameplayDebuggerCategory* DebuggerCategory) const
{
	if (DebuggerCategory)
	{
		UWorld* World = GetWorld();

		if (!World)
		{
			return;
		}

		ANarrativeGameState* GS = Cast<ANarrativeGameState>(World->GetGameState());

		if (!GS)
		{
			return;
		}

		const float TOD = GS->GetTimeOfDay();

		DebuggerCategory->AddTextLine(FString::Printf(TEXT("Time of day: %f. Day advance speed: %f"), TOD, GS->GetTimeOfDayAdvanceSpeed()));

		DebuggerCategory->AddTextLine(FString::Printf(TEXT("Triggers: (%d)"), Triggers.Num()));

		for (auto& Trigger : Triggers)
		{
			if (Trigger)
			{
				FString EvtString = "";

				for (auto& Evt : Trigger->TriggerEvents)
				{
					EvtString += Evt->GetGraphDisplayText() + ",";
				}

				if (!EvtString.Len())
				{
					EvtString = "Nothing";
				}

				if(Trigger->GetActive())
				{	
					DebuggerCategory->AddTextLine(FString::Printf(TEXT("{green} On %s, %s (active)"), *Trigger->GetDescription(), *EvtString));
				}
				else
				{
					DebuggerCategory->AddTextLine(FString::Printf(TEXT("On %s,  %s"), *Trigger->GetDescription(), *EvtString));
				}

			}
		}

		bool bWantsLookAt;
		FVector LookAtLocation = GetHeadLookAtLocation(bWantsLookAt);

		if (bWantsLookAt)
		{
			DebuggerCategory->AddShape(FGameplayDebuggerShape::MakePoint(LookAtLocation, 30.0f, FColor::Red, "Look At Location"));
		}
	}
}

#endif 

class UAbilitySystemComponent* ANarrativeCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

bool ANarrativeCharacter::IsAlive() const
{
	if (AbilitySystemComponent)
	{
		return !AbilitySystemComponent->HasMatchingGameplayTag(FNarrativeGameplayTags::Get().State_IsDead);
	}

	return true; 
}

FVector ANarrativeCharacter::GetFloorLocation(const float ZOffset) const
{
	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		return GetActorLocation() - FVector(0.f, 0.f, Capsule->GetScaledCapsuleHalfHeight()) + FVector(0.f, 0.f, ZOffset);
	}
	return GetActorLocation();
}

UCharacterDefinition* ANarrativeCharacter::GetCharacterDefinition() const
{
	return nullptr;
}

class UNarrativeInventoryComponent* ANarrativeCharacter::GetInventoryComponent() const
{
	return nullptr;
}

class UNarrativeInteractionComponent* ANarrativeCharacter::GetInteractionComponent() const
{
	return nullptr; 
}

void ANarrativeCharacter::OnDefinitionSet_Implementation(UCharacterDefinition* NewDefinition)
{
	//When our characters definition is set, try loading all the data we need now that we're spawned, such as our appearance, dialogue, and so on. 
	if (IsValid(NewDefinition))
	{
		if (UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
		{
			ASC->AddLooseGameplayTags(NewDefinition->DefaultOwnedTags);
		}

		if (UAssetManager* Manager = UAssetManager::GetIfInitialized())
		{
			FStreamableDelegate LoadDel = FStreamableDelegate::CreateUObject(this, &ANarrativeCharacter::HandleCharacterDefinitionDataLoaded, NewDefinition->GetPrimaryAssetId());
			CharacterDefinitionLoadHandle = Manager->LoadPrimaryAsset(NewDefinition->GetPrimaryAssetId(), {"SpawnedData"}, LoadDel);
		}
	}
}

void ANarrativeCharacter::OnCharacterDefinitionDataLoaded(FPrimaryAssetId LoadedId)
{
	if (UCharacterDefinition* CDef = GetCharacterDefinition())
	{
		//Our characters data is ready. Lets apply the appearance, trigger sets, and so on 
		if (UAssetManager* Manager = UAssetManager::GetIfInitialized())
		{
			//1. Set the characters appearance. 
			if (TSoftObjectPtr<UCharacterAppearanceBase> BaseAppearance = GetDefaultAppearance())
			{
				if (UCharacterAppearance* LoadedAppearance = Cast<UCharacterAppearance>(BaseAppearance.LoadSynchronous()))
				{
					SpawnCharacterVisual(LoadedAppearance);
					ApplyAppearance(LoadedAppearance);
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("appearance not yet valid!"));
			}

			//2. Apply any trigger sets our character needs 
			TArray<UTriggerSet*> DefaultTriggers;

			for (auto& TriggerSoftPtr : GetDefaultTriggerSets())
			{
				if (TriggerSoftPtr.IsValid())
				{
					if (UTriggerSet* TSet = TriggerSoftPtr.LoadSynchronous())
					{
						DefaultTriggers.Add(TSet);
					}
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("trigger set not yet valid!"));
				}
			}

			if (DefaultTriggers.Num())
			{
				ApplyTriggerSets(DefaultTriggers);
			}

			CharacterDefinitionLoadHandle.Reset();
		}
	}
}

void ANarrativeCharacter::OnPostCharacterDefinitionDataLoaded(FPrimaryAssetId LoadedId)
{
	//Register marker once our definition is loaded, since this is the first time our factions are initialized. 
	MapMarker = NewObject<UCharacterMapMarker>(this);

	if (MapMarker)
	{
		MapMarker->ActorOwner = this; 

		//If we're local we want to see our character on world maps. Generally we don't want to show other characters on the world map, though we'll allow minimaps. This should probably be configurable. 
		if (IsLocallyControlled() && IsPlayerControlled())
		{
			MapMarker->AddDomains(FGameplayTagContainer(FNavigatorGameplayTags::Get().NavigatorTypes_Worldmap));
			//MapMarker->RemoveDomains(FGameplayTagContainer(FNavigatorGameplayTags::Get().NavigatorTypes_Compass));
		}

		MapMarker->DefaultMarkerSettings.MarkerTitleText = FText::FromString(GetHumanReadableName());
		MapMarker->RegisterMarker();
	}

}

void ANarrativeCharacter::HandleCharacterDefinitionDataLoaded(FPrimaryAssetId LoadedId)
{
	//Causes the character to initialize from the definition/load its saved data
	OnCharacterDefinitionDataLoaded(LoadedId);

	//Lets us do anything we want to do only after definition/load is applied! 
	OnPostCharacterDefinitionDataLoaded(LoadedId);

	CharacterDefinitionLoadHandle.Reset();
}

bool ANarrativeCharacter::IsCharacterPendingLoad() const
{	
	//No char visual yet means our appearance isn't yet loaded 
	if (!CharVisual)
	{
		return true; 
	}

	//If our character is loading meshes, its not ready 
	if (!CharVisual->bBaseAppearanceLoaded || CharVisual->HasLoadHandles())
	{
		return true;
	}

	return CharacterDefinitionLoadHandle.IsValid();
}


void ANarrativeCharacter::SpawnCharacterVisual_Implementation(class UCharacterAppearance* DefaultAppearance)
{
	if (!CharVisual)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.bNoFail = true;
		SpawnParams.Owner = this;

		CharVisual = GetWorld()->SpawnActor<ANarrativeCharacterVisual>(GetCharacterVisualClass(DefaultAppearance), FTransform(), SpawnParams);

		if (CharVisual)
		{
			CharVisual->OnBaseAppearanceApplied.AddDynamic(this, &ANarrativeCharacter::OnCharacterVisualInitialized);
		}
		else
		{
			UE_LOG(LogNarrativeCharacter, Error, TEXT("Character Visual failed to spawn. This shouldn't happen. Is your GetCharacterVisualClass() returning a valid visual?"));
		}
	}
}

TSubclassOf<class ANarrativeCharacterVisual> ANarrativeCharacter::GetCharacterVisualClass_Implementation(class UCharacterAppearance* DefaultAppearance) const
{
	if (DefaultAppearance)
	{
		return DefaultAppearance->CharacterAttributes.CharacterVisualClass;
	}

	return nullptr; 
}

void ANarrativeCharacter::OnCharacterVisualInitialized()
{
	//NPC and Player versions of this each grant items in here - that way appearance related items are guaranteed that the weapon visual is loaded in. 
}

void ANarrativeCharacter::ApplyAppearance_Implementation(class UCharacterAppearance* DefaultAppearance)
{
	//Here, we'll spawn the character visual defined in the character appearance asset.
	
	if (DefaultAppearance)
	{
		if (CharVisual)
		{
			CharVisual->InitializeFromCharacter(this, DefaultAppearance->CharacterAttributes);
			//CharVisual->AttachToActor(this, FAttachmentTransformRules::SnapToTargetIncludingScale);
		}

		//SetAppearanceFromCreatorData(DefaultAppearance->CharacterAttributes);
	}
}

void ANarrativeCharacter::InitNewCharacter_Implementation(UCharacterDefinition* NewDefinition)
{
	if (NewDefinition)
	{
		UArsenalStatics::AddFactionsToActor(this, NewDefinition->DefaultFactions);
	
		if (UNarrativeInventoryComponent* Inventory = GetInventoryComponent())
		{
			Inventory->SetCurrency(NewDefinition->DefaultCurrency);
			
			for (auto& DefaultRoll : GetDefaultItemLoadout())
			{
				TArray<FItemAddResult> Results;
				Inventory->TryAddFromLootTable(DefaultRoll, Results);
			}
		}
	}
}

bool ANarrativeCharacter::SetEventActive(class UNarrativeEvent* Event, const bool bActivate)
{
	if (Event)
	{
		TArray<UCharacterDefinition*> CharTargets = Event->GetCharacterTargets();
		TArray<ANarrativeCharacter*> CharActorTargets;

		//Events can either be ran on the owner, or optionally specified targets. Gather those. 
		if (CharTargets.Num())
		{
			if (UWorld* World = GetWorld())
			{
				if (UNarrativeCharacterSubsystem* NPCS = World->GetSubsystem<UNarrativeCharacterSubsystem>())
				{
					for (auto& NPCTarget : CharTargets)
					{
						if (ANarrativeCharacter* Character = NPCS->FindCharacter(NPCTarget))
						{
							CharActorTargets.Add(Character);
						}
					}
				}
			}
		}
		else
		{
			CharActorTargets.Add(this);
		}

		//Run the event on all specified targets 
		for (auto& CharTarget : CharActorTargets)
		{
			//Ensure all conditions are met
			for (auto& Cond : Event->Conditions)
			{	
				if (Cond)
				{
					//Need to check who to run condition on 
					TArray<UCharacterDefinition*> CondTargets = Cond->GetCharacterTargets();
					TArray<ANarrativeCharacter*> CondActorTargets;

					if (CondTargets.Num())
					{
						if (UWorld* World = GetWorld())
						{
							if (UNarrativeCharacterSubsystem* NPCS = World->GetSubsystem<UNarrativeCharacterSubsystem>())
							{
								for (auto& NPCTarget : CharTargets)
								{
									if (ANarrativeCharacter* Character = NPCS->FindCharacter(NPCTarget))
									{
										CondActorTargets.Add(Character);
									}
								}
							}
						}
					}
					else
					{
						CondActorTargets.Add(this);
					}

					for (auto& Target : CondActorTargets)
					{
						if (Cond->CheckCondition(Target, nullptr, nullptr) == Cond->bNot)
						{
							UE_LOG(LogTemp, Warning, TEXT("Event %s not running on %s as cond %s failed"), *Event->GetGraphDisplayText(), *CharTarget->GetHumanReadableName(), *Cond->GetGraphDisplayText());

							return false;
						}
					}
				}

			}

			UE_LOG(LogTemp, Warning, TEXT("Event %s running on %s"), *Event->GetGraphDisplayText(), *CharTarget->GetHumanReadableName());

			//TODO we should update ExecuteEvents parameters, they aren't really as relevant any more
			if (bActivate)
			{
				Event->OnActivate(CharTarget, nullptr, nullptr);
			}
			else
			{
				Event->OnDeactivate(CharTarget, nullptr, nullptr);
			}


			return true; 
		}

	}

	return false; 
}

void ANarrativeCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//InitializeEquipmentComponent();
}

void ANarrativeCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ANarrativeCharacter, EquippedWeapon);
}


void ANarrativeCharacter::TeleportSucceeded(bool bIsATest)
{
	OnTeleported.Broadcast();

	Super::TeleportSucceeded(bIsATest);
}

void ANarrativeCharacter::AddAbility(TSubclassOf<class UNarrativeGameplayAbility> Ability)
{
	// Grant abilities, but only on the server	
	if (IsValid(Ability) && HasAuthority() && AbilitySystemComponent)
	{
		const int32 Level = GetCharacterLevel();
		const int32 InputID = static_cast<int32>(Ability.GetDefaultObject()->InputID);

		for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
		{
			if ((Spec.SourceObject == this) && Spec.Ability->GetClass() == Ability)
			{
				UE_LOG(LogTemp, Warning, TEXT("tried granting ability %s that was already granted"), *GetNameSafe(Ability));
				return;
			}
		}
				
		UE_LOG(LogTemp, Warning, TEXT("Granting ability %s to %s"), *GetNameSafe(Ability), *GetHumanReadableName());

		if (InputID != static_cast<int32>(ENarrativeAbilityInputID::None))
		{
			//Clear any existing abilities with the InputID 
			AbilitySystemComponent->ClearAllAbilitiesWithInputID(InputID);

			FGameplayAbilitySpecHandle Handle = AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(Ability, Level, InputID, this));

			if (!Handle.IsValid())
			{
				UE_LOG(LogTemp, Warning, TEXT("Granting ability %s returned invalid handle on %s"), *GetNameSafe(Ability), *GetHumanReadableName());
			}
		}
		else
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(Ability, Level, -1, this));
		}
	}
}

void ANarrativeCharacter::GrantAbilities(TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities)
{
	for (TSubclassOf<UNarrativeGameplayAbility>& Ability : Abilities)
	{
		AddAbility(Ability);
	}
}

void ANarrativeCharacter::RemoveAbilities(TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities)
{
	// Grant abilities, but only on the server	
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent)
	{
		return;
	}

	if (UCharacterDefinition* CDef = GetCharacterDefinition())
	{


		TArray<FGameplayAbilitySpecHandle> AbilitiesToRemove;
		TArray<TSubclassOf<class UNarrativeGameplayAbility>> AbilitiesToRestore;

		for (const FGameplayAbilitySpec& Spec : AbilitySystemComponent->GetActivatableAbilities())
		{
			if ((Spec.SourceObject == this) && Abilities.Contains(Spec.Ability->GetClass()))
			{
				AbilitiesToRemove.Add(Spec.Handle);
				UE_LOG(LogTemp, Warning, TEXT("%s is removing ability %s"), *GetHumanReadableName(), *GetNameSafe(Spec.Ability));
			}
		}

		for (int32 i = 0; i < AbilitiesToRemove.Num(); i++)
		{
			AbilitySystemComponent->ClearAbility(AbilitiesToRemove[i]);
		}
		if (UAbilityConfiguration* AbilityConfig = CDef->AbilityConfiguration)
		{
			//TODO look into this further, may be better to only grant previously removed default abilities
			GrantAbilities(AbilityConfig->DefaultAbilities);
		}
	}


}

class UNarrativeCharacterMovement* ANarrativeCharacter::GetNarrativeCharacterMovement() const
{
	return Cast<UNarrativeCharacterMovement>(GetCharacterMovement());
}

void ANarrativeCharacter::SetWeaponHolstered(const bool bHolster)
{
	if (bWeaponHolstered != bHolster)
	{
		bWeaponHolstered = bHolster;
		//OnRep_bWeaponHolstered();

		if (AbilitySystemComponent)
		{

		}
	}
}

void ANarrativeCharacter::SetEquippedWeapon(class UWeaponItem* WeaponToEquip)
{	
	UWeaponItem* OldWeapon = EquippedWeapon;
	EquippedWeapon = WeaponToEquip;
	OnRep_EquippedWeapon(OldWeapon);
}

void ANarrativeCharacter::OnRep_EquippedWeapon(class UWeaponItem* OldEquippedWeapon)
{
	//Once the player has an equipped weapon, we need to attach it to the player, update our anims, and grant tags. 
	if (OldEquippedWeapon)
	{
		OldEquippedWeapon->HandleUnWield();
	}

	if (EquippedWeapon)
	{
		EquippedWeapon->HandleWield();
	}
}

void ANarrativeCharacter::WieldWeapon(class UWeaponItem* Weapon)
{
	if (Weapon)
	{
		if (CharVisual)
		{
			CharVisual->HandleWieldWeapon(Weapon);
		}

		//Bots should not have their controller rot yaw affected for now as they need to use AIFocus 
		if (IsPlayerControlled())
		{
			bUseControllerRotationYaw = Weapon->bPawnFollowsControlRotation;
		}

		if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
		{
			MoveComp->bOrientRotationToMovement = Weapon->bPawnOrientsRotationToMovement;
		}

		GrantAbilities(Weapon->Abilities);
		AbilitySystemComponent->AddLooseGameplayTag(FNarrativeGameplayTags::Get().State_Weapon_Equipped);
	}
}

void ANarrativeCharacter::UnWieldWeapon(class UWeaponItem* Weapon)
{
	if (Weapon)
	{
		if (CharVisual)
		{
			CharVisual->HandleUnWieldWeapon(Weapon);
		}

		if (ANarrativeCharacter* DefaultChar = GetClass()->GetDefaultObject<ANarrativeCharacter>())
		{
			bUseControllerRotationYaw = DefaultChar->bUseControllerRotationYaw;

			if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
			{
				if (UCharacterMovementComponent* DefaultMovement = DefaultChar->GetCharacterMovement())
				{
					MoveComp->bOrientRotationToMovement = DefaultMovement->bOrientRotationToMovement;
				}
			}
		}

		RemoveAbilities(Weapon->Abilities);
		AbilitySystemComponent->SetLooseGameplayTagCount(FNarrativeGameplayTags::Get().State_Weapon_Equipped, 0);
	}
}

class AWeaponVisual* ANarrativeCharacter::GetEquippedWeaponVisual() const
{
	if (EquippedWeapon)
	{
		return GetWeaponVisual(EquippedWeapon->EquippableSlot);
	}

	return nullptr;
}

class AWeaponVisual* ANarrativeCharacter::GetWeaponVisual(const FGameplayTag& WeaponSlot) const
{
	if (CharVisual)
	{
		return CharVisual->GetWeaponVisual(WeaponSlot);
	}

	return nullptr; 
}

class UWeaponItem* ANarrativeCharacter::GetWeapon() const
{
	return EquippedWeapon;
}

float ANarrativeCharacter::GetAttackRange() const
{
	
	if (UWeaponItem* Weapon = GetWeapon())
	{
		return Weapon->GetAttackRange();
	}

	return UnarmedCombatData.TraceDistance;
}

FCombatTraceData ANarrativeCharacter::GetAttackTraceData() const
{
	if (UWeaponItem* Weapon = GetWeapon())
	{
		return Weapon->GetTraceData();
	}

	return UnarmedCombatData;
}

void ANarrativeCharacter::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if (const UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->GetOwnedGameplayTags(TagContainer);
	}
}

bool ANarrativeCharacter::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	if (const UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		return ASC->HasMatchingGameplayTag(TagToCheck);
	}

	return false;
}

bool ANarrativeCharacter::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		return ASC->HasAllMatchingGameplayTags(TagContainer);
	}

	return false;
}

bool ANarrativeCharacter::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (const UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		return ASC->HasAnyMatchingGameplayTags(TagContainer);
	}

	return false;
}

UAISense_Sight::EVisibilityResult ANarrativeCharacter::CanBeSeenFrom(const FCanBeSeenFromContext& Context, FVector& OutSeenLocation, int32& OutNumberOfLoSChecksPerformed, int32& OutNumberOfAsyncLosCheckRequested, float& OutSightStrength, int32* UserData /*= nullptr*/, const FOnPendingVisibilityQueryProcessedDelegate* Delegate /*= nullptr*/)
{

	FHitResult Hit;
	FVector OurEyesLoc;
	FRotator OurEyesRot;

	const FName HeadTipName("head_tip");

	if (GetMesh() && GetMesh()->DoesSocketExist(HeadTipName))
	{
		OurEyesLoc = GetMesh()->GetSocketLocation(HeadTipName);
	}
	else
	{
		GetActorEyesViewPoint(OurEyesLoc, OurEyesRot);
	}

	//OutNumberOfLoSChecksPerformed++;

	//bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Context.ObserverLocation, OurEyesLoc, ECC_Visibility, QueryParams, FCollisionResponseParams::DefaultResponseParam);

	//Lets see if we can hit the character
	if (PerformSightTrace(Hit, Context.ObserverLocation, GetActorLocation(), Context, OutSightStrength, OutSeenLocation, OutNumberOfLoSChecksPerformed))
	{
		return UAISense_Sight::EVisibilityResult::Visible;
	}

	//That failed, try the head instead 
	if (PerformSightTrace(Hit, Context.ObserverLocation, OurEyesLoc, Context, OutSightStrength, OutSeenLocation, OutNumberOfLoSChecksPerformed))
	{
		return UAISense_Sight::EVisibilityResult::Visible;
	}



	return UAISense_Sight::EVisibilityResult::NotVisible;
}

bool ANarrativeCharacter::PerformSightTrace(FHitResult& Hit, const FVector& Start, const FVector& End, const FCanBeSeenFromContext& Context, float& OutSightStrength, FVector& OutSeenLocation, int32& OutNumberOfLoSChecksPerformed)
{
	// we need to do tests ourselves
	const FCollisionQueryParams QueryParams = FCollisionQueryParams(SCENE_QUERY_STAT(AILineOfSight), true, Context.IgnoreActor);

	const bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, QueryParams, FCollisionResponseParams::DefaultResponseParam);

	if (!bHit || (Hit.GetActor() && Hit.GetActor()->IsOwnedBy(this)))
	{
		const FVector Offset = Start - End;

		//3 meters or closer is full strength sighted, otherwise 50m or more is least sighted 
		const float DistanceSeenPct = FMath::GetMappedRangeValueClamped(FVector2D(300.f, 5000.f), FVector2D(1.f, 0.f), Offset.Length());
		const float Dot = FVector::DotProduct(Offset.GetSafeNormal(), GetActorForwardVector());
		const bool bCrouched = GetCharacterMovement()->IsCrouching();

		//Todo add dot check in here, if we're in NPC periphery probs want to lower sight strength greatly.Also param a bunch of this

		OutSightStrength = CalcSightStrength(Start, End, Context.IgnoreActor);//DistanceSeenPct * (bCrouched ? 0.5f : 1.f);

		OutSeenLocation = End;

		return true; 
	}

	return false; 
}

void ANarrativeCharacter::AddDefaultAbilities()
{
	if (UCharacterDefinition* CDef = GetCharacterDefinition())
	{
		if (UAbilityConfiguration* AbilityConfig = CDef->AbilityConfiguration)
		{
			GrantAbilities(AbilityConfig->DefaultAbilities);

			UE_LOG(LogTemp, Display, TEXT("Granting %s their default abilities"), *GetHumanReadableName());
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("cant grant abilities on %s as no CDef YET!"), *GetNameSafe(this));
	}
}

void ANarrativeCharacter::RemoveCharacterAbilities()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent)
	{
		return;
	}

	AbilitySystemComponent->ClearAllAbilities();

}

void ANarrativeCharacter::InitializeAttributes()
{
	if (!AbilitySystemComponent)
	{
		return;
	}

	if (UCharacterDefinition* CDef = GetCharacterDefinition())
	{
		if (UAbilityConfiguration* AbilityConfig = CDef->AbilityConfiguration)
		{
			if (!AbilityConfig->DefaultAttributes)
			{
				UE_LOG(LogTemp, Error, TEXT("%s() Missing DefaultAttributes for %s. Please fill in the character's definition."), *FString(__FUNCTION__), *GetName());
				return;
			}

			// Can run on Server and Client
			FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(AbilityConfig->DefaultAttributes, GetCharacterLevel(), EffectContext);
			if (NewHandle.IsValid())
			{
				FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());
			}

			AbilitySystemComponent->OnDied.AddDynamic(this, &ANarrativeCharacter::HandleDeath);
		}

	}
}

void ANarrativeCharacter::AddStartupEffects()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent || AbilitySystemComponent->bStartupEffectsApplied)
	{
		return;
	}

	if (UCharacterDefinition* CDef = GetCharacterDefinition())
	{
		if (UAbilityConfiguration* AbilityConfig = CDef->AbilityConfiguration)
		{
			FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
			EffectContext.AddSourceObject(this);

			for (TSubclassOf<UGameplayEffect> GameplayEffect : AbilityConfig->StartupEffects)
			{
				FGameplayEffectSpecHandle NewHandle = AbilitySystemComponent->MakeOutgoingSpec(GameplayEffect, GetCharacterLevel(), EffectContext);
				if (NewHandle.IsValid())
				{
					FActiveGameplayEffectHandle ActiveGEHandle = AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*NewHandle.Data.Get(), AbilitySystemComponent.Get());
				}
			}

			AbilitySystemComponent->bStartupEffectsApplied = true;
		}
	}

}


void ANarrativeCharacter::SetHealth(float Health)
{
	if (AttributeSetBase)
	{
		AttributeSetBase->SetHealth(Health);
	}
}

void ANarrativeCharacter::SetStamina(float Stamina)
{
	if (AttributeSetBase)
	{
		AttributeSetBase->SetStamina(Stamina);
	}
}


int32 ANarrativeCharacter::XPToLevel(const float XP) const 
{
	return FMath::TruncToInt(LevelExponentX * FMath::Sqrt(XP)) + 1;
}

float ANarrativeCharacter::LevelToXP(const int32 Level) const
{
	return FMath::Pow((Level - 1) / LevelExponentX, LevelExponentY);
}

float ANarrativeCharacter::GetPercentToNextLevel() const
{
	float XP = GetXP();
	const int32 OurLevel = GetCharacterLevel();

	const float XPForOurLevel = LevelToXP(OurLevel);
	const float XPForNextLevel = LevelToXP(OurLevel + 1);

	const float OurProgressFromLevelStart = XP - XPForOurLevel;
	const float DiffBetweenLevels = XPForNextLevel - XPForOurLevel;

	return OurProgressFromLevelStart / DiffBetweenLevels;

}

int32 ANarrativeCharacter::GetCharacterLevel() const
{
	return XPToLevel(GetXP());
}

float ANarrativeCharacter::GetXP() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetXP();
	}

	return 0.0f;
}

float ANarrativeCharacter::GetStealthRating() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetStealthRating();
	}

	return 0.0f;
}

float ANarrativeCharacter::GetHealth() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetHealth();
	}

	return 0.0f;
}

float ANarrativeCharacter::GetMaxHealth() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetMaxHealth();
	}

	return 0.0f;
}

float ANarrativeCharacter::GetStamina() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetStamina();
	}

	return 0.0f;
}

float ANarrativeCharacter::GetMaxStamina() const
{
	if (AttributeSetBase)
	{
		return AttributeSetBase->GetMaxStamina();
	}

	return 0.0f;
}

void ANarrativeCharacter::HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{

	//We do a nice generic death implementation in here - if NPro users need more than this they can simply override this function in C++/BP
	
	/**Destroy child actors, stop movement, disable collision except for interaction for looting, disable our map marker.*/
	TArray<AActor*> ChildrenActors;
	GetAllChildActors(ChildrenActors);

	for (auto& Child : ChildrenActors)
	{
		if (Child)
		{
			Child->Destroy();
		}
	}

	if (UNarrativeCharacterMovement* CharMov = GetNarrativeCharacterMovement())
	{
		CharMov->DisableMovement();
		CharMov->StopMovementImmediately();
		CharMov->GravityScale = 0.f;
	}

	if (USkeletalMeshComponent* LeaderMesh = GetMesh())
	{
		auto Settings = UArsenalStatics::GetNarrativeProSettings();
		
		LeaderMesh->SetSimulatePhysics(true);
		LeaderMesh->SetCollisionObjectType(ECC_PhysicsBody);
		LeaderMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	}

	if (UCapsuleComponent* Capsule = GetCapsuleComponent())
	{
		Capsule->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	if (MapMarker)
	{
		MapMarker->RemoveMarker();
	}

	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->AddLooseGameplayTag(FNarrativeGameplayTags::Get().State_IsDead);
	}
}

void ANarrativeCharacter::ApplyTriggerSets_Implementation(const TArray<class UTriggerSet*>& DefaultSet)
{
	for (auto& TSet : DefaultSet)
	{
		if (IsValid(TSet))
		{
			for (auto& Trigger : TSet->Triggers)
			{
				AddTrigger(Trigger);
			}
		}
	}
}

TArray<FLootTableRoll> ANarrativeCharacter::GetDefaultItemLoadout() const
{
	if (UCharacterDefinition* CDef = GetCharacterDefinition())
	{
		return CDef->DefaultItemLoadout;
	}

	return {};
}

TSoftObjectPtr<UCharacterAppearanceBase> ANarrativeCharacter::GetDefaultAppearance() const
{
	if (UCharacterDefinition* CDef = GetCharacterDefinition())
	{
		return CDef->DefaultAppearance;
	}

	return {};
}

TArray<TSoftObjectPtr<class UTriggerSet>> ANarrativeCharacter::GetDefaultTriggerSets() const
{
	if (UCharacterDefinition* CDef = GetCharacterDefinition())
	{
		return CDef->TriggerSets;
	}

	return {};
}

class UNarrativeTrigger* ANarrativeCharacter::AddTrigger(class UNarrativeTrigger* Template)
{
	if (Template)
	{
		if (UNarrativeTrigger* NewTrigger = DuplicateObject<UNarrativeTrigger>(Template, this))
		{
			NewTrigger->OwnerCharacter = this;
			NewTrigger->Initialize();
			Triggers.Add(NewTrigger);

			return NewTrigger;
		}
	}

	return nullptr; 
}

bool ANarrativeCharacter::RemoveTrigger(class UNarrativeTrigger* Trigger)
{
	if (Trigger)
	{
		Triggers.Remove(Trigger);
		return true;
	}

	return false;
}

#if WITH_GAMEPLAY_DEBUGGER

FGameplayDebuggerCategory_NarrativeCharacter::FGameplayDebuggerCategory_NarrativeCharacter()
{

}

void FGameplayDebuggerCategory_NarrativeCharacter::CollectData(APlayerController* OwnerPC, AActor* DebugActor)
{
	if (ANarrativeCharacter* MyPawn = Cast<ANarrativeCharacter>(DebugActor))
	{
		MyPawn->DescribeSelfToGameplayDebugger(this);
	}
}

void FGameplayDebuggerCategory_NarrativeCharacter::DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext)
{

}

TSharedRef<FGameplayDebuggerCategory> FGameplayDebuggerCategory_NarrativeCharacter::MakeInstance()
{
	return MakeShareable(new FGameplayDebuggerCategory_NarrativeCharacter());
}

#endif 
