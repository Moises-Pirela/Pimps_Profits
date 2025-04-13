#pragma once
#include "ECS/Configs/EntityConfig.h"
#include "UnrealEntity.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ECS_API UUnrealEntity : public UActorComponent
{
	GENERATED_BODY()

public:
	UUnrealEntity() { entityId = -1; };
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int entityId;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UEntityConfig* entityConfig;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsStartingEntity;

	void SetupEntity();
	
private:
	virtual void BeginPlay() override;
	virtual void DestroyComponent(bool bPromoteChildren) override;
};
