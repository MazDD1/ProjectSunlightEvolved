// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "Items/WeaponItem.h"
#include "RangedWeaponItem.generated.h"

/**
 * Base class for a ranged weapon - includes some properties that aren't required for melee based weapons 
 */
UCLASS()
class NARRATIVEARSENAL_API URangedWeaponItem : public UWeaponItem
{
	GENERATED_BODY()

protected:

	URangedWeaponItem();

	virtual void HandleWield_Implementation() override;
	virtual void HandleUnWield_Implementation() override;
	virtual void TickItem(const float DeltaTime) override;

	/** The hitscan ability will read this to configure itself */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	bool bAutomaticFire;

	/** The time between shots, hitscan ability configures itself with this */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	float RateOfFire;
	
	/** The FOV we should zoom in to as a percentage of the base FOV. 1=no zoom at all, 0.1 = huge amount of zoom */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon", meta = (ClampMin=0.1, ClampMax=1.0))
	float AimFOVPct;

	/** Base spread in degrees to add to the targeting transform of the weeapon.  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	float BaseSpreadDegrees;

	/** If moving at full speed, this amount of degrees will be added to spread. If half speed, half this amount, etc. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	float MoveSpeedAddDegrees;

	/** If crouched we'll multiply current weapon spread by this number.  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	float CrouchSpreadMultiplier;

	/** Amount we'll add to the spread when the weapon is fired */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	float SpreadFireBump;

	/** Max spread in degrees we'll allow */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	float MaxSpreadDegrees;

	/** Speed at which current spread returns to the base spread amount.  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|Ranged Weapon")
	float SpreadDecreaseSpeed;

	UPROPERTY(BlueprintReadOnly, Category = "Ranged Weapon")
	float CurrentSpread;

	/** Recoil impulse min to add  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|IK Weapon FX")
	FVector RecoilImpulseTranslationMin;

	/** Recoil impulse max to add  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|IK Weapon FX")
	FVector RecoilImpulseTranslationMax;

	/** HipRecoil impulse min to add  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|IK Weapon FX")
	FVector HipRecoilImpulseTranslationMin;

	/** HipRecoil impulse max to add  */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Config|IK Weapon FX")
	FVector HipRecoilImpulseTranslationMax;

	//The trace data we'll use when firing the weapon 
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Weapon|Config|Trace")
	FCombatTraceData TraceData;

	virtual FCombatTraceData GetTraceData() const override;
	virtual float GetAttackRange() const override;

	float GetWeaponSpread_Implementation() const override;

	//Called every tick whilst the weapon is wielded. 
	virtual void TickSpread(const float DeltaTime);

	virtual void OnAttack_Implementation() override;

public:

	//Get the percentage of the default FOV this weapon should use when aiming 
	UFUNCTION(BlueprintPure, Category = "Weapon")
	virtual float GetAimFOV() const;

	//Get a random recoil impulse that can be applied
	UFUNCTION(BlueprintPure, Category = "Weapon")
	FTransform GetRecoilImpulse() const;

};
