// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativePlayerController.h"
#include "UnrealFramework/NarrativePlayerState.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "UnrealFramework/NarrativeCheatManager.h"
#include "UnrealFramework/NarrativePlayerCharacter.h"
#include "UnrealFramework/NarrativeGameState.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "Interaction/PlayerInteractionComponent.h"
#include "Navigation/NarrativeNavigationComponent.h"
#include <EnhancedInputComponent.h>
#include <CommonInputSubsystem.h>
#include <Engine/Canvas.h>
#include <DisplayDebugHelpers.h>
#include "ArsenalStatics.h"
#include "AI/NarrativeCharacterSubsystem.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/NarrativeGameplayHUD.h"
#include "UnrealFramework/NarrativeGameUserSettings.h"

ANarrativePlayerController::ANarrativePlayerController(const class FObjectInitializer& ObjectInitializer)
{
	InteractionComponent = CreateDefaultSubobject<UPlayerInteractionComponent>(TEXT("InteractionComponent"));
	NavigationComponent = CreateDefaultSubobject<UNarrativeNavigationComponent>(TEXT("NavigationComponent"));
	TalesComponent = CreateDefaultSubobject<UTalesComponent>(TEXT("TalesComponent"));

	CheatClass = UNarrativeCheatManager::StaticClass();
}

void ANarrativePlayerController::HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC)
{

}

void ANarrativePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		if (UNarrativeAbilitySystemComponent* NASC = Cast<UNarrativeAbilitySystemComponent>(PS->GetAbilitySystemComponent()))
		{
			NASC->InitAbilityActorInfo(PS, InPawn);
			NASC->OnDied.AddUniqueDynamic(this, &ThisClass::HandleDeath);
		}

		if (IsLocalPlayerController() && !IsValid(GameplayHUD))
		{
			GameplayHUD = CreateWidget<UNarrativeGameplayHUD>(this, GameplayHUDClass);
			GameplayHUD->AddToViewport();
		}
	}
}

void ANarrativePlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		// Init ASC with PS (Owner) and our new Pawn (AvatarActor)
		if (UNarrativeAbilitySystemComponent* NASC = Cast<UNarrativeAbilitySystemComponent>(PS->GetAbilitySystemComponent()))
		{
			NASC->OnDied.AddUniqueDynamic(this, &ThisClass::HandleDeath);
		}
	}

	if (IsLocalPlayerController() && !IsValid(GameplayHUD))
	{
		GameplayHUD = CreateWidget<UNarrativeGameplayHUD>(this, GameplayHUDClass);
		GameplayHUD->AddToViewport();
	}
}

void ANarrativePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	//if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent))
	//{
	//	if (InteractionComponent)
	//	{
	//		InteractionComponent->BindToInput(EnhancedInput);
	//	}
	//}
}

class UAbilitySystemComponent* ANarrativePlayerController::GetAbilitySystemComponent() const
{
	if (ANarrativeCharacter* NChar = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NChar->GetAbilitySystemComponent();
	}

	return nullptr;
}

FGameplayTagContainer ANarrativePlayerController::GetFactions() const
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->GetFactions();
	}

	return FGameplayTagContainer::EmptyContainer;
}

void ANarrativePlayerController::AddFaction(const FGameplayTag& Faction)
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->AddFaction(Faction);
	}
}

void ANarrativePlayerController::RemoveFaction(const FGameplayTag& Faction)
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->RemoveFaction(Faction);
	}
}

ETeamAttitude::Type ANarrativePlayerController::GetTeamAttitudeTowards(const AActor& Other) const
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->GetTeamAttitudeTowards(Other);
	}

	return ETeamAttitude::Neutral;
}

void ANarrativePlayerController::Load_Implementation()
{
	RespawnTethers();
}

