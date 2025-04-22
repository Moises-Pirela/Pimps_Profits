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
	MOTION_IDLE,
	MOTION_WALK,
	MOTION_SPRINT,
};

UCLASS()
class PNP_API APnPPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APnPPlayerCharacter();

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

	void Move(const FInputActionValue& pValue);
	void Look(const FInputActionValue& pValue);
	void Interact(const FInputActionValue& pValue);
	void ToggleSprint(const FInputActionValue& pValue);
	void Aim(const FInputActionValue& pValue);
	void CancelAim(const FInputActionValue& pValue);

	UPROPERTY(ReplicatedUsing = OnRep_CharacterState)
	TEnumAsByte<ECharacterLocomotionState> CharacterState;

	UPROPERTY(ReplicatedUsing = OnRep_CharacterAimState)
	TEnumAsByte<ECharacterAimState> CharacterAimState;

	UFUNCTION()
	void OnRep_CharacterState();

	UFUNCTION()
	void OnRep_CharacterAimState();

public:
	virtual void Tick(float pDeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* pPlayerInputComponent) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

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
	void ServerSetCharacterAimState(ECharacterAimState pNewState);
};
