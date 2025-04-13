// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/UnrealEntity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECS_UnrealEntity_generated_h
#error "UnrealEntity.generated.h already included, missing '#pragma once' in UnrealEntity.h"
#endif
#define ECS_UnrealEntity_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnrealEntity(); \
	friend struct Z_Construct_UClass_UUnrealEntity_Statics; \
public: \
	DECLARE_CLASS(UUnrealEntity, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ECS"), NO_API) \
	DECLARE_SERIALIZER(UUnrealEntity)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUnrealEntity(UUnrealEntity&&); \
	UUnrealEntity(const UUnrealEntity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnrealEntity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnrealEntity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUnrealEntity) \
	NO_API virtual ~UUnrealEntity();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_5_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_8_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECS_API UClass* StaticClass<class UUnrealEntity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_UnrealEntity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
