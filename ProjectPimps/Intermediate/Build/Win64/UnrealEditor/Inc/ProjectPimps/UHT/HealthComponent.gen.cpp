// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Components/HealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UHealthComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UHealthComponentConfig_NoRegister();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FHealthComponent();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin ScriptStruct FHealthComponent
static_assert(std::is_polymorphic<FHealthComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FHealthComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HealthComponent;
class UScriptStruct* FHealthComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HealthComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HealthComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHealthComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("HealthComponent"));
	}
	return Z_Registration_Info_UScriptStruct_HealthComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FHealthComponent>()
{
	return FHealthComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHealthComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHealthComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"HealthComponent",
	nullptr,
	0,
	sizeof(FHealthComponent),
	alignof(FHealthComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHealthComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHealthComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHealthComponent()
{
	if (!Z_Registration_Info_UScriptStruct_HealthComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HealthComponent.InnerSingleton, Z_Construct_UScriptStruct_FHealthComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HealthComponent.InnerSingleton;
}
// End ScriptStruct FHealthComponent

// Begin Class UHealthComponentConfig
void UHealthComponentConfig::StaticRegisterNativesUHealthComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthComponentConfig);
UClass* Z_Construct_UClass_UHealthComponentConfig_NoRegister()
{
	return UHealthComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UHealthComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/HealthComponent.h" },
		{ "ModuleRelativePath", "Core/Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_initialMaxHealth_MetaData[] = {
		{ "Category", "Health Config" },
		{ "ModuleRelativePath", "Core/Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_initialMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponentConfig_Statics::NewProp_initialMaxHealth = { "initialMaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponentConfig, initialMaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_initialMaxHealth_MetaData), NewProp_initialMaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponentConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponentConfig_Statics::NewProp_initialMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponentConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponentConfig_Statics::ClassParams = {
	&UHealthComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHealthComponentConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponentConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthComponentConfig()
{
	if (!Z_Registration_Info_UClass_UHealthComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponentConfig.OuterSingleton, Z_Construct_UClass_UHealthComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UHealthComponentConfig>()
{
	return UHealthComponentConfig::StaticClass();
}
UHealthComponentConfig::UHealthComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponentConfig);
UHealthComponentConfig::~UHealthComponentConfig() {}
// End Class UHealthComponentConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHealthComponent::StaticStruct, Z_Construct_UScriptStruct_FHealthComponent_Statics::NewStructOps, TEXT("HealthComponent"), &Z_Registration_Info_UScriptStruct_HealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHealthComponent), 1215976777U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthComponentConfig, UHealthComponentConfig::StaticClass, TEXT("UHealthComponentConfig"), &Z_Registration_Info_UClass_UHealthComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponentConfig), 2112318149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_928355210(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_HealthComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
