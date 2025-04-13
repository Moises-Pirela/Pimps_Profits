// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Components/AttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeComponent() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UAttributesComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UAttributesComponentConfig_NoRegister();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FAttributesComponent();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin ScriptStruct FAttributesComponent
static_assert(std::is_polymorphic<FAttributesComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FAttributesComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributesComponent;
class UScriptStruct* FAttributesComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributesComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributesComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributesComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("AttributesComponent"));
	}
	return Z_Registration_Info_UScriptStruct_AttributesComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FAttributesComponent>()
{
	return FAttributesComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttributesComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributesComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributesComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"AttributesComponent",
	nullptr,
	0,
	sizeof(FAttributesComponent),
	alignof(FAttributesComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributesComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttributesComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttributesComponent()
{
	if (!Z_Registration_Info_UScriptStruct_AttributesComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributesComponent.InnerSingleton, Z_Construct_UScriptStruct_FAttributesComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttributesComponent.InnerSingleton;
}
// End ScriptStruct FAttributesComponent

// Begin Class UAttributesComponentConfig
void UAttributesComponentConfig::StaticRegisterNativesUAttributesComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributesComponentConfig);
UClass* Z_Construct_UClass_UAttributesComponentConfig_NoRegister()
{
	return UAttributesComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UAttributesComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/AttributeComponent.h" },
		{ "ModuleRelativePath", "Core/Components/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_strength_MetaData[] = {
		{ "Category", "AttributesComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_dexterity_MetaData[] = {
		{ "Category", "AttributesComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_intelligence_MetaData[] = {
		{ "Category", "AttributesComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_dexterity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_intelligence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributesComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttributesComponentConfig_Statics::NewProp_strength = { "strength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributesComponentConfig, strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_strength_MetaData), NewProp_strength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttributesComponentConfig_Statics::NewProp_dexterity = { "dexterity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributesComponentConfig, dexterity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_dexterity_MetaData), NewProp_dexterity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttributesComponentConfig_Statics::NewProp_intelligence = { "intelligence", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributesComponentConfig, intelligence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_intelligence_MetaData), NewProp_intelligence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributesComponentConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponentConfig_Statics::NewProp_strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponentConfig_Statics::NewProp_dexterity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesComponentConfig_Statics::NewProp_intelligence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponentConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributesComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributesComponentConfig_Statics::ClassParams = {
	&UAttributesComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttributesComponentConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponentConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributesComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributesComponentConfig()
{
	if (!Z_Registration_Info_UClass_UAttributesComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributesComponentConfig.OuterSingleton, Z_Construct_UClass_UAttributesComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributesComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UAttributesComponentConfig>()
{
	return UAttributesComponentConfig::StaticClass();
}
UAttributesComponentConfig::UAttributesComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributesComponentConfig);
UAttributesComponentConfig::~UAttributesComponentConfig() {}
// End Class UAttributesComponentConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAttributesComponent::StaticStruct, Z_Construct_UScriptStruct_FAttributesComponent_Statics::NewStructOps, TEXT("AttributesComponent"), &Z_Registration_Info_UScriptStruct_AttributesComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributesComponent), 1274456890U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributesComponentConfig, UAttributesComponentConfig::StaticClass, TEXT("UAttributesComponentConfig"), &Z_Registration_Info_UClass_UAttributesComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributesComponentConfig), 772567061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_1132426809(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AttributeComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
