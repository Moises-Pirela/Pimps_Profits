// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPPlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"
#include "PnP/Components/PnPBusinessManagerComponent.h"
#include "PnP/Components/PnPCharacterStatsComponent.h"
#include "PnP/Components/PnPInteractionComponent.h"
#include "PnP/Components/PnPInventoryComponent.h"
#include "PnP/Utils/Logger.h"


APnPPlayerCharacter::APnPPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 400.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("1P_Camera"));
	FirstPersonCamera->SetupAttachment(GetMesh(), FName("head"));
	FirstPersonCamera->bUsePawnControlRotation = true; 

	StatsComponent = CreateDefaultSubobject<UPnPCharacterStatsComponent>(TEXT("StatsComponent"));
	BusinessComponent = CreateDefaultSubobject<UPnPBusinessManagerComponent>(TEXT("BusinessComponent"));

	MoveAction = ConstructorHelpers::FObjectFinder<UInputAction>(TEXT("/Game/_PNP/Gameplay/Input/CharacterInput/IA_Move.IA_Move")).Object;
	LookAction = ConstructorHelpers::FObjectFinder<UInputAction>(TEXT("/Game/_PNP/Gameplay/Input/CharacterInput/IA_Look.IA_Look")).Object;
	JumpAction = ConstructorHelpers::FObjectFinder<UInputAction>(TEXT("/Game/_PNP/Gameplay/Input/CharacterInput/IA_Jump.IA_Jump")).Object;
	InteractAction = ConstructorHelpers::FObjectFinder<UInputAction>(TEXT("/Game/_PNP/Gameplay/Input/CharacterInput/IA_Interact.IA_Interact")).Object;
	SprintAction = ConstructorHelpers::FObjectFinder<UInputAction>(TEXT("/Game/_PNP/Gameplay/Input/CharacterInput/IA_Sprint.IA_Sprint")).Object;
	AimAction = ConstructorHelpers::FObjectFinder<UInputAction>(TEXT("/Game/_PNP/Gameplay/Input/CharacterInput/IA_Aim.IA_Aim")).Object;

	bReplicates = true;

	ACharacter::SetReplicateMovement(true);
}

void APnPPlayerCharacter::BeginPlay()
{
	LastCameraLocation = FirstPersonCamera->GetRelativeLocation();
	LastCameraRotation = FirstPersonCamera->GetRelativeRotation();

	InteractionComponent = GetComponentByClass<UPnPInteractionComponent>();
	InventoryComponent = GetComponentByClass<UPnPInventoryComponent>();
	
	Super::BeginPlay();
}

void APnPPlayerCharacter::OnRep_CharacterAimState()
{
}

void APnPPlayerCharacter::Tick(const float pDeltaTime)
{
	Super::Tick(pDeltaTime);

	float finalMoveSpeed = (GaitState == GAIT_SPRINT) ? SprintSpeed : WalkSpeed;

	GetCharacterMovement()->MaxWalkSpeed = finalMoveSpeed;

	if (IsLocallyControlled())
	{
		if (bSmoothCamera)
		{
			const FVector currentLocation = FirstPersonCamera->GetRelativeLocation();
			const FRotator currentRotation = FirstPersonCamera->GetRelativeRotation();

			const FVector smoothedLocation = FMath::VInterpTo(LastCameraLocation, currentLocation, pDeltaTime, CameraSmoothingSpeed);
			const FRotator smoothedRotation = FMath::RInterpTo(LastCameraRotation, currentRotation, pDeltaTime, CameraSmoothingSpeed);
        
			FirstPersonCamera->SetRelativeLocationAndRotation(smoothedLocation, smoothedRotation);
        
			LastCameraLocation = smoothedLocation;
			LastCameraRotation = smoothedRotation;
		}

		const float targetFOV = (CharacterAimState == AIM_FOCUSED) ? 75.0f : 120.0f;

		if (targetFOV != FirstPersonCamera->FieldOfView)
		{
			const float interpSpeed = 10.0f;
    
			float newFOV = FMath::FInterpTo(
				FirstPersonCamera->FieldOfView, 
				targetFOV, 
				pDeltaTime, 
				interpSpeed
			);

			FirstPersonCamera->SetFieldOfView(newFOV);
    
			if (!FMath::IsNearlyEqual(FirstPersonCamera->FieldOfView, newFOV, 0.01f))
			{
				FirstPersonCamera->SetFieldOfView(targetFOV);
			}	
		}
	}


	if (IsLocallyControlled())
		InteractionComponent->PerformInteractionTrace(FirstPersonCamera->GetComponentLocation(), FirstPersonCamera->GetForwardVector());
}

