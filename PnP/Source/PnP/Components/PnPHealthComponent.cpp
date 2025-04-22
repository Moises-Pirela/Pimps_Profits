// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPHealthComponent.h"

#include "PnP/Core/UnrealEntity.h"


UPnPHealthComponent::UPnPHealthComponent()
{
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
	PrimaryComponentTick.bCanEverTick = true;
}

void UPnPHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
	DOREPLIFETIME(UPnPHealthComponent, CurrentHealth);
	DOREPLIFETIME(UPnPHealthComponent, MaxHealth);
}

bool UPnPHealthComponent::TakeDamage(float DamageAmount)
{
	UUnrealEntity* entity = Cast<UUnrealEntity>(GetOwner()->GetComponentByClass(UUnrealEntity::StaticClass()));
    
	if (entity && !entity->HasAuthority())
	{
		CurrentHealth = FMath::Max(CurrentHealth - DamageAmount, 0.0f);
		ServerTakeDamage(DamageAmount);
		return true;
	}
    
	CurrentHealth = FMath::Max(CurrentHealth - DamageAmount, 0.0f);
	return true;
}

void UPnPHealthComponent::ServerTakeDamage_Implementation(float DamageAmount)
{
	CurrentHealth = FMath::Max(CurrentHealth - DamageAmount, 0.0f);
}

bool UPnPHealthComponent::ServerTakeDamage_Validate(float DamageAmount)
{
	return DamageAmount >= 0.0f;
}

void UPnPHealthComponent::OnRep_CurrentHealth(float OldHealth)
{
	//TODO: UPDATE UI, PLAY VFX, PLAY DAMAGE SOUND
}

