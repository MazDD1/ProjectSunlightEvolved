// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include <GameplayEffectTypes.h>
#include "UnrealFramework/NarrativeTeamAgentInterface.h"
#include <Animation/AnimInstance.h>
#include <GameplayTagAssetInterface.h>
#include "GAS/NarrativeCombatAbility.h"
#include "NarrativeSavableActor.h"
#include "GAS/AttackComboAnimSet.h"
#include "CharacterCreator/CharacterCreatorAttributes.h"
#include "Interaction/InteractableComponent.h"
#include "Items/InventoryComponent.h"
#include <Engine/StreamableManager.h>
#include "Perception/AISightTargetInterface.h"
#include "NarrativeCharacter.generated.h"

//Holds an animation combo set - make sure your montages have attack notifies and warps - see docs for more info. 
USTRUCT(BlueprintType)
struct FMeleeComboAnimSet
{
	GENERATED_BODY()

	//Attack montages for the melee attack
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<class UAnimMontage>> AttackMontages; 

	//Heavy attack montages for the melee attack 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<class UAnimMontage>> HeavyAttackMontages; 
};

//Melee abilities use this to operate, both with unarmed attacks and melee weapons. 
USTRUCT(BlueprintType)
struct FMeleeCombatData
{

	GENERATED_BODY()

	FMeleeCombatData()
	{
		TraceData.TraceDistance = 300.f;
		TraceData.TraceRadius = 100.f;
	};

	//Attacking without a weapon will use this trace data 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	FCombatTraceData TraceData;

	//Combo montages for our melee attacks 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<UNarrativeAnimSet>> AttackCombos;

	//Combo montages for our heavy melee attacks 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data")
	TArray<TObjectPtr<UNarrativeAnimSet>> HeavyAttackCombos;

};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFactionUpdated);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTeleported);


#if WITH_GAMEPLAY_DEBUGGER

#include "GameplayDebuggerCategory.h"

class AActor;
class APlayerController;

class FGameplayDebuggerCategory_NarrativeCharacter : public FGameplayDebuggerCategory
{
public:
	FGameplayDebuggerCategory_NarrativeCharacter();

	virtual void CollectData(APlayerController* OwnerPC, AActor* DebugActor) override;
	virtual void DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext) override;

	static TSharedRef<FGameplayDebuggerCategory> MakeInstance();

};

#endif // WITH_GAMEPLAY_DEBUGGER

/**Base class for characters built on Narrative Pro framework. Sets up some core stuff you probably want - a navigation marker, interactions, inventories, etc. */
UCLASS()
class NARRATIVEARSENAL_API ANarrativeCharacter : public ACharacter, 
public IAbilitySystemInterface, public IGameplayTagAssetInterface, public INarrativeTeamAgentInterface, public IAISightTargetInterface
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	ANarrativeCharacter(const class FObjectInitializer& ObjectInitializer);

	virtual void OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode = 0) override;
	virtual void Destroyed();

	#if WITH_GAMEPLAY_DEBUGGER
	virtual void DescribeSelfToGameplayDebugger(FGameplayDebuggerCategory* DebuggerCategory) const;
#endif // WITH_GAMEPLAY_DEBUGGER

	// Interfaces 
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;

	virtual UAISense_Sight::EVisibilityResult CanBeSeenFrom(const FCanBeSeenFromContext& Context, FVector& OutSeenLocation, int32& OutNumberOfLoSChecksPerformed, int32& OutNumberOfAsyncLosCheckRequested, float& OutSightStrength, int32* UserData = nullptr, const FOnPendingVisibilityQueryProcessedDelegate* Delegate = nullptr) override;
	bool PerformSightTrace(FHitResult& Hit, const FVector& Start, const FVector& End, const FCanBeSeenFromContext& Context, float& OutSightStrength, FVector& OutSeenLocation, int32& OutNumberOfLoSChecksPerformed);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	float CalcSightStrength(const FVector& Start, const FVector& End, const AActor* Looker);

	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter|Attributes")
	virtual bool IsAlive() const;

	//Used by AnimBP to ask where the head bone should look at - players and bots can then implement their own seperate functionalities 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	FVector GetHeadLookAtLocation(bool& bOutWantsLookAt) const;

	//Get the location of the floor, optionally offset by a z
	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter|Movement")
	FVector GetFloorLocation(const float ZOffset=0.f) const;

	//Called when this character becomes a dialogue avatar. 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	void OnEnterDialogue(class UDialogue* Dialogue);

	//Called when this character finishes being a dialogue avatar. 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Narrative|NarrativeCharacter")
	void OnEndDialogue(class UDialogue* Dialogue);

	//Get the character definition from the character
	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter")
	virtual class UCharacterDefinition* GetCharacterDefinition() const;

	//Get the inventory component from this character
	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter")
	virtual class UNarrativeInventoryComponent* GetInventoryComponent() const;

	//Get the interactioncomponent from the character
	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter")
	virtual class UNarrativeInteractionComponent* GetInteractionComponent() const;

	//This is called when the NarrativeCharacters definition is updated. 
	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void OnDefinitionSet(UCharacterDefinition* NewDefinition);
	virtual void OnDefinitionSet_Implementation(UCharacterDefinition* NewDefinition);

	//Called when OnDefinitionSet sees we dont have any save data and new initialized for first time. 
	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void InitNewCharacter(UCharacterDefinition* NewDefinition);
	virtual void InitNewCharacter_Implementation(UCharacterDefinition* NewDefinition);

	//Executes a NarrativeEvent with this character as the target - return true if we passed conds and event succeeded 
	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeEvents")
	bool SetEventActive(class UNarrativeEvent* Event, const bool bActivate);

