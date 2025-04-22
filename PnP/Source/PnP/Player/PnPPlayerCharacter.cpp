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

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->SocketOffset = FVector(0.0f, 80.0f, 65.0f);
	CameraBoom->bEnableCameraLag = true;
	CameraBoom->CameraLagSpeed = 15.0f;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	StatsComponent = CreateDefaultSubobject<UPnPCharacterStatsComponent>(TEXT("StatsComponent"));
	InventoryComponent = CreateDefaultSubobject<UPnPInventoryComponent>(TEXT("InventoryComponent"));
	InteractionComponent = CreateDefaultSubobject<UPnPInteractionComponent>(TEXT("InteractionComponent"));
	BusinessComponent = CreateDefaultSubobject<UPnPBusinessManagerComponent>(TEXT("BusinessComponent"));
	NetworkComponent = CreateDefaultSubobject<UPnPNetworkIdentityComponent>(TEXT("NetworkComponent"));

	bReplicates = true;

	ACharacter::SetReplicateMovement(true);
}

void APnPPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APnPPlayerCharacter::OnRep_CharacterState()
{
	bool bIsSprinting = CharacterState == MOTION_SPRINT;

	GetCharacterMovement()->MaxWalkSpeed = bIsSprinting ? 600.0f : 400.0f;
}

void APnPPlayerCharacter::OnRep_CharacterAimState()
{
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
}

void APnPPlayerCharacter::Tick(const float pDeltaTime)
{
	Super::Tick(pDeltaTime);

	float finalMoveSpeed = 400.0f;

	if (CharacterState == MOTION_SPRINT)
		finalMoveSpeed = 800.0f;

	float targetArmLength = 0;
	if (CharacterAimState == AIM_FOCUSED)
	{
		targetArmLength = 100;
		GetCharacterMovement()->bOrientRotationToMovement = false;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		finalMoveSpeed *= 0.35f;
	}
	else
	{
		targetArmLength = 500;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = false;
	}

	if (GetCharacterMovement()->MovementMode == EMovementMode::MOVE_Falling)
	{
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}
	
	CameraBoom->TargetArmLength = FMath::Lerp(CameraBoom->TargetArmLength, targetArmLength, pDeltaTime * 10.0f); ;

	GetCharacterMovement()->MaxWalkSpeed = finalMoveSpeed;
}

void APnPPlayerCharacter::Move(const FInputActionValue& pValue)
{
	if (Controller != nullptr)
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
	}
}

void APnPPlayerCharacter::Interact(const FInputActionValue& pValue)
{
	if (InteractionComponent)
	{
		if (pValue.GetValueType() == EInputActionValueType::Boolean && pValue.Get<bool>())
		{
			InteractionComponent->BeginInteraction();
		}
		else
		{
			InteractionComponent->EndInteraction();
		}
	}
}

void APnPPlayerCharacter::ToggleSprint(const FInputActionValue& pValue)
{
	bool bShould_Sprint = CharacterState != MOTION_SPRINT;

	GetCharacterMovement()->MaxWalkSpeed = bShould_Sprint ? 1600.0f : 400.0f;

	if (GetLocalRole() == ROLE_Authority)
	{
		if (bShould_Sprint)
		{
			CharacterState = MOTION_SPRINT;
		}
		else
		{
			CharacterState = MOTION_IDLE;
		}
	}
	else
	{
		ECharacterLocomotionState _new_state = bShould_Sprint ? MOTION_SPRINT : MOTION_WALK;
		ServerSetCharacterState(_new_state);
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

	if (UEnhancedInputComponent* _enhanced_input_component = CastChecked<UEnhancedInputComponent>(pPlayerInputComponent))
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
		_enhanced_input_component->BindAction(AimAction, ETriggerEvent::Completed, this, &APnPPlayerCharacter::CancelAim);

		// Primary Fire
		//_enhanced_input_component->BindAction(m_aimAction, ETriggerEvent::Triggered, this, &APnPPlayerCharacter::Aim);
		//_enhanced_input_component->BindAction(m_aimAction, ETriggerEvent::Completed, this, &APnPPlayerCharacter::Aim);
	}
}

void APnPPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APnPPlayerCharacter, CharacterState);
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
