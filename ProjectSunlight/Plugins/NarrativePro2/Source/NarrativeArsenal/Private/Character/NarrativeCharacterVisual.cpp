// Copyright Narrative Tools 2024. 


#include "Character/NarrativeCharacterVisual.h"
#include "NarrativeGameplayTags.h"
#include "NarrativeLogChannels.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "Character/CharacterAppearance.h"
#include "CharacterCreator/CharacterCreatorAttributes.h"
#include "Items/WeaponItem.h"
#include <AbilitySystemComponent.h>
#include <Components/SceneComponent.h>
#include <Engine/AssetManager.h>
#include <GroomComponent.h>
#include <Materials/MaterialInstanceDynamic.h>
#include "Weapons/WeaponVisual.h"

// Sets default values
ANarrativeCharacterVisual::ANarrativeCharacterVisual()
{
	CharacterVisualRoot = CreateDefaultSubobject<USceneComponent>("CharacterVisualRoot");

	bBaseAppearanceLoaded = false; 

	SetRootComponent(CharacterVisualRoot);
}

void ANarrativeCharacterVisual::Destroyed()
{
	Super::Destroyed();

	TArray<FGameplayTag> VisualSlots;
	SpawnedWeaponVisuals.GenerateKeyArray(VisualSlots);

	for (auto& Slot : VisualSlots)
	{
		RemoveWeaponVisual(Slot);
	}
}

void ANarrativeCharacterVisual::HandleWieldWeapon_Implementation(class UWeaponItem* Weapon)
{
	if(Weapon)
	{
		AttachWeaponVisual(Weapon, false);
		//SetAnimBPOverride(Weapon->WeaponAnimLayer);
	
		if (USkeletalMeshComponent* MainMesh = GetMainMesh())
		{
			if (UAnimInstance* MeshInstance = MainMesh->GetAnimInstance())
			{
				TSubclassOf<UAnimInstance> LayerToUse = Weapon->WeaponAnimLayer;

				//Weapons might look different when wielded by different forms, see if we need a form specifc layer  
				if (Weapon->FormSpecificLayers.Contains(AppearanceAttributeSet.FormTag))
				{
					LayerToUse = Weapon->FormSpecificLayers[AppearanceAttributeSet.FormTag];
				}

				MeshInstance->LinkAnimClassLayers(LayerToUse);
			}
		}
	}

}

void ANarrativeCharacterVisual::HandleUnWieldWeapon_Implementation(class UWeaponItem* Weapon)
{
	if(Weapon)
	{
		AttachWeaponVisual(Weapon, true);
		//ClearAnimBPOverride();
		
		if (USkeletalMeshComponent* MainMesh = GetMainMesh())
		{
			if (UAnimInstance* MeshInstance = MainMesh->GetAnimInstance())
			{
				MeshInstance->LinkAnimClassLayers(AppearanceAttributeSet.UnarmedAnimLayer);
			}
		}
	}
}

void ANarrativeCharacterVisual::HandleEquipClothing_Implementation(class UEquippableItem_Clothing* Clothing)
{
	if (Clothing)
	{
		SetMeshAppearance(Clothing->EquippableSlot, Clothing->ClothingMeshData);
	}
}

void ANarrativeCharacterVisual::HandleUnEquipClothing_Implementation(class UEquippableItem_Clothing* Clothing)
{
	if (Clothing)
	{
		ResetMeshToBaseAppearance(Clothing->EquippableSlot);
	}
}

