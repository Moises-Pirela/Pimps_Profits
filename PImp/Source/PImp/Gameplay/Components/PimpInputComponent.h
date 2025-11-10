#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputActionValue.h"
#include "PimpInputComponent.generated.h"

class UEnhancedInputComponent;
class UInputMappingContext;
class UInputAction;
class UPimpMovementComponent;

UCLASS(ClassGroup=(Pimp), meta=(BlueprintSpawnableComponent))
class PIMP_API UPimpInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPimpInputComponent();

protected:
	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputMappingContext* MappingContext;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputAction* MoveAction;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category="Input")
	UInputAction* JumpAction;

	UPROPERTY()
	UPimpMovementComponent* MovementComp;

public:
	void SetupInput(UEnhancedInputComponent* EIC);
	UInputMappingContext* GetMappingContext() const { return MappingContext; }

private:
	void HandleMove(const FInputActionValue& Value);
	void HandleLook(const FInputActionValue& Value);
	void HandleJump(const FInputActionValue& Value);
};
