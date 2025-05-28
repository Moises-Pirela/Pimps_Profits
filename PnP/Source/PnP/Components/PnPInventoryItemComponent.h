#pragma once
#include "PnPComponentBase.h"
#include "PnP/Configs/InventoryItemConfig.h"
#include "PnPInventoryItemComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipped, AActor*, Wielder);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPInventoryItemComponent : public UPnPComponentBase
{
	GENERATED_BODY()

public:
	UPnPInventoryItemComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UInventoryItemConfig> ItemConfig;

	UPROPERTY(Replicated)
	TObjectPtr<AActor> OwnerActor;

	UFUNCTION(BlueprintCallable)
	bool CanBeEquipped() const;

	UPROPERTY(BlueprintAssignable)
	FOnEquipped OnEquipped;

	UPROPERTY(BlueprintAssignable)
	FOnEquipped OnUnequipped;

	UPROPERTY(BlueprintAssignable)
	FOnEquipped OnDropped;

protected:
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
};