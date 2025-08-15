// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AbilitySystemInterface.h"
#include <GameplayTagAssetInterface.h>
#include "UnrealFramework/NarrativeTeamAgentInterface.h"
#include "Tales/TalesComponent.h"
#include "Navigation/NavigationSubsystem.h"
#include "NarrativePlayerController.generated.h"

/**When an NPC spawn gets streamed out, it can optionally keep the NPC around by "tethering" it to our player controller.
That way we can save those NPCs to disk, even though their spawns are no longer streamed in to the world. */
USTRUCT(BlueprintType)
struct FNPCTether
{
	GENERATED_BODY()

	FNPCTether(){};

	//The currently spawned in NPC
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Tethered NPC")
	TObjectPtr<class ANarrativeNPCCharacter> NPCCharacter;

	//The NPC Definition for the NPC
	UPROPERTY(SaveGame, BlueprintReadOnly, VisibleAnywhere, Category = "Tethered NPC")
	TObjectPtr<class UNPCDefinition> NPCDef;

	//We need to store the NPCs save GUID so we can restore it after spawning the NPC, and their save record is fetched correctly. 
	UPROPERTY(SaveGame, BlueprintReadOnly, VisibleAnywhere, Category = "Tethered NPC")
	FGuid NPCSaveGUID;
};

/**
 * Base class for Player Controllers in Narrative Pro. Typically possesses an ANarrativePlayerCharacter. 
 */
UCLASS()
class NARRATIVEARSENAL_API ANarrativePlayerController : public APlayerController, public INarrativeSavableActor, public IAbilitySystemInterface, public IGameplayTagAssetInterface, public INarrativeTeamAgentInterface
{
	GENERATED_BODY()
	
public:

	ANarrativePlayerController(const class FObjectInitializer& ObjectInitializer);

	//Interfaces 
	class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual FGameplayTagContainer GetFactions() const override;
	virtual void AddFaction(const FGameplayTag& Faction) override;
	virtual void RemoveFaction(const FGameplayTag& Faction) override;
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
	virtual void Load_Implementation();
	virtual void DisplayDebug(class UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) override;

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;

	//POI marker calls this to perform fast travelling, which we implement in BP 
	UFUNCTION(BlueprintImplementableEvent, Category = "Narrative|Fast Travel")
	void FastTravelToPOI(const FPOIData& POI);

	//Basically just return the input device name in a way the narrative input icon data table understands. Keyboard, Xbox, PS5, etc. 
	UFUNCTION(BlueprintPure, Category = "Narrative|Input")
	FString GetNarrativeInputDeviceName() const;

	UFUNCTION(BlueprintPure, Category = "Narrative|Input")
	bool IsUsingGamepad() const;

	UFUNCTION(Client, Unreliable)
	virtual void NotifyDealtDamage(AActor* DamagedActor, const float DamageAmount);

	//Do whatever we like when we damage an actor, by default we put damage text up. 
	UFUNCTION(BlueprintImplementableEvent, Category = "Narrative|FX")
	void HandleDamageActor(AActor* DamagedActor, const float DamageAmount);

	
	//Return the controlled narrative char
	UFUNCTION(BlueprintPure, Category = "Narrative")
	class ANarrativePlayerCharacter* GetControlledCharacter() const;

	/**When an NPC spawn gets streamed out, it can optionally keep the NPC around by "tethering" it to our player controller.
	That way we can save those NPCs to disk, even though their spawns are no longer streamed in to the world. This is important 
	for NPCs that need to wander away from their spawn, because they attacked us, or are following us for a quest, etc.*/
	virtual bool TetherNPC(ANarrativeNPCCharacter* NPCToTether);
	virtual bool UntetherNPC(ANarrativeNPCCharacter* NPCToUntether);
	virtual bool GetTether(const FGuid& NPCToCheckGUID, FNPCTether& OutTether) const;
	virtual void RespawnTethers();

	UFUNCTION()
	virtual void OnTetheredNPCDestroyed(AActor* DestroyedActor);

	UPROPERTY(SaveGame, VisibleAnywhere, BlueprintReadOnly, Category = "Tethered NPC")
	TArray<FNPCTether> NPCTethers;

protected:

	//Gives our playercontroller a chance to react to death.
	UFUNCTION(BlueprintNativeEvent, Category = "Narrative|NarrativeCharacter")
	void HandleDeath(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);
	virtual void HandleDeath_Implementation(AActor* KilledActor, UNarrativeAbilitySystemComponent* KilledActorASC);

	// Server only
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnRep_PlayerState() override;
	virtual void SetupInputComponent() override;

	//This is the gameplay HUD class we'll create the HUD with. TODO consider moving to player definition to allow per def customization of this? 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|UI")
	TSubclassOf<class UNarrativeGameplayHUD> GameplayHUDClass;

	UPROPERTY(BlueprintReadOnly, Category = "Narrative|UI")
	TObjectPtr<class UNarrativeGameplayHUD> GameplayHUD;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|Interaction")
	TObjectPtr<class UPlayerInteractionComponent> InteractionComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient, Category = "Narrative|Interaction")
	TObjectPtr<class UTalesComponent> TalesComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Narrative|Navigation")
	TObjectPtr<class UNarrativeNavigationComponent> NavigationComponent;

public:

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UNarrativeGameplayHUD* GetNarrativeGameplayHUD() const {return GameplayHUD;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UTalesComponent* GetTalesComponent() const {return TalesComponent;};

	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	FORCEINLINE class UPlayerInteractionComponent* GetInteractionComponent() const {return InteractionComponent;};
};
