#include "PimpCameraComponent.h"
#include "GameFramework/Character.h"

UPimpCameraComponent::UPimpCameraComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPimpCameraComponent::BeginPlay()
{
	Super::BeginPlay();

	if (ACharacter* Char = Cast<ACharacter>(GetOwner()))
	{
		InitializeCamera(Char);
	}
}

void UPimpCameraComponent::InitializeCamera(ACharacter* OwnerChar)
{
	if (!OwnerChar) return;

	CameraBoom = NewObject<USpringArmComponent>(OwnerChar, TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(OwnerChar->GetRootComponent());
	CameraBoom->TargetArmLength = 350.f;
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->bEnableCameraLag = true;
	CameraBoom->CameraLagSpeed = 10.f;
	CameraBoom->SocketOffset = FVector(0.f, 60.f, 40.f);
	CameraBoom->RegisterComponent();

	FollowCamera = NewObject<UCameraComponent>(OwnerChar, TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;
	FollowCamera->RegisterComponent();
}
