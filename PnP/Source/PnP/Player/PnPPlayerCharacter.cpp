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

	m_cameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	m_cameraBoom->SetupAttachment(RootComponent);
	m_cameraBoom->TargetArmLength = 300.0f;
	m_cameraBoom->bUsePawnControlRotation = true;
	m_cameraBoom->SocketOffset = FVector(0.0f, 80.0f, 65.0f);
	m_cameraBoom->bEnableCameraLag = true;
	m_cameraBoom->CameraLagSpeed = 15.0f;

	m_followCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	m_followCamera->SetupAttachment(m_cameraBoom, USpringArmComponent::SocketName);
	m_followCamera->bUsePawnControlRotation = false;

	m_statsComponent = CreateDefaultSubobject<UPnPCharacterStatsComponent>(TEXT("StatsComponent"));
	m_inventoryComponent = CreateDefaultSubobject<UPnPInventoryComponent>(TEXT("InventoryComponent"));
	m_interactionComponent = CreateDefaultSubobject<UPnPInteractionComponent>(TEXT("InteractionComponent"));
	m_businessComponent = CreateDefaultSubobject<UPnPBusinessManagerComponent>(TEXT("BusinessComponent"));
	m_networkComponent = CreateDefaultSubobject<UPnPNetworkIdentityComponent>(TEXT("NetworkComponent"));

	bReplicates = true;
	
	ACharacter::SetReplicateMovement(true);
}

void APnPPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APnPPlayerCharacter::OnRep_CharacterState()
{
	bool bIsSprinting = (m_characterState & (1 << 0)) != 0;
    
	GetCharacterMovement()->MaxWalkSpeed = bIsSprinting ? 600.0f : 400.0f;
}

void APnPPlayerCharacter::Tick(const float delta_time)
{
	Super::Tick(delta_time);
}

void APnPPlayerCharacter::Move(const FInputActionValue& Value)
{
    if (Controller != nullptr)
    {
        // Get movement vector from the input value
        const FVector2D MovementVector = Value.Get<FVector2D>();
        
        // Find out which way is forward/right
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);
        
        // Get forward vector
        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        // Get right vector
        const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        
        // Add movement inputs
        AddMovementInput(ForwardDirection, MovementVector.Y);
        AddMovementInput(RightDirection, MovementVector.X);
    }
}

void APnPPlayerCharacter::Look(const FInputActionValue& Value)
{
    if (Controller != nullptr)
    {
        // Get look vector from the input value
        const FVector2D LookAxisVector = Value.Get<FVector2D>();
        
        // Apply yaw and pitch inputs
        AddControllerYawInput(LookAxisVector.X);
        AddControllerPitchInput(LookAxisVector.Y);
    }
}

void APnPPlayerCharacter::Interact(const FInputActionValue& Value)
{
    // Delegate to interaction component
    if (m_interactionComponent)
    {
        // Value.GetValueType() can be used to determine if pressed or released
        if (Value.GetValueType() == EInputActionValueType::Boolean && Value.Get<bool>())
        {
           // m_interactionComponent->BeginInteraction();
        }
        else
        {
            //m_interactionComponent->EndInteraction();
        }
    }
}

void APnPPlayerCharacter::ToggleSprint(const FInputActionValue& Value)
{
    bool bShouldSprint = Value.Get<bool>();
    
    // Set appropriate movement speed
    GetCharacterMovement()->MaxWalkSpeed = bShouldSprint ? 600.0f : 400.0f;
    
    // Update character state
    if (GetLocalRole() == ROLE_Authority)
    {
        if (bShouldSprint)
        {
            m_characterState |= (1 << 0); // Set sprint bit
        }
        else
        {
            m_characterState &= ~(1 << 0); // Clear sprint bit
        }
    }
    else
    {
        uint8 NewState = bShouldSprint ? (m_characterState | (1 << 0)) : (m_characterState & ~(1 << 0));
        ServerSetCharacterState(NewState);
    }
}

void APnPPlayerCharacter::Zoom(const FInputActionValue& Value)
{
    float _zoom_value = Value.Get<float>();
    
    if (_zoom_value != 0.0f)
    {
        float _new_target_arm_length = m_cameraBoom->TargetArmLength - (_zoom_value * 50.0f);
        m_cameraBoom->TargetArmLength = FMath::Clamp(_new_target_arm_length, 150.0f, 450.0f);
    }
}

void APnPPlayerCharacter::SetupPlayerInputComponent(UInputComponent* player_input_component)
{
	Super::SetupPlayerInputComponent(player_input_component);

	APlayerController* _player_controller = Cast<APlayerController>(GetController());
	if (_player_controller)
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(_player_controller->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->ClearAllMappings();
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
    
	UEnhancedInputComponent* _enhanced_input_component = CastChecked<UEnhancedInputComponent>(player_input_component);
	if (_enhanced_input_component)
	{
		// Movement
		_enhanced_input_component->BindAction(m_moveAction, ETriggerEvent::Triggered, this, &APnPPlayerCharacter::Move);
        
		// Looking
		_enhanced_input_component->BindAction(m_lookAction, ETriggerEvent::Triggered, this, &APnPPlayerCharacter::Look);
        
		// Jumping
		_enhanced_input_component->BindAction(m_jumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		_enhanced_input_component->BindAction(m_jumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
        
		// Interaction
		_enhanced_input_component->BindAction(m_interactAction, ETriggerEvent::Started, this, &APnPPlayerCharacter::Interact);
        
		// Sprinting
		_enhanced_input_component->BindAction(m_sprintAction, ETriggerEvent::Started, this, &APnPPlayerCharacter::ToggleSprint);
		_enhanced_input_component->BindAction(m_sprintAction, ETriggerEvent::Completed, this, &APnPPlayerCharacter::ToggleSprint);
        
		// Zooming
		_enhanced_input_component->BindAction(m_zoomAction, ETriggerEvent::Triggered, this, &APnPPlayerCharacter::Zoom);
	}
}

void APnPPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(APnPPlayerCharacter, m_characterState);
}

void APnPPlayerCharacter::ServerSetCharacterState_Implementation(uint8 new_state)
{
	m_characterState = new_state;
}

bool APnPPlayerCharacter::ServerSetCharacterState_Validate(uint8 new_state)
{
	return true;
}

