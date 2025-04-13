// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Core/EntitySubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntitySubsystem() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UEntitySubsystem();
ECS_API UClass* Z_Construct_UClass_UEntitySubsystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin Class UEntitySubsystem
void UEntitySubsystem::StaticRegisterNativesUEntitySubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntitySubsystem);
UClass* Z_Construct_UClass_UEntitySubsystem_NoRegister()
{
	return UEntitySubsystem::StaticClass();
}
struct Z_Construct_UClass_UEntitySubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/EntitySubsystem.h" },
		{ "ModuleRelativePath", "Core/EntitySubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntitySubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEntitySubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntitySubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntitySubsystem_Statics::ClassParams = {
	&UEntitySubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntitySubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntitySubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntitySubsystem()
{
	if (!Z_Registration_Info_UClass_UEntitySubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntitySubsystem.OuterSingleton, Z_Construct_UClass_UEntitySubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntitySubsystem.OuterSingleton;
}
template<> ECS_API UClass* StaticClass<UEntitySubsystem>()
{
	return UEntitySubsystem::StaticClass();
}
UEntitySubsystem::UEntitySubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntitySubsystem);
UEntitySubsystem::~UEntitySubsystem() {}
// End Class UEntitySubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntitySubsystem, UEntitySubsystem::StaticClass, TEXT("UEntitySubsystem"), &Z_Registration_Info_UClass_UEntitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntitySubsystem), 3277890117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_889797120(TEXT("/Script/ECS"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntitySubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
