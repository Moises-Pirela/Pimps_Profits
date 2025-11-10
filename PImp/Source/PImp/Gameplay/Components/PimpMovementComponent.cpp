#include "PimpMovementComponent.h"
#include "GameFramework/Character.h"

UPimpMovementComponent::UPimpMovementComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPimpMovementComponent::BeginPlay()
{
	Super::BeginPlay();
	if (ACharacter* Char = Cast<ACharacter>(GetOwner()))
	{
		MoveComp = Char->GetCharacterMovement();
	}
}

void UPimpMovementComponent::ApplyMovementInput(const FVector2D& Input, AController* Controller)
{
	if (!MoveComp || !Controller) return;
	LastInput = Input;

	const FRotator ControlRot = Controller->GetControlRotation();
	const FRotator YawRot(0.f, ControlRot.Yaw, 0.f);

	const FVector Forward = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
	const FVector Right   = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);

	if (ACharacter* Char = Cast<ACharacter>(GetOwner()))
	{
		Char->AddMovementInput(Forward, Input.Y);
		Char->AddMovementInput(Right, Input.X);
	}
}

void UPimpMovementComponent::UpdateRotation(float DeltaTime)
{
	if (!MoveComp || MoveComp->Velocity.Size2D() <= 0) return;

	ACharacter* OwnerChar = Cast<ACharacter>(GetOwner());
	AController* Controller = OwnerChar ? OwnerChar->GetController() : nullptr;
	if (!Controller || LastInput.IsNearlyZero())
		return;

	const FRotator ControlRot = Controller->GetControlRotation();
	const FRotator YawRot(0.f, ControlRot.Yaw, 0.f);

	const FVector Forward = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
	const FVector Right   = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);

	const FVector DesiredDir = (Forward * LastInput.Y + Right * LastInput.X).GetSafeNormal();
	if (DesiredDir.IsNearlyZero())
		return;

	const FRotator TargetRot = DesiredDir.Rotation();
	const FRotator NewRot = FMath::RInterpTo(
		OwnerChar->GetActorRotation(),
		TargetRot,
		DeltaTime,
		RotationInterpSpeed
	);

	OwnerChar->SetActorRotation(NewRot);
}

