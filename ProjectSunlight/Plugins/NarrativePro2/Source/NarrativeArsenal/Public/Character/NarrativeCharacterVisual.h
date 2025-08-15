// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <GameplayTagContainer.h>
#include <Components/SkeletalMeshComponent.h>
#include <Engine/StreamableManager.h>
#include "CharacterCreator/CharacterCreatorAttributes.h"
#include <GroomComponent.h>
#include "NarrativeCharacterVisual.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharacterAppearanceEvent);


/**Seperates the appearance behavior out from NarrativeCharacter. Also handles asyncronously loading the assets before they are applied to the character. */
UCLASS(Blueprintable, BlueprintType)
class NARRATIVEARSENAL_API ANarrativeCharacterVisual : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	ANarrativeCharacterVisual();

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Narrative|Components")
	TObjectPtr<class USceneComponent> CharacterVisualRoot;

	virtual void Destroyed();

	//Define what should happen to the character visual when a weapon is equipped. 
	UFUNCTION(BlueprintNativeEvent, Category = "Character Visual")
	void HandleWieldWeapon(class UWeaponItem* Weapon);
	virtual void HandleWieldWeapon_Implementation(class UWeaponItem* Weapon);

	//Define what should happen to the character visual when a weapon is equipped. 
	UFUNCTION(BlueprintNativeEvent, Category = "Character Visual")
	void HandleUnWieldWeapon(class UWeaponItem* Weapon);
	virtual void HandleUnWieldWeapon_Implementation(class UWeaponItem* Weapon);

	//Define what should happen to the character visual when a clothing item is equipped 
	UFUNCTION(BlueprintNativeEvent, Category = "Character Visual")
	void HandleEquipClothing(class UEquippableItem_Clothing* Clothing);
	virtual void HandleEquipClothing_Implementation(class UEquippableItem_Clothing* Clothing);

		//Define what should happen to the character visual when a clothing item is UnEquipped 
	UFUNCTION(BlueprintNativeEvent, Category = "Character Visual")
	void HandleUnEquipClothing(class UEquippableItem_Clothing* Clothing);
	virtual void HandleUnEquipClothing_Implementation(class UEquippableItem_Clothing* Clothing);

	//Handle wielding a weapon
	UFUNCTION(BlueprintNativeEvent, Category = "Character Visual")
	void InitializeFromCharacter(class ANarrativeCharacter* NarrativeCharacter, const FCharacterCreatorAttributeSet& Attributes);
	virtual void InitializeFromCharacter_Implementation(class ANarrativeCharacter* NarrativeCharacter, const FCharacterCreatorAttributeSet& Attributes);

		//Returns our weapon visual. This just a generic actor that each weapon item defines, and holds the weapons static mesh and FX assets. 
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	class AWeaponVisual* GetWeaponVisual(UPARAM(meta = (Categories = "Narrative.Equipment.Slot.Weapon"))const FGameplayTag& WeaponSlot) const;

	virtual void SetGroomAppearance(FGameplayTag Slot, const FCharacterCreatorAttribute_Groom& GroomData);
	virtual void SetMeshAppearance(FGameplayTag Slot, const FCharacterCreatorAttribute_Mesh& MeshData);
	virtual void ResetMeshToBaseAppearance(FGameplayTag Slot);

	FCharacterAppearanceEvent OnBaseAppearanceApplied;

	//Called after base meshes are set
	UFUNCTION(BlueprintNativeEvent, Category = "Character Visual")
	void BaseAppearanceApplied();
	virtual void BaseAppearanceApplied_Implementation();

	bool bBaseAppearanceLoaded;

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacterVisual")
	virtual void SetAnimBPOverride(TSubclassOf<class UAnimInstance> NewAnimBP);

	UFUNCTION(BlueprintCallable, Category = "Narrative|NarrativeCharacterVisual")
	virtual void ClearAnimBPOverride();

	//Return the mesh at the provided slot. 
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	USkeletalMeshComponent* GetMeshComponent(UPARAM(meta = (Categories = "Narrative.Equipment.Slot.Mesh"))const FGameplayTag& Slot) const;

	//Check whether the visual has any assets its trying to load right now to apply  for
	UFUNCTION(BlueprintPure, Category = "Narrative|Getters/Setters")
	bool HasLoadHandles() const;

