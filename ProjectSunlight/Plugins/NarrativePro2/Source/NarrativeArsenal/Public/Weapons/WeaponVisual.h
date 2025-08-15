// Copyright Narrative Tools 2025.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapons/WeaponAnimPose.h"
#include "GameplayTagContainer.h"
#include "WeaponVisual.generated.h"

UCLASS()
class NARRATIVEARSENAL_API AWeaponVisual : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponVisual();

	virtual void BeginPlay() override; 

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	class USkeletalMeshComponent* WeaponMesh;

protected:
	// Collection of cached damage state data. The key is the SourceObject of the AnimNotifyEventReference and the value is the array of elements cached for sweep checks.
	TMap<const FAnimNotifyEvent*, FDamageStateDataContainer> CachedDamageStateData;
	
	// Cached attachments meshes for attachments that are added to the weapon - BPReadWrite so we can suport having "Default" attachments, like IronSights. 
	UPROPERTY(BlueprintReadWrite, Category = "Attachments")
	TMap<FGameplayTag, class UStaticMeshComponent*> AttachmentMeshComps;

	// Attachment meshes will have their mesh set to this if no attachment is equipped in that slot
	UPROPERTY(BlueprintReadWrite, Category = "Attachments")
	TMap<FGameplayTag, class UStaticMesh*> AttachmentMeshDefaultMeshes;

	// The latest notify event that will be used for collision checks
	UPROPERTY()
	FAnimNotifyEventReference CurrentNotifyEvent;

	UPROPERTY()
	TArray<FWeaponCollisionData> CollisionData;

	//Register a default attachment on the weapon, like ironsights. 
	UFUNCTION(BlueprintCallable, Category = "Attachments")
	void RegisterDefaultAttachment(const FGameplayTag& Slot, class UStaticMeshComponent* Mesh);

public:

	UFUNCTION(BlueprintNativeEvent, Category = "Attachments")
	void HandleAddAttachment(class UWeaponAttachmentItem* Attachment, const FWeaponAttachmentSlotConfig& WeaponSlotConfig);

	UFUNCTION(BlueprintNativeEvent, Category = "Attachments")
	void HandleRemoveAttachment(class UWeaponAttachmentItem* Attachment);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Visual")
	class ACharacter* CharacterOwner;
	
	//The weapon item that created this weapon visual when it was equipped 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Visual")
	class UWeaponItem* WeaponOwner;

	//Allows us to use the weapons geometry in some way to sweep for hits. 
	UFUNCTION(BlueprintCallable, meta=(AutoCreateRefTerm="ActorsToIgnore"), Category = "Weapon Visual")
	bool SweepForHits(const FVector& Start, const FVector& End, const FQuat& Rot, const FVector& CapsuleSize, const TArray<AActor*>&
	                  ActorsToIgnore, TArray<FHitResult>& OutHits);

	// Caches animation socket data for retrieval at a later time. 
	UFUNCTION(BlueprintCallable, meta=(AutoCreateRefTerm="SocketName"), Category = "Weapon Visual | Attack Caching")
	void CacheAnimationTransform(const FAnimNotifyEventReference& AnimNotifyEventRef);

	// Performs a collision sweep on current and previous animation data that has not been calculated yet. This ensures that collision is accurate when at low framerate.
	UFUNCTION(BlueprintCallable, Category = "Weapon Visual | Attack Caching")
	void PerformCollisionCheck(TArray<FHitResult>& OutHits);

	// Cleans up attack data so that it is ready to be used again
	UFUNCTION(BlueprintCallable, Category = "Weapon Visual | Attack Caching")
	void CleanupAttackData();
	
	/**
	 * Caches collision data so that we can query collision while performing attacks.
	 * @param bForceUpdate Whether we want to forcefully generate collision data even if it was already done
	 */
	UFUNCTION(BlueprintCallable, Category = "Weapon Visual | Attack Caching")
	void CacheCollisionData(bool bForceUpdate);

	// Fetches all primitives that will be considered for collision during sweep melee attacks
	UFUNCTION(BlueprintNativeEvent, Category = "Weapon Visual | Attack Caching")
	TArray<UPrimitiveComponent*> GetCollidingPrimitives();
};
