// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Components/InventoryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UInventoryComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UInventoryComponentConfig_NoRegister();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryComponent();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemSlot();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin ScriptStruct FInventoryItemSlot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryItemSlot;
class UScriptStruct* FInventoryItemSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryItemSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItemSlot, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("InventoryItemSlot"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemSlot.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FInventoryItemSlot>()
{
	return FInventoryItemSlot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryItemSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItemSlot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItemSlot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	nullptr,
	&NewStructOps,
	"InventoryItemSlot",
	nullptr,
	0,
	sizeof(FInventoryItemSlot),
	alignof(FInventoryItemSlot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItemSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryItemSlot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryItemSlot()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryItemSlot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryItemSlot.InnerSingleton, Z_Construct_UScriptStruct_FInventoryItemSlot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryItemSlot.InnerSingleton;
}
// End ScriptStruct FInventoryItemSlot

// Begin ScriptStruct FInventoryComponent
static_assert(std::is_polymorphic<FInventoryComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FInventoryComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventoryComponent;
class UScriptStruct* FInventoryComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventoryComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("InventoryComponent"));
	}
	return Z_Registration_Info_UScriptStruct_InventoryComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FInventoryComponent>()
{
	return FInventoryComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"InventoryComponent",
	nullptr,
	0,
	sizeof(FInventoryComponent),
	alignof(FInventoryComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventoryComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventoryComponent()
{
	if (!Z_Registration_Info_UScriptStruct_InventoryComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventoryComponent.InnerSingleton, Z_Construct_UScriptStruct_FInventoryComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventoryComponent.InnerSingleton;
}
// End ScriptStruct FInventoryComponent

// Begin Class UInventoryComponentConfig
void UInventoryComponentConfig::StaticRegisterNativesUInventoryComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponentConfig);
UClass* Z_Construct_UClass_UInventoryComponentConfig_NoRegister()
{
	return UInventoryComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UInventoryComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/InventoryComponent.h" },
		{ "ModuleRelativePath", "Core/Components/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_initialInventorySize_MetaData[] = {
		{ "Category", "Inventory Config" },
		{ "ModuleRelativePath", "Core/Components/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_initialInventorySize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComponentConfig_Statics::NewProp_initialInventorySize = { "initialInventorySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponentConfig, initialInventorySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_initialInventorySize_MetaData), NewProp_initialInventorySize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponentConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponentConfig_Statics::NewProp_initialInventorySize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponentConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponentConfig_Statics::ClassParams = {
	&UInventoryComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventoryComponentConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponentConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponentConfig()
{
	if (!Z_Registration_Info_UClass_UInventoryComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponentConfig.OuterSingleton, Z_Construct_UClass_UInventoryComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UInventoryComponentConfig>()
{
	return UInventoryComponentConfig::StaticClass();
}
UInventoryComponentConfig::UInventoryComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponentConfig);
UInventoryComponentConfig::~UInventoryComponentConfig() {}
// End Class UInventoryComponentConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_InventoryComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInventoryItemSlot::StaticStruct, Z_Construct_UScriptStruct_FInventoryItemSlot_Statics::NewStructOps, TEXT("InventoryItemSlot"), &Z_Registration_Info_UScriptStruct_InventoryItemSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryItemSlot), 2299031412U) },
		{ FInventoryComponent::StaticStruct, Z_Construct_UScriptStruct_FInventoryComponent_Statics::NewStructOps, TEXT("InventoryComponent"), &Z_Registration_Info_UScriptStruct_InventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventoryComponent), 2669839976U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponentConfig, UInventoryComponentConfig::StaticClass, TEXT("UInventoryComponentConfig"), &Z_Registration_Info_UClass_UInventoryComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponentConfig), 4275566108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_InventoryComponent_h_2888413817(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_InventoryComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_InventoryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_InventoryComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
