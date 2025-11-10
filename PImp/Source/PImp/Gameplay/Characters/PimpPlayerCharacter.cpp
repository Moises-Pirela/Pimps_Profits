#include "PimpPlayerCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "PImp/Gameplay/Components/PimpCameraComponent.h"
#include "PImp/Gameplay/Components/PimpInputComponent.h"

APimpPlayerCharacter::APimpPlayerCharacter()
{
	PimpCamera = CreateDefaultSubobject<UPimpCameraComponent>(TEXT("PimpCamera"));
	PimpInput  = CreateDefaultSubobject<UPimpInputComponent>(TEXT("PimpInput"));
}

void APimpPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsys =
			ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			if (PimpInput && PimpInput->GetMappingContext())
			{
				Subsys->AddMappingContext(PimpInput->GetMappingContext(), 0);
			}
		}
	}
}

void APimpPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (PimpInput)
		{
			PimpInput->SetupInput(EIC);
		}
	}
}
