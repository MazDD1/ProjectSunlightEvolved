// Copyright Narrative Tools 2025.


#include "Weapons/WeaponVisual.h"

#include "KismetTraceUtils.h"
#include "NarrativeArsenal.h"
#include "Weapons/WeaponAnimPose.h"
#include "GameFramework/Character.h"
#include "Items/WeaponItem.h"
#include "Items/WeaponAttachmentItem.h"
#include "PhysicsEngine/BodySetup.h"
#include "Settings/NarrativeCombatDeveloperSettings.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include <Animation/AnimMontage.h>
#include <Animation/Skeleton.h>
#include <Components/SkeletalMeshComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Animation/AnimSequence.h>
#include <Engine/SkeletalMesh.h>
#include <BonePose.h>
#include <BoneContainer.h>

#include "ArsenalSettings.h"
#include "ArsenalStatics.h"


//
//static TAutoConsoleVariable<bool> CDrawMeleeTraces(
//	TEXT("n.gas.DrawMeleeTraces"),
//	false,
//	TEXT("Whether to draw melee traces 0=Off 1=On"),
//	ECVF_Default);


DEFINE_LOG_CATEGORY_STATIC(LogWeaponVisual, Log, All)

// Sets default values
AWeaponVisual::AWeaponVisual()
{
	PrimaryActorTick.bCanEverTick = false;

	auto Settings = UArsenalStatics::GetNarrativeProSettings();
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
	WeaponMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	WeaponMesh->SetCollisionResponseToChannel(Settings->WeaponTraceChannel, ECR_Ignore);
	WeaponMesh->bAlwaysCreatePhysicsState = true;
	SetRootComponent(WeaponMesh);

}

void AWeaponVisual::BeginPlay()
{
	Super::BeginPlay(); 

	//Need to spawn in all the weapons attachments too, and apply their mods - we'll simply just re-call AddAttachment for all attachments as it does this. 
	if (WeaponOwner)
	{	
		for (auto& AttachmentKVP : WeaponOwner->WeaponAttachments)
		{
			UWeaponAttachmentItem* Attachment = AttachmentKVP.Value;
			//fails as charowner not valid 
			if (Attachment)
			{
				Attachment->HandleAttach(WeaponOwner);
				WeaponOwner->AddAttachmentVisual(Attachment);
			}
		}
	}
}

void AWeaponVisual::RegisterDefaultAttachment(const FGameplayTag& Slot, class UStaticMeshComponent* Mesh)
{
	AttachmentMeshComps.Add(Slot, Mesh);

	if (UStaticMesh* MeshAsset = Mesh->GetStaticMesh())
	{
		AttachmentMeshDefaultMeshes.Add(Slot, MeshAsset);
	}
}

//// Declare a static bool variable to hold the value
//static int32 GDrawMeleeTraces = 0;
//
//// Bind it to a console variable
//static FAutoConsoleVariableRef CDrawMeleeTracesRef(
//	TEXT("n.gas.DrawMeleeTraces"),
//	GDrawMeleeTraces,
//	TEXT("Enable or disable whether to draw narrative melee traces. \n0 = false, 1 = true"),
//	ECVF_Default
//);

void AWeaponVisual::HandleAddAttachment_Implementation(class UWeaponAttachmentItem* Attachment, const FWeaponAttachmentSlotConfig& WeaponSlotConfig)
{
	if (WeaponOwner)
	{
		FGameplayTag Slot = Attachment->WeaponAttachmentSlot;

		if (!AttachmentMeshComps.Contains(Slot))
		{
			if (UStaticMeshComponent* NewMesh = Cast<UStaticMeshComponent>(AddComponentByClass(UStaticMeshComponent::StaticClass(), true, FTransform::Identity, false)))
			{
				NewMesh->SetCollisionResponseToAllChannels(ECR_Ignore);
				NewMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				AttachmentMeshComps.Add(Slot, NewMesh);
			}
		}

		if (AttachmentMeshComps.Contains(Slot))
		{
			if (UStaticMeshComponent* AttachmentMesh = AttachmentMeshComps[Slot])
			{
				AttachmentMesh->SetStaticMesh(Attachment->AttachmentMesh);
				AttachmentMesh->AttachToComponent(WeaponMesh, FAttachmentTransformRules::SnapToTargetIncludingScale, WeaponSlotConfig.SocketName);
			}
			else
			{
				UE_LOG(LogWeaponVisual, Error, TEXT("Unable to spawn mesh component for added attachment %s"), *GetNameSafe(Attachment));
			}
		}
	}
}

