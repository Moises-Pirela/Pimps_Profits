// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Core/ComponentArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentArray() {}

// Begin Cross Module References
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentArray();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin ScriptStruct FComponentArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentArray;
class UScriptStruct* FComponentArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentArray, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("ComponentArray"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentArray.OuterSingleton;
}
template<> ECS_API UScriptStruct* StaticStruct<FComponentArray>()
{
	return FComponentArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComponentArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/ComponentArray.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
	nullptr,
	&NewStructOps,
	"ComponentArray",
	nullptr,
	0,
	sizeof(FComponentArray),
	alignof(FComponentArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComponentArray()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentArray.InnerSingleton, Z_Construct_UScriptStruct_FComponentArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComponentArray.InnerSingleton;
}
// End ScriptStruct FComponentArray

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_ComponentArray_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FComponentArray::StaticStruct, Z_Construct_UScriptStruct_FComponentArray_Statics::NewStructOps, TEXT("ComponentArray"), &Z_Registration_Info_UScriptStruct_ComponentArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentArray), 2109567658U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_ComponentArray_h_2207537756(TEXT("/Script/ECS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_ComponentArray_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_ComponentArray_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
