#pragma once

#include "CoreMinimal.h"
#include "PimpCharacterBase.h"
#include "InputActionValue.h"
#include "PimpPlayerCharacter.generated.h"

class UInputMappingContext;
class UInputAction;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class PIMP_API APimpPlayerCharacter : public APimpCharacterBase
{
	GENERATED_BODY()

public:
	APimpPlayerCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// === CAMERA ===
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera")
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera")
	UCameraComponent* FollowCamera;

	// === ENHANCED INPUT ===
	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputAction* JumpAction;

	// === CAMERA TUNING ===
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	float BaseTurnRate = 45.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	float BaseLookUpRate = 45.f;
	FVector2D   LastMovementInput;

	UPROPERTY(EditAnywhere, Category="TurnInPlace")
	float TurnInPlaceThreshold_90 = 45.f;

	UPROPERTY(EditAnywhere, Category="TurnInPlace")
	float TurnInPlaceThreshold_180 = 135.f;

	UPROPERTY(EditAnywhere, Category="TurnInPlace")
	float TurnCheckInterval = 0.1f;

	UPROPERTY(EditAnywhere, Category="TurnInPlace")
	UAnimMontage* TurnLeft90Montage;

	UPROPERTY(EditAnywhere, Category="TurnInPlace")
	UAnimMontage* TurnRight90Montage;

	UPROPERTY(EditAnywhere, Category="TurnInPlace")
	UAnimMontage* TurnLeft180Montage;

	UPROPERTY(EditAnywhere, Category="TurnInPlace")
	UAnimMontage* TurnRight180Montage;

	FTimerHandle TurnCheckTimer;
	bool bCanTurnInPlace = true;

	// === INTERNAL ===
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);

	void CheckTurnInPlace();

	UFUNCTION(NetMulticast, Unreliable)
	void PlayTurnInPlaceMontage(bool bTurnRight, bool bIs180);

public:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