void APnPPlayerCharacter::Jump()
{
	if (CharacterState == MOTION_GROUNDED)
		Super::Jump();
}

void APnPPlayerCharacter::Landed(const FHitResult& Hit)
{
	Super::Landed(Hit);

	if (GetLocalRole() == ROLE_Authority)
	{
		CharacterState = ECharacterLocomotionState::MOTION_LANDED;
	}
	else
	{
		ServerSetCharacterState(MOTION_LANDED);
	}

	GetWorld()->GetTimerManager().SetTimer(LandedTimer, this, &APnPPlayerCharacter::OnFinishLandedTimer, LandedTime);
}

void APnPPlayerCharacter::OnFinishLandedTimer()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		CharacterState = ECharacterLocomotionState::MOTION_GROUNDED;
	}
	else
	{
		ServerSetCharacterState(MOTION_GROUNDED);
	}
}

void APnPPlayerCharacter::OnMovementModeChanged(EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	Super::OnMovementModeChanged(PrevMovementMode, PreviousCustomMode);

	if (GetCharacterMovement()->MovementMode == MOVE_Falling)
	{
		if (GetLocalRole() == ROLE_Authority)
		{
			CharacterState = ECharacterLocomotionState::MOTION_IN_AIR;
		}
		else
		{
			ServerSetCharacterState(MOTION_IN_AIR);
		}
	}
}

void APnPPlayerCharacter::Move(const FInputActionValue& pValue)
{
	if (Controller != nullptr && CharacterState == MOTION_GROUNDED)
	{
		const FVector2D movementVector = pValue.Get<FVector2D>();

		const FRotator rotation = Controller->GetControlRotation();
		const FRotator yawRotation(0, rotation.Yaw, 0);

		const FVector forwardDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::X);
		const FVector rightDirection = FRotationMatrix(yawRotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(forwardDirection, movementVector.Y);
		AddMovementInput(rightDirection, movementVector.X);
	}
}

void APnPPlayerCharacter::Look(const FInputActionValue& pValue)
{
	if (Controller != nullptr)
	{
		const FVector2D lookAxisVector = pValue.Get<FVector2D>();

		AddControllerYawInput(lookAxisVector.X);
		AddControllerPitchInput(lookAxisVector.Y);

		CameraPitch = FMath::Clamp(CameraPitch + lookAxisVector.Y, -18, 18.0f);
	}
}

void APnPPlayerCharacter::Interact(const FInputActionValue& pValue)
{
	InteractionComponent->ServerBeginInteraction();
}

void APnPPlayerCharacter::ToggleSprint(const FInputActionValue& pValue)
{
	bool bShouldSprint = GaitState != GAIT_SPRINT;

	if (GetLocalRole() == ROLE_Authority)
	{
		if (bShouldSprint)
		{
			GaitState = GAIT_SPRINT;
		}
		else
		{
			GaitState = GAIT_NORMAL;
		}
	}
	else
	{
		EGaitState newState = bShouldSprint ? GAIT_SPRINT : GAIT_NORMAL;
		ServerSetCharacterMovementState(newState);
	}
}

void APnPPlayerCharacter::Aim(const FInputActionValue& pValue)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		CharacterAimState = AIM_FOCUSED;
	}
	else
	{
		ServerSetCharacterAimState(AIM_FOCUSED);
	}

	if (OnEnterAimState.IsBound())
		OnEnterAimState.Broadcast();
}

