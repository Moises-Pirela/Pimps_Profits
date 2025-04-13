// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/ECSGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECSGameInstance() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UECSGameInstance();
ECS_API UClass* Z_Construct_UClass_UECSGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin Class UECSGameInstance
void UECSGameInstance::StaticRegisterNativesUECSGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UECSGameInstance);
UClass* Z_Construct_UClass_UECSGameInstance_NoRegister()
{
	return UECSGameInstance::StaticClass();
}
struct Z_Construct_UClass_UECSGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ECSGameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ECSGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UECSGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UECSGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UECSGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UECSGameInstance_Statics::ClassParams = {
	&UECSGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UECSGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UECSGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UECSGameInstance()
{
	if (!Z_Registration_Info_UClass_UECSGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UECSGameInstance.OuterSingleton, Z_Construct_UClass_UECSGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UECSGameInstance.OuterSingleton;
}
template<> ECS_API UClass* StaticClass<UECSGameInstance>()
{
	return UECSGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UECSGameInstance);
UECSGameInstance::~UECSGameInstance() {}
// End Class UECSGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UECSGameInstance, UECSGameInstance::StaticClass, TEXT("UECSGameInstance"), &Z_Registration_Info_UClass_UECSGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UECSGameInstance), 2827569734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_3903016590(TEXT("/Script/ECS"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
