#pragma once

#include "CoreMinimal.h"
#include "ECS/Configs/EntityComponentConfig.h"
#include "ECS/Core/EntityComponent.h"
#include "ProjectileComponent.generated.h"

USTRUCT(BlueprintType)
struct FProjectileComponent : public FEntityComponent
{
	GENERATED_BODY()
};

UCLASS()
class PROJECTPIMPS_API UProjectileComponentConfig : public UEntityComponentConfigBase
{
	GENERATED_BODY()

public:
	
};
