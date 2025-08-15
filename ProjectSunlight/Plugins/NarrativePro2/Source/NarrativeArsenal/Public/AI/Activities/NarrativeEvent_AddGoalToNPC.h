// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Tales/NarrativeEvent.h"
#include "NPCActivity.h"
#include "NarrativeEvent_AddGoalToNPC.generated.h"

/**
 * Adds a goal to the given NPC. You may prefer to use a BP Event to bind this instead, as that will pass you a pointer back
 * to the created goal, meaning you can keep a reference to the goal, update it, or remove it. 
 */
UCLASS(DisplayName="Add Goal To NPC")
class NARRATIVEARSENAL_API UNarrativeEvent_AddGoalToNPC : public UNarrativeEvent
{
	GENERATED_BODY()

	UNarrativeEvent_AddGoalToNPC(const FObjectInitializer& ObjectInitializer);

	//The goal to send to the NPC 
	UPROPERTY(Instanced, EditDefaultsOnly, Category = "NPC Activity")
	TObjectPtr<UNPCGoalItem> GoalToAdd; 

	//The active goal. 
	UPROPERTY()
	TObjectPtr<UNPCGoalItem> ActiveGoal; 

	virtual void ExecuteEvent_Implementation(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent) override;

	virtual void OnActivate_Implementation(APawn* Target, APlayerController* Controller, class UTalesComponent* NarrativeComponent);
	virtual void OnDeactivate_Implementation(APawn* Target, APlayerController* Controller, class UTalesComponent* NarrativeComponent);

	virtual FString GetGraphDisplayText_Implementation() override;
};

//Represents one of the NPCs in a settlement activity
USTRUCT(BlueprintType)
struct FAddGoalMultiTarget
{
	GENERATED_BODY()

	FAddGoalMultiTarget()
	{
		bRequireSucceed = true; 
		bGoalSucceeded = false; 
	};

	//The NPC to run this activity on
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Settlement Activity")
	TObjectPtr<class UNPCDefinition> NPCDefinition;

	//The activity to run at the specified time 
	UPROPERTY(EditDefaultsOnly, Instanced, BlueprintReadWrite, Category = "Settlement Activity")
	TObjectPtr<UNPCGoalItem> Goal; 

	//If false, the settlement activity can still run even if this NPC failed to start the activity the settlement wanted. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Settlement Activity")
	bool bRequireSucceed;

	//We track in here whether the goal has yet been succeded or not 
	UPROPERTY(BlueprintReadWrite, Category = "Settlement Activity")
	bool bGoalSucceeded; 
};

/**
 * Special version that handles adding goals to multiple NPCs instead of just the one.
 */
UCLASS(DisplayName="Add Multiple Goals")
class NARRATIVEARSENAL_API UNarrativeEvent_AddGoalMulti : public UNarrativeEvent
{
	GENERATED_BODY()

	UNarrativeEvent_AddGoalMulti(const FObjectInitializer& ObjectInitializer);

protected: 

	//The active goals 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient, Category = "Settlement Activity")
	TArray<TObjectPtr<class UNPCGoalItem>> IssuedGoals; 

	//The NPCs that this settlement activity will effect 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settlement Activity", meta = (ExposeOnSpawn))
	TArray<FAddGoalMultiTarget> NPCGoalTargets;

	UFUNCTION()
	virtual void OnActivityCompleted(class UNPCActivity* Activity, class UNPCGoalItem* Goal);

	//Prepare the goal for a save - this might for example mean storing an actors GUID so we can find it later when we load 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "NPC Goal Item")
	void OnGoalsCompleted();
	virtual void OnGoalsCompleted_Implementation();

	virtual void ExecuteEvent_Implementation(APawn* Pawn, APlayerController* Controller, class UTalesComponent* NarrativeComponent) override;

	virtual void OnActivate_Implementation(APawn* Target, APlayerController* Controller, class UTalesComponent* NarrativeComponent);
	virtual void OnDeactivate_Implementation(APawn* Target, APlayerController* Controller, class UTalesComponent* NarrativeComponent);

	virtual FString GetGraphDisplayText_Implementation() override;
};
