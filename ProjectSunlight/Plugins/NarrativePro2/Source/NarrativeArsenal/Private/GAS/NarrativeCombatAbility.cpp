// Copyright Narrative Tools 2024. 


#include "GAS/NarrativeCombatAbility.h"
#include <AbilitySystemComponent.h>
#include "Items/InventoryFunctionLibrary.h"
#include "Items/WeaponItem.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include <GameFramework/Controller.h>
#include <GameFramework/PlayerController.h>
#include <Engine/World.h>
#include <CollisionQueryParams.h>

#include "ArsenalSettings.h"
#include "ArsenalStatics.h"
#include "NarrativeGameplayTags.h"
#include "Items/RangedWeaponItem.h"
#include "NarrativeLogChannels.h"

#define LOCTEXT_NAMESPACE "NarrativeCombatAbility"

UNarrativeCombatAbility::UNarrativeCombatAbility()
{
	bRequiresAmmo = true;

	//Default to camera towards focus 
	TargetingTransformProvider = CreateDefaultSubobject<UTargetingTransformProvider_CameraTowardsFocus>("TargetingTransformProvider");


}

void UNarrativeCombatAbility::CommitExecute(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo)
{
	Super::CommitExecute(Handle, ActorInfo, ActivationInfo);

	if (CharacterOwner)
	{
		if (UWeaponItem* Weapon = CharacterOwner->GetWeapon())
		{
			if (bRequiresAmmo)
			{
				Weapon->ConsumeAmmo();
			}
		}
	}

}

bool UNarrativeCombatAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags /*= nullptr*/, const FGameplayTagContainer* TargetTags /*= nullptr*/, OUT FGameplayTagContainer* OptionalRelevantTags /*= nullptr*/) const
{
	return Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags);
}

void UNarrativeCombatAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	// Bind target data callback
	UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
	check(MyAbilityComponent);

	//We use this method from lyra to avoid using targeting actors and just call the target datas ourselves 
	OnTargetDataReadyCallbackDelegateHandle = MyAbilityComponent->AbilityTargetDataSetDelegate(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey()).AddUObject(this, &ThisClass::FinalizeTargetData);

	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UNarrativeCombatAbility::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	if (IsEndAbilityValid(Handle, ActorInfo))
	{
		if (ScopeLockCount > 0)
		{
			WaitingToExecute.Add(FPostLockDelegate::CreateUObject(this, &ThisClass::EndAbility, Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled));
			return;
		}

		UAbilitySystemComponent* MyAbilityComponent = CurrentActorInfo->AbilitySystemComponent.Get();
		check(MyAbilityComponent);

		// When ability ends, consume target data and remove delegate
		MyAbilityComponent->AbilityTargetDataSetDelegate(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey()).Remove(OnTargetDataReadyCallbackDelegateHandle);
		MyAbilityComponent->ConsumeClientReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey());

		Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
	}
}

bool UNarrativeCombatAbility::CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, OUT FGameplayTagContainer* OptionalRelevantTags /*= nullptr*/) const
{
	return true; 
	//const bool bSuperCheck = Super::CheckCost(Handle, ActorInfo, OptionalRelevantTags);
	//return bSuperCheck && HasAmmo();
}

bool UNarrativeCombatAbility::HasAmmo() const
{
	if (!bRequiresAmmo)
	{
		return true;
	}

	if (CharacterOwner)
	{
		if (UWeaponItem* Weapon = CharacterOwner->GetWeapon())
		{
			return Weapon->HasAmmo();
		}
	}

	return false;
}

void UNarrativeCombatAbility::GenerateTargetData()
{
	const FCombatTraceData TraceData = GetTraceData();

	GenerateTargetDataUsingTrace(TraceData);
}

void UNarrativeCombatAbility::GenerateTargetDataUsingTrace(const FCombatTraceData& TraceData)
{
	if (AController* OwnerController = GetOwningController())
	{
		if (OwnerController->IsLocalController())
		{	
			const FTransform TargetViewPoint = GetTargetingViewPoint();
			const FVector StartTrace = TargetViewPoint.GetTranslation();
			const float TraceLen  = TraceData.TraceDistance + FVector::Dist(GetAvatarActorFromActorInfo()->GetActorLocation(), TargetViewPoint.GetLocation());

			const FVector EndTrace = (TargetViewPoint.GetRotation().Vector() * TraceLen) + StartTrace;

			TArray<FHitResult> Hits;

			if (TraceData.bTraceMulti)
			{
				Hits.Append(PerformTraceMulti(StartTrace, EndTrace, TraceData.TraceRadius));
			}
			else
			{
				Hits.Add(PerformTrace(StartTrace, EndTrace, TraceData.TraceRadius));
			}

			FGameplayAbilityTargetDataHandle TargetData;

			for (auto& Hit : Hits)
			{
				FGameplayAbilityTargetData_SingleTargetHit* SingleTargetHit = new FGameplayAbilityTargetData_SingleTargetHit(Hit);
				TargetData.Add(SingleTargetHit);
			}

			FinalizeTargetData(TargetData, FGameplayTag());
		}
	}
}

