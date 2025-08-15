// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativePlayerCharacter.h"
#include "UnrealFramework/NarrativePlayerController.h"
#include "UnrealFramework/NarrativePlayerState.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "UnrealFramework/NarrativeAnimInstance.h"
#include "Interaction/PlayerInteractionComponent.h"
#include "GAS/NarrativeAbilitySystemComponent.h"
#include "GAS/NarrativeAbilityInputMapping.h"
#include "NarrativeArsenal.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Camera/NarrativeCameraComponent.h"
#include "Navigation/NavigationMarkerComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Navigation/NavigatorGameplayTags.h"
#include <UObject/ConstructorHelpers.h>
#include "Items/NarrativeItem.h"
#include <Engine/LocalPlayer.h>
#include "Net/UnrealNetwork.h"
#include "Character/PlayerDefinition.h"
#include "Character/NarrativeCharacterVisual.h"
#include "Items/WeaponItem.h"
#include "Subsystems/NarrativeSaveSubsystem.h"
#include "CharacterCreator/NarrativeSaveWithCreatorData.h"
#include "UnrealFramework/NarrativeGameMode.h"
#include "ArsenalSettings.h"

ANarrativePlayerCharacter::ANarrativePlayerCharacter(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	//We wont set any settings on our camera, the camera components camera mode will define that! 
	//CameraBoom = CreateDefaultSubobject<USpringArmComponent>(FName("CameraBoom"));
	//CameraBoom->SetupAttachment(RootComponent);

	//FollowCamera = CreateDefaultSubobject<UNarrativeCameraComponent>(FName("FollowCamera"));
	//FollowCamera->SetupAttachment(CameraBoom);

	//Shouldn't show on compass by default 
	//if (MarkerComponent)
	//{
	//	MarkerComponent->RemoveDomains(FGameplayTagContainer(FNavigatorGameplayTags::Get().NavigatorTypes_Compass));
	//}

	auto DefaultMappingsFinder = ConstructorHelpers::FObjectFinder<UNarrativeAbilityInputMapping>(TEXT("/Script/NarrativeArsenal.NarrativeAbilityInputMapping'/NarrativePro/Input/DA_DefaultAbilities.DA_DefaultAbilities'"));

	if (DefaultMappingsFinder.Succeeded())
	{
		AbilityInputMappings = DefaultMappingsFinder.Object;
	}

}

void ANarrativePlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			FModifyContextOptions ModifyOptions = FModifyContextOptions();
			ModifyOptions.bNotifyUserSettings = true; 

			Subsystem->AddMappingContext(DefaultMappingContext, 0, ModifyOptions);
		}
	}
}

void ANarrativePlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		// Set the ASC on the Server. Clients do this in OnRep_PlayerState()
		AbilitySystemComponent = Cast<UNarrativeAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// AI won't have PlayerControllers so we can init again here just to be sure. No harm in initing twice for heroes that have PlayerControllers.
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);

		// Set the AttributeSetBase for convenience attribute functions
		AttributeSetBase = PS->GetAttributeSetBase();

		// If we handle players disconnecting and rejoining in the future, we'll have to change this so that possession from rejoining doesn't reset attributes.
		// For now assume possession = spawn/respawn.
		InitializeAttributes();

		// Set Health/Mana/Stamina to their max. This is only necessary for *Respawn*.
		SetHealth(GetMaxHealth());
		SetStamina(GetMaxStamina());

		// End respawn specific things
		AddStartupEffects();
		AddDefaultAbilities();

		//Need to call this here as OnDefinitionSet requires valid Pstate since it runs init code 
		if (PlayerDefinition)
		{
			OnDefinitionSet(PlayerDefinition);
			//AbilitySystemComponent->AddLooseGameplayTags(PlayerDefinition->DefaultOwnedTags);
		}
	}
}

void ANarrativePlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		AbilitySystemComponent = Cast<UNarrativeAbilitySystemComponent>(PS->GetAbilitySystemComponent());

		// Set the ASC for clients. Server does this in PossessedBy.
		if (IsValid(AbilitySystemComponent))
		{
			// Init ASC Actor Info for clients. Server will init its ASC when it possesses a new Actor.
			AbilitySystemComponent->InitAbilityActorInfo(PS, this);

			// Set the AttributeSetBase for convenience attribute functions
			AttributeSetBase = PS->GetAttributeSetBase();

			// If we handle players disconnecting and rejoining in the future, we'll have to change this so that posession from rejoining doesn't reset attributes.
			// For now assume possession = spawn/respawn.
			InitializeAttributes();

			// Set Health/Mana/Stamina to their max. This is only necessary for *Respawn*.
			SetHealth(GetMaxHealth());

			//Need to call this here as OnDefinitionSet requires valid Pstate.
			if (PlayerDefinition)
			{
				OnDefinitionSet(PlayerDefinition);
				//AbilitySystemComponent->AddLooseGameplayTags(PlayerDefinition->DefaultOwnedTags);
			}
		}
	}
}

void ANarrativePlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(ANarrativePlayerCharacter, PlayerDefinition, COND_InitialOnly);
}

FGameplayTagContainer ANarrativePlayerCharacter::GetFactions() const
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->GetFactions();
	}

	return FGameplayTagContainer::EmptyContainer;
}

void ANarrativePlayerCharacter::AddFaction(const FGameplayTag& Faction)
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->AddFaction(Faction);
	}
}

void ANarrativePlayerCharacter::RemoveFaction(const FGameplayTag& Faction)
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->RemoveFaction(Faction);
	}
}

class UNarrativeInteractionComponent* ANarrativePlayerCharacter::GetInteractionComponent() const
{
	if (ANarrativePlayerController* NarrativePC = Cast<ANarrativePlayerController>(Controller))
	{
		return NarrativePC->GetInteractionComponent();
	}

	return nullptr; 
}

void ANarrativePlayerCharacter::OnCharacterDefinitionDataLoaded(FPrimaryAssetId LoadedId)
{
	//Lets load from our save record here if we have one. 
	Super::OnCharacterDefinitionDataLoaded(LoadedId);

	//At this point our appearance is set, we can now grant default items/return saved items
	if (UWorld* World = GetWorld())
	{
		if (UNarrativeSaveSubsystem* SaveSub = World->GetSubsystem<UNarrativeSaveSubsystem>())
		{
			//Deferring until charvisual is done
			////Probably want to tidy this up a bit,but basically if our player isnt being loaded from a save we need to initialize it 
			//if (SaveSub->IsNewGame())
			//{
			//	InitNewCharacter(GetCharacterDefinition());
			//}
		}
	}
}

void ANarrativePlayerCharacter::InitNewCharacter_Implementation(UCharacterDefinition* NewDefinition)
{
	Super::InitNewCharacter_Implementation(NewDefinition);
}

class UNarrativeInventoryComponent* ANarrativePlayerCharacter::GetInventoryComponent() const
{
	if (ANarrativePlayerState* PS = GetPlayerState<ANarrativePlayerState>())
	{
		return PS->GetInventoryComponent();
	}

	return nullptr; 
}

void ANarrativePlayerCharacter::ApplyAppearance_Implementation(class UCharacterAppearance* DefaultAppearance)
{

	FString UsernameToApply = "";

	if (UNarrativeSaveWithCreatorData* CreatorData = GetCharacterCreatorData())
	{
		if (CharVisual)
		{
			CharVisual->InitializeFromCharacter(this, CreatorData->CharacterCreatorAttributes);
			UsernameToApply = CreatorData->CharacterCreatorUsername;
		}
	}
	else
	{
		Super::ApplyAppearance_Implementation(DefaultAppearance);

		if (UArsenalSettings* Settings = GetMutableDefault<UArsenalSettings>())
		{
			if (Settings->DefaultUsername.Len())
			{
				UsernameToApply = Settings->DefaultUsername;
			}
		}
	}

	if (ANarrativeGameMode* NGM = Cast<ANarrativeGameMode>(GetWorld()->GetAuthGameMode()))
	{
		NGM->ChangeName(GetController(), UsernameToApply, true);
	}

}

TSubclassOf<class ANarrativeCharacterVisual> ANarrativePlayerCharacter::GetCharacterVisualClass_Implementation(class UCharacterAppearance* DefaultAppearance) const
{
	if (UNarrativeSaveWithCreatorData* CreatorData = GetCharacterCreatorData())
	{
		return CreatorData->CharacterCreatorAttributes.CharacterVisualClass;
	}
	else
	{
		return Super::GetCharacterVisualClass_Implementation(DefaultAppearance);
	}
}

