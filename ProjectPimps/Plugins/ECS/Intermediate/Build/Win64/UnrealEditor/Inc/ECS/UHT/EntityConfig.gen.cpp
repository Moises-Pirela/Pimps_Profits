// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Configs/EntityConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityConfig() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase_NoRegister();
ECS_API UClass* Z_Construct_UClass_UEntityConfig();
ECS_API UClass* Z_Construct_UClass_UEntityConfig_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin Class UEntityConfig
void UEntityConfig::StaticRegisterNativesUEntityConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityConfig);
UClass* Z_Construct_UClass_UEntityConfig_NoRegister()
{
	return UEntityConfig::StaticClass();
}
struct Z_Construct_UClass_UEntityConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Configs/EntityConfig.h" },
		{ "ModuleRelativePath", "Configs/EntityConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_componentConfigs_Inner_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Configs/EntityConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_componentConfigs_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Configs/EntityConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_componentConfigs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_componentConfigs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEntityConfig_Statics::NewProp_componentConfigs_Inner = { "componentConfigs", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEntityComponentConfigBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_componentConfigs_Inner_MetaData), NewProp_componentConfigs_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEntityConfig_Statics::NewProp_componentConfigs = { "componentConfigs", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntityConfig, componentConfigs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_componentConfigs_MetaData), NewProp_componentConfigs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntityConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityConfig_Statics::NewProp_componentConfigs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntityConfig_Statics::NewProp_componentConfigs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEntityConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityConfig_Statics::ClassParams = {
	&UEntityConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEntityConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntityConfig_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntityConfig()
{
	if (!Z_Registration_Info_UClass_UEntityConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityConfig.OuterSingleton, Z_Construct_UClass_UEntityConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityConfig.OuterSingleton;
}
template<> ECS_API UClass* StaticClass<UEntityConfig>()
{
	return UEntityConfig::StaticClass();
}
UEntityConfig::UEntityConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityConfig);
UEntityConfig::~UEntityConfig() {}
// End Class UEntityConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityConfig, UEntityConfig::StaticClass, TEXT("UEntityConfig"), &Z_Registration_Info_UClass_UEntityConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityConfig), 295050793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_1668388809(TEXT("/Script/ECS"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