void ANarrativeCharacterVisual::InitializeFromCharacter_Implementation(class ANarrativeCharacter* NarrativeCharacter, const FCharacterCreatorAttributeSet& Attributes)
{
	if (NarrativeCharacter && Attributes.BaseMesh)
	{
		OwnerCharacter = NarrativeCharacter;

		AppearanceAttributeSet = Attributes;

		//Store the form ID - this lets NPCs check whether we're female, male, orc, etc. 
		if (Attributes.FormTag.IsValid())
		{
			if (UAbilitySystemComponent* ASC = NarrativeCharacter->GetAbilitySystemComponent())
			{
				ASC->AddLooseGameplayTag(Attributes.FormTag);
			}
		}

		//Reset any previous appearance that may have been set 
		for (auto& MeshComp : MeshComponents)
		{
			if (MeshComp.Value)
			{
				MeshComp.Value->SetSkeletalMesh(nullptr);
			}
		}

		if (USkeletalMeshComponent* BaseCharacterMesh = NarrativeCharacter->GetMesh())
		{
			MeshComponents.Add(FNarrativeGameplayTags::Get().Equipment_Slot_Character_Mesh, BaseCharacterMesh);

			BaseCharacterMesh->SetVisibility(!Attributes.bHideBaseMesh);
			BaseCharacterMesh->SetSkeletalMesh(Attributes.BaseMesh);
			BaseCharacterMesh->SetAnimInstanceClass(Attributes.BaseMeshAnimBP);

			if (Attributes.UnarmedAnimLayer)
			{
				BaseCharacterMesh->LinkAnimClassLayers(Attributes.UnarmedAnimLayer);
			}

			//Attach ourselves to the character mesh
			AttachToComponent(BaseCharacterMesh, FAttachmentTransformRules::SnapToTargetIncludingScale);
		}

		//Load all the base meshes and materials, so we can tell owner when appearance is fully loaded. 
		TArray<FSoftObjectPath> MeshDataAssetPaths;

		for (auto& BodyPart : Attributes.Meshes)
		{
			auto& MeshData = BodyPart.Value;

			if (MeshData.Mesh.ToSoftObjectPath().IsValid())
			{
				MeshDataAssetPaths.Add(MeshData.Mesh.ToSoftObjectPath());
			}

			//Load the anim bp if this mesh needs one 
			if (!MeshData.bUseLeaderPose && MeshData.MeshAnimBP.ToSoftObjectPath().IsValid())
			{
				MeshDataAssetPaths.Add(MeshData.MeshAnimBP.ToSoftObjectPath());
			}

			for (auto& MeshMat : MeshData.MeshMaterials)
			{
				FSoftObjectPath MaterialPath = MeshMat.Material.ToSoftObjectPath();

				if (MaterialPath.IsValid())
				{
					MeshDataAssetPaths.Add(MaterialPath);
				}

			}
		}

		if(MeshDataAssetPaths.Num() > 0)
		{

			if (UAssetManager* Manager = UAssetManager::GetIfInitialized())
			{
				FStreamableDelegate MeshLoadDel = FStreamableDelegate::CreateUObject(this, &ANarrativeCharacterVisual::OnBaseMeshesReady);
				BaseAppearanceLoadHandle = Manager->LoadAssetList(MeshDataAssetPaths, MeshLoadDel);
			}
		}
		else
		{
			OnBaseMeshesReady();
		}
		////Create and set mesh components for all meshes specified in the appearance file 
		//for (auto& BodyPart : Attributes.Meshes)
		//{
		//	SetMeshAppearance(BodyPart.Key, BodyPart.Value);
		//}



		//for (auto& GroomPart : Attributes.Grooms)
		//{
		//	SetGroomAppearance(GroomPart.Key, GroomPart.Value);
		//}
	}
}

USkeletalMeshComponent* ANarrativeCharacterVisual::GetOrCreateMeshComponent(const FGameplayTag& Tag)
{
	if (MeshComponents.Contains(Tag))
	{
		return MeshComponents[Tag];
	}

	//If we dont have a mesh mapped, add one
	if (USkeletalMeshComponent* NewMesh = Cast<USkeletalMeshComponent>(AddComponentByClass(USkeletalMeshComponent::StaticClass(), false, FTransform::Identity, false)))
	{

		//Body meshes usually follow main character mesh - we want to tick them after the main mesh has update so any CopyPoseFromMesh anim nodes have the most up-to-date anim state and dont lag by one frame. 
		NewMesh->SetTickGroup(TG_PostPhysics);

		MeshComponents.Add(Tag, NewMesh);
		
		return NewMesh;
	}

	return nullptr; 
}

