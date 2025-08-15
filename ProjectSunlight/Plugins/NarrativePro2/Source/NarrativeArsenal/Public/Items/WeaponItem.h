// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "EquippableItem.h"
#include "GAS/NarrativeCombatAbility.h"
#include "GAS/AttackComboAnimSet.h"
#include "WeaponItem.generated.h"

//Lets us defined the attachments a given weapon supports
USTRUCT(BlueprintType)
struct FWeaponAttachmentSlotConfig
{
	GENERATED_BODY()

	FWeaponAttachmentSlotConfig() {};

	//The bone or socket we want the attachment to equip to 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Slot Config")
	FName SocketName;

};

/**
 * Base class for an equippable weapon. Weapons don't generally have any attack logic in them, instead they grant abilities which have the logic. 
 */
UCLASS()
class NARRATIVEARSENAL_API UWeaponItem : public UEquippableItem
{
	GENERATED_BODY()

public:

	friend class UNarrativeCombatAbility;
	friend class ANarrativeCharacter; 
	friend class ANarrativeCharacterVisual;
	friend class ANarrativePlayerCharacter; 
	friend class UWeaponAttachmentItem;
	friend class AWeaponVisual;

	UWeaponItem();


protected:

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void HandleEquip_Implementation();
	virtual void HandleUnequip_Implementation();

	//Entry points for trying to add a weapon attachment to the weapon
	virtual bool TryAddAttachment(class UWeaponAttachmentItem* Attachment);
	virtual void TryRemoveAttachment(class UWeaponAttachmentItem* Attachment);

	//Actually adds the attachment - cannot fail unlike TryAddAttachment versions
	virtual void AddAttachment(class UWeaponAttachmentItem* Attachment);
	virtual void RemoveAttachment(class UWeaponAttachmentItem* Attachment);

	virtual void AddAttachmentVisual(class UWeaponAttachmentItem* Attachment);
	virtual void RemoveAttachmentVisual(class UWeaponAttachmentItem* Attachment);

	/** Test if we're allowed to attach a given attachment to this weapon */
	virtual bool WeaponAllowsAttachment(const class UWeaponAttachmentItem* Attachment) const;

	/** Called when our owner actually starts holding this weapon */
	UFUNCTION(BlueprintNativeEvent, Category = "Equippable")
	void HandleWield();
	virtual void HandleWield_Implementation();

	/** Called when our owner stops holding this weapon */
	UFUNCTION(BlueprintNativeEvent, Category = "Equippable")
	void HandleUnWield();
	virtual void HandleUnWield_Implementation();

	//Add/remove the armor and attack bonus ratings to GAS 
	virtual void ModifyEquipmentEffectSpec(struct FGameplayEffectSpec* Spec) override;
	virtual FString GetStringVariable_Implementation(const FString& VariableName) override;

	/** Anim BP we'll apply to the owner when the weapon is unholstered.  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Weapon Visuals")
	TSubclassOf<class UAnimInstance> WeaponAnimLayer;

	/** Form specific overrides for WeaponAnimLayer */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Weapon Visuals", meta = (ForceInlineRow, Categories = "Narrative.CharacterCreator.Forms"))
	TMap<FGameplayTag, TSubclassOf<class UAnimInstance>> FormSpecificLayers;

	/**Weapon visual actor to spawn*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Weapon Visuals")
	TSoftClassPtr<class AWeaponVisual> WeaponVisualClass;

	/**Weapon visual bone to attach to*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Weapon Visuals")
	FName WeaponVisualAttachBone;

	/**Weapon visual bone to attach to for holstered state */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Weapon Visuals")
	FName WeaponVisualHolsteredAttachBone;

	/** Weapon visual offset from attach */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Weapon Visuals")
	FTransform WeaponVisualAttachOffset;

	/** Weapon visual offset from attach for holster*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Weapon Visuals")
	FTransform WeaponVisualHolsteredAttachOffset;

	/** Allows us to define whether the pawn should follow the camera rotation with this weapon equipped. Bots will not apply this as they need their AIFocus to work. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon")
	bool bPawnFollowsControlRotation;

	/** Allows us to define whether the pawn orient their rotation to velocity with this weapon equipped. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon")
	bool bPawnOrientsRotationToMovement;

	/** base damage this weapon should do. It is up the combat ability whether it wants/needs this value. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Attack Settings")
	float AttackDamage;

	/** How much should base damage be multiplied for a heavy attack. It is up the combat ability whether it wants/needs this value, some weapons may not have heavy attacks. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Attack Settings")
	float HeavyAttackDamageMultiplier;

	/** Defines the attachment configuration for this weapon */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Attachments", meta = (Categories = "Narrative.Equipment.Weapon.AttachSlot"))
	TMap<FGameplayTag, FWeaponAttachmentSlotConfig> WeaponAttachmentConfiguration;


	/** Ammo item class for this weapon. Combat Ability will deny activation if we don't have the required ammo. 
	empty class means weapon can attack without ammo. This is in WeaponItem base class as any weapon should be able to support ammo, not just firearms. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Ammo")
	TSoftClassPtr<class UAmmoItem> RequiredAmmo;

	/** The clip size of the weapon, if the weapon uses one. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Weapon | Ammo")
	int32 ClipSize;

	/** The amount of ammo loaded into the clip of the weapon. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Item - Weapon | Ammo")
	int32 AmmoInClip;

	/** The attachment items currently on this weapon. */
	UPROPERTY(BlueprintReadOnly, Category = "Item - Weapon | Attachments")
	TMap<FGameplayTag, class UWeaponAttachmentItem*> WeaponAttachments;

	/** The amount of ammo loaded into the clip of the weapon. */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Weapon")
	float LastAttackTime;

	//Tell our weapon to use some ammo
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	bool ConsumeAmmo();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Weapon")
	float GetWeaponSpread() const;

	UFUNCTION()
	virtual void OnRep_WeaponAttachments();

public:

	//Update the ammo in our clip. 
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual bool Reload();

	//Get the attachment at the given slot if there is one 
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual class UWeaponAttachmentItem* GetAttachment(UPARAM(meta = (Categories = "Narrative.Equipment.Weapon.AttachSlot"))const FGameplayTag& AttachmentSlot) const;

	//Return the combo animations for a given attack type - by default this won't return any combo anims, weapons that need combos should override this. 
	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual TArray<UNarrativeAnimSet*> GetComboAnims(const bool bHeavyAttack) const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	bool IsHolstered() const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	bool WantsReload() const;

	bool HasAmmo() const;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Weapon")
	void OnAttack();

	UFUNCTION(BlueprintNativeEvent, Category = "Weapon")
	bool CanAttack() const;
	virtual bool CanAttack_Implementation() const;

	UFUNCTION(BlueprintPure, Category = "Weapon")
	virtual FCombatTraceData GetTraceData() const;

	//Used by bots to determine whether they are close enough to perform an attack with this weapon 
	UFUNCTION(BlueprintPure, Category = "Weapon")
	virtual float GetAttackRange() const;

	FName GetWeaponVisualAttachBone() const;
};