void AWeaponVisual::HandleRemoveAttachment_Implementation(class UWeaponAttachmentItem* Attachment)
{
	FGameplayTag Slot = Attachment->WeaponAttachmentSlot;

	if (AttachmentMeshComps.Contains(Slot))
	{
		if (UStaticMeshComponent* AttachmentMesh = AttachmentMeshComps[Slot])
		{
			if (AttachmentMeshDefaultMeshes.Contains(Slot))
			{
				AttachmentMesh->SetStaticMesh(AttachmentMeshDefaultMeshes[Slot]);
			}
			else
			{
				AttachmentMesh->SetStaticMesh(nullptr);
			}
		}
		else
		{
			UE_LOG(LogWeaponVisual, Error, TEXT("Unable to spawn mesh component for added attachment %s"), *GetNameSafe(Attachment));
		}
	}
}

bool AWeaponVisual::SweepForHits(const FVector& Start, const FVector& End, const FQuat& Rot, const FVector& CapsuleSize, const TArray<AActor*>& ActorsToIgnore, TArray<FHitResult>& OutHits)
{
	FCollisionShape Shape;
	Shape.SetCapsule(FVector3f(CapsuleSize.X, CapsuleSize.Y, CapsuleSize.Z));

	FCollisionQueryParams CQP;
	CQP.bTraceComplex = true;
	CQP.bReturnPhysicalMaterial = true; 
	   
	if(true)// why does adding this console variable cause a crash on engine close? (CDrawMeleeTraces.GetValueOnGameThread())
	{
		CQP.TraceTag = FName("WeaponVisualSweep");

#if (!(UE_BUILD_SHIPPING || UE_BUILD_TEST) || WITH_EDITOR)
		CQP.bDebugQuery = true;
		GetWorld()->DebugDrawTraceTag = true ? CQP.TraceTag : NAME_None;
#endif

	}


	
	CQP.AddIgnoredActors(ActorsToIgnore);
	
	return GetWorld()->SweepMultiByChannel(OutHits, Start, End, Rot, TraceChannel_NarrativeWeapon, Shape, CQP);
}

