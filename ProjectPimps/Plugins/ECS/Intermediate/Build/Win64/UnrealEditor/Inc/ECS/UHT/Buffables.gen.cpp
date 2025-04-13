// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Buffables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuffables() {}

// Begin Cross Module References
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FBuffableFloat();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FBuffableInt();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FBuffableVal();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin ScriptStruct FBuffableVal
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuffableVal;
class UScriptStruct* FBuffableVal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuffableVal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuffableVal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuffableVal, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("BuffableVal"));
	}
	return Z_Registration_Info_UScriptStruct_BuffableVal.OuterSingleton;
}
template<> ECS_API UScriptStruct* StaticStruct<FBuffableVal>()
{
	return FBuffableVal::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuffableVal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Buffables.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuffableVal>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuffableVal_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
	nullptr,
	&NewStructOps,
	"BuffableVal",
	nullptr,
	0,
	sizeof(FBuffableVal),
	alignof(FBuffableVal),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffableVal_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuffableVal_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuffableVal()
{
	if (!Z_Registration_Info_UScriptStruct_BuffableVal.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuffableVal.InnerSingleton, Z_Construct_UScriptStruct_FBuffableVal_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuffableVal.InnerSingleton;
}
// End ScriptStruct FBuffableVal

// Begin ScriptStruct FBuffableFloat
static_assert(std::is_polymorphic<FBuffableFloat>() == std::is_polymorphic<FBuffableVal>(), "USTRUCT FBuffableFloat cannot be polymorphic unless super FBuffableVal is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuffableFloat;
class UScriptStruct* FBuffableFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuffableFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuffableFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuffableFloat, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("BuffableFloat"));
	}
	return Z_Registration_Info_UScriptStruct_BuffableFloat.OuterSingleton;
}
template<> ECS_API UScriptStruct* StaticStruct<FBuffableFloat>()
{
	return FBuffableFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuffableFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Buffables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseVal_MetaData[] = {
		{ "Category", "BuffableFloat" },
		{ "ModuleRelativePath", "Buffables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_modifiedVal_MetaData[] = {
		{ "Category", "BuffableFloat" },
		{ "ModuleRelativePath", "Buffables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseVal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_modifiedVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuffableFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuffableFloat_Statics::NewProp_baseVal = { "baseVal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuffableFloat, baseVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseVal_MetaData), NewProp_baseVal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBuffableFloat_Statics::NewProp_modifiedVal = { "modifiedVal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuffableFloat, modifiedVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_modifiedVal_MetaData), NewProp_modifiedVal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuffableFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffableFloat_Statics::NewProp_baseVal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffableFloat_Statics::NewProp_modifiedVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffableFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuffableFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
	Z_Construct_UScriptStruct_FBuffableVal,
	&NewStructOps,
	"BuffableFloat",
	Z_Construct_UScriptStruct_FBuffableFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffableFloat_Statics::PropPointers),
	sizeof(FBuffableFloat),
	alignof(FBuffableFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffableFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuffableFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuffableFloat()
{
	if (!Z_Registration_Info_UScriptStruct_BuffableFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuffableFloat.InnerSingleton, Z_Construct_UScriptStruct_FBuffableFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuffableFloat.InnerSingleton;
}
// End ScriptStruct FBuffableFloat

// Begin ScriptStruct FBuffableInt
static_assert(std::is_polymorphic<FBuffableInt>() == std::is_polymorphic<FBuffableVal>(), "USTRUCT FBuffableInt cannot be polymorphic unless super FBuffableVal is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BuffableInt;
class UScriptStruct* FBuffableInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BuffableInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BuffableInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuffableInt, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("BuffableInt"));
	}
	return Z_Registration_Info_UScriptStruct_BuffableInt.OuterSingleton;
}
template<> ECS_API UScriptStruct* StaticStruct<FBuffableInt>()
{
	return FBuffableInt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBuffableInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Buffables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseVal_MetaData[] = {
		{ "Category", "BuffableInt" },
		{ "ModuleRelativePath", "Buffables.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_modifiedVal_MetaData[] = {
		{ "Category", "BuffableInt" },
		{ "ModuleRelativePath", "Buffables.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_baseVal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_modifiedVal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuffableInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuffableInt_Statics::NewProp_baseVal = { "baseVal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuffableInt, baseVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseVal_MetaData), NewProp_baseVal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuffableInt_Statics::NewProp_modifiedVal = { "modifiedVal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBuffableInt, modifiedVal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_modifiedVal_MetaData), NewProp_modifiedVal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuffableInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffableInt_Statics::NewProp_baseVal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuffableInt_Statics::NewProp_modifiedVal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffableInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuffableInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
	Z_Construct_UScriptStruct_FBuffableVal,
	&NewStructOps,
	"BuffableInt",
	Z_Construct_UScriptStruct_FBuffableInt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffableInt_Statics::PropPointers),
	sizeof(FBuffableInt),
	alignof(FBuffableInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuffableInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBuffableInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBuffableInt()
{
	if (!Z_Registration_Info_UScriptStruct_BuffableInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BuffableInt.InnerSingleton, Z_Construct_UScriptStruct_FBuffableInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BuffableInt.InnerSingleton;
}
// End ScriptStruct FBuffableInt

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Buffables_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBuffableVal::StaticStruct, Z_Construct_UScriptStruct_FBuffableVal_Statics::NewStructOps, TEXT("BuffableVal"), &Z_Registration_Info_UScriptStruct_BuffableVal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuffableVal), 4193052398U) },
		{ FBuffableFloat::StaticStruct, Z_Construct_UScriptStruct_FBuffableFloat_Statics::NewStructOps, TEXT("BuffableFloat"), &Z_Registration_Info_UScriptStruct_BuffableFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuffableFloat), 3711614018U) },
		{ FBuffableInt::StaticStruct, Z_Construct_UScriptStruct_FBuffableInt_Statics::NewStructOps, TEXT("BuffableInt"), &Z_Registration_Info_UScriptStruct_BuffableInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuffableInt), 2517697353U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Buffables_h_3344091956(TEXT("/Script/ECS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Buffables_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Buffables_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
