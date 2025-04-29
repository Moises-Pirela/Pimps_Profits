// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageSystem.h"

#include "Evaluation/PreAnimatedState/MovieScenePreAnimatedCaptureSources.h"
#include "PnP/Components/PnPCharacterStatsComponent.h"
#include "PnP/Components/PnPHealthComponent.h"
#include "PnP/Core/ComponentArray.h"

void UDamageSystem::Process(UEntityStorage* EntityStorage, float DeltaTime)
{
	Super::Process(EntityStorage, DeltaTime);

	auto healthEntities = EntityStorage->GetEntitiesWith<UPnPHealthComponent>();

	for (auto entity : healthEntities)
	{
		int componentType = EntityStorage->ComponentTypeIdMap[UPnPHealthComponent::StaticClass()];
		UPnPHealthComponent* healthComp = static_cast<UPnPHealthComponent*>(EntityStorage->Components[componentType].Components[entity]);
		for (auto& damageEvent : healthComp->PendingDamageEvents)
		{
			healthComp->TakeDamage(damageEvent.Damage);
		}
		healthComp->PendingDamageEvents.Empty();
	}
}