void UNarrativeCombatAbility::FinalizeTargetData(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag)
{
	UAbilitySystemComponent* ASC = CurrentActorInfo->AbilitySystemComponent.Get();

	if (const FGameplayAbilitySpec* AbilitySpec = ASC->FindAbilitySpecFromHandle(CurrentSpecHandle))
	{
		FScopedPredictionWindow	ScopedPrediction(ASC);

		//We use this method from lyra to avoid using targeting actors and just call the target datas ourselves 
		FGameplayAbilityTargetDataHandle LocalTargetDataHandle(MoveTemp(const_cast<FGameplayAbilityTargetDataHandle&>(TargetData)));

		//We call this function manually instead of using the target data node, which is inefficient and spawns a target data generating actor. We're basically just overriding that to just do a nice lightweight trace instead! 
		if (CurrentActorInfo->IsLocallyControlled() && !CurrentActorInfo->IsNetAuthority())
		{
			ASC->CallServerSetReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey(), LocalTargetDataHandle, ApplicationTag, ASC->ScopedPredictionKey);
		}

		if (CommitAbility(CurrentSpecHandle, CurrentActorInfo, CurrentActivationInfo))
		{
			K2_TargetDataReady(LocalTargetDataHandle);
		}
		else
		{
			K2_EndAbility();
		}

		//Another core GAS function, just cleans out the target data. 
		ASC->ConsumeClientReplicatedTargetData(CurrentSpecHandle, CurrentActivationInfo.GetActivationPredictionKey());
	}
}

FHitResult UNarrativeCombatAbility::PerformTrace(const FVector& Start, const FVector& End, const float SweepRadius)
{
	auto Settings = UArsenalStatics::GetNarrativeProSettings();
	
	FHitResult Hit;
	ECollisionChannel TraceChannel = Settings->WeaponTraceChannel;

	FCollisionQueryParams CQP;
	CQP.bTraceComplex = true;
	CQP.bReturnPhysicalMaterial = true; 
	CQP.AddIgnoredActor(GetAvatarActorFromActorInfo());
	CQP.TraceTag = FName("CombatTrace");

#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
	CQP.bDebugQuery = bDrawDebugTraces;
	GetWorld()->DebugDrawTraceTag = bDrawDebugTraces ? CQP.TraceTag : NAME_None;
#endif 
	
	if (FMath::IsNearlyZero(SweepRadius))
	{
		GetWorld()->LineTraceSingleByChannel(Hit, Start, End, TraceChannel, CQP);
	}
	else
	{
		const FCollisionShape Sphere = FCollisionShape::MakeSphere(SweepRadius);
		GetWorld()->SweepSingleByChannel(Hit, Start, End, FQuat::Identity, TraceChannel, Sphere, CQP);
	}

#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
	GetWorld()->DebugDrawTraceTag = NAME_None;
#endif 

	return Hit;
}

TArray<FHitResult> UNarrativeCombatAbility::PerformTraceMulti(const FVector& Start, const FVector& End, const float SweepRadius)
{
	auto Settings = UArsenalStatics::GetNarrativeProSettings();
	
	TArray<FHitResult> Hits;
	ECollisionChannel TraceChannel = Settings->WeaponTraceChannel;

	FCollisionQueryParams CQP;
	CQP.bTraceComplex = true;
	CQP.bReturnPhysicalMaterial = true; 
	CQP.AddIgnoredActor(GetAvatarActorFromActorInfo());
	CQP.TraceTag = FName("CombatTrace");

#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
	CQP.bDebugQuery = bDrawDebugTraces;
	GetWorld()->DebugDrawTraceTag = bDrawDebugTraces ? CQP.TraceTag : NAME_None;
#endif

	if (FMath::IsNearlyZero(SweepRadius))
	{
		GetWorld()->LineTraceMultiByChannel(Hits, Start, End, TraceChannel, CQP);
	}
	else
	{
		const FCollisionShape Sphere = FCollisionShape::MakeSphere(SweepRadius);
		GetWorld()->SweepMultiByChannel(Hits, Start, End, FQuat::Identity, TraceChannel, Sphere, CQP);
	}

#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
	GetWorld()->DebugDrawTraceTag = NAME_None;
#endif 

	return Hits;
}

