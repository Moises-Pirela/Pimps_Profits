// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Components/PlayerJumpComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerJumpComponent() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UEntityComponentConfigBase();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerJumpComponentConfig();
PROJECTPIMPS_API UClass* Z_Construct_UClass_UPlayerJumpComponentConfig_NoRegister();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerJumpComponent();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin ScriptStruct FPlayerJumpComponent
static_assert(std::is_polymorphic<FPlayerJumpComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FPlayerJumpComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerJumpComponent;
class UScriptStruct* FPlayerJumpComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerJumpComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerJumpComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerJumpComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("PlayerJumpComponent"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerJumpComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FPlayerJumpComponent>()
{
	return FPlayerJumpComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/PlayerJumpComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxJumps_MetaData[] = {
		{ "Category", "PlayerJumpComponent" },
		{ "ModuleRelativePath", "Core/Components/PlayerJumpComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_maxJumps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerJumpComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::NewProp_maxJumps = { "maxJumps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerJumpComponent, maxJumps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxJumps_MetaData), NewProp_maxJumps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::NewProp_maxJumps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"PlayerJumpComponent",
	Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::PropPointers),
	sizeof(FPlayerJumpComponent),
	alignof(FPlayerJumpComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerJumpComponent()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerJumpComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerJumpComponent.InnerSingleton, Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerJumpComponent.InnerSingleton;
}
// End ScriptStruct FPlayerJumpComponent

// Begin Class UPlayerJumpComponentConfig
void UPlayerJumpComponentConfig::StaticRegisterNativesUPlayerJumpComponentConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerJumpComponentConfig);
UClass* Z_Construct_UClass_UPlayerJumpComponentConfig_NoRegister()
{
	return UPlayerJumpComponentConfig::StaticClass();
}
struct Z_Construct_UClass_UPlayerJumpComponentConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Components/PlayerJumpComponent.h" },
		{ "ModuleRelativePath", "Core/Components/PlayerJumpComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpSpeed_MetaData[] = {
		{ "Category", "PlayerJumpComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/PlayerJumpComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxJumps_MetaData[] = {
		{ "Category", "PlayerJumpComponentConfig" },
		{ "ModuleRelativePath", "Core/Components/PlayerJumpComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_jumpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxJumps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerJumpComponentConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::NewProp_jumpSpeed = { "jumpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerJumpComponentConfig, jumpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpSpeed_MetaData), NewProp_jumpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::NewProp_maxJumps = { "maxJumps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerJumpComponentConfig, maxJumps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxJumps_MetaData), NewProp_maxJumps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::NewProp_jumpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::NewProp_maxJumps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEntityComponentConfigBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::ClassParams = {
	&UPlayerJumpComponentConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerJumpComponentConfig()
{
	if (!Z_Registration_Info_UClass_UPlayerJumpComponentConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerJumpComponentConfig.OuterSingleton, Z_Construct_UClass_UPlayerJumpComponentConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerJumpComponentConfig.OuterSingleton;
}
template<> PROJECTPIMPS_API UClass* StaticClass<UPlayerJumpComponentConfig>()
{
	return UPlayerJumpComponentConfig::StaticClass();
}
UPlayerJumpComponentConfig::UPlayerJumpComponentConfig() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerJumpComponentConfig);
UPlayerJumpComponentConfig::~UPlayerJumpComponentConfig() {}
// End Class UPlayerJumpComponentConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerJumpComponent::StaticStruct, Z_Construct_UScriptStruct_FPlayerJumpComponent_Statics::NewStructOps, TEXT("PlayerJumpComponent"), &Z_Registration_Info_UScriptStruct_PlayerJumpComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerJumpComponent), 1105100521U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerJumpComponentConfig, UPlayerJumpComponentConfig::StaticClass, TEXT("UPlayerJumpComponentConfig"), &Z_Registration_Info_UClass_UPlayerJumpComponentConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerJumpComponentConfig), 75524118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_4059560741(TEXT("/Script/ProjectPimps"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_PlayerJumpComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
