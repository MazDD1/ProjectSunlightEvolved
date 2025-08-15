// Copyright Narrative Tools 2024. 

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UnrealFramework/NarrativeCharacter.h"
#include <Curves/CurveFloat.h>
#include "NarrativeCharacterMovement.generated.h"

UENUM(BlueprintType)
enum ENarrativeCustomMovementMode
{
	CMOVE_None			UMETA(Hidden),
	CMOVE_Climb			UMETA(DisplayName = "Climb"),
	CMOVE_MAX			UMETA(Hidden),
};


UENUM(BlueprintType)
enum class ENarrativeClimbMode : uint8
{
	Idle,	// Motionless hang on Climb Surface
	Strafe, // Lateral Strafing along Climb Surface
	Jump,	// Planar Jump Transition to new Climb Surface
	JumpWarping,	// Jump using motion warping to reach target 
	Mantling, // Climbing up to the top of a ledge 
	Turn,	// Corner Turn Transition to new Climb Surface
};


/**
 * Custom movement component for Narrative Pro. 
 */
UCLASS()
class NARRATIVEARSENAL_API UNarrativeCharacterMovement : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	static const inline ECollisionChannel ECC_NarrativeClimbable = ECC_GameTraceChannel3;

public:
	UNarrativeCharacterMovement();

protected:
	virtual void InitializeComponent() override;
	virtual void PhysCustom(float deltaTime, int32 Iterations) override;
	virtual float VisualizeMovement() const;
	virtual bool CanAttemptJump() const;

public:
	virtual void UpdateFromCompressedFlags(uint8 Flags) override;
	virtual void UpdateCharacterStateBeforeMovement(float DeltaSeconds) override;
	virtual class FNetworkPredictionData_Client* GetPredictionData_Client() const override;

public:
	virtual void SetMovementMode(EMovementMode NewMovementMode, uint8 NewCustomMode = 0) override;
	virtual float GetMaxSpeed() const override;


	// ======== SPRINT ========
public:

	//Units per second we should travel at when sprinting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprint")
	float SprintSpeed;

	//Units per second we should travel at when walking 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Walking")
	float SlowWalkSpeed;

	uint8 bWantsSprint : 1;

	/**Request to start sprinting*/
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	void StartSprinting();

	/**Request to stop sprinting*/
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	void StopSprinting();

	/**Return true if we are moving forward - used by sprint ability 
	@param ForwardAngleTolerance the angle degrees we can be off by and still be considered to be moving forwards */
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	bool IsMovingForward(const float ForwardAngleTolerance=10.f) const;

	/**Return true if we are sprinting  */
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	bool IsSprinting() const;
	
	/**Return true if we are slow walking  */
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	bool IsSlowWalking() const;

	/**Return true if movement is locked*/
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	bool IsMovementLocked() const;

	/**Set our mirror component*/
	UFUNCTION(BlueprintCallable, Category = "Sprint")
	void SetMirrorComponent(class UNarrativeCharacterMovement* MirrorCMC);

	// ======== CLIMB ========

	// Parameters

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Climb")
	bool bCanExitClimbStrafe = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Climb")
	float LastLocalYInput = 0.f;
	
protected:

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbForwardSearchDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbWallOffset; // horizontal offset distance

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbHangOffset; // vertical hang offset distance

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbSurfaceReattachDistance; // distance at which old climb surface resets (prevents instantly reclimbing on same surface)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbStrafeSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbRotationSpeedDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbJumpReachDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbJumpReachWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbMaxLedgeAngleDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	FVector ClimbLocalAscendTransitionBoost; // controls the climb surface ascent spring transition

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	FVector ClimbLocalDecendTransitionBoost; // controls the climb surface decent spring transition

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbTurnReachDepth;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbJumpZVelocity;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float TurnJumpZVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	float ClimbJumpHorizontalVelocity;
	
	//Montage to play when we want to climb up from edge 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb - Hop")
	TObjectPtr<class UAnimMontage> ClimbMantleMontage;

	//Montage to play when we want to jump upwards - need montage since anim sequences dont work 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb - Hop")
	TObjectPtr<class UAnimMontage> HopUpMontage;

	//Montage to play when we want to jump down
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb - Hop")
	TObjectPtr<class UAnimMontage> HopDownMontage;

	//Montage to play when we want to jump left
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb - Hop")
	TObjectPtr<class UAnimMontage> HopLeftMontage;

	//Montage to play when we want to jump right
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb - Hop")
	TObjectPtr<class UAnimMontage> HopRightMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	UCurveFloat* ClimbTransitionSpeedFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Climb")
	UCurveFloat* ClimbTransitionForceFactor;

	//We'll copy move speeds etc from this component if set. 
	UPROPERTY()
	TObjectPtr<class UNarrativeCharacterMovement> MirrorMovement;

private:
	// Wall point the capsule is "attached" to, with rotation corresponding to X-Axis = -WallNormal and Z-Axis = LedgeUpVector
	UPROPERTY(VisibleAnywhere, Category = "Climb")
	FTransform ClimbSurface;

	// Previous climb surface, either a fractional step in behind strafe point or the previous climb point we are transitioning from
	UPROPERTY(VisibleAnywhere, Category = "Climb")
	FTransform PreviousClimbSurface;

	// UPROPERTY(VisibleAnywhere)
	// bool bTransitioning;

	UPROPERTY(VisibleAnywhere, Category = "Climb")
	ENarrativeClimbMode ClimbMode;

	UPROPERTY(VisibleAnywhere, Category = "Climb")
	ENarrativeClimbMode DesiredClimbMode;

	UPROPERTY()
	bool bIsWarping;

	FTimerHandle TH_IsWarping;

	// State
