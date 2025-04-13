// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ECS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ECS()
	{
		if (!Z_Registration_Info_UPackage__Script_ECS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ECS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE9D8DD68,
				0x6C7B5062,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ECS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ECS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ECS(Z_Construct_UPackage__Script_ECS, TEXT("/Script/ECS"), Z_Registration_Info_UPackage__Script_ECS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE9D8DD68, 0x6C7B5062));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