void AWeaponVisual::CacheAnimationTransform(
	const FAnimNotifyEventReference& AnimNotifyEventRef)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AWeaponVisual::CacheAnimationTransform)

	CurrentNotifyEvent = AnimNotifyEventRef;

	// We already cached this damage state data so there is no need to recalculate
	if (CachedDamageStateData.Contains(AnimNotifyEventRef.GetNotify()))
	{
		return;
	}

	TArray<FDamageStateData> DamageStateDatas;
	const auto NotifyEvent = AnimNotifyEventRef.GetNotify();
	
	USkeletalMeshComponent* OwnerMeshComponent = CharacterOwner->GetMesh();

	// Prepare socket and bone information along with montage references
	FTransform SocketTransform;
	int32 BoneIndex;
	auto NarrativeChar = Cast<ANarrativeCharacter>(CharacterOwner);
	const FName MeshBoneName = NarrativeChar->GetWeapon()->GetWeaponVisualAttachBone();

	// Fetch the socket info that we will be using
	OwnerMeshComponent->GetSocketInfoByName(MeshBoneName, SocketTransform, BoneIndex);
	const int32 MeshBoneIndex = OwnerMeshComponent->GetBoneIndex(MeshBoneName);

	// Get our current montage that is playing
	UAnimInstance* AnimInstance = OwnerMeshComponent->GetAnimInstance();
	FAnimMontageInstance* MontageInstance = AnimInstance->GetActiveMontageInstance();
	UAnimMontage* AnimMontage = MontageInstance->Montage;

	// Gather animation data
	const FSlotAnimationTrack& AnimTrack = AnimMontage->SlotAnimTracks[0];
	const FAnimSegment* AnimSegment = AnimTrack.AnimTrack.GetSegmentAtTime(MontageInstance->GetPosition());
	const UAnimSequence* CurrentAnimSequence = Cast<UAnimSequence>(AnimSegment->GetAnimReference());
	USkeleton* Skeleton = CurrentAnimSequence->GetSkeleton();

	const int32 SkeletonBoneIndex = Skeleton->GetSkeletonBoneIndexFromMeshBoneIndex(OwnerMeshComponent->GetSkeletalMeshAsset(), MeshBoneIndex);
	if (NotifyEvent && CurrentAnimSequence && Skeleton && SkeletonBoneIndex != INDEX_NONE)
	{
		// Gather time range of anim notify
		double StartTime = NotifyEvent->GetTriggerTime() + AnimSegment->AnimStartTime;
		double EndTime = StartTime + NotifyEvent->Duration;

		TArray<FBoneIndexType> RequiredBoneIndexArray;
		RequiredBoneIndexArray.AddUninitialized(Skeleton->GetReferenceSkeleton().GetNum());
		for (int RequiredBoneInd = 0; RequiredBoneInd < RequiredBoneIndexArray.Num(); RequiredBoneInd++)
		{
			if (RequiredBoneIndexArray.IsValidIndex(RequiredBoneInd))
			{
				RequiredBoneIndexArray[RequiredBoneInd] = StaticCast<FBoneIndexType>(RequiredBoneInd);
			}
		}
		
		FBoneContainer RequiredBones;
		RequiredBones.InitializeTo(RequiredBoneIndexArray, UE::Anim::FCurveFilterSettings(), *Skeleton);
		RequiredBones.SetUseRAWData(false);
		RequiredBones.SetUseSourceData(false);
		RequiredBones.SetDisableRetargeting(false);

		// Init base pose data
		FCompactPose CompactPose;
		FBlendedCurve Curve;
		UE::Anim::FStackAttributeContainer Attributes;

		FAnimationPoseData PoseData(CompactPose, Curve, Attributes);
		FAnimExtractContext Context(0., true);

		FCompactPose BasePose;
		BasePose.SetBoneContainer(&RequiredBones);

		CompactPose.SetBoneContainer(&RequiredBones);
		Curve.InitFrom(RequiredBones);

		FWeaponAnimPose Pose;
		Pose.Init(RequiredBones);

		// start sampling animation and caching data
		const int32 SampleCount = GetDefault<UNarrativeCombatDeveloperSettings>()->MeleeCombatAnimSampleAmount;//30;
		for (int Index = 0; Index<SampleCount; Index++)
		{
			// Determine point in animation based on our sample count so sweeps are evenly distributed
			const double Alpha = StaticCast<double>(Index) / (StaticCast<double>(SampleCount) - 1);
			const double Time = FMath::Lerp(StartTime, EndTime, Alpha);

			FDamageStateData& DamageStateData = DamageStateDatas.Emplace_GetRef(FDamageStateData(Time - AnimSegment->AnimStartTime));
			Context.CurrentTime = Time;

			// Copy base pose as frame pose
			FWeaponAnimPose FramePose = Pose;

			// reinit curve
			Curve.InitFrom(RequiredBones);

			if (CurrentAnimSequence->IsValidAdditive())
			{
				CompactPose.ResetToAdditiveIdentity();
			}
			else
			{
				CompactPose.ResetToRefPose();
			}
			
			CurrentAnimSequence->GetAnimationPose(PoseData, Context);
			FramePose.SetPose(PoseData);

			const FTransform& RelativeTransform = FramePose.WorldSpacePoses[SkeletonBoneIndex];

			// Perform transform calculations to get socket position/rotation. Order is important here as scale should be applied at the end
			DamageStateData.RelativeLocation = RelativeTransform.GetLocation();
			DamageStateData.RelativeLocation += RelativeTransform.GetRotation().RotateVector(SocketTransform.GetLocation());
			DamageStateData.RelativeLocation *= OwnerMeshComponent->GetRelativeScale3D();
			DamageStateData.RelativeLocation *= CharacterOwner->GetActorRelativeScale3D();

			DamageStateData.RelativeRotation = RelativeTransform.GetRotation();
			DamageStateData.RelativeRotation *= SocketTransform.GetRotation();
		}
	}
	CachedDamageStateData.Add(AnimNotifyEventRef.GetNotify(), FDamageStateDataContainer(DamageStateDatas));
}

