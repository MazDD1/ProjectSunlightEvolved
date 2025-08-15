// Copyright Narrative Tools 2024. 


#include "Items/WeaponItem.h"
#include "Items/AmmoItem.h"
#include <AbilitySystemComponent.h>
#include <AbilitySystemGlobals.h>
#include <GameplayTagContainer.h>
#include <GameFramework/Character.h>
#include "NarrativeGameplayTags.h"
#include "Items/NarrativeItem.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include "Net/UnrealNetwork.h"
#include "ArsenalSettings.h"
#include <GameFramework/CharacterMovementComponent.h>
#include "UnrealFramework/NarrativePlayerCharacter.h"
#include "Character/NarrativeCharacterVisual.h"
#include <Engine/World.h>
#include "Items/WeaponAttachmentItem.h"
#include "Weapons/WeaponVisual.h"

#define LOCTEXT_NAMESPACE "WeaponItem"

#define ItemStat_Damage "Damage"

UWeaponItem::UWeaponItem()
{
	EquippableSlot = FNarrativeGameplayTags::Get().Equipment_Slot_Weapon_Back;
	WeaponVisualAttachBone = FName("hand_r");
	WeaponVisualHolsteredAttachBone = FName("Socket_Holster");

	bPawnFollowsControlRotation = false;
	bPawnOrientsRotationToMovement = true;

	Stats.Add(FNarrativeItemStat(LOCTEXT("DamageStatDisplayText", "Base Damage"), ItemStat_Damage, LOCTEXT("DamageStatDisplayTooltip", "The base damage this weapon deals.")));

	AttackDamage = 10.f;
	HeavyAttackDamageMultiplier = 1.6f;

	EquippableSlot = FNarrativeGameplayTags::Get().Equipment_Slot_Weapon_Back;

}

FString UWeaponItem::GetStringVariable_Implementation(const FString& VariableName)
{
	if (VariableName == ItemStat_Damage)
	{
		if (AttackDamage > 0.f)
		{
			return FString::SanitizeFloat(AttackDamage);
		}
		else
		{
			return FString();
		}
	}

	return Super::GetStringVariable_Implementation(VariableName);
}

void UWeaponItem::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWeaponItem, AmmoInClip);
}

bool UWeaponItem::TryAddAttachment(class UWeaponAttachmentItem* Attachment)
{
	if (WeaponAllowsAttachment(Attachment))
	{
		FGameplayTag AttachSlot = Attachment->WeaponAttachmentSlot;

		if (AttachSlot.IsValid())
		{
			//Unequip the old attachment should one exist
			if (WeaponAttachments.Contains(AttachSlot))
			{
				if (UWeaponAttachmentItem* ExistingAttachment = WeaponAttachments[AttachSlot])
				{
					ExistingAttachment->SetWeaponOwner(nullptr);
				}
			}

			//Tell the new weapon we're its owner and it can call AddAttachment()
			Attachment->SetWeaponOwner(this);

		}

	}

	return false; 
}

void UWeaponItem::TryRemoveAttachment(class UWeaponAttachmentItem* Attachment)
{
	if (IsValid(Attachment))
	{
		Attachment->SetWeaponOwner(nullptr);
	}
}

void UWeaponItem::AddAttachment(class UWeaponAttachmentItem* Attachment)
{
	if (IsValid(Attachment))
	{
		//Attach the weapons visual to the non-holster socket and set offset
		WeaponAttachments.Add(Attachment->WeaponAttachmentSlot, Attachment);
		OnItemModified.Broadcast();

		//Finally handle the weapon visual update
		AddAttachmentVisual(Attachment);
	}
}

void UWeaponItem::RemoveAttachment(class UWeaponAttachmentItem* Attachment)
{
	if (IsValid(Attachment))
	{
		Attachment->HandleDetach(this);

		WeaponAttachments.Remove(Attachment->WeaponAttachmentSlot);

		OnItemModified.Broadcast();

		RemoveAttachmentVisual(Attachment);
	}
}

void UWeaponItem::AddAttachmentVisual(class UWeaponAttachmentItem* Attachment)
{
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		if (AWeaponVisual* WeaponVisual = CharacterOwner->GetWeaponVisual(EquippableSlot))
		{
			if (WeaponAttachmentConfiguration.Contains(Attachment->WeaponAttachmentSlot))
			{
				WeaponVisual->HandleAddAttachment(Attachment, WeaponAttachmentConfiguration[Attachment->WeaponAttachmentSlot]);
				Attachment->HandleAttach(this);
			}
		}
	}
}

void UWeaponItem::RemoveAttachmentVisual(class UWeaponAttachmentItem* Attachment)
{
	//Attach the weapons visual to the non-holster socket and set offset
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		if (AWeaponVisual* WeaponVisual = CharacterOwner->GetWeaponVisual(EquippableSlot))
		{
			WeaponVisual->HandleRemoveAttachment(Attachment);
		}
	}
}

