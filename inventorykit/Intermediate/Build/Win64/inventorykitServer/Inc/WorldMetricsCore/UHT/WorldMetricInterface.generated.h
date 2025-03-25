// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMetricInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDMETRICSCORE_WorldMetricInterface_generated_h
#error "WorldMetricInterface.generated.h already included, missing '#pragma once' in WorldMetricInterface.h"
#endif
#define WORLDMETRICSCORE_WorldMetricInterface_generated_h

#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldMetricInterface(); \
	friend struct Z_Construct_UClass_UWorldMetricInterface_Statics; \
public: \
	DECLARE_CLASS(UWorldMetricInterface, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/WorldMetricsCore"), WORLDMETRICSCORE_API) \
	DECLARE_SERIALIZER(UWorldMetricInterface) \
	DECLARE_WITHIN(UWorldMetricsSubsystem)


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDMETRICSCORE_API UWorldMetricInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldMetricInterface(UWorldMetricInterface&&); \
	UWorldMetricInterface(const UWorldMetricInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDMETRICSCORE_API, UWorldMetricInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMetricInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldMetricInterface) \
	WORLDMETRICSCORE_API virtual ~UWorldMetricInterface();


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_14_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMETRICSCORE_API UClass* StaticClass<class UWorldMetricInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