void ANarrativePlayerController::DisplayDebug(class UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos)
{
	Super::DisplayDebug(Canvas, DebugDisplay, YL, YPos);

	FDisplayDebugManager& DisplayDebugManager = Canvas->DisplayDebugManager;
	DisplayDebugManager.SetDrawColor(FColor(255, 255, 0));
	
	
	if (DebugDisplay.IsDisplayOn("Factions"))
	{
		FGameplayTagContainer Factions = GetFactions();

		if (Factions.IsValid())
		{
			DisplayDebugManager.DrawString(FString::Printf(TEXT("Factions: %s"), *Factions.ToString()));
		}
		else
		{
			DisplayDebugManager.DrawString("Factions: none");
		}
	}

	if (DebugDisplay.IsDisplayOn("TimeOfDay"))
	{
		DisplayDebugManager.DrawString(FString::Printf(TEXT("Time: %s"), *UArsenalStatics::GetTimeOfDayAsString(this)));

		FString TimeEvents;

		if (ANarrativeGameState* GS = Cast<ANarrativeGameState>(GetWorld()->GetGameState()))
		{
			for (auto& TODEvent : GS->TimeOfDayEvents)
			{
				TimeEvents += FString::Printf(TEXT("%f, "), TODEvent.EventTime);
			}
		}

		DisplayDebugManager.DrawString(TimeEvents);
	}

	if (DebugDisplay.IsDisplayOn("Tethers"))
	{
		FString TethersString;

		if (ANarrativeGameState* GS = Cast<ANarrativeGameState>(GetWorld()->GetGameState()))
		{
			for (auto& Tether : NPCTethers)
			{
				if (IsValid(Tether.NPCDef))
				{
					TethersString += FString::Printf(TEXT("%s, "), *Tether.NPCDef->NPCName.ToString());
				}
			}

			DisplayDebugManager.DrawString(FString::Printf(TEXT("Tethers (%d): %s"), NPCTethers.Num(), *TethersString));
		}
	}
}

void ANarrativePlayerController::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		NCharacter->GetOwnedGameplayTags(TagContainer);
	}

}

bool ANarrativePlayerController::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NCharacter->HasMatchingGameplayTag(TagToCheck);
	}
	return false; 
}

bool ANarrativePlayerController::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NCharacter->HasAllMatchingGameplayTags(TagContainer);
	}
	return false; 
}

bool ANarrativePlayerController::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	if (ANarrativeCharacter* NCharacter = Cast<ANarrativeCharacter>(GetPawn()))
	{
		return NCharacter->HasAnyMatchingGameplayTags(TagContainer);
	}
	return false; 
}

FString ANarrativePlayerController::GetNarrativeInputDeviceName() const
{
	if(UCommonInputSubsystem* CIS = UCommonInputSubsystem::Get(GetLocalPlayer()))
	{
		ECommonInputType InputType = CIS->GetCurrentInputType();

		if (InputType == ECommonInputType::MouseAndKeyboard)
		{
			return "Keyboard";
		}
		else if (InputType == ECommonInputType::Gamepad)
		{
			const FName GPName = CIS->GetCurrentGamepadName();

			if (GPName.IsEqual("Generic"))
			{
				return "Xbox";
			}
			else
			{
				return GPName.ToString();
			}
		}
		else if (InputType == ECommonInputType::Touch)
		{
			return "Touch";
		}
		else if (InputType == ECommonInputType::Count)
		{
			return "Count";
		}
	}

	return "None";
}

bool ANarrativePlayerController::IsUsingGamepad() const
{
	if(UCommonInputSubsystem* CIS = UCommonInputSubsystem::Get(GetLocalPlayer()))
	{
		ECommonInputType InputType = CIS->GetCurrentInputType();

		return InputType == ECommonInputType::Gamepad;
	}

	return false;
}

void ANarrativePlayerController::NotifyDealtDamage_Implementation(AActor* DamagedActor, const float DamgeAmount)
{
	HandleDamageActor(DamagedActor, DamgeAmount);
}

