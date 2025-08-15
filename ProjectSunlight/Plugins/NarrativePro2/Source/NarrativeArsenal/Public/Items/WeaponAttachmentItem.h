// Copyright Narrative Tools 2025.

#pragma once

#include "CoreMinimal.h"
#include "Items/NarrativeItem.h"
#include "WeaponAttachmentItem.generated.h"

/**
 * An item that can be attached to a WeaponItem in order to modify its functionality and/or visuals 
 */
UCLASS()
class NARRATIVEARSENAL_API UWeaponAttachmentItem : public UNarrativeItem
{
	GENERATED_BODY()
	
protected:

	friend class UWeaponItem;
	friend class AWeaponVisual;

	UWeaponAttachmentItem();
	
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void Serialize(FArchive& Ar) override; 
	virtual void PostInventoryLoaded() override; 

	//Temporary - we will just add the attachment to the equipped weapon when used 
	virtual void Use(UNarrativeItem* OtherItem=nullptr) override;
	virtual bool CanUseItemWith_Implementation(class UNarrativeItem* TestItem) const override;
	virtual bool ShouldUseOnAdd_Implementation() const override;

	/** Handle any logic the attachment wants on Attach */
	UFUNCTION(BlueprintNativeEvent, Category = "Attachments")
	void HandleAttach(UWeaponItem* AttachingTo);
	virtual void HandleAttach_Implementation(UWeaponItem* AttachingTo);

	/** Handle any logic the attachment wants on Attach */
	UFUNCTION(BlueprintNativeEvent, Category = "Attachments")
	void HandleDetach(UWeaponItem* DetachingFrom);
	virtual void HandleDetach_Implementation(UWeaponItem* DetachingFrom);

	virtual void SetWeaponOwner(UWeaponItem* WeaponOwner);

	UFUNCTION()
	void OnRep_WeaponOwner(class UWeaponItem* PreviousOwner);

	/** The weapon this attachment is current attached to - null if not attached*/
	UPROPERTY(ReplicatedUsing = OnRep_WeaponOwner, BlueprintReadOnly, Category= "Attachments")
	TObjectPtr<class UWeaponItem> WeaponOwner;

	/** Our owners IDx in the inventory. We cache this so we can restore WeaponOwner when attachment loads back in. TODO if item gets removed from game this idx may break - perhaps assign each item FGUID of some kind?  */
	UPROPERTY(SaveGame, BlueprintReadOnly, Category= "Attachments")

	int32 WeaponOwnerIdx;

	//The slot this attachment should equip to on the weapon 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon Attachment", meta = (Categories = "Narrative.Equipment.Weapon.AttachSlot"))
	FGameplayTag WeaponAttachmentSlot;

	//The mesh that we should create and attach to the gun - TODO soft ref and load this 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon Attachment")
	TObjectPtr<UStaticMesh> AttachmentMesh;

	//If non negative value will act as an FOV override for ADS 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon Attachment | FOV")
	float FOVOverride;

public:

	/** Lets the attachment override the FOV if desired. */
	UFUNCTION(BlueprintNativeEvent, Category = "Attachments")
	float OverrideWeaponFOV() const;

};
