
#pragma once

#include "CoreMinimal.h"
#include "PnPComponentBase.h"
#include "PnPWeaponComponent.generated.h"


class UUnrealEntity;
class APnPPlayerCharacter;

UENUM(BlueprintType)
enum EWeaponState
{
	WEAPON_IDLE,
	WEAPON_FIRE,
	WEAPON_RELOAD
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PNP_API UPnPWeaponComponent : public UPnPComponentBase
{
	GENERATED_BODY()

public:
	UPnPWeaponComponent();

	UPROPERTY(BlueprintReadOnly, Replicated)
	UUnrealEntity* OwningEntity;

	UPROPERTY(BlueprintReadOnly, Replicated)
	int CurrentAmmoCount;

	UPROPERTY(EditAnywhere, Replicated)
	int MaxAmmoCount;

	UPROPERTY(Replicated)
	FTimerHandle ReloadTimer;

	UPROPERTY(EditAnywhere)
	float ReloadTime;

	UPROPERTY(Replicated)
	FTimerHandle FireTimer;

	UPROPERTY(EditAnywhere)
	float FireRate;

	UPROPERTY(BlueprintReadOnly, Replicated)
	TEnumAsByte<EWeaponState> CurrentState; 
	
protected:
	virtual void BeginPlay() override;

public:
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Reliable)
	void ServerEquipWeapon(UUnrealEntity* ownerEntity);

	UFUNCTION(Server, Reliable)
	void ServerReload();

	UFUNCTION(Server, Reliable)
	void ServerInitiateReload();

	UFUNCTION(Server, Reliable)
	void ServerFire();

	UFUNCTION(BlueprintCallable)
	bool HasAmmo()
	{
		return CurrentAmmoCount > 0;
	}
};
