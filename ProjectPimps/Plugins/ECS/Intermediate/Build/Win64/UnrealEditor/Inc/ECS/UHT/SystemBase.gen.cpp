// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ECS/Core/SystemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ECS_API UClass* Z_Construct_UClass_USystemBase();
ECS_API UClass* Z_Construct_UClass_USystemBase_NoRegister();
ECS_API UEnum* Z_Construct_UEnum_ECS_ESystemTickType();
UPackage* Z_Construct_UPackage__Script_ECS();
// End Cross Module References

// Begin Enum ESystemTickType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESystemTickType;
static UEnum* ESystemTickType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESystemTickType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESystemTickType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ECS_ESystemTickType, (UObject*)Z_Construct_UPackage__Script_ECS(), TEXT("ESystemTickType"));
	}
	return Z_Registration_Info_UEnum_ESystemTickType.OuterSingleton;
}
template<> ECS_API UEnum* StaticEnum<ESystemTickType>()
{
	return ESystemTickType_StaticEnum();
}
struct Z_Construct_UEnum_ECS_ESystemTickType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Core/SystemBase.h" },
		{ "SYSTEM_FIXED_TICK.Comment", "/**\n * \n */" },
		{ "SYSTEM_FIXED_TICK.Name", "SYSTEM_FIXED_TICK" },
		{ "SYSTEM_MAX.Comment", "/**\n * \n */" },
		{ "SYSTEM_MAX.Name", "SYSTEM_MAX" },
		{ "SYSTEM_POSTPROCESS.Comment", "/**\n * \n */" },
		{ "SYSTEM_POSTPROCESS.Name", "SYSTEM_POSTPROCESS" },
		{ "SYSTEM_TICK.Comment", "/**\n * \n */" },
		{ "SYSTEM_TICK.Name", "SYSTEM_TICK" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SYSTEM_TICK", (int64)SYSTEM_TICK },
		{ "SYSTEM_POSTPROCESS", (int64)SYSTEM_POSTPROCESS },
		{ "SYSTEM_FIXED_TICK", (int64)SYSTEM_FIXED_TICK },
		{ "SYSTEM_MAX", (int64)SYSTEM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ECS_ESystemTickType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ECS,
	nullptr,
	"ESystemTickType",
	"ESystemTickType",
	Z_Construct_UEnum_ECS_ESystemTickType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ECS_ESystemTickType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ECS_ESystemTickType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ECS_ESystemTickType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ECS_ESystemTickType()
{
	if (!Z_Registration_Info_UEnum_ESystemTickType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESystemTickType.InnerSingleton, Z_Construct_UEnum_ECS_ESystemTickType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESystemTickType.InnerSingleton;
}
// End Enum ESystemTickType

// Begin Class USystemBase
void USystemBase::StaticRegisterNativesUSystemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USystemBase);
UClass* Z_Construct_UClass_USystemBase_NoRegister()
{
	return USystemBase::StaticClass();
}
struct Z_Construct_UClass_USystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/SystemBase.h" },
		{ "ModuleRelativePath", "Core/SystemBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ECS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USystemBase_Statics::ClassParams = {
	&USystemBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USystemBase()
{
	if (!Z_Registration_Info_UClass_USystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USystemBase.OuterSingleton, Z_Construct_UClass_USystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USystemBase.OuterSingleton;
}
template<> ECS_API UClass* StaticClass<USystemBase>()
{
	return USystemBase::StaticClass();
}
USystemBase::USystemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USystemBase);
USystemBase::~USystemBase() {}
// End Class USystemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESystemTickType_StaticEnum, TEXT("ESystemTickType"), &Z_Registration_Info_UEnum_ESystemTickType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2503812175U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USystemBase, USystemBase::StaticClass, TEXT("USystemBase"), &Z_Registration_Info_UClass_USystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USystemBase), 2967559530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_2427035022(TEXT("/Script/ECS"),
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
