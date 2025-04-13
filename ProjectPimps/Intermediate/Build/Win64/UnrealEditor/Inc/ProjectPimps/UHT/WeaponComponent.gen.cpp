// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Components/WeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase();
ECS_API UEnum* Z_Construct_UEnum_ECS_EDamageTypes();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UWeaponComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UWeaponComponentConfig_NoRegister();
PROJECTPIMPS_API UEnum* Z_Construct_UEnum_ProjectPimps_EWeapons();
PROJECTPIMPS_API UEnum* Z_Construct_UEnum_ProjectPimps_EWeaponTypes();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponComponent();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin Enum EWeaponTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponTypes;
static UEnum* EWeaponTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPimps_EWeaponTypes, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("EWeaponTypes"));
	}
	return Z_Registration_Info_UEnum_EWeaponTypes.OuterSingleton;
}
template<> PROJECTPIMPS_API UEnum* StaticEnum<EWeaponTypes>()
{
	return EWeaponTypes_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPimps_EWeaponTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
		{ "WEAPON_TYPE_HITSCAN.Name", "WEAPON_TYPE_HITSCAN" },
		{ "WEAPON_TYPE_MELEE.Name", "WEAPON_TYPE_MELEE" },
		{ "WEAPON_TYPE_PROJECTILE.Name", "WEAPON_TYPE_PROJECTILE" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WEAPON_TYPE_HITSCAN", (int64)WEAPON_TYPE_HITSCAN },
		{ "WEAPON_TYPE_PROJECTILE", (int64)WEAPON_TYPE_PROJECTILE },
		{ "WEAPON_TYPE_MELEE", (int64)WEAPON_TYPE_MELEE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPimps_EWeaponTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPimps,
	nullptr,
	"EWeaponTypes",
	"EWeaponTypes",
	Z_Construct_UEnum_ProjectPimps_EWeaponTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPimps_EWeaponTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPimps_EWeaponTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPimps_EWeaponTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPimps_EWeaponTypes()
{
	if (!Z_Registration_Info_UEnum_EWeaponTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponTypes.InnerSingleton, Z_Construct_UEnum_ProjectPimps_EWeaponTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponTypes.InnerSingleton;
}
// End Enum EWeaponTypes

// Begin Enum EWeapons
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeapons;
static UEnum* EWeapons_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeapons.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeapons.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProjectPimps_EWeapons, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("EWeapons"));
	}
	return Z_Registration_Info_UEnum_EWeapons.OuterSingleton;
}
template<> PROJECTPIMPS_API UEnum* StaticEnum<EWeapons>()
{
	return EWeapons_StaticEnum();
}
struct Z_Construct_UEnum_ProjectPimps_EWeapons_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
		{ "WEAPON_FISTS.Name", "WEAPON_FISTS" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "WEAPON_FISTS", (int64)WEAPON_FISTS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProjectPimps_EWeapons_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ProjectPimps,
	nullptr,
	"EWeapons",
	"EWeapons",
	Z_Construct_UEnum_ProjectPimps_EWeapons_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPimps_EWeapons_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProjectPimps_EWeapons_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProjectPimps_EWeapons_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ProjectPimps_EWeapons()
{
	if (!Z_Registration_Info_UEnum_EWeapons.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeapons.InnerSingleton, Z_Construct_UEnum_ProjectPimps_EWeapons_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeapons.InnerSingleton;
}
// End Enum EWeapons

// Begin ScriptStruct FWeaponComponent
static_assert(std::is_polymorphic<FWeaponComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FWeaponComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponComponent;
class UScriptStruct* FWeaponComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("WeaponComponent"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FWeaponComponent>()
{
	return FWeaponComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWeaponComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wielder_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_nextShotTime_MetaData[] = {
		{ "Category", "WeaponComponent" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_wielder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_nextShotTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponComponent_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponComponent, mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mesh_MetaData), NewProp_mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponComponent_Statics::NewProp_wielder = { "wielder", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponComponent, wielder), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wielder_MetaData), NewProp_wielder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponComponent_Statics::NewProp_nextShotTime = { "nextShotTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponComponent, nextShotTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_nextShotTime_MetaData), NewProp_nextShotTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponComponent_Statics::NewProp_mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponComponent_Statics::NewProp_wielder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponComponent_Statics::NewProp_nextShotTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"WeaponComponent",
	Z_Construct_UScriptStruct_FWeaponComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponComponent_Statics::PropPointers),
	sizeof(FWeaponComponent),
	alignof(FWeaponComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponComponent()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponComponent.InnerSingleton, Z_Construct_UScriptStruct_FWeaponComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WeaponComponent.InnerSingleton;
}
// End ScriptStruct FWeaponComponent

// Begin Class UWeaponComponentConfig
void UWeaponComponentConfig::StaticRegisterNativesUWeaponComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponComponentConfig);
UClass* Z_Construct_UClass_UWeaponComponentConfig_NoRegister()
{
	return UWeaponComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UWeaponComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/WeaponComponent.h" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[] = {
		{ "Category", "WeaponComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponFireType_MetaData[] = {
		{ "Category", "WeaponComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_armsFire_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_altArmsFire_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponFire_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_armsEquip_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponEquip_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_recoveryRate_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponRange_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponSpread_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fireRateSeconds_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_recoil_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_roundsPerShot_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditCondition", "weaponType != 2" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditCondition", "weaponType != 2" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_magazineSize_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditCondition", "weaponType != 2" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "weaponType == WEAPON_TYPE_PROJECTILE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileSpeed_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "weaponType == WEAPON_TYPE_PROJECTILE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileDamage_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "weaponType == WEAPON_TYPE_PROJECTILE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_projectileDamageType_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "weaponType == WEAPON_TYPE_PROJECTILE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_useWeaponMuzzleForProjectile_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "weaponType == WEAPON_TYPE_PROJECTILE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_muzzleSocketName_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditCondition", "useWeaponMuzzleForProjectile && weaponType == WEAPON_TYPE_PROJECTILE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Core/Components/WeaponComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_weaponType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_weaponFireType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_slotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_armsFire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_altArmsFire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponFire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_armsEquip;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_weaponEquip;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_recoveryRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weaponRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_weaponSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_fireRateSeconds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_recoil;
	static const UECodeGen_Private::FIntPropertyParams NewProp_roundsPerShot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxAmmo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_magazineSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_projectileClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_projectileSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_projectileDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_projectileDamageType;
	static void NewProp_useWeaponMuzzleForProjectile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_useWeaponMuzzleForProjectile;
	static const UECodeGen_Private::FNamePropertyParams NewProp_muzzleSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponType = { "weaponType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, weaponType), Z_Construct_UEnum_ProjectPimps_EWeapons, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponType_MetaData), NewProp_weaponType_MetaData) }; // 4059692162
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponFireType = { "weaponFireType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, weaponFireType), Z_Construct_UEnum_ProjectPimps_EWeaponTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponFireType_MetaData), NewProp_weaponFireType_MetaData) }; // 1186383241
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slotName_MetaData), NewProp_slotName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_armsFire = { "armsFire", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, armsFire), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_armsFire_MetaData), NewProp_armsFire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_altArmsFire = { "altArmsFire", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, altArmsFire), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_altArmsFire_MetaData), NewProp_altArmsFire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponFire = { "weaponFire", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, weaponFire), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponFire_MetaData), NewProp_weaponFire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_armsEquip = { "armsEquip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, armsEquip), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_armsEquip_MetaData), NewProp_armsEquip_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponEquip = { "weaponEquip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, weaponEquip), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponEquip_MetaData), NewProp_weaponEquip_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_recoveryRate = { "recoveryRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, recoveryRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_recoveryRate_MetaData), NewProp_recoveryRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponRange = { "weaponRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, weaponRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponRange_MetaData), NewProp_weaponRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponSpread = { "weaponSpread", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, weaponSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponSpread_MetaData), NewProp_weaponSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_fireRateSeconds = { "fireRateSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, fireRateSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fireRateSeconds_MetaData), NewProp_fireRateSeconds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_recoil = { "recoil", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, recoil), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_recoil_MetaData), NewProp_recoil_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_roundsPerShot = { "roundsPerShot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, roundsPerShot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_roundsPerShot_MetaData), NewProp_roundsPerShot_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_maxAmmo = { "maxAmmo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, maxAmmo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxAmmo_MetaData), NewProp_maxAmmo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_magazineSize = { "magazineSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, magazineSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_magazineSize_MetaData), NewProp_magazineSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_projectileClass = { "projectileClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, projectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileClass_MetaData), NewProp_projectileClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_projectileSpeed = { "projectileSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, projectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileSpeed_MetaData), NewProp_projectileSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_projectileDamage = { "projectileDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, projectileDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileDamage_MetaData), NewProp_projectileDamage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_projectileDamageType = { "projectileDamageType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, projectileDamageType), Z_Construct_UEnum_ECS_EDamageTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_projectileDamageType_MetaData), NewProp_projectileDamageType_MetaData) }; // 1021278053
void Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_useWeaponMuzzleForProjectile_SetBit(void* Obj)
{
	((UWeaponComponentConfig*)Obj)->useWeaponMuzzleForProjectile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_useWeaponMuzzleForProjectile = { "useWeaponMuzzleForProjectile", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeaponComponentConfig), &Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_useWeaponMuzzleForProjectile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_useWeaponMuzzleForProjectile_MetaData), NewProp_useWeaponMuzzleForProjectile_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_muzzleSocketName = { "muzzleSocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponComponentConfig, muzzleSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_muzzleSocketName_MetaData), NewProp_muzzleSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponComponentConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponFireType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_slotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_armsFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_altArmsFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_armsEquip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponEquip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_recoveryRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_weaponSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_fireRateSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_recoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_roundsPerShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_maxAmmo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_magazineSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_projectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_projectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_projectileDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_projectileDamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_useWeaponMuzzleForProjectile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponComponentConfig_Statics::NewProp_muzzleSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponentConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponentConfig_Statics::ClassParams = {
	&UWeaponComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponComponentConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponentConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponComponentConfig()
{
	if (!Z_Registration_Info_UClass_UWeaponComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponentConfig.OuterSingleton, Z_Construct_UClass_UWeaponComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UWeaponComponentConfig>()
{
	return UWeaponComponentConfig::StaticClass();
}
UWeaponComponentConfig::UWeaponComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponentConfig);
UWeaponComponentConfig::~UWeaponComponentConfig() {}
// End Class UWeaponComponentConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponTypes_StaticEnum, TEXT("EWeaponTypes"), &Z_Registration_Info_UEnum_EWeaponTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1186383241U) },
		{ EWeapons_StaticEnum, TEXT("EWeapons"), &Z_Registration_Info_UEnum_EWeapons, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4059692162U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponComponent::StaticStruct, Z_Construct_UScriptStruct_FWeaponComponent_Statics::NewStructOps, TEXT("WeaponComponent"), &Z_Registration_Info_UScriptStruct_WeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponComponent), 1974908458U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponentConfig, UWeaponComponentConfig::StaticClass, TEXT("UWeaponComponentConfig"), &Z_Registration_Info_UClass_UWeaponComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponentConfig), 1334921519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_2102313718(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_WeaponComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