protected:

	virtual void PostInitializeComponents() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void TeleportSucceeded(bool bIsATest) override;

public:

	//Factions are getting a little messy - possibly fold this into a FactionComponent? 
	FOnFactionUpdated OnFactionUpdated;

	//Broadcast when we telport somewhere - NPCs need this to teleport with our player if they do 
	UPROPERTY(BlueprintAssignable, Category = "Movement")
	FOnTeleported OnTeleported;

protected: 

	//Our characters map marker
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Appearance")
	TObjectPtr<class UCharacterMapMarker> MapMarker; 

	//Our characters current appearance asset
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Appearance")
	TObjectPtr<class UCharacterAppearanceBase> Appearance;

	//Our characters current customization asset
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Appearance")
	FCharacterCreatorAttributeSet AppearanceAttributeSet;

	/** Our characters visual - this allows us to have n number of meshes in addition to Character.GetMesh() */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|Body Meshes")
	TObjectPtr<class ANarrativeCharacterVisual> CharVisual;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UMotionWarpingComponent> MotionWarpingComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components|GAS")
	TObjectPtr<class UNarrativeAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UNarrativeAttributeSetBase> AttributeSetBase;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class UEquipmentComponent> EquipmentComp;

	// Default attributes for a character for initializing on spawn/respawn.
	// This is an instant GE that overrides the values for attributes that get reset on spawn/respawn.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	// These effects are only applied one time on startup
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	TArray<TSubclassOf<class UGameplayEffect>> StartupEffects;

	// Default abilities to grant the player  
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	TArray<TSubclassOf<class UNarrativeGameplayAbility>> DefaultAbilities;

	//Lowering this number means the base XP required per level is higher 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	float LevelExponentX; 

	//Upping this value means higher jumps between levels, ie levels will grow exponentially 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Abilities")
	float LevelExponentY; 
	
	/** True if the weapon is currently holstered, false otherwise.  */
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Weapon")
	bool bWeaponHolstered;

	/** Our currently equipped weapon */
	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_EquippedWeapon, BlueprintReadOnly, Category = "Weapon")
	TObjectPtr<UWeaponItem> EquippedWeapon;

	// Set our ASC pointer, as well as initializing the avatar info. 
	//virtual void SetupAbilitySystemComponent(class UNarrativeAbilitySystemComponent* ASC);

	// Grant abilities on the Server. The Ability Specs will be replicated to the owning client.
	UFUNCTION(BlueprintCallable, Category = "Debug Test")
	virtual void AddDefaultAbilities();

	// Removes all CharacterAbilities. Can only be called by the Server. Removing on the Server will remove from Client too.
	virtual void RemoveCharacterAbilities();

	// Initialize the Character's attributes. Must run on Server but we run it on Client too
	// so that we don't have to wait. The Server's replication to the Client won't matter since
	// the values should be the same.
	virtual void InitializeAttributes();
	virtual void AddStartupEffects();

	/**
	* Setters for Attributes. Only use these in special cases like Respawning, otherwise use a GE to change Attributes.
	* These change the Attribute's Base Value.
	*/
	virtual void SetHealth(float Health);
	virtual void SetStamina(float Stamina);

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	int32 XPToLevel(const float XP) const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float LevelToXP(const int32 Level) const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetPercentToNextLevel() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	virtual int32 GetCharacterLevel() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetXP() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetStealthRating() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetStamina() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacter|Attributes")
	float GetMaxStamina() const;

	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);
	virtual void HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);

	//Called when our spawned data bundle is loaded 
	UFUNCTION()
	virtual void OnCharacterDefinitionDataLoaded(FPrimaryAssetId LoadedId);

	//Called after OnCharacterDefinitionDataLoaded, for anything that needs to be done after definition data is applied
	UFUNCTION()
	virtual void OnPostCharacterDefinitionDataLoaded(FPrimaryAssetId LoadedId);

	//Called once all our character definition stuff has been applied/loaded from disk. IE default items, factions, etc. 
	UFUNCTION()
	virtual void HandleCharacterDefinitionDataLoaded(FPrimaryAssetId LoadedId);

	//Check if our character is waiting to be loaded in
	UFUNCTION(BlueprintPure, Category = "Narrative|NarrativeCharacter")
	bool IsCharacterPendingLoad() const;

	TSharedPtr<FStreamableHandle> CharacterDefinitionLoadHandle; 

	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void SpawnCharacterVisual(class UCharacterAppearance* DefaultAppearance);
	virtual void SpawnCharacterVisual_Implementation(class UCharacterAppearance* DefaultAppearance);

	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	TSubclassOf<class ANarrativeCharacterVisual> GetCharacterVisualClass(class UCharacterAppearance* DefaultAppearance)const;
	virtual TSubclassOf<class ANarrativeCharacterVisual> GetCharacterVisualClass_Implementation(class UCharacterAppearance* DefaultAppearance) const;

	UFUNCTION()
	virtual void OnCharacterVisualInitialized();

	//Called when our definitions appearance asset is ready
	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void ApplyAppearance(class UCharacterAppearance* DefaultAppearance);
	virtual void ApplyAppearance_Implementation(class UCharacterAppearance* DefaultAppearance);

	//Called when our default trigger sets are ready 
	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void ApplyTriggerSets(const TArray<class UTriggerSet*>& DefaultSet);
	virtual void ApplyTriggerSets_Implementation(const TArray<class UTriggerSet*>& DefaultSet);

	virtual TArray<FLootTableRoll> GetDefaultItemLoadout() const;
	virtual TSoftObjectPtr<UCharacterAppearanceBase> GetDefaultAppearance() const; 
	virtual TArray<TSoftObjectPtr<class UTriggerSet>> GetDefaultTriggerSets() const;

	//Add a trigger by copying the passed in template object 
	UFUNCTION(BlueprintCallable, Category = "Triggers")
	virtual class UNarrativeTrigger* AddTrigger(class UNarrativeTrigger* Template);

	UFUNCTION(BlueprintCallable, Category = "Triggers")
	virtual bool RemoveTrigger(class UNarrativeTrigger* Trigger);

