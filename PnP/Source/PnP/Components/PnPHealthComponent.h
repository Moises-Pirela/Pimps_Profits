#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "Net/UnrealNetwork.h"
#include "PnPHealthComponent.generated.h"

USTRUCT()
struct FDamageEvent
{
	GENERATED_BODY()

	int Damage;
	int DamageDealerEntityId;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPHealthComponent : public UPnPComponentBase
{
	GENERATED_BODY()

public:
	UPnPHealthComponent();

	TArray<FDamageEvent> PendingDamageEvents;

	UPROPERTY(ReplicatedUsing=OnRep_CurrentHealth, BlueprintReadOnly)
	float CurrentHealth;

	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadOnly)
	float MaxHealth;

	UFUNCTION(BlueprintCallable)
	bool TakeDamage(float DamageAmount);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerTakeDamage(float DamageAmount);

protected:
    
	UFUNCTION()
	void OnRep_CurrentHealth(float OldHealth);
    
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};