UGroomComponent* ANarrativeCharacterVisual::GetOrCreateGroomComponent(const FGameplayTag& Tag)
{
	if (GroomComponents.Contains(Tag))
	{
		return GroomComponents[Tag];
	}

	//If we dont have a mesh mapped, add one
	if (UGroomComponent* NewGroom = Cast<UGroomComponent>(AddComponentByClass(UGroomComponent::StaticClass(), true, FTransform::Identity, false)))
	{
		//Grooms need to attach to the head ideally 
		if (USkeletalMeshComponent* Face = GetFaceMesh())
		{
			NewGroom->AttachToComponent(Face, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		}
		else
		{
			NewGroom->AttachToComponent(GetBodyMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		}

		GroomComponents.Add(Tag, NewGroom);
		
		return NewGroom;
	}

	return nullptr; 
}

class USkeletalMeshComponent* ANarrativeCharacterVisual::GetLeaderMesh_Implementation()
{
	return GetMainMesh();
}

class USkeletalMeshComponent* ANarrativeCharacterVisual::GetMainMesh()
{
	return GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Character_Mesh);
}

class USkeletalMeshComponent* ANarrativeCharacterVisual::GetFaceMesh()
{
	return GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Face);
}

class USkeletalMeshComponent* ANarrativeCharacterVisual::GetBodyMesh()
{
	if (USkeletalMeshComponent* BodyMesh = GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Body))
	{
		return BodyMesh;
	}

	//If we don't have a body mesh, we are probably using the main mesh as the body mesh 
	return GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Character_Mesh);
}

void ANarrativeCharacterVisual::GetHeadMeshes(TArray<class UMeshComponent*>& OutHeadMeshes) const
{
	//All grooms need to be hidden
	for (auto& GroomComp : GroomComponents)
	{
		if (GroomComp.Value)
		{
			OutHeadMeshes.Add(GroomComp.Value);
		}
	}

	//Helmets, faces, and all facial hair needs hidden 
	OutHeadMeshes.Add(GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Face));
	OutHeadMeshes.Add(GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Helmet));
	OutHeadMeshes.Add(GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Mesh_Beard));
	OutHeadMeshes.Add(GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Mesh_Eyebrows));
	OutHeadMeshes.Add(GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Mesh_Eyelashes));
	OutHeadMeshes.Add(GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Mesh_Moustache));
	OutHeadMeshes.Add(GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Mesh_Fuzz));
	OutHeadMeshes.Add(GetMeshComponent(FNarrativeGameplayTags::Get().Equipment_Slot_Mesh_Hair));
}

bool ANarrativeCharacterVisual::AddWeaponVisual(class UWeaponItem* WeaponItem)
{
	if (IsValid(WeaponItem))
	{
		const FGameplayTag Slot = WeaponItem->EquippableSlot;

		//We need to async load the visual class and then spawn/attach it when the class is reayd
		RemoveWeaponVisual(Slot);

		if (UAssetManager* Manager = UAssetManager::GetIfInitialized())
		{
			if (WeaponLoadHandles.Contains(Slot))
			{
				if (WeaponLoadHandles[Slot].IsValid())
				{
					WeaponLoadHandles[Slot]->CancelHandle();
					WeaponLoadHandles[Slot].Reset();
				}
			}

			TArray<FSoftObjectPath> WeaponDataAssetPaths = {WeaponItem->WeaponVisualClass.ToSoftObjectPath()};

		    UE_LOG(LogNarrativeCharacterVisual, Verbose, TEXT("no defer needed, %s loading weapon visual %s at slot %s"), *(GetOwner()->GetHumanReadableName()), *WeaponItem->WeaponVisualClass.ToSoftObjectPath().ToString(), *Slot.ToString());

			FStreamableDelegate WeaponLoadDel = FStreamableDelegate::CreateUObject(this, &ANarrativeCharacterVisual::OnWeaponVisualClassReady, WeaponItem);
			TSharedPtr<FStreamableHandle> Handle = Manager->LoadAssetList(WeaponDataAssetPaths, WeaponLoadDel);
			WeaponLoadHandles.Add(Slot, Handle);

			return true; 
		}


	}

	return false; 
}

