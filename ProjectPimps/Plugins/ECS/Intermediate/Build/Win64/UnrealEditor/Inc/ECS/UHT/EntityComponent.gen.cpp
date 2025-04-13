// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Core/EntityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntityComponent() {}

// Begin Cross Module References
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin ScriptStruct FEntityComponent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EntityComponent;
class UScriptStruct* FEntityComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EntityComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EntityComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityComponent, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("EntityComponent"));
	}
	return Z_Registration_Info_UScriptStruct_EntityComponent.OuterSingleton;
}
template<> ECS_API UScriptStruct* StaticStruct<FEntityComponent>()
{
	return FEntityComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEntityComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/EntityComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
	nullptr,
	&NewStructOps,
	"EntityComponent",
	nullptr,
	0,
	sizeof(FEntityComponent),
	alignof(FEntityComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntityComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent()
{
	if (!Z_Registration_Info_UScriptStruct_EntityComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EntityComponent.InnerSingleton, Z_Construct_UScriptStruct_FEntityComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EntityComponent.InnerSingleton;
}
// End ScriptStruct FEntityComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntityComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEntityComponent::StaticStruct, Z_Construct_UScriptStruct_FEntityComponent_Statics::NewStructOps, TEXT("EntityComponent"), &Z_Registration_Info_UScriptStruct_EntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityComponent), 898361174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntityComponent_h_2378628541(TEXT("/Script/ECS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntityComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_EntityComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
