

#include "PnPWeaponComponent.h"

#include "Net/UnrealNetwork.h"


UPnPWeaponComponent::UPnPWeaponComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	SetIsReplicatedByDefault(true);
}


void UPnPWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentAmmoCount = MaxAmmoCount;
}

void UPnPWeaponComponent::ServerEquipWeapon_Implementation(UUnrealEntity* ownerEntity)
{
	FTransform socketTransform;
	OwningEntity = ownerEntity;
}

void UPnPWeaponComponent::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPnPWeaponComponent, OwningEntity);
	DOREPLIFETIME(UPnPWeaponComponent, CurrentAmmoCount);
	DOREPLIFETIME(UPnPWeaponComponent, MaxAmmoCount);
}

void UPnPWeaponComponent::ServerFire_Implementation()
{
	if (CurrentState != WEAPON_IDLE) return;

	GetOwner()->GetWorld()->GetTimerManager().SetTimer(FireTimer, this, &UPnPWeaponComponent::ServerFire, FireRate);
}

void UPnPWeaponComponent::ServerReload_Implementation()
{
	CurrentAmmoCount = MaxAmmoCount;
}

void UPnPWeaponComponent::ServerInitiateReload_Implementation()
{
	//play reload montage

	GetOwner()->GetWorld()->GetTimerManager().SetTimer(ReloadTimer, this, &UPnPWeaponComponent::ServerReload, 1.0f);
}

