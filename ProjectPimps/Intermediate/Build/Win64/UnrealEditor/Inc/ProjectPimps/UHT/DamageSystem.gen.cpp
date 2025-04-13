// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Systems/DamageSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageSystem() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_USystemBase();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UDamageSystem();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UDamageSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin Class UDamageSystem
void UDamageSystem::StaticRegisterNativesUDamageSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageSystem);
UClass* Z_Construct_UClass_UDamageSystem_NoRegister()
{
	return UDamageSystem::StaticClass();
}
struct Z_Construct_UClass_UDamageSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Systems/DamageSystem.h" },
		{ "ModuleRelativePath", "Core/Systems/DamageSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USystemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageSystem_Statics::ClassParams = {
	&UDamageSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageSystem()
{
	if (!Z_Registration_Info_UClass_UDamageSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageSystem.OuterSingleton, Z_Construct_UClass_UDamageSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageSystem.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UDamageSystem>()
{
	return UDamageSystem::StaticClass();
}
UDamageSystem::UDamageSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageSystem);
UDamageSystem::~UDamageSystem() {}
// End Class UDamageSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageSystem, UDamageSystem::StaticClass, TEXT("UDamageSystem"), &Z_Registration_Info_UClass_UDamageSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageSystem), 71000641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_2386912248(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_DamageSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
