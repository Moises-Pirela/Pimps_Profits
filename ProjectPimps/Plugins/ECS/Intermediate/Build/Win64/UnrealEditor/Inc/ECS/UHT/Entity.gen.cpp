// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Core/Entity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntity() {}

// Begin Cross Module References
ECS_API UEnum* Z_Construct_UEnum_ECS_EEntityState();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentFlags();
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityFlags();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin Enum EEntityState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEntityState;
static UEnum* EEntityState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEntityState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEntityState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ECS_EEntityState, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("EEntityState"));
	}
	return Z_Registration_Info_UEnum_EEntityState.OuterSingleton;
}
template<> ECS_API UEnum* StaticEnum<EEntityState>()
{
	return EEntityState_StaticEnum();
}
struct Z_Construct_UEnum_ECS_EEntityState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ENTITY_STATE_ACTIVE.Name", "ENTITY_STATE_ACTIVE" },
		{ "ENTITY_STATE_DEAD.Name", "ENTITY_STATE_DEAD" },
		{ "ENTITY_STATE_INACTIVE.Name", "ENTITY_STATE_INACTIVE" },
		{ "ENTITY_STATE_MAX.Name", "ENTITY_STATE_MAX" },
		{ "ModuleRelativePath", "Core/Entity.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENTITY_STATE_ACTIVE", (int64)ENTITY_STATE_ACTIVE },
		{ "ENTITY_STATE_DEAD", (int64)ENTITY_STATE_DEAD },
		{ "ENTITY_STATE_INACTIVE", (int64)ENTITY_STATE_INACTIVE },
		{ "ENTITY_STATE_MAX", (int64)ENTITY_STATE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ECS_EEntityState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ECS,
	nullptr,
	"EEntityState",
	"EEntityState",
	Z_Construct_UEnum_ECS_EEntityState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ECS_EEntityState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ECS_EEntityState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ECS_EEntityState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ECS_EEntityState()
{
	if (!Z_Registration_Info_UEnum_EEntityState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEntityState.InnerSingleton, Z_Construct_UEnum_ECS_EEntityState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEntityState.InnerSingleton;
}
// End Enum EEntityState

// Begin ScriptStruct FEntityFlags
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EntityFlags;
class UScriptStruct* FEntityFlags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EntityFlags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EntityFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityFlags, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("EntityFlags"));
	}
	return Z_Registration_Info_UScriptStruct_EntityFlags.OuterSingleton;
}
template<> ECS_API UScriptStruct* StaticStruct<FEntityFlags>()
{
	return FEntityFlags::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEntityFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Entity.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityFlags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityFlags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
	nullptr,
	&NewStructOps,
	"EntityFlags",
	nullptr,
	0,
	sizeof(FEntityFlags),
	alignof(FEntityFlags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityFlags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntityFlags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEntityFlags()
{
	if (!Z_Registration_Info_UScriptStruct_EntityFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EntityFlags.InnerSingleton, Z_Construct_UScriptStruct_FEntityFlags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EntityFlags.InnerSingleton;
}
// End ScriptStruct FEntityFlags

// Begin ScriptStruct FComponentFlags
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentFlags;
class UScriptStruct* FComponentFlags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentFlags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentFlags, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("ComponentFlags"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentFlags.OuterSingleton;
}
template<> ECS_API UScriptStruct* StaticStruct<FComponentFlags>()
{
	return FComponentFlags::StaticStruct();
}
struct Z_Construct_UScriptStruct_FComponentFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Entity.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentFlags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentFlags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
	nullptr,
	&NewStructOps,
	"ComponentFlags",
	nullptr,
	0,
	sizeof(FComponentFlags),
	alignof(FComponentFlags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentFlags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentFlags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FComponentFlags()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentFlags.InnerSingleton, Z_Construct_UScriptStruct_FComponentFlags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ComponentFlags.InnerSingleton;
}
// End ScriptStruct FComponentFlags

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Entity_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEntityState_StaticEnum, TEXT("EEntityState"), &Z_Registration_Info_UEnum_EEntityState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1580369174U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEntityFlags::StaticStruct, Z_Construct_UScriptStruct_FEntityFlags_Statics::NewStructOps, TEXT("EntityFlags"), &Z_Registration_Info_UScriptStruct_EntityFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityFlags), 98689798U) },
		{ FComponentFlags::StaticStruct, Z_Construct_UScriptStruct_FComponentFlags_Statics::NewStructOps, TEXT("ComponentFlags"), &Z_Registration_Info_UScriptStruct_ComponentFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentFlags), 3423696997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Entity_h_2733558096(TEXT("/Script/ECS"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Entity_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Entity_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Entity_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_Entity_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
