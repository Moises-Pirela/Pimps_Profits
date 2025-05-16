// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealEntity.h"

#include "EntitySubsystem.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"
#include "Net/UnrealNetwork.h"
#include "PnP/Components/PnPComponentBase.h"


UUnrealEntity::UUnrealEntity()
{
	PrimaryComponentTick.bCanEverTick = false;
	EntityId = -1;
	SetIsReplicatedByDefault(true);
}

TArray<UPnPComponentBase*> UUnrealEntity::GetComponents() const
{
	TArray<UPnPComponentBase*> components;

	TArray<UActorComponent*> actorComponents;
	GetOwner()->GetComponents(UPnPComponentBase::StaticClass(), actorComponents);

	components.Reserve(actorComponents.Num());

	for (UActorComponent* component : actorComponents)
	{
		components.Add(static_cast<UPnPComponentBase*>(component));
	}

	return components;
}

bool UUnrealEntity::HasAuthority()
{
	return GetOwner()->HasAuthority();
}

void UUnrealEntity::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UUnrealEntity, EntityId);
	DOREPLIFETIME(UUnrealEntity, bIsRemoteEntity);
	DOREPLIFETIME(UUnrealEntity, OwnerClientId);
}


void UUnrealEntity::BeginPlay()
{
	Super::BeginPlay();

	const bool bIsServer = GetOwner()->HasAuthority();
	bIsRemoteEntity = !bIsServer;

	// Set owner client ID if applicable
	if (AActor* owner = GetOwner())
	{
		if (APlayerController* pc = Cast<APlayerController>(owner->GetInstigatorController()))
		{
			if (APlayerState* ps = pc->PlayerState)
			{
				OwnerClientId = ps->GetPlayerId();
			}
		}
	}

	// Register with the ECS system
	UEntitySubsystem* entitySystem = GetWorld()->GetSubsystem<UEntitySubsystem>();
	if (entitySystem)
	{
		if (bIsServer)
		{
			// Server directly registers the entity
			EntityId = entitySystem->EntityStorage->CreateEntity(this);
		}
		else
		{
			// Client requests registration via RPC
			entitySystem->ServerCreateEntity(this);

			// Note: EntityId will be set when the server replicates it back
			// You might want local prediction in some cases
		}
	}
}
