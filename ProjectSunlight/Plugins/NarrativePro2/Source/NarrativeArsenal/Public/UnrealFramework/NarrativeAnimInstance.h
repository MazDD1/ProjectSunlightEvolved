// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayEffectTypes.h"
#include "GAS/AttackComboAnimSet.h"
#include "NarrativeAnimInstance.generated.h"

/**
 * Narrative anim instance class - we generally just have this to add the GameplayTagPropertyMap as lyra does. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	UNarrativeAnimInstance();

	void InitializePropertyMap(class UAbilitySystemComponent* ASC);

	//Search for an animset on the anim instance via its tag. Return AnimSet and boolean saying whether animset was found 
	UFUNCTION(BlueprintPure, Category = "Anim Sets")
	UNarrativeAnimSet* GetAnimSet(UPARAM(meta = (Categories = "Narrative.AnimSets"))const FGameplayTag& AnimSetTag, bool& bOutFoundAnimSet);

protected:

	virtual void NativeInitializeAnimation() override;

	/**Brilliant container type that ships with GAS - lets us bind variables directly to gameplaytags. */
	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;

	/**Tagged animsets - this lets us have a generic, extensible, and BP friendly way of mapping tags to Combo Sets. */
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Combat Data", meta = (Categories = "Narrative.AnimSets", ForceInlineRow))
	TMap<FGameplayTag, TObjectPtr<UNarrativeAnimSet>> TaggedAnimSets;

};
