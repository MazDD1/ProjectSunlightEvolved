// Copyright Narrative Tools 2025.


#include "Items/WeaponAttachmentItem.h"
#include "Items/WeaponItem.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "NarrativeLogChannels.h"
#include "Net/UnrealNetwork.h"

UWeaponAttachmentItem::UWeaponAttachmentItem()
{
	bUsedWithOtherItem = true; 
	WeaponOwnerIdx = -1;
	FOVOverride = -1.f; 
}

void UWeaponAttachmentItem::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWeaponAttachmentItem, WeaponOwner);
}

void UWeaponAttachmentItem::Serialize(FArchive& Ar)
{

	if (Ar.IsSaving())
	{
		//Store our weapon owner IDx so we can resolve our weapon owner when we load in later - we can save the weapon owner pointer directly as its a uobject 
		if (WeaponOwner)
		{
			if (OwningInventory)
			{
				WeaponOwnerIdx = OwningInventory->GetItems().Find(WeaponOwner);
			}
		}
	}

	Super::Serialize(Ar);
}

void UWeaponAttachmentItem::PostInventoryLoaded()
{
	//When our inventory items are all loaded back in we can reattach to our weapon owner - just need to find it. 
	if (OwningInventory && WeaponOwnerIdx >= 0)
	{
		TArray<UNarrativeItem*> Items = OwningInventory->GetItems();

		//TODO OwnerIdx can break if an item in our inventory was removed in an update. TODO add code to search for the item by iterating backwards and update our Idx.
		if (Items.IsValidIndex(WeaponOwnerIdx))
		{
			if (UWeaponItem* FoundOwner = Cast<UWeaponItem>(Items[WeaponOwnerIdx]))
			{
				//Dont set weaponowner directly - need to call UseItem so replication and everything is handled 
				if (HasAuthority())
				{
					OwningInventory->UseItem(this, FoundOwner);
				}
			}
		}
	}
}

void UWeaponAttachmentItem::Use(UNarrativeItem* OtherItem/*=nullptr*/)
{
	//Set the weapon visual back to the holstered socket and offset 
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		//Try add the weapon to other item, provided it wasnt the gun we just removed from 
		if (UWeaponItem* WeaponToAddTo = Cast<UWeaponItem>(OtherItem))
		{
			//Do we need to just unequip, or do we need to unequip, and then continue on to remove the next item 
			const bool bUnEquip = WeaponToAddTo == WeaponOwner;

			//Remove if we're currently on a gun
			if (WeaponOwner)
			{
				WeaponOwner->TryRemoveAttachment(this);

				if (bUnEquip)
				{
					return; 
				}
			}

			if (WeaponToAddTo)
			{
				WeaponToAddTo->TryAddAttachment(this);
			}

		}
		else //If we want to support not using attachments on anything 
		{
			if (WeaponOwner)
			{
				WeaponOwner->TryRemoveAttachment(this);
			}
			else if(UWeaponItem* EquippedWeapon = CharacterOwner->GetWeapon()) //If we have an equipped weapon we want to try add it to that
			{
				EquippedWeapon->TryAddAttachment(this);
			}
		}
	}
}

bool UWeaponAttachmentItem::CanUseItemWith_Implementation(class UNarrativeItem* TestItem) const
{
	if (UWeaponItem* WeaponToAddTo = Cast<UWeaponItem>(TestItem))
	{
		return WeaponToAddTo->WeaponAllowsAttachment(this);
	}

	return false; 
}

bool UWeaponAttachmentItem::ShouldUseOnAdd_Implementation() const
{
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		//Auto equip the attachment if our equipped weapon has a slot open for it 
		if (UWeaponItem* EquippedWeapon = CharacterOwner->GetWeapon())
		{
			if (!IsValid(EquippedWeapon->GetAttachment(WeaponAttachmentSlot)))
			{
				return true; 
			}
		}
	}

	return false; 
}

void UWeaponAttachmentItem::HandleAttach_Implementation(UWeaponItem* AttachingTo)
{

}

void UWeaponAttachmentItem::HandleDetach_Implementation(UWeaponItem* DetachingFrom)
{

}

void UWeaponAttachmentItem::SetWeaponOwner(UWeaponItem* InWeaponOwner)
{
	UWeaponItem* PrevOwner = WeaponOwner;
	//UE_LOG(LogNarrativeItem, Warning, TEXT("Prev item was %s"), *GetNameSafe(PrevOwner));
	WeaponOwner = InWeaponOwner;
	//UE_LOG(LogNarrativeItem, Warning, TEXT("Prev item is now %s"), *GetNameSafe(PrevOwner));
	OnRep_WeaponOwner(PrevOwner);
}

void UWeaponAttachmentItem::OnRep_WeaponOwner(class UWeaponItem* PreviousOwner)
{
	//UE_LOG(LogTemp, Warning, TEXT("on rep weapon owner is %s"), *GetNameSafe(PreviousOwner));
	//TODO Setactive calls are temporary so check shows on UI 
	if (WeaponOwner)
	{
		WeaponOwner->AddAttachment(this);
	}
	else if (PreviousOwner)
	{
		PreviousOwner->RemoveAttachment(this);
		WeaponOwner = nullptr; 
	}
}

float UWeaponAttachmentItem::OverrideWeaponFOV_Implementation() const
{
	return FOVOverride; 
}