bool UWeaponItem::WeaponAllowsAttachment(const class UWeaponAttachmentItem* Attachment) const
{
	if (IsValid(Attachment))
	{
		return WeaponAttachmentConfiguration.Contains(Attachment->WeaponAttachmentSlot);
	}

	return false; 
}

void UWeaponItem::HandleWield_Implementation()
{
	//Attach the weapons visual to the non-holster socket and set offset
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		CharacterOwner->WieldWeapon(this);
	}
}

void UWeaponItem::HandleUnWield_Implementation()
{
	//Set the weapon visual back to the holstered socket and offset 
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		CharacterOwner->UnWieldWeapon(this);
	}
}

void UWeaponItem::ModifyEquipmentEffectSpec(FGameplayEffectSpec* Spec)
{
	Super::ModifyEquipmentEffectSpec(Spec);

	//Weapon item overrides this to add Attack Damage modifier to weapon equipment
	if (Spec)
	{
		Spec->SetSetByCallerMagnitude(FNarrativeGameplayTags::Get().SetByCaller_AttackDamage, AttackDamage);
	}
}

bool UWeaponItem::ConsumeAmmo()
{
	if (OwningInventory && OwningInventory->GetOwnerRole() >= ROLE_Authority)
	{
		if (UNarrativeItem* Ammo = OwningInventory->FindItemByClass(RequiredAmmo))
		{
			OwningInventory->ConsumeItem(Ammo);
			--AmmoInClip;
			MarkDirtyForReplication();
			return true;
		}
	}
	return false;
}

float UWeaponItem::GetWeaponSpread_Implementation() const
{
	return 0.f; 
}

void UWeaponItem::OnRep_WeaponAttachments()
{

}

bool UWeaponItem::Reload()
{
	if (!RequiredAmmo.IsNull())
	{
		if (OwningInventory)
		{
			if (UNarrativeItem* Ammo = OwningInventory->FindItemByClass(RequiredAmmo))
			{
				AmmoInClip = FMath::Min(Ammo->GetQuantity(), ClipSize);

				return true;
			}
		}
	}

	return false; 
}

class UWeaponAttachmentItem* UWeaponItem::GetAttachment(const FGameplayTag& AttachmentSlot) const
{
	if (WeaponAttachments.Contains(AttachmentSlot))
	{
		return WeaponAttachments[AttachmentSlot];
	}

	return nullptr; 
}

TArray<UNarrativeAnimSet*> UWeaponItem::GetComboAnims(const bool bHeavyAttack) const
{
	return {};
}

bool UWeaponItem::IsHolstered() const
{
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		return CharacterOwner->IsWeaponHolstered();
	}

	return true; 
}

bool UWeaponItem::WantsReload() const
{
	if (RequiredAmmo.IsNull())
	{
		return false;
	} 

	return AmmoInClip <= 0;
}

bool UWeaponItem::HasAmmo() const
{
	if (RequiredAmmo.IsNull())
	{
		return true;
	} 

    return AmmoInClip > 0;
}

void UWeaponItem::OnAttack_Implementation()
{
	if (World)
	{
		LastAttackTime = World->GetTimeSeconds();
	}
}

bool UWeaponItem::CanAttack_Implementation() const
{
	//Dont check ammo in clip because ability still needs to activate 
	return HasAmmo() && !IsHolstered();
}

FCombatTraceData UWeaponItem::GetTraceData() const
{
	return FCombatTraceData();
}

float UWeaponItem::GetAttackRange() const
{
	return 9999.f;
}

FName UWeaponItem::GetWeaponVisualAttachBone() const
{
	return WeaponVisualAttachBone;
}

void UWeaponItem::HandleEquip_Implementation()
{
	//Dont call super as that grants abilities and we actually want to do that when the weapon is wielded rather than equipped 
	//Super::HandleEquip_Implementation();
	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		ANarrativeCharacterVisual* CharVisual = CharacterOwner->GetCharacterVisual();

		checkf(IsValid(CharVisual), TEXT("Tried equipping a weapon before the CharVisual was initialized! This shouldn't happen."));

		if (IsValid(CharVisual))
		{
			CharVisual->AddWeaponVisual(this);
		}
	}
}

void UWeaponItem::HandleUnequip_Implementation()
{
	//Super::HandleUnequip_Implementation();

	if (ANarrativeCharacter* CharacterOwner = Cast<ANarrativeCharacter>(GetOwningPawn()))
	{
		//Check if the weapon that unequipped was the wielded one
		if (CharacterOwner->GetWeapon() == this)
		{
			CharacterOwner->SetEquippedWeapon(nullptr);
		}
		if (ANarrativeCharacterVisual* CharVisual = CharacterOwner->GetCharacterVisual())
		{
			CharVisual->RemoveWeaponVisual(EquippableSlot);
		}
	}
}

#undef LOCTEXT_NAMESPACE