class ANarrativePlayerCharacter* ANarrativePlayerController::GetControlledCharacter() const
{
	return Cast<ANarrativePlayerCharacter>(GetPawn());
}

bool ANarrativePlayerController::TetherNPC(ANarrativeNPCCharacter* NPCToTether)
{
	if (NPCToTether && NPCToTether->Implements<UNarrativeSavableActor>())
	{
		const FGuid NPCSaveGUID = INarrativeSavableActor::Execute_GetActorGUID(NPCToTether);

		//Ensure a tether with the same GUID doesn't already exist 
		for (auto& Tether : NPCTethers)
		{
			if (Tether.NPCSaveGUID == NPCSaveGUID)
			{
				return false;
			}
		}

		FNPCTether NPCTether;
		NPCTether.NPCCharacter = NPCToTether;
		NPCTether.NPCSaveGUID = NPCSaveGUID;
		NPCTether.NPCDef = NPCToTether->GetNPCDefinition();

		checkf(NPCTether.NPCSaveGUID.IsValid(), TEXT("NPC to tether had none Save GUID - we need this to correctly load the NPC back in later."));

		UE_LOG(LogTemp, Warning, TEXT("NPC %s tethered to player controller"), *GetNameSafe(NPCToTether));

		NPCTethers.Add(NPCTether);

		NPCToTether->OnDestroyed.AddUniqueDynamic(this, &ANarrativePlayerController::OnTetheredNPCDestroyed);

		return true;
	}

	return false; 
}

bool ANarrativePlayerController::UntetherNPC(ANarrativeNPCCharacter* NPCToUntether)
{
	if (NPCToUntether && NPCToUntether->Implements<UNarrativeSavableActor>())
	{
		const FGuid NPCSaveGUID = INarrativeSavableActor::Execute_GetActorGUID(NPCToUntether);

		for (int32 i = NPCTethers.Num() - 1; i >= 0; --i)
		{
			if (NPCTethers[i].NPCSaveGUID == NPCSaveGUID)
			{
				UE_LOG(LogTemp, Warning, TEXT("NPC %s untethered from player controller"), *GetNameSafe(NPCTethers[i].NPCDef));

				NPCToUntether->OnDestroyed.RemoveDynamic(this, &ANarrativePlayerController::OnTetheredNPCDestroyed);

				NPCTethers.RemoveAt(i);
				return true; 
			}
		}
	}

	return false; 
}

bool ANarrativePlayerController::GetTether(const FGuid& NPCToCheckGUID, FNPCTether& OutTether) const
{
	for (int32 i = NPCTethers.Num() - 1; i >= 0; --i)
	{
		if (NPCTethers[i].NPCSaveGUID == NPCToCheckGUID)
		{
			OutTether = NPCTethers[i];
			return true;
		}
	}

	return false;
}

void ANarrativePlayerController::RespawnTethers()
{
	//Spawn our NPCs back in when we load
	for (auto& Tether : NPCTethers)
	{
		if (!IsValid(Tether.NPCCharacter) && IsValid(Tether.NPCDef) && Tether.NPCSaveGUID.IsValid())
		{
			if (UNarrativeCharacterSubsystem* NPCSub = GetWorld()->GetSubsystem<UNarrativeCharacterSubsystem>())
			{
				ANarrativeNPCCharacter* NPCChar = NPCSub->SpawnNPC(Tether.NPCDef);
				Tether.NPCCharacter = NPCChar;

				if (NPCChar)
				{
					NPCChar->SpawnInfo.SpawnAssignedSaveGUID = Tether.NPCSaveGUID;
				}
			}
		}
	}
}

void ANarrativePlayerController::OnTetheredNPCDestroyed(AActor* DestroyedActor)
{
	if (ANarrativeNPCCharacter* NPC = Cast<ANarrativeNPCCharacter>(DestroyedActor))
	{
		UntetherNPC(NPC);
	}
}