protected:

	UFUNCTION()
	virtual void OnBaseMeshesReady();

	//UFUNCTION()
	//virtual void OnDeferredMeshesReady();

	//UFUNCTION()
	//virtual void OnDeferredWeaponsReady();

	UFUNCTION()
	virtual void OnMeshAppearanceReady(FGameplayTag Slot, FCharacterCreatorAttribute_Mesh MeshData);

	UFUNCTION()
	virtual void OnGroomAppearanceReady(FGameplayTag Slot, FCharacterCreatorAttribute_Groom GroomData);

	UFUNCTION()
	virtual void OnWeaponVisualClassReady(class UWeaponItem* WeaponItem);

	USkeletalMeshComponent* GetOrCreateMeshComponent(const FGameplayTag& Tag);
	UGroomComponent* GetOrCreateGroomComponent(const FGameplayTag& Tag);

	/**Our default appearance attribute set*/
	UPROPERTY()
	FCharacterCreatorAttributeSet AppearanceAttributeSet;

	/**Points to Character*/
	UPROPERTY()
	TObjectPtr<class ANarrativeCharacter> OwnerCharacter;

	/**We store our async load requests in here*/
	TSharedPtr<FStreamableHandle> BaseAppearanceLoadHandle; 
	//TSharedPtr<FStreamableHandle> DeferredWeaponsHandle; 
	//TSharedPtr<FStreamableHandle> DeferredMeshesHandle; 

	TMap<FGameplayTag, TSharedPtr<FStreamableHandle>> GroomLoadHandles;
	TMap<FGameplayTag, TSharedPtr<FStreamableHandle>> MeshLoadHandles;
	TMap<FGameplayTag, TSharedPtr<FStreamableHandle>> WeaponLoadHandles;

	//We need to defer applying any meshes or weapons until our base appearance is loaded so base appearance doesn't override them - those go in here 
	UPROPERTY(VisibleAnywhere, Category = "Character Visual")
	TArray<TObjectPtr<UEquippableItem_Clothing>> DeferredMeshes;

	UPROPERTY(VisibleAnywhere, Category = "Character Visual")
	TArray<TObjectPtr<UWeaponItem>> DeferredWeapons;

	/**The skeletal meshes added to the visual */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character Visual")
	TMap<FGameplayTag, class USkeletalMeshComponent*> MeshComponents;

	/**The grooms added to this visual. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Character Visual")
	TMap<FGameplayTag, class UGroomComponent*> GroomComponents;

	/**Spawned weapon visuals, can be accessed via map */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Character Visual")
	TMap<FGameplayTag, TObjectPtr<class AWeaponVisual>> SpawnedWeaponVisuals;

protected:

	friend class UWeaponItem;

	//Spawn a weapon visual, attach to us 
	UFUNCTION(BlueprintCallable, Category = "Character Visual")
	bool AddWeaponVisual(class UWeaponItem* WeaponItem);

	UFUNCTION(BlueprintCallable, Category = "Character Visual")
	void AttachWeaponVisual(class UWeaponItem* WeaponItem, const bool bHolster);

	UFUNCTION(BlueprintCallable, Category = "Character Visual")
	void RemoveWeaponVisual(UPARAM(meta = (Categories = "Narrative.Equipment.Slot.Weapon"))const FGameplayTag& WeaponSlot);

public:

	//The mesh that clothing pieces will follow if desired. Returns Character.GetMesh() by default. 
	UFUNCTION(BlueprintPure, BlueprintNativeEvent, Category = "Character Visual")
	class USkeletalMeshComponent* GetLeaderMesh();
	virtual class USkeletalMeshComponent* GetLeaderMesh_Implementation();

	UFUNCTION(BlueprintPure, Category = "Character Visual")
	class USkeletalMeshComponent* GetMainMesh();
	
	//Return the face mesh - can be null, your character doesn't require a face mesh 
	UFUNCTION(BlueprintPure, Category = "Character Visual")
	class USkeletalMeshComponent* GetFaceMesh();

	//Return the body mesh 
	UFUNCTION(BlueprintPure, Category = "Character Visual")
	class USkeletalMeshComponent* GetBodyMesh();

	
	//Return all meshes considered to be "head meshes". These meshes will be hidden when the camera clips into the head, typically because we're in first person mode. 
	UFUNCTION(BlueprintPure, Category = "Character Visual")
	void GetHeadMeshes(TArray<class UMeshComponent*>& OutHeadMeshes) const;
};
