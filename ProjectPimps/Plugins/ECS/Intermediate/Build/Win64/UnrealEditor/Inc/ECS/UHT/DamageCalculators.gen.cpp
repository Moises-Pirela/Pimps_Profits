// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Utils/DamageCalculators.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageCalculators() {}

// Begin Cross Module References
ECS_API UEnum* Z_Construct_UEnum_ECS_EDamageTypes();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin Enum EDamageTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageTypes;
static UEnum* EDamageTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDamageTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDamageTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ECS_EDamageTypes, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("EDamageTypes"));
	}
	return Z_Registration_Info_UEnum_EDamageTypes.OuterSingleton;
}
template<> ECS_API UEnum* StaticEnum<EDamageTypes>()
{
	return EDamageTypes_StaticEnum();
}
struct Z_Construct_UEnum_ECS_EDamageTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DAMAGE_TYPE_BLUNT.Name", "DAMAGE_TYPE_BLUNT" },
		{ "DAMAGE_TYPE_FALL.Name", "DAMAGE_TYPE_FALL" },
		{ "DAMAGE_TYPE_KINETIC.Name", "DAMAGE_TYPE_KINETIC" },
		{ "DAMAGE_TYPE_MAX.Name", "DAMAGE_TYPE_MAX" },
		{ "DAMAGE_TYPE_NECROTIC.Name", "DAMAGE_TYPE_NECROTIC" },
		{ "DAMAGE_TYPE_SLASH.Name", "DAMAGE_TYPE_SLASH" },
		{ "ModuleRelativePath", "Utils/DamageCalculators.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DAMAGE_TYPE_KINETIC", (int64)DAMAGE_TYPE_KINETIC },
		{ "DAMAGE_TYPE_BLUNT", (int64)DAMAGE_TYPE_BLUNT },
		{ "DAMAGE_TYPE_SLASH", (int64)DAMAGE_TYPE_SLASH },
		{ "DAMAGE_TYPE_NECROTIC", (int64)DAMAGE_TYPE_NECROTIC },
		{ "DAMAGE_TYPE_FALL", (int64)DAMAGE_TYPE_FALL },
		{ "DAMAGE_TYPE_MAX", (int64)DAMAGE_TYPE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ECS_EDamageTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ECS,
	nullptr,
	"EDamageTypes",
	"EDamageTypes",
	Z_Construct_UEnum_ECS_EDamageTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ECS_EDamageTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ECS_EDamageTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ECS_EDamageTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ECS_EDamageTypes()
{
	if (!Z_Registration_Info_UEnum_EDamageTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageTypes.InnerSingleton, Z_Construct_UEnum_ECS_EDamageTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDamageTypes.InnerSingleton;
}
// End Enum EDamageTypes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Utils_DamageCalculators_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDamageTypes_StaticEnum, TEXT("EDamageTypes"), &Z_Registration_Info_UEnum_EDamageTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1021278053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Utils_DamageCalculators_h_3178977394(TEXT("/Script/ECS"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Utils_DamageCalculators_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Utils_DamageCalculators_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
