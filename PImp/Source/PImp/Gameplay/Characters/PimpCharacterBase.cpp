#include "PimpCharacterBase.h"

APimpCharacterBase::APimpCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APimpCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}

void APimpCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APimpCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

