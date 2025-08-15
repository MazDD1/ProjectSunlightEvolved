// Copyright Narrative Tools 2024. 


#include "UnrealFramework/NarrativeAnimInstance.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemGlobals.h"

UNarrativeAnimInstance::UNarrativeAnimInstance()
{

}


void UNarrativeAnimInstance::InitializePropertyMap(class UAbilitySystemComponent* ASC)
{
	GameplayTagPropertyMap.Initialize(this, ASC);
}

UNarrativeAnimSet* UNarrativeAnimInstance::GetAnimSet(const FGameplayTag& AnimSetTag, bool& bOutFoundAnimSet)
{
	bOutFoundAnimSet = false;

	if (TaggedAnimSets.Contains(AnimSetTag))
	{
		bOutFoundAnimSet = true; 
		return TaggedAnimSets[AnimSetTag];
	}

	return nullptr;
}

void UNarrativeAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (AActor* OwningActor = GetOwningActor())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor))
		{
			InitializePropertyMap(ASC);
		}
	}
}
