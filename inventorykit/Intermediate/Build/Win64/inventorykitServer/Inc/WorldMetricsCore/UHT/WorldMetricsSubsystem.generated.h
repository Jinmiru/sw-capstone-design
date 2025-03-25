// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMetricsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDMETRICSCORE_WorldMetricsSubsystem_generated_h
#error "WorldMetricsSubsystem.generated.h already included, missing '#pragma once' in WorldMetricsSubsystem.h"
#endif
#define WORLDMETRICSCORE_WorldMetricsSubsystem_generated_h

#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMetricsSubsystem(); \
	friend struct Z_Construct_UClass_UWorldMetricsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWorldMetricsSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldMetricsCore"), WORLDMETRICSCORE_API) \
	DECLARE_SERIALIZER(UWorldMetricsSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDMETRICSCORE_API UWorldMetricsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldMetricsSubsystem(UWorldMetricsSubsystem&&); \
	UWorldMetricsSubsystem(const UWorldMetricsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDMETRICSCORE_API, UWorldMetricsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMetricsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldMetricsSubsystem) \
	WORLDMETRICSCORE_API virtual ~UWorldMetricsSubsystem();


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_28_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMETRICSCORE_API UClass* StaticClass<class UWorldMetricsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
