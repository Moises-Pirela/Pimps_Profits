#pragma once
#include "ECS/Configs/EntityComponentConfig.h"
#include "ECS/Core/EntityComponent.h"
#include "ECS/Utils/DamageCalculators.h"
#include "WeaponComponent.generated.h"

UENUM(BlueprintType)
enum EWeaponTypes : int
{
	WEAPON_TYPE_HITSCAN,
	WEAPON_TYPE_PROJECTILE,
	WEAPON_TYPE_MELEE
};

UENUM(BlueprintType)
enum EWeapons : int
{
	WEAPON_FISTS,
};


USTRUCT(BlueprintType)
struct FWeaponComponent : public FEntityComponent
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	USkeletalMeshComponent* mesh;

	UPROPERTY(BlueprintReadOnly)
	ACharacter* wielder;

	UPROPERTY(BlueprintReadOnly)
	float nextShotTime;
	
	FVector accumulatedRecoil;
};

UCLASS(EditInlineNew, BlueprintType)
class PROJECTPIMPS_API UWeaponComponentConfig : public UEntityComponentConfigBase {
	
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EWeapons> weaponType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EWeaponTypes> weaponFireType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	FName slotName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	UAnimMontage* armsFire;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	UAnimMontage* altArmsFire;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	UAnimMontage* weaponFire;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	UAnimMontage* armsEquip;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	UAnimMontage* weaponEquip;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	float recoveryRate;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	float weaponRange;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	float weaponSpread;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	float fireRateSeconds;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon")
	FVector recoil;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon", meta=(EditCondition = "weaponType != 2", EditConditionHides))
	int roundsPerShot;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon", meta=(EditCondition = "weaponType != 2", EditConditionHides))
	int maxAmmo;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Weapon", meta=(EditCondition = "weaponType != 2", EditConditionHides))
	int magazineSize;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Projectile", meta=(EditCondition = "weaponType == WEAPON_TYPE_PROJECTILE", EditConditionHides))
	TSubclassOf<AActor> projectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Projectile", meta=(EditCondition = "weaponType == WEAPON_TYPE_PROJECTILE", EditConditionHides))
	float projectileSpeed = 2000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Projectile", meta=(EditCondition = "weaponType == WEAPON_TYPE_PROJECTILE", EditConditionHides))
	float projectileDamage = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Projectile", meta=(EditCondition = "weaponType == WEAPON_TYPE_PROJECTILE", EditConditionHides))
	TEnumAsByte<EDamageTypes> projectileDamageType = DAMAGE_TYPE_KINETIC;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Projectile", meta=(EditCondition = "weaponType == WEAPON_TYPE_PROJECTILE", EditConditionHides))
	bool useWeaponMuzzleForProjectile = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Projectile", meta=(EditCondition = "useWeaponMuzzleForProjectile && weaponType == WEAPON_TYPE_PROJECTILE", EditConditionHides))
	FName muzzleSocketName = "Muzzle";

	virtual FEntityComponent* CreateComponent() override {
		return new FWeaponComponent();
	};

	virtual UStruct* GetComponentTypeId() override {
		return FWeaponComponent::StaticStruct();
	};
};