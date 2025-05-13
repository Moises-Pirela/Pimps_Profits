// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "PnP/Components/PnPBusinessManagerComponent.h"
#include "PnP/Components/PnPCharacterStatsComponent.h"
#include "PnP/Components/PnPInteractionComponent.h"
#include "PnP/Components/PnPInventoryComponent.h"
#include "PnP/Components/PnPNetworkIdentityComponent.h"
#include "PnPPlayerCharacter.generated.h"

UENUM(BlueprintType)
enum ECharacterAimState : uint8
{
	AIM_NONE,
	AIM_FOCUSED
};

UENUM(BlueprintType)
enum ECharacterLocomotionState : uint8
{
	MOTION_GROUNDED,
	MOTION_IN_AIR,
	MOTION_RAGDOLL,
	MOTION_LANDED,
};

UENUM(BlueprintType)
enum EGaitState : uint8
{
	GAIT_NORMAL,
	GAIT_SPRINT,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnterAimState);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeaveAimState);

UCLASS()
class PNP_API APnPPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APnPPlayerCharacter();

	UPROPERTY(EditAnywhere)
	float LandedTime;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPCharacterStatsComponent* StatsComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPInventoryComponent* InventoryComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPInteractionComponent* InteractionComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPBusinessManagerComponent* BusinessComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PNP | Components", meta = (AllowPrivateAccess = "true"))
	UPnPNetworkIdentityComponent* NetworkComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* InteractAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SprintAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* ZoomAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* AimAction;

	UPROPERTY(BlueprintAssignable, Category = "Aim|Events")
	FOnEnterAimState OnEnterAimState;
	UPROPERTY(BlueprintAssignable, Category = "Aim|Events")
	FOnLeaveAimState OnLeaveAimState;

	FTimerHandle LandedTimer;

	void Move(const FInputActionValue& pValue);
	void Look(const FInputActionValue& pValue);
	void Interact(const FInputActionValue& pValue);
	void ToggleSprint(const FInputActionValue& pValue);
	void Aim(const FInputActionValue& pValue);
	void CancelAim(const FInputActionValue& pValue);

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CharacterState)
	TEnumAsByte<ECharacterLocomotionState> CharacterState;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_GaitState)
	TEnumAsByte<EGaitState> GaitState;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_CharacterAimState)
	TEnumAsByte<ECharacterAimState> CharacterAimState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float WalkSpeed = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float SprintSpeed = 600.0f;
	

	UFUNCTION()
	void OnRep_CharacterState();

	UFUNCTION()
	void OnRep_CharacterAimState();
	
	UFUNCTION()
	void OnRep_GaitState();
	

public:
	virtual void Tick(float pDeltaTime) override;

	virtual void Jump() override;

	virtual void Landed(const FHitResult& Hit) override;

	void OnFinishLandedTimer();

	virtual void OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode = 0) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* pPlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable)
	void GetAimOffsets(float& Pitch, float& Yaw);

	FORCEINLINE USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UFUNCTION(BlueprintCallable, Category = "Character")
	UPnPCharacterStatsComponent* GetStatsComponent() const { return StatsComponent; }

	UFUNCTION(BlueprintCallable, Category = "Character")
	UPnPInventoryComponent* GetInventoryComponent() const { return InventoryComponent; }

	UFUNCTION(BlueprintCallable, Category = "Character")
	UPnPInteractionComponent* GetInteractionComponent() const { return InteractionComponent; }

	UFUNCTION(BlueprintCallable, Category = "Character")
	UPnPBusinessManagerComponent* GetBusinessComponent() const { return BusinessComponent; }

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetCharacterState(ECharacterLocomotionState pNewState);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetCharacterMovementState(EGaitState pNewState);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetCharacterAimState(ECharacterAimState pNewState);
};