void ANarrativeCharacterVisual::AttachWeaponVisual(class UWeaponItem* WeaponItem, const bool bHolster)
{
	if (WeaponItem)
	{
		if (AActor* WeaponVisual = GetWeaponVisual(WeaponItem->EquippableSlot))
		{
			const FTransform AttachOffset = bHolster ? WeaponItem->WeaponVisualHolsteredAttachOffset : WeaponItem->WeaponVisualAttachOffset;
			const FName AttachSocket = bHolster ? WeaponItem->WeaponVisualHolsteredAttachBone : WeaponItem->WeaponVisualAttachBone;


			WeaponVisual->SetActorRelativeTransform(AttachOffset);

			USkeletalMeshComponent* ComponentToUse = nullptr;

			//If the socket exists on the body, try that, since body might be a retarget so attaching to main mesh wouldnt position weapon correctly.
			if (USkeletalMeshComponent* BodyMesh = GetBodyMesh())
			{
				if (BodyMesh->DoesSocketExist(AttachSocket))
				{
					ComponentToUse = BodyMesh;
				}
			}

			//Otherwise attach it the the main mesh as a fallback - we never want to not attach it. 
			if (!ComponentToUse)
			{
				if (USkeletalMeshComponent* MainMesh = GetMainMesh())
				{
					if (MainMesh->DoesSocketExist(AttachSocket))
					{
						ComponentToUse = MainMesh;
					}
				}
			}

			if (ComponentToUse)
			{
				WeaponVisual->AttachToComponent(ComponentToUse, FAttachmentTransformRules::KeepRelativeTransform, AttachSocket);
			}
			else
			{
				UE_LOG(LogNarrativeCharacterVisual, Verbose, TEXT("ANarrativeCharacterVisual::AttachWeaponVisual could not find a suitable mesh to attach your weapon to, as socket %s didn't exist."), *AttachSocket.ToString());
			}
		}
	}
}

void ANarrativeCharacterVisual::RemoveWeaponVisual(const FGameplayTag& WeaponSlot)
{
	if (SpawnedWeaponVisuals.Contains(WeaponSlot))
	{
		if (AActor* WeaponVisual = SpawnedWeaponVisuals[WeaponSlot])
		{
			WeaponVisual->Destroy();
		}
	}

	UE_LOG(LogNarrativeCharacterVisual, Verbose, TEXT("%s removing weapon visual at slot %s"), *(GetOwner()->GetHumanReadableName()), *WeaponSlot.ToString());

	SpawnedWeaponVisuals.Remove(WeaponSlot);
}

class AWeaponVisual* ANarrativeCharacterVisual::GetWeaponVisual(const FGameplayTag& WeaponSlot) const
{
	if (SpawnedWeaponVisuals.Contains(WeaponSlot))
	{
		return SpawnedWeaponVisuals[WeaponSlot];
	}

	return nullptr; 
}

void ANarrativeCharacterVisual::SetGroomAppearance(FGameplayTag Slot, const FCharacterCreatorAttribute_Groom& GroomData)
{
	//In order for groom attributes to not be hard loaded, we soft ref them, and as such need to load them now. 
	if (UAssetManager* Manager = UAssetManager::GetIfInitialized())
	{
		if (GroomLoadHandles.Contains(Slot))
		{
			if (GroomLoadHandles[Slot].IsValid())
			{
				GroomLoadHandles[Slot]->CancelHandle();
				GroomLoadHandles[Slot].Reset();
			}
		}

		TArray<FSoftObjectPath> GroomDataAssetPaths;

		if (GroomData.GroomAsset.ToSoftObjectPath().IsValid())
		{
			GroomDataAssetPaths.Add(GroomData.GroomAsset.ToSoftObjectPath());
		}

		if (GroomData.GroomBindingAsset.ToSoftObjectPath().IsValid())
		{
			GroomDataAssetPaths.Add(GroomData.GroomBindingAsset.ToSoftObjectPath());
		}

		for (auto& GroomMat : GroomData.GroomMaterials)
		{
			FSoftObjectPath MaterialPath = GroomMat.Material.ToSoftObjectPath();

			if (MaterialPath.IsValid())
			{
				GroomDataAssetPaths.Add(MaterialPath);
			}

		}

		FStreamableDelegate GroomLoadDel = FStreamableDelegate::CreateUObject(this, &ANarrativeCharacterVisual::OnGroomAppearanceReady, Slot, GroomData);
		TSharedPtr<FStreamableHandle> Handle = Manager->LoadAssetList(GroomDataAssetPaths, GroomLoadDel);
		GroomLoadHandles.Add(Slot, Handle);
	}
}