void AWeaponVisual::PerformCollisionCheck(TArray<FHitResult>& OutHits)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AWeaponVisual::PerformCollisionCheck)
	OutHits.Empty();
	
	USkeletalMeshComponent* OwnerMeshComponent = CharacterOwner ? CharacterOwner->GetMesh() : nullptr;
	
	UAnimInstance* AnimInstance = OwnerMeshComponent ? OwnerMeshComponent->GetAnimInstance() : nullptr;
	FAnimMontageInstance* MontageInstance = AnimInstance ? AnimInstance->GetActiveMontageInstance() : nullptr;

	// This could happen during gameplay when a montage has finished and is fading out. Therefore, this is expected behavior
	if (!MontageInstance)
	{
		return;
	}
	
	const double CurrentTime = MontageInstance->GetPosition();
	FQuat OwnerRotation = OwnerMeshComponent->GetComponentQuat();
	const FVector OwnerLocation = OwnerMeshComponent->GetBoneLocation(TEXT("root"));

	// If we decide to support look at rotation in the future, this would be a spot to hook it up
	FQuat LookAtRotation = FQuat::Identity;

	// Attempt to find cached attack data
	FDamageStateDataContainer* DamageStateData = CachedDamageStateData.Find(CurrentNotifyEvent.GetNotify());
	if (!DamageStateData)
	{
		UE_LOG(LogWeaponVisual, Error, TEXT("Unable to find cached damage state data for current notify event. No collision checks will be performed!"))
		return;
	}

	// Iterate through cached locations
	for (FDamageStateData& StateData : DamageStateData->DamageStateDatas)
	{
		if (CurrentTime < StateData.FrameTime || StateData.bTriggered)
		{
			continue;
		}

		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(CharacterOwner);
		ActorsToIgnore.Add(this);
		
		for (FWeaponCollisionData& WeaponCollisionData : CollisionData)
		{
			FQuat Rotation = OwnerRotation;

			FQuat RelativeRotation = LookAtRotation * StateData.RelativeRotation;
			FVector CorrectedLocation = RelativeRotation.RotateVector(WeaponCollisionData.RelativeLocation);
			
			Rotation *= RelativeRotation;
			Rotation *= WeaponCollisionData.RelativeRotation;
			
			// correct last location if it was not initialized
			if (WeaponCollisionData.LastLocation.IsNearlyZero())
			{
				WeaponCollisionData.LastLocation = StateData.RelativeLocation + CorrectedLocation;
				WeaponCollisionData.LastLocation = LookAtRotation.RotateVector(WeaponCollisionData.LastLocation);
				WeaponCollisionData.LastLocation = OwnerRotation.RotateVector(WeaponCollisionData.LastLocation);
				WeaponCollisionData.LastLocation += OwnerLocation;
			}

			// Setup start/end locations of sweep
			FVector EndLocation = StateData.RelativeLocation + CorrectedLocation;
			EndLocation = LookAtRotation.RotateVector(EndLocation);
			EndLocation = OwnerRotation.RotateVector(EndLocation);
			EndLocation += OwnerLocation;

			FVector StartLocation = WeaponCollisionData.LastLocation;
			
			SweepForHits(StartLocation, EndLocation, Rotation, WeaponCollisionData.Shape.GetExtent(), ActorsToIgnore, OutHits);
			
			WeaponCollisionData.LastLocation = EndLocation;

			// return early if we hit something
			if (OutHits.Num() > 0)
			{
				return;
			}
		}
		
		StateData.bTriggered = true;
	}
}

