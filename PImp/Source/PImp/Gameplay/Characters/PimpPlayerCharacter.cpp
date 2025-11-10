#include "PimpPlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "GameFramework/PlayerController.h"

APimpPlayerCharacter::APimpPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	// --- CAMERA ---
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 350.f;
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->bEnableCameraLag = true;
	CameraBoom->CameraLagSpeed = 10.f;
	CameraBoom->SocketOffset = FVector(0.f, 60.f, 40.f);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	// --- MOVEMENT ---
	UCharacterMovementComponent* MoveComp = GetCharacterMovement();
	MoveComp->bOrientRotationToMovement = true;
	MoveComp->RotationRate = FRotator(0.f, 540.f, 0.f);
	MoveComp->MaxWalkSpeed = 450.f;
	MoveComp->BrakingDecelerationWalking = 2000.f;
	MoveComp->AirControl = 0.3f;
}

void APimpPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// --- APPLY ENHANCED INPUT CONTEXT ---
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void APimpPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!LastMovementInput.IsNearlyZero() && GetCharacterMovement()->Velocity.Size2D() > 0.f)
	{
		const FRotator ControlRot = Controller ? Controller->GetControlRotation() : FRotator::ZeroRotator;
		const FRotator YawRot(0.f, ControlRot.Yaw, 0.f);
	
		const FVector Forward = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
		const FVector Right   = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);
	
		const FVector DesiredDir = (Forward * LastMovementInput.Y + Right * LastMovementInput.X).GetSafeNormal();
	
		if (!DesiredDir.IsNearlyZero())
		{
			const FRotator TargetRot = DesiredDir.Rotation();
			const FRotator SmoothedRot = FMath::RInterpTo(GetActorRotation(), TargetRot, DeltaTime, 8.f);
			SetActorRotation(SmoothedRot);
		}
	}
}

void APimpPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APimpPlayerCharacter::Move);
		EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &APimpPlayerCharacter::Look);
		EIC->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EIC->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
	}
}

void APimpPlayerCharacter::Move(const FInputActionValue& Value)
{
	const FVector2D MoveInput = Value.Get<FVector2D>();
	LastMovementInput = MoveInput;

	if (Controller && (MoveInput.SizeSquared() > 0.f))
	{
		const FRotator ControlRot = Controller->GetControlRotation();
		const FRotator YawRot(0.f, ControlRot.Yaw, 0.f);

		const FVector Forward = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
		const FVector Right   = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);

		AddMovementInput(Forward, MoveInput.Y);
		AddMovementInput(Right, MoveInput.X);
	}
}

void APimpPlayerCharacter::Look(const FInputActionValue& Value)
{
	const FVector2D LookValue = Value.Get<FVector2D>();
	AddControllerYawInput(-LookValue.X * BaseTurnRate * GetWorld()->GetDeltaSeconds());
	AddControllerPitchInput(LookValue.Y * BaseLookUpRate * GetWorld()->GetDeltaSeconds());

	//CheckTurnInPlace();
}

void APimpPlayerCharacter::CheckTurnInPlace()
{
	if (!bCanTurnInPlace || !Controller)
		return;

	const float Speed = GetVelocity().Size2D();
	if (Speed > 10.f)
		return;

	const FRotator ControlRot = Controller->GetControlRotation();
	const FRotator ActorRot = GetActorRotation();

	const float YawDelta = FMath::FindDeltaAngleDegrees(ActorRot.Yaw, ControlRot.Yaw);
	const float AbsDelta = FMath::Abs(YawDelta);

	if (AbsDelta > TurnInPlaceThreshold_90)
	{
		PlayTurnInPlaceMontage(YawDelta > 0.f, false);
	}
	else if (AbsDelta > TurnInPlaceThreshold_180)
	{
		PlayTurnInPlaceMontage(YawDelta > 0.f, true);
	}
}

void APimpPlayerCharacter::PlayTurnInPlaceMontage_Implementation(bool bTurnRight, bool bIs180)
{
	UAnimInstance* AnimInstance = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr;
	if (!AnimInstance)
		return;

	UAnimMontage* MontageToPlay = nullptr;

	if (bTurnRight)
	{
		MontageToPlay = bIs180 ? TurnRight180Montage : TurnRight90Montage;
	}
	else
	{
		MontageToPlay = bIs180 ? TurnLeft180Montage : TurnLeft90Montage;
	}

	if (MontageToPlay)
	{
		AnimInstance->Montage_Play(MontageToPlay, MontageToPlay->CalculateSequenceLength());
		bCanTurnInPlace = false;

		UE_LOG(LogTemp, Warning, TEXT("Has Root Motion? %s"), GetMesh()->GetAnimInstance()->GetCurrentActiveMontage()->HasRootMotion() ? TEXT("YES") : TEXT("NO"));


		const float Duration = 1.0f;
		FTimerHandle ResetHandle;
		GetWorldTimerManager().SetTimer(
			ResetHandle,
			FTimerDelegate::CreateLambda([this]()
			{
				bCanTurnInPlace = true;
			}),
			Duration, false);
	}
}
	

