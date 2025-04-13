// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/SystemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ECS_SystemBase_generated_h
#error "SystemBase.generated.h already included, missing '#pragma once' in SystemBase.h"
#endif
#define ECS_SystemBase_generated_h

#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSystemBase(); \
	friend struct Z_Construct_UClass_USystemBase_Statics; \
public: \
	DECLARE_CLASS(USystemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ECS"), NO_API) \
	DECLARE_SERIALIZER(USystemBase)


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USystemBase(USystemBase&&); \
	USystemBase(const USystemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USystemBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USystemBase) \
	NO_API virtual ~USystemBase();


#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_23_PROLOG
#define FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_25_INCLASS_NO_PURE_DECLS \
	FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ECS_API UClass* StaticClass<class USystemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_NecrotekLabs_Pimps_Profits_ProjectPimps_Plugins_ECS_Source_ECS_Core_SystemBase_h


#define FOREACH_ENUM_ESYSTEMTICKTYPE(op) \
	op(SYSTEM_TICK) \
	op(SYSTEM_POSTPROCESS) \
	op(SYSTEM_FIXED_TICK) 

enum ESystemTickType : int;
template<> ECS_API UEnum* StaticEnum<ESystemTickType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
