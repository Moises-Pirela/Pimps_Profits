// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Core/UnrealEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEntity() {}

// Begin Cross Module References
ECS_API UClass* Z_Construct_UClass_UEntityConfig_NoRegister();
ECS_API UClass* Z_Construct_UClass_UUnrealEntity();
ECS_API UClass* Z_Construct_UClass_UUnrealEntity_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin Class UUnrealEntity
void UUnrealEntity::StaticRegisterNativesUUnrealEntity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealEntity);
UClass* Z_Construct_UClass_UUnrealEntity_NoRegister()
{
	return UUnrealEntity::StaticClass();
}
struct Z_Construct_UClass_UUnrealEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/UnrealEntity.h" },
		{ "ModuleRelativePath", "Core/UnrealEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_entityId_MetaData[] = {
		{ "Category", "UnrealEntity" },
		{ "ModuleRelativePath", "Core/UnrealEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_entityConfig_MetaData[] = {
		{ "Category", "UnrealEntity" },
		{ "ModuleRelativePath", "Core/UnrealEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStartingEntity_MetaData[] = {
		{ "Category", "UnrealEntity" },
		{ "ModuleRelativePath", "Core/UnrealEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_entityId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_entityConfig;
	static void NewProp_bIsStartingEntity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStartingEntity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEntity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUnrealEntity_Statics::NewProp_entityId = { "entityId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnrealEntity, entityId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_entityId_MetaData), NewProp_entityId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnrealEntity_Statics::NewProp_entityConfig = { "entityConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnrealEntity, entityConfig), Z_Construct_UClass_UEntityConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_entityConfig_MetaData), NewProp_entityConfig_MetaData) };
void Z_Construct_UClass_UUnrealEntity_Statics::NewProp_bIsStartingEntity_SetBit(void* Obj)
{
	((UUnrealEntity*)Obj)->bIsStartingEntity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUnrealEntity_Statics::NewProp_bIsStartingEntity = { "bIsStartingEntity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUnrealEntity), &Z_Construct_UClass_UUnrealEntity_Statics::NewProp_bIsStartingEntity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStartingEntity_MetaData), NewProp_bIsStartingEntity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnrealEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEntity_Statics::NewProp_entityId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEntity_Statics::NewProp_entityConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEntity_Statics::NewProp_bIsStartingEntity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEntity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnrealEntity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEntity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEntity_Statics::ClassParams = {
	&UUnrealEntity::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUnrealEntity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEntity_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnrealEntity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnrealEntity()
{
	if (!Z_Registration_Info_UClass_UUnrealEntity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealEntity.OuterSingleton, Z_Construct_UClass_UUnrealEntity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnrealEntity.OuterSingleton;
}
template<> ECS_API UClass* StaticClass<UUnrealEntity>()
{
	return UUnrealEntity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEntity);
UUnrealEntity::~UUnrealEntity() {}
// End Class UUnrealEntity

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealEntity, UUnrealEntity::StaticClass, TEXT("UUnrealEntity"), &Z_Registration_Info_UClass_UUnrealEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealEntity), 734989438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_2831033882(TEXT("/Script/ECS"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
