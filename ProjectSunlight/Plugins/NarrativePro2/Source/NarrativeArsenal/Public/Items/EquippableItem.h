// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "NarrativeItem.h"
#include "GameplayTagContainer.h"
#include <GameplayEffect.h>
#include "CharacterCreator/CharacterCreatorAttributes.h"
#include "EquippableItem.generated.h"

/**
 * The base class for an equippable item the player can put on. Networking is built right in.
 */
UCLASS()
class NARRATIVEARSENAL_API UEquippableItem : public UNarrativeItem
{
	GENERATED_BODY()
	
protected:

	friend class UEquipmentComponent;
	friend class ANarrativeCharacterVisual;

	UEquippableItem();

	/**Allows you to override what equipping the item does. By default this sets the players mesh to the Equippable Mesh, but perhaps
	you want a weapon actor to spawn in, or have an equippable aura effect that follows the player. by overriding HandleEquip you can 
	do whatever custom logic you want. */
	UFUNCTION(BlueprintNativeEvent, Category = "Equippable")
	void HandleEquip();
	virtual void HandleEquip_Implementation();

	/**Allows you to override what happens when the item unequips. */
	UFUNCTION(BlueprintNativeEvent, Category = "Equippable")
	void HandleUnequip();
	virtual void HandleUnequip_Implementation();

	virtual void Activated_Implementation() override;
	virtual void Deactivated_Implementation() override;

	//Add/remove the armor and attack bonus ratings to GAS 
	virtual void ApplyEquipmentAttributes();
	virtual void RemoveEquipmentAttributes();

	//Overridable in case children want to do anything with the spec - weapon items for example need to modify the spec to add damage. 
	virtual void ModifyEquipmentEffectSpec(struct FGameplayEffectSpec* Spec);

	virtual bool ShouldUseOnAdd_Implementation() const override;

	virtual FString GetStringVariable_Implementation(const FString& VariableName) override;

	/**The slot this item equips to*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Equippable", meta = (Categories = "Narrative.Equipment.Slot"))
	FGameplayTag EquippableSlot;

	// Gameplay effect to apply when the item is equipped, removed when item is taken off. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Equippable")
	TSubclassOf<UGameplayEffect> EquipmentModGE;

	//The handle to the equipment gameplay effect that applies the equipments attributes to our player. 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Equippable")
	struct FActiveGameplayEffectHandle EquipmentGEHandle;

	//TODO maybe move these to GameplayEffectContainers similar to epics RPG sample instead of hardcoded vars. 

	/**The amount we'll increase the wearers attack rating by when this item is equipped */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Equippable")
	float AttackRating;

	/**The amount we'll increase the wearers armor rating by when this item is equipped */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Equippable")
	float ArmorRating;

	/**The amount we'll increase the wearers stealth rating by when item is equipped  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Equippable")
	float StealthRating;

	/*Equipping this item will grant these abilities to the user; we'll remove them when the item is unequipped
	Note that WeaponItems grant the abilities when wielded, not when equipped. */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Item - Equippable")
	TArray<TSubclassOf<class UNarrativeGameplayAbility>> Abilities;

	/** A value denoting how "good" the item is to AI - they will prefer to equip higher score equipment. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Equippable | AI")
	float AIEquipmentScore;

};

/**
 * Defines a clothing item. Will use the skeletal mesh set in your EquipmentComponent and set it to the clothing mesh you select.
 */
UCLASS()
class NARRATIVEARSENAL_API UEquippableItem_Clothing : public UEquippableItem
{
	GENERATED_BODY()

protected:

	friend class ANarrativeCharacterVisual;

	UEquippableItem_Clothing();

	#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	#endif 

	virtual void HandleEquip_Implementation() override;
	virtual void HandleUnequip_Implementation() override;

	UFUNCTION()
	virtual void ApplyClothingMesh();

	/**The mesh to apply to the player */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item - Equippable | Clothing Mesh")
	FCharacterCreatorAttribute_Mesh ClothingMeshData;

};