void AWeaponVisual::CleanupAttackData()
{
	auto CachedDamageData = CachedDamageStateData.Find(CurrentNotifyEvent.GetNotify());
	if (!CachedDamageData) { return; }
	for (FDamageStateData& DamageStateData : CachedDamageData->DamageStateDatas)
	{
		DamageStateData.bTriggered = false;
	}
	
	for (FWeaponCollisionData& Data : CollisionData)
	{
		Data.LastLocation = FVector::ZeroVector;
	}
	
	CurrentNotifyEvent = FAnimNotifyEventReference();
}

void AWeaponVisual::CacheCollisionData(bool bForceUpdate)
{
	// Dont recalculate collision data if we have done it already. Unless we want to update it forcefully
	if (!bForceUpdate && !CollisionData.IsEmpty())
	{
		return;
	}

	TRACE_CPUPROFILER_EVENT_SCOPE(AWeaponVisual::CacheCollisionData)
	
	CollisionData.Empty();
	
	for (UPrimitiveComponent* Primitive : GetCollidingPrimitives())
	{
		auto BodyInstance = Primitive ? Primitive->GetBodyInstance() : nullptr;
		auto BodySetup = BodyInstance ? Primitive->GetBodyInstance()->GetBodySetup() : nullptr;

		if (BodySetup)
		{
			auto AggGeom = BodySetup->AggGeom;

			// We need a custom path for skeletal meshes and normal primitives as their relative transform needs to be from the bone
			auto SKM = Cast<USkeletalMeshComponent>(Primitive);
			FTransform RelativeTransform = SKM ? SKM->GetSocketTransform(BodySetup->BoneName, RTS_ParentBoneSpace) : FTransform::Identity;
			
			// We need to find the transform of the primitive relative to the root/actor so we can apply it to our cached collision shape
			FTransform RootTransform = RootComponent->GetRelativeTransform();
			FTransform PrimitiveTransform = Primitive->GetRelativeTransform().GetRelativeTransform(RootTransform);
			RelativeTransform.SetRotation(PrimitiveTransform.GetRotation() * RelativeTransform.GetRotation());
			RelativeTransform.SetLocation(RelativeTransform.GetLocation() + PrimitiveTransform.GetLocation());

			// Currently only supporting capsule shapes but this would be a spot to also support more types in the future
			for (const auto& CapsuleElements : AggGeom.SphylElems)
			{
				FVector Position = CapsuleElements.Center + RelativeTransform.GetLocation();
				FQuat Rotation =  RelativeTransform.GetRotation() * CapsuleElements.Rotation.Quaternion();
				FCollisionShape Shape = FCollisionShape::MakeCapsule(CapsuleElements.Radius, (CapsuleElements.Length/2) + CapsuleElements.Radius);
				
				CollisionData.Emplace(Position, Rotation, FVector::ZeroVector, Shape);
			}
		}
	}
}

TArray<UPrimitiveComponent*> AWeaponVisual::GetCollidingPrimitives_Implementation()
{
	TArray<UPrimitiveComponent*> Primitives;
	GetComponents(UPrimitiveComponent::StaticClass(), Primitives);

	return Primitives;
}




