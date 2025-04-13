// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Components/DamageComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageComponent() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UDamageComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UDamageComponentConfig_NoRegister();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FDamageComponent();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin ScriptStruct FDamageComponent
static_assert(std::is_polymorphic<FDamageComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FDamageComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageComponent;
class UScriptStruct* FDamageComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("DamageComponent"));
	}
	return Z_Registration_Info_UScriptStruct_DamageComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FDamageComponent>()
{
	return FDamageComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDamageComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/DamageComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"DamageComponent",
	nullptr,
	0,
	sizeof(FDamageComponent),
	alignof(FDamageComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageComponent()
{
	if (!Z_Registration_Info_UScriptStruct_DamageComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageComponent.InnerSingleton, Z_Construct_UScriptStruct_FDamageComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DamageComponent.InnerSingleton;
}
// End ScriptStruct FDamageComponent

// Begin Class UDamageComponentConfig
void UDamageComponentConfig::StaticRegisterNativesUDamageComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageComponentConfig);
UClass* Z_Construct_UClass_UDamageComponentConfig_NoRegister()
{
	return UDamageComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UDamageComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Components/DamageComponent.h" },
		{ "ModuleRelativePath", "Core/Components/DamageComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseDamage_MetaData[] = {
		{ "Category", "DamageComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/DamageComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDamageComponentConfig_Statics::NewProp_baseDamage = { "baseDamage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageComponentConfig, baseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseDamage_MetaData), NewProp_baseDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageComponentConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageComponentConfig_Statics::NewProp_baseDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponentConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDamageComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageComponentConfig_Statics::ClassParams = {
	&UDamageComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDamageComponentConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponentConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageComponentConfig()
{
	if (!Z_Registration_Info_UClass_UDamageComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageComponentConfig.OuterSingleton, Z_Construct_UClass_UDamageComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UDamageComponentConfig>()
{
	return UDamageComponentConfig::StaticClass();
}
UDamageComponentConfig::UDamageComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageComponentConfig);
UDamageComponentConfig::~UDamageComponentConfig() {}
// End Class UDamageComponentConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_DamageComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageComponent::StaticStruct, Z_Construct_UScriptStruct_FDamageComponent_Statics::NewStructOps, TEXT("DamageComponent"), &Z_Registration_Info_UScriptStruct_DamageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageComponent), 649464150U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageComponentConfig, UDamageComponentConfig::StaticClass, TEXT("UDamageComponentConfig"), &Z_Registration_Info_UClass_UDamageComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageComponentConfig), 505793753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_DamageComponent_h_826776584(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_DamageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_DamageComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_DamageComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_DamageComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
