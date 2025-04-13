#pragma once
#include "ECS/Configs/EntityComponentConfig.h"
#include "ECS/Core/EntityComponent.h"
#include "InventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemSlot
{
	GENERATED_BODY()
	int configId;
	int stacks;
};

USTRUCT(BlueprintType)
struct FInventoryComponent : public FEntityComponent
{
	GENERATED_BODY()
	TArray<FInventoryItemSlot> inventory;
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API  UInventoryComponentConfig : public UEntityComponentConfigBase {
	
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory Config")
	int initialInventorySize;

	virtual FEntityComponent* CreateComponent() override {
		return new FInventoryComponent();
	};

	virtual UStruct* GetComponentTypeId() override {
		return FInventoryComponent::StaticStruct();
	};
};