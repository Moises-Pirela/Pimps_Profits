#pragma once
#include "ECS/Core/SystemBase.h"
#include "DamageSystem.generated.h"

class EntityContainer;

UCLASS()
class PROJECTPIMPS_API UDamageSystem : public USystemBase {

	GENERATED_BODY()

public:
	virtual void Process(EntityContainer* entityContainer, float deltaTime) override;
	virtual ESystemTickType GetSystemTickType() override
	{
		return ESystemTickType::SYSTEM_POSTPROCESS;
	};
};