private:
	// Whether or not the player can enter climbing movement mode
	bool CanClimb() const;

	// Old surface saved to prevent reclimbing on same surface
	bool HasOldClimbSurface() const;
	void TryResetOldClimbSurface();

	// Gateway to climbing movement mode
	void TryEnterClimb();
	
	// Attempt to find climb surface when currently not in climbing
	TOptional<FTransform> TryFindNewClimbSurface() const;

	// Non-Physics Climbing Update
	void UpdateClimbStateBeforeMovement();


	// Climbing Helper Functions
private:
	TOptional<FTransform> TryFindClimbSurface(FTransform Start, FCollisionShape Shape, float Distance, bool bOnTick = true) const;
	void SetClimbSurface(FTransform InClimbSurface);
	ENarrativeClimbMode ComputeDesiredClimbMode() const;
	bool CanClimbTransitionFinish() const;
	void HandleClimbJump();
	float GetClimbMaxJumpHeight() const;
	TOptional<FTransform> TryFindMantleSurface(FVector2D InputDirection) const;
	TOptional<FTransform> TryFindClimbJumpSurface(FVector2D InputDirection) const;
	TOptional<FTransform> TryFindClimbTurnSurface(FVector2D InputDirection) const;
	
	// Movement
private:
	// Root climb physics function, delegates to either strafe or transition physics
	void PhysClimb(float deltaTime, int32 Iterations);

	// Climb Physics Helper Functions
private:
	TOptional<FTransform> RecomputeStrafeClimbSurface(float DesiredStrafe) const;
	FTransform GetClimbCapsuleTargetTransform(FTransform InClimbSurface) const;
	FTransform GetWarpClimbCapsuleTargetTransform(FTransform InClimbSurface) const;
	FVector ResolveSpringVelocity(FTransform TargetTransform, float deltaTime);
	FQuat ResolveClimbRotation(FQuat TargetRotation, float deltaTime);

	UFUNCTION()
	void RemoveClimbWarpingMode();
	UFUNCTION()
	void RemoveClimbWarpingModeEndClimb();

	// Getters / Helpers
public:

	UFUNCTION(BlueprintPure, Category = "Climb")
	bool IsTransitionClimbMode() const { return ClimbMode == ENarrativeClimbMode::Jump || ClimbMode == ENarrativeClimbMode::Turn || ClimbMode == ENarrativeClimbMode::JumpWarping || ClimbMode == ENarrativeClimbMode::Mantling; }

	UFUNCTION(BlueprintPure, Category = "Climb")
	bool IsClimbing() const { return IsCustomMovementMode(CMOVE_Climb); }

	UFUNCTION(BlueprintPure, Category = "Climb")
	FTransform GetClimbSurface() const { return ClimbSurface; }

	UFUNCTION(BlueprintPure, Category = "Climb")
	FTransform GetPreviousClimbSurface() const { return PreviousClimbSurface; }

	UFUNCTION(BlueprintPure, Category = "Climb")
	ENarrativeClimbMode GetClimbMode() const { return ClimbMode; }

	UFUNCTION(BlueprintPure, Category = "Climb")
	ENarrativeClimbMode GetDesiredClimbMode() const { return DesiredClimbMode; }

public:

	UFUNCTION(BlueprintPure, Category = "NarrativeCharacterMovement")
	bool IsCustomMovementMode(ENarrativeCustomMovementMode InCustomMovementMode) const;

	UFUNCTION(BlueprintPure, Category = "NarrativeCharacterMovement")
	bool IsMovementMode(EMovementMode InMovementMode) const;

	UFUNCTION(BlueprintPure, Category = "NarrativeCharacterMovement")
	FVector2D GetLocalInputVector() const;

	UFUNCTION(BlueprintPure, Category = "NarrativeCharacterMovement")
	FORCEINLINE ANarrativeCharacter* GetNarrativeCharacterOwner() const {return NarrativeCharacterOwner;};

	UFUNCTION(BlueprintPure, Category = "NarrativeCharacterMovement")
	FORCEINLINE UNarrativeCharacterMovement* GetMirrorMovement() const {return MirrorMovement;};


	// Internal Getters / Helpers
private:
	bool IsServer() const;
	float CapR() const;
	float CapHH() const;
	// Get the 2D input vector W = +X, S = -X, A = +Y, D = -Y (and any combination)

	FCollisionQueryParams GetIgnoreCharacterParams() const;

	UPROPERTY(Transient, DuplicateTransient) 
	ANarrativeCharacter* NarrativeCharacterOwner;
};

class FSavedMove_NarrativeCharacter : public FSavedMove_Character
{
public:

	typedef FSavedMove_Character Super;

	virtual bool CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const override;
	virtual uint8 GetCompressedFlags() const override;
	virtual void SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character & ClientData) override;
	virtual void PrepMoveFor(class ACharacter* Character) override;
	virtual void Clear() override;

	uint8 bSavedWantsSprint : 1;
};

class FNetworkPredictionData_Client_NarrativeCharacter : public FNetworkPredictionData_Client_Character
{
public:
	FNetworkPredictionData_Client_NarrativeCharacter(const UCharacterMovementComponent& ClientMovement);

	typedef FNetworkPredictionData_Client_Character Super;

	virtual FSavedMovePtr AllocateNewMove() override;
};