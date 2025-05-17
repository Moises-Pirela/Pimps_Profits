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
#include "PnP/Components/PnPNetworkIdentityComponent.h"
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
	InventoryComponent = CreateDefaultSubobject<UPnPInventoryComponent>(TEXT("InventoryComponent"));
	BusinessComponent = CreateDefaultSubobject<UPnPBusinessManagerComponent>(TEXT("BusinessComponent"));
	NetworkComponent = CreateDefaultSubobject<UPnPNetworkIdentityComponent>(TEXT("NetworkComponent"));

	bReplicates = true;

	ACharacter::SetReplicateMovement(true);
}

void APnPPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APnPPlayerCharacter::OnRep_CharacterAimState()
{
	if (CharacterAimState == AIM_FOCUSED)
	{
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
	}
	else
	{
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
	}
}

void APnPPlayerCharacter::Tick(const float pDeltaTime)
{
	Super::Tick(pDeltaTime);

	float finalMoveSpeed = (GaitState == GAIT_SPRINT) ? SprintSpeed : WalkSpeed;

	GetCharacterMovement()->MaxWalkSpeed = finalMoveSpeed;

	const float targetFOV = (CharacterAimState == AIM_FOCUSED) ? 75.0f : 90.0f;
	FirstPersonCamera->SetFieldOfView(FMath::Lerp(FirstPersonCamera->FieldOfView, targetFOV, pDeltaTime * 10.0f));
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
		const FVector2D Movement_Vector = pValue.Get<FVector2D>();

		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw_Rotation(0, Rotation.Yaw, 0);

		const FVector Forward_Direction = FRotationMatrix(Yaw_Rotation).GetUnitAxis(EAxis::X);
		const FVector Right_Direction = FRotationMatrix(Yaw_Rotation).GetUnitAxis(EAxis::Y);

		AddMovementInput(Forward_Direction, Movement_Vector.Y);
		AddMovementInput(Right_Direction, Movement_Vector.X);
	}
}

void APnPPlayerCharacter::Look(const FInputActionValue& pValue)
{
	if (Controller != nullptr)
	{
		const FVector2D _look_axis_vector = pValue.Get<FVector2D>();

		AddControllerYawInput(_look_axis_vector.X);
		AddControllerPitchInput(_look_axis_vector.Y);

		CameraPitch = FMath::Clamp(CameraPitch + _look_axis_vector.Y, -18, 18.0f);
	}
}

void APnPPlayerCharacter::Interact(const FInputActionValue& pValue)
{
	// if (InteractionComponent->HasFocus())
	// {
	// 	InteractionComponent->BeginInteraction();
	// }
}

void APnPPlayerCharacter::ToggleSprint(const FInputActionValue& pValue)
{
	bool bShould_Sprint = GaitState != GAIT_SPRINT;

	if (GetLocalRole() == ROLE_Authority)
	{
		if (bShould_Sprint)
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
		EGaitState _new_state = bShould_Sprint ? GAIT_SPRINT : GAIT_NORMAL;
		ServerSetCharacterMovementState(_new_state);
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

	if (APlayerController* _player_controller = Cast<APlayerController>(GetController()))
	{
		UEnhancedInputLocalPlayerSubsystem* _subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
			_player_controller->GetLocalPlayer());
		if (_subsystem)
		{
			_subsystem->ClearAllMappings();
			_subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	if (UEnhancedInputComponent* _enhanced_input_component = CastChecked<
		UEnhancedInputComponent>(pPlayerInputComponent))
	{
		// Movement
		_enhanced_input_component->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APnPPlayerCharacter::Move);

		// Looking
		_enhanced_input_component->BindAction(LookAction, ETriggerEvent::Triggered, this, &APnPPlayerCharacter::Look);

		// Jumping
		_enhanced_input_component->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		_enhanced_input_component->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Interaction
		_enhanced_input_component->BindAction(InteractAction, ETriggerEvent::Started, this,
		                                      &APnPPlayerCharacter::Interact);

		// Sprinting
		_enhanced_input_component->BindAction(SprintAction, ETriggerEvent::Started, this,
		                                      &APnPPlayerCharacter::ToggleSprint);
		_enhanced_input_component->BindAction(SprintAction, ETriggerEvent::Completed, this,
		                                      &APnPPlayerCharacter::ToggleSprint);

		// Aiming
		_enhanced_input_component->BindAction(AimAction, ETriggerEvent::Started, this, &APnPPlayerCharacter::Aim);
		_enhanced_input_component->BindAction(AimAction, ETriggerEvent::Completed, this,
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
	FRotator ControlRot = GetControlRotation();
	FRotator ActorRot = GetActorRotation();

	FRotator Delta = (ControlRot - ActorRot).GetNormalized();

	pOutYaw = FMath::ClampAngle(Delta.Yaw, -90.0f, 90.0f);
	pOutPitch = FMath::ClampAngle(Delta.Pitch, -90.0f, 90.0f);


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
