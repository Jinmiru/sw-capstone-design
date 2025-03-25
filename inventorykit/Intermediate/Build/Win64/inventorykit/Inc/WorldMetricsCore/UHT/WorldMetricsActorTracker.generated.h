// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMetricsActorTracker.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDMETRICSCORE_WorldMetricsActorTracker_generated_h
#error "WorldMetricsActorTracker.generated.h already included, missing '#pragma once' in WorldMetricsActorTracker.h"
#endif
#define WORLDMETRICSCORE_WorldMetricsActorTracker_generated_h

#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMetricsActorTracker(); \
	friend struct Z_Construct_UClass_UWorldMetricsActorTracker_Statics; \
public: \
	DECLARE_CLASS(UWorldMetricsActorTracker, UWorldMetricsExtension, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WorldMetricsCore"), WORLDMETRICSCORE_API) \
	DECLARE_SERIALIZER(UWorldMetricsActorTracker)


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDMETRICSCORE_API UWorldMetricsActorTracker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldMetricsActorTracker(UWorldMetricsActorTracker&&); \
	UWorldMetricsActorTracker(const UWorldMetricsActorTracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDMETRICSCORE_API, UWorldMetricsActorTracker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMetricsActorTracker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldMetricsActorTracker) \
	WORLDMETRICSCORE_API virtual ~UWorldMetricsActorTracker();


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_22_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMETRICSCORE_API UClass* StaticClass<class UWorldMetricsActorTracker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTracker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
