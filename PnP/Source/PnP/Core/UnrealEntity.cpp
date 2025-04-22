// Fill out your copyright notice in the Description page of Project Settings.


#include "UnrealEntity.h"

#include "PnP/Components/PnPComponentBase.h"


UUnrealEntity::UUnrealEntity()
{
	PrimaryComponentTick.bCanEverTick = false;
	EntityId = -1;
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


void UUnrealEntity::BeginPlay()
{
	Super::BeginPlay();
}

