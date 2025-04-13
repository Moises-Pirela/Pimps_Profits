// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/ProjectPimpsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectPimpsGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTPIMPS_API UClass* Z_Construct_UClass_AProjectPimpsGameMode();
PROJECTPIMPS_API UClass* Z_Construct_UClass_AProjectPimpsGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin Class AProjectPimpsGameMode
void AProjectPimpsGameMode::StaticRegisterNativesAProjectPimpsGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectPimpsGameMode);
UClass* Z_Construct_UClass_AProjectPimpsGameMode_NoRegister()
{
	return AProjectPimpsGameMode::StaticClass();
}
struct Z_Construct_UClass_AProjectPimpsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectPimpsGameMode.h" },
		{ "ModuleRelativePath", "ProjectPimpsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectPimpsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectPimpsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPimpsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectPimpsGameMode_Statics::ClassParams = {
	&AProjectPimpsGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectPimpsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectPimpsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectPimpsGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectPimpsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectPimpsGameMode.OuterSingleton, Z_Construct_UClass_AProjectPimpsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectPimpsGameMode.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<AProjectPimpsGameMode>()
{
	return AProjectPimpsGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectPimpsGameMode);
AProjectPimpsGameMode::~AProjectPimpsGameMode() {}
// End Class AProjectPimpsGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_ProjectPimpsGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectPimpsGameMode, AProjectPimpsGameMode::StaticClass, TEXT("AProjectPimpsGameMode"), &Z_Registration_Info_UClass_AProjectPimpsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectPimpsGameMode), 526229749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_ProjectPimpsGameMode_h_2737748374(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_ProjectPimpsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_ProjectPimpsGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
