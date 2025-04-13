// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECSGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECS_ECSGameInstance_generated_h
#error "ECSGameInstance.generated.h already included, missing '#pragma once' in ECSGameInstance.h"
#endif
#define ECS_ECSGameInstance_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUECSGameInstance(); \
	friend struct Z_Construct_UClass_UECSGameInstance_Statics; \
public: \
	DECLARE_CLASS(UECSGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ECS"), NO_API) \
	DECLARE_SERIALIZER(UECSGameInstance)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UECSGameInstance(UECSGameInstance&&); \
	UECSGameInstance(const UECSGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UECSGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UECSGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UECSGameInstance) \
	NO_API virtual ~UECSGameInstance();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_11_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_14_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECS_API UClass* StaticClass<class UECSGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_ECSGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