void ANarrativeCharacterVisual::SetMeshAppearance(FGameplayTag Slot, const FCharacterCreatorAttribute_Mesh& MeshData)
{
	//In order for mesh attributes to not be hard loaded, we soft ref them, and as such need to load them now. 
	if (UAssetManager* Manager = UAssetManager::GetIfInitialized())
	{
		if (MeshLoadHandles.Contains(Slot))
		{
			if (MeshLoadHandles[Slot].IsValid())
			{
				MeshLoadHandles[Slot]->CancelHandle();
				MeshLoadHandles[Slot].Reset();
			}
		}

		TArray<FSoftObjectPath> MeshDataAssetPaths;

		if (MeshData.Mesh.ToSoftObjectPath().IsValid())
		{
			MeshDataAssetPaths.Add(MeshData.Mesh.ToSoftObjectPath());
		}

		for (auto& MeshMat : MeshData.MeshMaterials)
		{
			FSoftObjectPath MaterialPath = MeshMat.Material.ToSoftObjectPath();

			if (MaterialPath.IsValid())
			{
				MeshDataAssetPaths.Add(MaterialPath);
			}

		}

		FStreamableDelegate MeshLoadDel = FStreamableDelegate::CreateUObject(this, &ANarrativeCharacterVisual::OnMeshAppearanceReady, Slot, MeshData);
		TSharedPtr<FStreamableHandle> Handle = Manager->LoadAssetList(MeshDataAssetPaths, MeshLoadDel);
		MeshLoadHandles.Add(Slot, Handle);
	}
}

void ANarrativeCharacterVisual::ResetMeshToBaseAppearance(FGameplayTag Slot)
{
	if (USkeletalMeshComponent* MeshComp = GetMeshComponent(Slot))
	{
		if (AppearanceAttributeSet.Meshes.Contains(Slot))
		{
			FCharacterCreatorAttribute_Mesh MeshData = AppearanceAttributeSet.Meshes[Slot];
			SetMeshAppearance(Slot, MeshData);
		}
		else //No attribute data exists for this slot, just clear it to empty 
		{
			MeshComp->SetSkeletalMesh(nullptr);
		}
	}
}

void ANarrativeCharacterVisual::OnBaseMeshesReady()
{
	bBaseAppearanceLoaded = true;

	UE_LOG(LogNarrativeCharacterVisual, Verbose, TEXT("%s: Applying base meshes"), *OwnerCharacter->GetHumanReadableName());

	for (auto& BodyPart : AppearanceAttributeSet.Meshes)
	{
		OnMeshAppearanceReady(BodyPart.Key, BodyPart.Value);
	}

	OnBaseAppearanceApplied.Broadcast();

	BaseAppearanceApplied();

	if (BaseAppearanceLoadHandle)
	{
		BaseAppearanceLoadHandle.Reset();
	}
}