void APnPPlayerCharacter::CancelAim(const FInputActionValue& pValue)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		CharacterAimState = AIM_NONE;
	}
	else
	{
		ServerSetCharacterAimState(AIM_NONE);
	}

	if (OnLeaveAimState.IsBound())
		OnLeaveAimState.Broadcast();
}

void APnPPlayerCharacter::SetupPlayerInputComponent(UInputComponent* pPlayerInputComponent)
{
	Super::SetupPlayerInputComponent(pPlayerInputComponent);

	if (APlayerController* playerController = Cast<APlayerController>(GetController()))
	{
		UEnhancedInputLocalPlayerSubsystem* _subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
			playerController->GetLocalPlayer());
		if (_subsystem)
		{
			_subsystem->ClearAllMappings();
			_subsystem->AddMappingContext(StandardMappingContext, 0);
		}
	}

	if (UEnhancedInputComponent* enhancedInputComponent = CastChecked<
		UEnhancedInputComponent>(pPlayerInputComponent))
	{
		// Movement
		enhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APnPPlayerCharacter::Move);

		// Looking
		enhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APnPPlayerCharacter::Look);

		// Jumping
		enhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		enhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Interaction
		enhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this,
		                                      &APnPPlayerCharacter::Interact);

		// Sprinting
		enhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Started, this,
		                                      &APnPPlayerCharacter::ToggleSprint);
		enhancedInputComponent->BindAction(SprintAction, ETriggerEvent::Completed, this,
		                                      &APnPPlayerCharacter::ToggleSprint);

		// Aiming
		enhancedInputComponent->BindAction(AimAction, ETriggerEvent::Started, this, &APnPPlayerCharacter::Aim);
		enhancedInputComponent->BindAction(AimAction, ETriggerEvent::Completed, this,
		                                      &APnPPlayerCharacter::CancelAim);

		// Primary Fire
		//_enhanced_input_component->BindAction(m_aimAction, ETriggerEvent::Triggered, this, &APnPPlayerCharacter::Aim);
		//_enhanced_input_component->BindAction(m_aimAction, ETriggerEvent::Completed, this, &APnPPlayerCharacter::Aim);
	}
}

void APnPPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APnPPlayerCharacter, CharacterState);
	DOREPLIFETIME(APnPPlayerCharacter, CharacterAimState);
	DOREPLIFETIME(APnPPlayerCharacter, GaitState);
	DOREPLIFETIME(APnPPlayerCharacter, CameraPitch);
}

void APnPPlayerCharacter::ServerSetCharacterMovementState_Implementation(EGaitState pNewState)
{
	GaitState = pNewState;
}

bool APnPPlayerCharacter::ServerSetCharacterMovementState_Validate(EGaitState pNewState)
{
	return true;
}

void APnPPlayerCharacter::ServerSetCharacterState_Implementation(const ECharacterLocomotionState pNewState)
{
	CharacterState = pNewState;
}

bool APnPPlayerCharacter::ServerSetCharacterState_Validate(ECharacterLocomotionState pNewState)
{
	return true;
}

void APnPPlayerCharacter::ServerSetCharacterAimState_Implementation(const ECharacterAimState pNewState)
{
	CharacterAimState = pNewState;
}

bool APnPPlayerCharacter::ServerSetCharacterAimState_Validate(ECharacterAimState pNewState)
{
	return true;
}

void APnPPlayerCharacter::GetAimOffsets(float& pOutPitch, float& pOutYaw)
{
	FRotator controlRot = GetControlRotation();
	FRotator actorRot = GetActorRotation();

	FRotator delta = (controlRot - actorRot).GetNormalized();

	pOutYaw = FMath::ClampAngle(delta.Yaw, -90.0f, 90.0f);
	pOutPitch = FMath::ClampAngle(delta.Pitch, -90.0f, 90.0f);


	if (IsLocallyControlled())
	{
		CameraPitch = pOutPitch;
        
		if (!HasAuthority())
		{
			ServerSetCameraPitch(pOutPitch);
		}
	}
}

void APnPPlayerCharacter::ServerSetCameraPitch_Implementation(float pCameraPitch)
{
	CameraPitch = pCameraPitch;
}
