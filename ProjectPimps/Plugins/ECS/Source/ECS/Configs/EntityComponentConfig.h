#pragma once
#include "ECS/Core/EntityComponent.h"
#include "EntityComponentConfig.generated.h"

UCLASS(EditInlineNew, BlueprintType)
class ECS_API UEntityComponentConfigBase : public UObject {

	GENERATED_BODY()

public:
	UEntityComponentConfigBase(){};
	virtual FEntityComponent* CreateComponent() PURE_VIRTUAL(UEntityComponentConfigBase::CreateComponent, return nullptr;);
	virtual UStruct* GetComponentTypeId() PURE_VIRTUAL(UEntityComponentConfigBase::GetComponentTypeId, return FEntityComponent::StaticStruct(););
};