void ANarrativeCharacterVisual::OnMeshAppearanceReady(FGameplayTag Slot, FCharacterCreatorAttribute_Mesh MeshData)
{
	if (MeshLoadHandles.Contains(Slot))
	{
		if (MeshLoadHandles[Slot].IsValid())
		{
			MeshLoadHandles[Slot]->CancelHandle();
		}
		MeshLoadHandles[Slot].Reset();
		MeshLoadHandles.Remove(Slot);
	}

	if (USkeletalMeshComponent* MeshComp = GetOrCreateMeshComponent(Slot))
	{
		//Want to to ensure it actually loaded 
		check((!MeshData.Mesh.ToSoftObjectPath().IsValid() || MeshData.Mesh.IsValid()));

		USkeletalMesh* MeshAsset = MeshData.Mesh.LoadSynchronous();

		if (OwnerCharacter)
		{
			UE_LOG(LogNarrativeCharacterVisual, Verbose, TEXT("%s: Setting slot %s mesh to %s"), *OwnerCharacter->GetHumanReadableName(), *Slot.ToString(), *GetNameSafe(MeshAsset));
		}


		MeshComp->SetSkeletalMesh(MeshAsset);

		if (MeshData.bUseLeaderPose)
		{
			MeshComp->SetLeaderPoseComponent(GetLeaderMesh());
		}
		else
		{
			MeshComp->SetLeaderPoseComponent(nullptr);
			MeshComp->SetAnimInstanceClass(MeshData.MeshAnimBP.LoadSynchronous());
		}

		if (IsValid(MeshAsset))
		{
			//Check if we have any custom materials to apply the newly created mesh
			for (int32 i = 0; i < MeshAsset->GetMaterials().Num(); ++i)
			{
				if (MeshData.MeshMaterials.IsValidIndex(i))
				{
					FCreatorMeshMaterial MeshMat = MeshData.MeshMaterials[i];

					//Set the material and apply parameters if required 
					if (MeshMat.VectorParams.Num() <= 0 && MeshMat.ScalarParams.Num() <= 0)
					{
						MeshComp->SetMaterial(i, MeshMat.Material.LoadSynchronous());
					}
					else
					{
						UMaterialInstanceDynamic* MID = MeshComp->CreateDynamicMaterialInstance(i, MeshMat.Material.LoadSynchronous());

						for (auto& VParam : MeshMat.VectorParams)
						{
							if (VParam.VectorTagID.IsValid())
							{
								const FLinearColor ParameterValue = AppearanceAttributeSet.GetVectorValue(VParam.VectorTagID);

								for (auto& VParamName : VParam.ParameterNames)
								{
									MID->SetVectorParameterValue(VParamName, ParameterValue);
								}
							}
						}

						for (auto& SParam : MeshMat.ScalarParams)
						{
							if (SParam.ScalarTagID.IsValid())
							{
								const float ParameterValue = AppearanceAttributeSet.GetScalarValue(SParam.ScalarTagID);

								for (auto& SParamName : SParam.ParameterNames)
								{
									MID->SetScalarParameterValue(SParamName, ParameterValue);
								}
							}
						}
					}
				}
			}

			//Set the morphs
			for (auto& Morph : MeshData.Morphs)
			{
				if (Morph.ScalarTag.IsValid())
				{
					const float MorphVal = AppearanceAttributeSet.GetScalarValue(Morph.ScalarTag);

					for (auto& MorphName : Morph.MorphNames)
					{
						MeshComp->SetMorphTarget(MorphName, MorphVal);
					}
				}
			}
		}
	}
}

