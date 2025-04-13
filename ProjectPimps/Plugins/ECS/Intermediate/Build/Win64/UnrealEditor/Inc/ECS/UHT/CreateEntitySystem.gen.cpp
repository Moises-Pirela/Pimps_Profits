// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Core/Systems/CreateEntitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateEntitySystem() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UCreateEntitySystem();
ECS_API UClass* Z_Construct_UClass_UCreateEntitySystem_NoRegister();
ECS_API UClass* Z_Construct_UClass_USystemBase();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin Class UCreateEntitySystem
void UCreateEntitySystem::StaticRegisterNativesUCreateEntitySystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateEntitySystem);
UClass* Z_Construct_UClass_UCreateEntitySystem_NoRegister()
{
	return UCreateEntitySystem::StaticClass();
}
struct Z_Construct_UClass_UCreateEntitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Systems/CreateEntitySystem.h" },
		{ "ModuleRelativePath", "Core/Systems/CreateEntitySystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateEntitySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCreateEntitySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USystemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateEntitySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateEntitySystem_Statics::ClassParams = {
	&UCreateEntitySystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCreateEntitySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UCreateEntitySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCreateEntitySystem()
{
	if (!Z_Registration_Info_UClass_UCreateEntitySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateEntitySystem.OuterSingleton, Z_Construct_UClass_UCreateEntitySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCreateEntitySystem.OuterSingleton;
}
template<> ECS_API UClass* StaticClass<UCreateEntitySystem>()
{
	return UCreateEntitySystem::StaticClass();
}
UCreateEntitySystem::UCreateEntitySystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateEntitySystem);
UCreateEntitySystem::~UCreateEntitySystem() {}
// End Class UCreateEntitySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCreateEntitySystem, UCreateEntitySystem::StaticClass, TEXT("UCreateEntitySystem"), &Z_Registration_Info_UClass_UCreateEntitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateEntitySystem), 950346176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_1710241651(TEXT("/Script/ECS"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Systems_CreateEntitySystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