void ANarrativePlayerCharacter::OnCharacterVisualInitialized()
{
	Super::OnCharacterVisualInitialized();

	if (UNarrativeSaveSubsystem* SaveSub = GetWorld()->GetSubsystem<UNarrativeSaveSubsystem>())
	{
		if (SaveSub->IsNewGame())
		{
			InitNewCharacter(GetCharacterDefinition());
		}
		else
		{
			SaveSub->LoadPlayerData();
		}
	}
}

UNarrativeSaveWithCreatorData* ANarrativePlayerCharacter::GetCharacterCreatorData() const
{
	//Check if we have a creator appearance to apply 
	if (UWorld* World = GetWorld())
	{
		if (World->GetNetMode() == NM_Standalone)
		{
			if (UNarrativeSaveSubsystem* SaveSub = World->GetSubsystem<UNarrativeSaveSubsystem>())
			{
				if (UNarrativeSaveWithCreatorData* CreatorSave = Cast<UNarrativeSaveWithCreatorData>(SaveSub->GetSaveObject()))
				{
					//Only return the creator data if it actually has some stuff in it
					if (CreatorSave->CharacterCreatorAttributes.Meshes.Num())
					{
						return CreatorSave;
					}
				}
			}
		}
	}

	return nullptr;
}

void ANarrativePlayerCharacter::WieldWeapon(class UWeaponItem* Weapon)
{
	Super::WieldWeapon(Weapon);
}

void ANarrativePlayerCharacter::UnWieldWeapon(class UWeaponItem* Weapon)
{
	Super::UnWieldWeapon(Weapon);
}

void ANarrativePlayerCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ANarrativePlayerCharacter::Look(const FInputActionValue& Value)
{
	const FVector2D LookAxisInput = Value.Get<FVector2D>();

	if (Controller)
	{
		AddControllerYawInput(LookAxisInput.X);
		AddControllerPitchInput(LookAxisInput.Y);
	}
}

void ANarrativePlayerCharacter::AbilityInputPressed(const int32 InputID)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->AbilityLocalInputPressed(InputID);
	}
}

void ANarrativePlayerCharacter::AbilityInputReleased(const int32 InputID)
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->AbilityLocalInputReleased(InputID);
	}
}

void ANarrativePlayerCharacter::AbilityConfirmPressed()
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InputConfirm();
	}
}

void ANarrativePlayerCharacter::AbilityCancelPressed()
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InputCancel();
	}
}

void ANarrativePlayerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Moving
		EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ANarrativePlayerCharacter::Move);

		//Looking
		EnhancedInput->BindAction(LookAction, ETriggerEvent::Triggered, this, &ANarrativePlayerCharacter::Look);

		//Ability confirm/cancel
		EnhancedInput->BindAction(AbilityConfirmAction, ETriggerEvent::Started, this, &ANarrativePlayerCharacter::AbilityConfirmPressed);
		EnhancedInput->BindAction(AbilityCancelAction, ETriggerEvent::Started, this, &ANarrativePlayerCharacter::AbilityCancelPressed);

		//Abilities will have all been granted, but we need to bind them to input! 
		if (AbilityInputMappings)
		{
			for (auto& IA : AbilityInputMappings->InputAbilities)
			{
				if (IsValid(IA.InputAction))
				{
					EnhancedInput->BindAction(IA.InputAction, ETriggerEvent::Started, this, &ANarrativePlayerCharacter::AbilityInputPressed, static_cast<int32>(IA.InputID));
					EnhancedInput->BindAction(IA.InputAction, ETriggerEvent::Completed, this, &ANarrativePlayerCharacter::AbilityInputReleased, static_cast<int32>(IA.InputID));
				}
			}
		}
	}
}

class UCharacterDefinition* ANarrativePlayerCharacter::GetCharacterDefinition() const
{
	return PlayerDefinition;
}

void ANarrativePlayerCharacter::OnRep_PlayerDefinition()
{
	if (PlayerDefinition)
	{
		OnDefinitionSet(PlayerDefinition);
	}
}

void ANarrativePlayerCharacter::SetPlayerDefinition(class UPlayerDefinition* PDef)
{
	if(PDef)
	{
		PlayerDefinition = PDef;
		//OnRep_PlayerDefinition();
	}
}
