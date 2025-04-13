// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectPimps/Core/Components/AIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIComponent() {}

// Begin Cross Module References
ECS_API UScriptStruct* Z_Construct_UScriptStruct_FEntityComponent();
PROJECTPIMPS_API UScriptStruct* Z_Construct_UScriptStruct_FAIComponent();
UPackage* Z_Construct_UPackage__Script_ProjectPimps();
// End Cross Module References

// Begin ScriptStruct FAIComponent
static_assert(std::is_polymorphic<FAIComponent>() == std::is_polymorphic<FEntityComponent>(), "USTRUCT FAIComponent cannot be polymorphic unless super FEntityComponent is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIComponent;
class UScriptStruct* FAIComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIComponent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIComponent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIComponent, (UObject*)Z_Construct_UPackage__Script_ProjectPimps(), TEXT("AIComponent"));
	}
	return Z_Registration_Info_UScriptStruct_AIComponent.OuterSingleton;
}
template<> PROJECTPIMPS_API UScriptStruct* StaticStruct<FAIComponent>()
{
	return FAIComponent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Core/Components/AIComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIComponent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIComponent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectPimps,
	Z_Construct_UScriptStruct_FEntityComponent,
	&NewStructOps,
	"AIComponent",
	nullptr,
	0,
	sizeof(FAIComponent),
	alignof(FAIComponent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIComponent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIComponent()
{
	if (!Z_Registration_Info_UScriptStruct_AIComponent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIComponent.InnerSingleton, Z_Construct_UScriptStruct_FAIComponent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIComponent.InnerSingleton;
}
// End ScriptStruct FAIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AIComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAIComponent::StaticStruct, Z_Construct_UScriptStruct_FAIComponent_Statics::NewStructOps, TEXT("AIComponent"), &Z_Registration_Info_UScriptStruct_AIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIComponent), 669546815U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AIComponent_h_1167064069(TEXT("/Script/ProjectPimps"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AIComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Source_ProjectPimps_Core_Components_AIComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
