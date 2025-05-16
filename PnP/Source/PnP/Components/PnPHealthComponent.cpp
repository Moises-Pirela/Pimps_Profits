// Fill out your copyright notice in the Description page of Project Settings.


#include "PnPHealthComponent.h"

#include "PnP/Core/EntitySubsystem.h"
#include "PnP/Core/UnrealEntity.h"
#include "PnP/Utils/Logger.h"


UPnPHealthComponent::UPnPHealthComponent()
{
	MaxHealth = 100.0f;
	CurrentHealth = MaxHealth;
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
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
	OnRep_CurrentHealth(CurrentHealth + DamageAmount);
	return true;
}

void UPnPHealthComponent::ServerTakeDamage_Implementation(float DamageAmount)
{
	CurrentHealth = FMath::Max(CurrentHealth - DamageAmount, 0.0f);
}

bool UPnPHealthComponent::ServerTakeDamage_Validate(float DamageAmount)
{
	return DamageAmount > 0.0f;
}

void UPnPHealthComponent::OnRep_CurrentHealth(float OldHealth)
{
	if (!GetOwner()->HasAuthority())
		ClockLog(FString::Printf(TEXT("OnRep_CurrentHealth: Old=%.1f, New=%.1f"), OldHealth, CurrentHealth), LOG_INFO);
	
	if (CurrentHealth > OldHealth)
	{
		//play heal sound
	}
	else if (CurrentHealth > OldHealth)
	{
		// play damage sound
	}

	UUnrealEntity* Entity = Cast<UUnrealEntity>(GetOwner()->GetComponentByClass(UUnrealEntity::StaticClass()));
	if (Entity && Entity->EntityId >= 0)
	{
		UEntitySubsystem* EntitySystem = GetWorld()->GetSubsystem<UEntitySubsystem>();
		if (EntitySystem && EntitySystem->EntityStorage)
		{
			EntitySystem->EntityStorage->SyncComponentToECS(this, Entity->EntityId);
		}
	}
	
	//TODO: UPDATE UI, PLAY VFX, PLAY DAMAGE SOUND
}