FCombatTraceData UNarrativeCombatAbility::GetTraceData_Implementation() const
{
	if (CharacterOwner)
	{
		//Ranged and melee weapons share the same base weapon item and combat ability. 
		if (UWeaponItem* Weapon  = CharacterOwner->GetWeapon())
		{
			return Weapon->GetTraceData();
		}
		else
		{
			return CharacterOwner->UnarmedCombatData;
		}
	}

	return FCombatTraceData();
}

//Useful rand cone from lyra! 
FVector VRandConeNormalDistribution(const FVector& Dir, const float ConeHalfAngleRad, const float Exponent)
{
	if (ConeHalfAngleRad > 0.f)
	{
		const float ConeHalfAngleDegrees = FMath::RadiansToDegrees(ConeHalfAngleRad);

		// consider the cone a concatenation of two rotations. one "away" from the center line, and another "around" the circle
		// apply the exponent to the away-from-center rotation. a larger exponent will cluster points more tightly around the center
		const float FromCenter = FMath::Pow(FMath::FRand(), Exponent);
		const float AngleFromCenter = FromCenter * ConeHalfAngleDegrees;
		const float AngleAround = FMath::FRand() * 360.0f;

		FRotator Rot = Dir.Rotation();
		FQuat DirQuat(Rot);
		FQuat FromCenterQuat(FRotator(0.0f, AngleFromCenter, 0.0f));
		FQuat AroundQuat(FRotator(0.0f, 0.0, AngleAround));
		FQuat FinalDirectionQuat = DirQuat * AroundQuat * FromCenterQuat;
		FinalDirectionQuat.Normalize();

		return FinalDirectionQuat.RotateVector(FVector::ForwardVector);
	}
	else
	{
		return Dir.GetSafeNormal();
	}
}

FTransform UNarrativeCombatAbility::GetTargetingViewPoint_Implementation() const
{
	FTransform TargetingTransform; 
	if (TargetingTransformProvider)
	{
		TargetingTransform = TargetingTransformProvider->ProvideTransform(GetOwningController());
	}
	else
	{
		//Fallback to view point of targeting provider isnt set
		if (const AController* Controller = GetOwningController())
		{
			FVector EyesLoc;
			FRotator EyesRot;

			Controller->GetPlayerViewPoint(EyesLoc, EyesRot);

			TargetingTransform = FTransform(EyesRot, EyesLoc);
		}
	}

	if (UWeaponItem* Weapon = GetOwnerEquippedWeapon())
	{	
		const float Spread = Weapon->GetWeaponSpread();
		if (Spread > KINDA_SMALL_NUMBER)
		{
			//TODO make seeded server-client random stream - one per player 
			FRandomStream Rand(1235);

			const float WeaponSpreadHalfDeg = Spread * 0.5f;
			const FVector AdjustedAimDir = VRandConeNormalDistribution(TargetingTransform.GetRotation().Vector(), FMath::DegreesToRadians(WeaponSpreadHalfDeg), 1.f); //Rand.VRandCone(TargetingTransform.GetRotation().Vector(), FMath::DegreesToRadians(WeaponSpreadHalfDeg), FMath::DegreesToRadians(WeaponSpreadHalfDeg));

			TargetingTransform.SetRotation(AdjustedAimDir.Rotation().Quaternion());
		}
	}

	return TargetingTransform;
}

UTargetingTransformProvider::UTargetingTransformProvider()
{

}

FTransform UTargetingTransformProvider::ProvideTransform_Implementation(const UObject* WorldContextObject) const
{
	return FTransform();
}

UTargetingTransformProvider_CameraTowardsFocus::UTargetingTransformProvider_CameraTowardsFocus()
{

}

FTransform UTargetingTransformProvider_CameraTowardsFocus::ProvideTransform_Implementation(const UObject* WorldContextObject) const
{
	if (const AController* Controller = Cast<AController>(WorldContextObject))
	{
		if (const APawn* Pawn = Controller->GetPawn())
		{
			FVector EyesLoc;
			FRotator EyesRot;

			FVector PawnLoc = Pawn->GetActorLocation();

			Controller->GetPlayerViewPoint(EyesLoc, EyesRot);

			const FVector AimDir = EyesRot.Vector();
			const FVector FocalLoc = EyesLoc + (AimDir * 1024.f);

			const FVector StartPoint = FocalLoc + (((PawnLoc - FocalLoc) | AimDir) * AimDir);

			return FTransform(EyesRot, StartPoint);
		}
	}

	return FTransform();
}

#undef LOCTEXT_NAMESPACE 