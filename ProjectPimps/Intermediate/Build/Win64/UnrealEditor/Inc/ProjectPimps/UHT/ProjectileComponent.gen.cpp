// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Components/ProjectileComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileComponent() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UProjectileComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UProjectileComponentConfig_NoRegister();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileComponent();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin ScriptStruct FProjectileComponent
static_assert(std::is_polymorphic<FProjectileComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FProjectileComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProjectileComponent;
class UScriptStruct* FProjectileComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProjectileComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("ProjectileComponent"));
	}
	return Z_Registration_Info_UScriptStruct_ProjectileComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FProjectileComponent>()
{
	return FProjectileComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FProjectileComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/ProjectileComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"ProjectileComponent",
	nullptr,
	0,
	sizeof(FProjectileComponent),
	alignof(FProjectileComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectileComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FProjectileComponent()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProjectileComponent.InnerSingleton, Z_Construct_UScriptStruct_FProjectileComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ProjectileComponent.InnerSingleton;
}
// End ScriptStruct FProjectileComponent

// Begin Class UProjectileComponentConfig
void UProjectileComponentConfig::StaticRegisterNativesUProjectileComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileComponentConfig);
UClass* Z_Construct_UClass_UProjectileComponentConfig_NoRegister()
{
	return UProjectileComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UProjectileComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Components/ProjectileComponent.h" },
		{ "ModuleRelativePath", "Core/Components/ProjectileComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UProjectileComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileComponentConfig_Statics::ClassParams = {
	&UProjectileComponentConfig::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProjectileComponentConfig()
{
	if (!Z_Registration_Info_UClass_UProjectileComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileComponentConfig.OuterSingleton, Z_Construct_UClass_UProjectileComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProjectileComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UProjectileComponentConfig>()
{
	return UProjectileComponentConfig::StaticClass();
}
UProjectileComponentConfig::UProjectileComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileComponentConfig);
UProjectileComponentConfig::~UProjectileComponentConfig() {}
// End Class UProjectileComponentConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FProjectileComponent::StaticStruct, Z_Construct_UScriptStruct_FProjectileComponent_Statics::NewStructOps, TEXT("ProjectileComponent"), &Z_Registration_Info_UScriptStruct_ProjectileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileComponent), 3583135694U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileComponentConfig, UProjectileComponentConfig::StaticClass, TEXT("UProjectileComponentConfig"), &Z_Registration_Info_UClass_UProjectileComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileComponentConfig), 3053253155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_1274178942(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_ProjectileComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
