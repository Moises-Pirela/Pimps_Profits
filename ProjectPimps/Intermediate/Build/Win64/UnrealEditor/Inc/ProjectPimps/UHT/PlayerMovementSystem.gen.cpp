// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Systems/PlayerMovementSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMovementSystem() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_USystemBase();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerMovementSystem();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerMovementSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin Class UPlayerMovementSystem
void UPlayerMovementSystem::StaticRegisterNativesUPlayerMovementSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMovementSystem);
UClass* Z_Construct_UClass_UPlayerMovementSystem_NoRegister()
{
	return UPlayerMovementSystem::StaticClass();
}
struct Z_Construct_UClass_UPlayerMovementSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Systems/PlayerMovementSystem.h" },
		{ "ModuleRelativePath", "Core/Systems/PlayerMovementSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMovementSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerMovementSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USystemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMovementSystem_Statics::ClassParams = {
	&UPlayerMovementSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMovementSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerMovementSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerMovementSystem()
{
	if (!Z_Registration_Info_UClass_UPlayerMovementSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMovementSystem.OuterSingleton, Z_Construct_UClass_UPlayerMovementSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerMovementSystem.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UPlayerMovementSystem>()
{
	return UPlayerMovementSystem::StaticClass();
}
UPlayerMovementSystem::UPlayerMovementSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMovementSystem);
UPlayerMovementSystem::~UPlayerMovementSystem() {}
// End Class UPlayerMovementSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_PlayerMovementSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMovementSystem, UPlayerMovementSystem::StaticClass, TEXT("UPlayerMovementSystem"), &Z_Registration_Info_UClass_UPlayerMovementSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMovementSystem), 3013205834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_PlayerMovementSystem_h_1283767901(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_PlayerMovementSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Systems_PlayerMovementSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
