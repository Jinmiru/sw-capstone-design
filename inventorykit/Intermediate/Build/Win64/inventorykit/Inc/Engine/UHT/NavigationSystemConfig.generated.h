// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/NavigationSystemConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationSystemConfig_generated_h
#error "NavigationSystemConfig.generated.h already included, missing '#pragma once' in NavigationSystemConfig.h"
#endif
#define ENGINE_NavigationSystemConfig_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavigationSystemConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationSystemConfig(UNavigationSystemConfig&&); \
	UNavigationSystemConfig(const UNavigationSystemConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavigationSystemConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemConfig) \
	ENGINE_API virtual ~UNavigationSystemConfig();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavigationSystemConfig>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNullNavSysConfig(); \
	friend struct Z_Construct_UClass_UNullNavSysConfig_Statics; \
public: \
	DECLARE_CLASS(UNullNavSysConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNullNavSysConfig)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNullNavSysConfig(UNullNavSysConfig&&); \
	UNullNavSysConfig(const UNullNavSysConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNullNavSysConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNullNavSysConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNullNavSysConfig) \
	ENGINE_API virtual ~UNullNavSysConfig();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_53_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNullNavSysConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
