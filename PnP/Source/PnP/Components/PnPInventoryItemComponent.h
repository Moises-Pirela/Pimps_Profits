#pragma once
#include "PnPComponentBase.h"
#include "PnP/Configs/InventoryItemConfig.h"
#include "PnPInventoryItemComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPInventoryItemComponent : public UPnPComponentBase
{
	GENERATED_BODY()

public:
	UPnPInventoryItemComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UInventoryItemConfig> ItemConfig;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated)
	int EntityOwnerId;

	UFUNCTION(Server, Unreliable)
	void ServerSetEntityOwnerId(int entityId);

	UFUNCTION(BlueprintCallable)
	bool HasOwner();

protected:
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
};