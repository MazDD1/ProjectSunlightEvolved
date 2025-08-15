// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GAS/NarrativeGameplayAbility.h"
#include "Engine/NetSerialization.h"
#include "NarrativeActorProvider.h"
#include "NarrativeCombatAbility.generated.h"

//Stored on both weapons and our player for unarmed combat. Replaces the need for expensive targeting actors, GAs just generate target data themselves
USTRUCT(BlueprintType)
struct FCombatTraceData
{

	GENERATED_BODY()

	FCombatTraceData()
	{
		TraceDistance = 500.f;
		TraceRadius = 0.f;
		bTraceMulti = false;
	};

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Combat Trace Data")
	float TraceDistance;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Combat Trace Data")
	float TraceRadius;

	//True if we want to trace multi instead of single 
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Combat Trace Data")
	bool bTraceMulti;
};

/**
 * Our targeting transform uses instanced objects so we can de-couple targeting behavior from the combat ability, since we need more of a composition based approach rather than inheritance based for GAS Combat abilities. 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, AutoExpandCategories = ("Targeting Provider"), meta = (DisplayName = "Targeting Transform Provider"))
class NARRATIVEARSENAL_API UTargetingTransformProvider : public UNarrativeTransformProvider
{
	GENERATED_BODY()
	
public:

	 UTargetingTransformProvider();

	 virtual FTransform ProvideTransform_Implementation(const UObject* WorldContextObject) const override;

};

/**
 * Finds an actor in the world with the specified level reference.
 */
UCLASS(EditInlineNew, AutoExpandCategories = ("Targeting Provider"), meta = (DisplayName = "Camera Towards Focus"))
class NARRATIVEARSENAL_API UTargetingTransformProvider_CameraTowardsFocus : public UTargetingTransformProvider
{
	GENERATED_BODY()
	
public:

	 UTargetingTransformProvider_CameraTowardsFocus();

	 virtual FTransform ProvideTransform_Implementation(const UObject* WorldContextObject) const override;
};


/**
 * Ability that has all of the hitscan, collision checking, damage dealing etc built in. Used by both melee and hitscan weapons. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeCombatAbility : public UNarrativeGameplayAbility
{
	GENERATED_BODY()
	
protected:
	
	UNarrativeCombatAbility();

	virtual void CommitExecute(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) override;
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	virtual bool CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual bool HasAmmo() const;

	//Perform the tracing that generates the targeting data. Will fire off a targeting data ready delegate when finished. 
	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void GenerateTargetData();

	// Version that lets us supply custom trace data if we want to ignore the weapons. 
	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void GenerateTargetDataUsingTrace(const FCombatTraceData& TraceData);

	//After targeting data is generated, this actually sends the target data to server and calls delegates etc. 
	UFUNCTION(BlueprintCallable, Category = "Combat")
	virtual void FinalizeTargetData(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag);

	UFUNCTION(BlueprintImplementableEvent, DisplayName = "OnTargetDataReady", meta = (ScriptName = "OnTargetDataReady"))
	void K2_TargetDataReady(const FGameplayAbilityTargetDataHandle& TargetData);

	//Perform the actual weapon trace. 
	FHitResult PerformTrace(const FVector& Start, const FVector& End, const float SweepRadius);
	TArray<FHitResult> PerformTraceMulti(const FVector& Start, const FVector& End, const float SweepRadius);

	//Get the trace info this combat ability will use to generate its target data 
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Narrative Combat Ability")
	FCombatTraceData GetTraceData() const;
	virtual FCombatTraceData GetTraceData_Implementation() const;

	//Get the transform we should start tracing from. 
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Narrative Combat Ability")
	FTransform GetTargetingViewPoint() const;
	virtual FTransform GetTargetingViewPoint_Implementation() const;

	//if true, we check our item has its ammo class, and if not the cost check will fail 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Narrative Ability")
	bool bRequiresAmmo;
	
	//if true, we'll draw debugging traces 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Narrative Ability")
	bool bDrawDebugTraces;

	//Instanced class provides a targeting transform in a way that isnt tied to the ability, and composition can be used 
	UPROPERTY(BlueprintReadOnly, Instanced, noclear, EditAnywhere, Category = "Narrative Ability")
	TObjectPtr<UTargetingTransformProvider> TargetingTransformProvider; 

private:

	void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& InData, FGameplayTag ApplicationTag);

	FDelegateHandle OnTargetDataReadyCallbackDelegateHandle;
};
