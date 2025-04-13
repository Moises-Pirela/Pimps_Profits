// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Configs/EntityComponentConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityComponentConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase();
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin Class UEntityComponentConfigBase
void UEntityComponentConfigBase::StaticRegisterNativesUEntityComponentConfigBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntityComponentConfigBase);
UClass* Z_Construct_UClass_UEntityComponentConfigBase_NoRegister()
{
	return UEntityComponentConfigBase::StaticClass();
}
struct Z_Construct_UClass_UEntityComponentConfigBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Configs/EntityComponentConfig.h" },
		{ "ModuleRelativePath", "Configs/EntityComponentConfig.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntityComponentConfigBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEntityComponentConfigBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponentConfigBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntityComponentConfigBase_Statics::ClassParams = {
	&UEntityComponentConfigBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntityComponentConfigBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntityComponentConfigBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntityComponentConfigBase()
{
	if (!Z_Registration_Info_UClass_UEntityComponentConfigBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntityComponentConfigBase.OuterSingleton, Z_Construct_UClass_UEntityComponentConfigBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntityComponentConfigBase.OuterSingleton;
}
template<> ECS_API UClass* StaticClass<UEntityComponentConfigBase>()
{
	return UEntityComponentConfigBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntityComponentConfigBase);
UEntityComponentConfigBase::~UEntityComponentConfigBase() {}
// End Class UEntityComponentConfigBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntityComponentConfigBase, UEntityComponentConfigBase::StaticClass, TEXT("UEntityComponentConfigBase"), &Z_Registration_Info_UClass_UEntityComponentConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntityComponentConfigBase), 1566968458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_404565841(TEXT("/Script/ECS"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Configs_EntityComponentConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
