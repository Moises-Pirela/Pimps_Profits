#include "UnrealEntity.h"

#include "ECS/Core/IPostProcessEvent.h"
#include "ECS/Core/EntitySubsystem.h"

void UUnrealEntity::SetupEntity()
{
	auto subsystem = GetWorld()->GetSubsystem<UEntitySubsystem>();
	CreateEntityEvent* _createEntityEvent = (CreateEntityEvent*)subsystem->entityContainer->eventPool.Allocate();
	_createEntityEvent->pConfig = entityConfig;
	_createEntityEvent->pUnrealEntity = this;
	subsystem->SendPostprocessEvent(_createEntityEvent, EVENT_TYPE_CREATE_ENTITY);
}

void UUnrealEntity::BeginPlay()
{
	Super::BeginPlay();

	if (bIsStartingEntity)
		SetupEntity();
}

void UUnrealEntity::DestroyComponent(bool bPromoteChildren)
{
	Super::DestroyComponent(bPromoteChildren);
}
