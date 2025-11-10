#include "PimpCharacterBase.h"

#include "PImp/Gameplay/Components/PimpMovementComponent.h"

APimpCharacterBase::APimpCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
	PimpMovement = CreateDefaultSubobject<UPimpMovementComponent>(TEXT("PimpMovement"));
}

void APimpCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void APimpCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (PimpMovement)
		PimpMovement->UpdateRotation(DeltaTime);
}
