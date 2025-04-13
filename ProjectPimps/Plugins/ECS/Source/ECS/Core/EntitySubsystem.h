// © 2024 Necrotek Labs. All rights reserved. ExMORTALIS, including its title, logo, concept, storyline, and associated assets, is a trademark of Necrotek Labs. Unauthorized use, distribution, or reproduction of any part of this game or its materials is strictly prohibited. All other trademarks and trade names are the property of their respective owners. For inquiries, please contact necroteklabs@gmail.com.

#pragma once

#include "CoreMinimal.h"
#include "EntityContainer.h"
#include "IPostProcessEvent.h"
#include "SystemBase.h"
#include "Subsystems/WorldSubsystem.h"
#include "EntitySubsystem.generated.h"

class UEntityComponentConfigBase;
struct FComponentArray;
class UUnrealEntity;
class EntityContainer;
/**
 * 
 */

UCLASS()
class ECS_API UEntitySubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:

	EntityContainer* entityContainer;
	TMap<ESystemTickType, TArray<TStrongObjectPtr<USystemBase>>> systems;
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual void Tick(float deltaTime) override;
	
	void OnCreateEntity(UEntityConfig* entityConfig, int entityId, UUnrealEntity* startingEntity = nullptr);
	void SendPostprocessEvent(IPostProcessEvent* postProcessEvent, EPostProcessEventType eventType);
	void OnKillEntity(int entityId);
	virtual TStatId GetStatId() const override;
};
