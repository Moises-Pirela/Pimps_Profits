// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "InventoryItemConfig.generated.h"

/**
 * Data asset for inventory item configuration
 */
UCLASS(BlueprintType)
class PNP_API UInventoryItemConfig : public UPrimaryDataAsset
{
	GENERATED_BODY()
    
public:
	// The display name of the item
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	FText Name;
    
	// Icon displayed in the inventory UI
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	TSoftObjectPtr<UTexture2D> Icon;
    
	// Whether this item can be stacked
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	bool bIsStackable;
    
	// Maximum stack count if stackable
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item", meta = (EditCondition = "bIsStackable", ClampMin = "1"))
	int32 MaxStackCount;
    
	UInventoryItemConfig()
	{
		bIsStackable = false;
		MaxStackCount = 1;
		Icon = TSoftObjectPtr<UTexture2D>(FSoftObjectPath(TEXT("/Game/_PNP/UI/Textures/T_DEFAULT_MISSING.T_DEFAULT_MISSING")));
	}
};