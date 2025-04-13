#pragma once
#include "ECS/Buffables.h"
#include "ECS/Configs/EntityComponentConfig.h"
#include "ECS/Core/EntityComponent.h"
#include "AttributeComponent.generated.h"


USTRUCT(BlueprintType)
struct FAttributesComponent : public FEntityComponent
{
	GENERATED_BODY()
	FBuffableInt strength;
	FBuffableInt dexterity;
	FBuffableInt intelligence;
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API UAttributesComponentConfig : public UEntityComponentConfigBase {
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int strength;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int dexterity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int intelligence;

	virtual FEntityComponent* CreateComponent() override
	{
		return new FAttributesComponent();
	};

	virtual UStruct* GetComponentTypeId() override
	{
		return FAttributesComponent::StaticStruct();
	};
};