public:

	/**Will add the ability set*/
	virtual void AddAbility(TSubclassOf<class UNarrativeGameplayAbility> Ability);
	virtual void GrantAbilities(TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities);
	virtual void RemoveAbilities(TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities);

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class ANarrativeCharacterVisual* GetCharacterVisual() const { return CharVisual;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UCharacterMapMarker* GetMarkerComponent() const { return MapMarker;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UEquipmentComponent* GetEquipmentComponent() const {return EquipmentComp;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UMotionWarpingComponent* GetMotionWarpingComponent() const {return MotionWarpingComponent;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UNarrativeAttributeSetBase* GetAttributeSetBase() const {return AttributeSetBase;};

	//Get the Narrative character movement component. 
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class UNarrativeCharacterMovement* GetNarrativeCharacterMovement() const;

	UFUNCTION(BlueprintCallable, Category = "Narrative|Getters/Setters")
	void SetWeaponHolstered(const bool bHolster);
	
	UFUNCTION(BlueprintCallable, Category = "Narrative|Getters/Setters")
	void SetEquippedWeapon(class UWeaponItem* WeaponToEquip);

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE bool IsWeaponHolstered() const { return bWeaponHolstered; };
	
	UFUNCTION()
	virtual void OnRep_EquippedWeapon(class UWeaponItem* OldEquippedWeapon);

	virtual void WieldWeapon(class UWeaponItem* Weapon);
	virtual void UnWieldWeapon(class UWeaponItem* Weapon);

	//Returns the visual of the equipped weapon 
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class AWeaponVisual* GetEquippedWeaponVisual() const;

	//Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets. 
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class AWeaponVisual* GetWeaponVisual(UPARAM(meta = (Categories = "Narrative.Equipment.Slot.Weapon"))const FGameplayTag& WeaponSlot) const;

	//Returns our equipped weapon item. This is the item in our inventory driving our weapon, it holds data like the weapons abilities, spread, damage etc.
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class UWeaponItem* GetWeapon() const;
	
	// Default unarmed anim layer
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Animation")
	TSubclassOf<class UAnimInstance> UnarmedAnimBP;

	// Current override anim layer 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Narrative|Animation")
	TSubclassOf<class UAnimInstance> OverrideAnimBP;

	/** Data specifically related to unarmed combat */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|Trace")
	FCombatTraceData UnarmedCombatData;

	//Attacking without a weapon will deal this amount of base damage 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Unarmed Combat Data")
	float UnarmedAttackDamage;

	/** TODO move these into a proper asset that lives on CharacterDefinition */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Events & Conditions")
	TArray<class UNarrativeTrigger*> Triggers;

	//Get the range we can attack someone from
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	float GetAttackRange() const;

	//Get the trace data for an attack
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FCombatTraceData GetAttackTraceData() const;

};