void ANarrativeCharacterVisual::OnGroomAppearanceReady(FGameplayTag Slot, FCharacterCreatorAttribute_Groom GroomData)
{
	if (GroomLoadHandles.Contains(Slot))
	{
		if (GroomLoadHandles[Slot].IsValid())
		{
			GroomLoadHandles[Slot]->CancelHandle();
		}
		GroomLoadHandles[Slot].Reset();
		GroomLoadHandles.Remove(Slot);
	}

	if (UGroomComponent* Groom = GetOrCreateGroomComponent(Slot))
	{
		Groom->SetBindingAsset(GroomData.GroomBindingAsset.LoadSynchronous());
		Groom->SetGroomAsset(GroomData.GroomAsset.LoadSynchronous());

		//Check if we have any custom materials to apply the newly created groom - we dont async load groom mats but that should be okay as they are very small
		for (int32 i = 0; i < Groom->GetMaterials().Num(); ++i)
		{
			if (GroomData.GroomMaterials.IsValidIndex(i))
			{
				FCreatorMeshMaterial GroomMat = GroomData.GroomMaterials[i];

				Groom->SetMaterial(i, GroomMat.Material.LoadSynchronous());

				//Set the material and apply parameters if required 
				if (GroomMat.VectorParams.Num() <= 0 && GroomMat.ScalarParams.Num() <= 0)
				{
					Groom->SetMaterial(i, GroomMat.Material.LoadSynchronous());
				}
				else
				{
					UMaterialInstanceDynamic* MID = Groom->CreateDynamicMaterialInstance(i, GroomMat.Material.LoadSynchronous());

					for (auto& VParam : GroomMat.VectorParams)
					{
						if (VParam.VectorTagID.IsValid())
						{
							const FLinearColor ParameterValue = AppearanceAttributeSet.GetVectorValue(VParam.VectorTagID);

							for (auto& VParamName : VParam.ParameterNames)
							{
								MID->SetVectorParameterValue(VParamName, ParameterValue);
							}
						}
					}

					for (auto& SParam : GroomMat.ScalarParams)
					{
						if (SParam.ScalarTagID.IsValid())
						{
							const float ParameterValue = AppearanceAttributeSet.GetScalarValue(SParam.ScalarTagID);

							for (auto& SParamName : SParam.ParameterNames)
							{
								MID->SetScalarParameterValue(SParamName, ParameterValue);
							}
						}
					}
				}

			}
		}
	}
}

void ANarrativeCharacterVisual::OnWeaponVisualClassReady(class UWeaponItem* WeaponItem)
{
	if (WeaponItem)
	{
		FGameplayTag Slot = WeaponItem->EquippableSlot;
	
		if (WeaponLoadHandles.Contains(Slot))
		{
			if (WeaponLoadHandles[Slot].IsValid())
			{
				WeaponLoadHandles[Slot]->ReleaseHandle();
			}
			WeaponLoadHandles[Slot].Reset();
			WeaponLoadHandles.Remove(Slot);
		}

		check(WeaponItem->WeaponVisualClass.IsValid());

		if (WeaponItem->WeaponVisualClass)
		{
			if (AWeaponVisual* SpawnedWeaponVisual = GetWorld()->SpawnActorDeferred<AWeaponVisual>(WeaponItem->WeaponVisualClass.LoadSynchronous(), FTransform::Identity, this))
			{
				SpawnedWeaponVisual->CharacterOwner = OwnerCharacter;
				SpawnedWeaponVisual->WeaponOwner = WeaponItem;

				SpawnedWeaponVisuals.Add(Slot, SpawnedWeaponVisual);

				SpawnedWeaponVisual->FinishSpawning(FTransform::Identity, /*bIsDefaultTransform=*/ true);

				AttachWeaponVisual(WeaponItem, true);
			}
		}
	}
}

void ANarrativeCharacterVisual::BaseAppearanceApplied_Implementation()
{
	//Want to start loading grooms once the meshes are applied, otherwise they will have binding issues 
	for (auto& GroomPart : AppearanceAttributeSet.Grooms)
	{
		SetGroomAppearance(GroomPart.Key, GroomPart.Value);
	}
}

void ANarrativeCharacterVisual::SetAnimBPOverride(TSubclassOf<class UAnimInstance> NewAnimBP)
{
	if (IsValid(NewAnimBP))
	{
		GetMainMesh()->SetAnimInstanceClass(NewAnimBP);
	}
	else
	{
		GetMainMesh()->SetAnimInstanceClass(AppearanceAttributeSet.BaseMeshAnimBP);
	}
}

void ANarrativeCharacterVisual::ClearAnimBPOverride()
{
	SetAnimBPOverride(nullptr);
}

USkeletalMeshComponent* ANarrativeCharacterVisual::GetMeshComponent(const FGameplayTag& Slot) const
{
	if (MeshComponents.Contains(Slot))
	{
		return MeshComponents[Slot];
	}

	return nullptr; 
}

bool ANarrativeCharacterVisual::HasLoadHandles() const
{
	return WeaponLoadHandles.Num() > 0 || MeshLoadHandles.Num() > 0;
}
