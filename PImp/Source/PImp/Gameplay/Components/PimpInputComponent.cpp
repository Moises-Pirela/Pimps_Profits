#include "PimpInputComponent.h"
#include "EnhancedInputComponent.h"
#include "PimpMovementComponent.h"
#include "GameFramework/Character.h"

UPimpInputComponent::UPimpInputComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPimpInputComponent::SetupInput(UEnhancedInputComponent* EIC)
{
	if (!EIC) return;
	MovementComp = GetOwner()->FindComponentByClass<UPimpMovementComponent>();

	EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &UPimpInputComponent::HandleMove);
	EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &UPimpInputComponent::HandleLook);
	EIC->BindAction(JumpAction, ETriggerEvent::Started, this, &UPimpInputComponent::HandleJump);
	EIC->BindAction(JumpAction, ETriggerEvent::Completed, this, &UPimpInputComponent::HandleJump);
}

void UPimpInputComponent::HandleMove(const FInputActionValue& Value)
{
	if (!MovementComp) return;
	const FVector2D Input = Value.Get<FVector2D>();
	if (ACharacter* Char = Cast<ACharacter>(GetOwner()))
	{
		MovementComp->ApplyMovementInput(Input, Char->GetController());
	}
}

void UPimpInputComponent::HandleLook(const FInputActionValue& Value)
{
	const FVector2D LookVal = Value.Get<FVector2D>();
	if (ACharacter* Char = Cast<ACharacter>(GetOwner()))
	{
		Char->AddControllerYawInput(-LookVal.X);
		Char->AddControllerPitchInput(LookVal.Y);
	}
}

void UPimpInputComponent::HandleJump(const FInputActionValue& Value)
{
	if (ACharacter* Char = Cast<ACharacter>(GetOwner()))
	{
		if (Value.Get<bool>()) Char->Jump();
		else Char->StopJumping();
	}
}
