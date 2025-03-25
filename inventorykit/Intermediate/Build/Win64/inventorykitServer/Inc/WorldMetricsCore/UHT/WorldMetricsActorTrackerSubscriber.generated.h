// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldMetricsActorTrackerSubscriber.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORLDMETRICSCORE_WorldMetricsActorTrackerSubscriber_generated_h
#error "WorldMetricsActorTrackerSubscriber.generated.h already included, missing '#pragma once' in WorldMetricsActorTrackerSubscriber.h"
#endif
#define WORLDMETRICSCORE_WorldMetricsActorTrackerSubscriber_generated_h

#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WORLDMETRICSCORE_API UWorldMetricsActorTrackerSubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldMetricsActorTrackerSubscriber(UWorldMetricsActorTrackerSubscriber&&); \
	UWorldMetricsActorTrackerSubscriber(const UWorldMetricsActorTrackerSubscriber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDMETRICSCORE_API, UWorldMetricsActorTrackerSubscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldMetricsActorTrackerSubscriber); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldMetricsActorTrackerSubscriber) \
	WORLDMETRICSCORE_API virtual ~UWorldMetricsActorTrackerSubscriber();


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWorldMetricsActorTrackerSubscriber(); \
	friend struct Z_Construct_UClass_UWorldMetricsActorTrackerSubscriber_Statics; \
public: \
	DECLARE_CLASS(UWorldMetricsActorTrackerSubscriber, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/WorldMetricsCore"), WORLDMETRICSCORE_API) \
	DECLARE_SERIALIZER(UWorldMetricsActorTrackerSubscriber)


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWorldMetricsActorTrackerSubscriber() {} \
public: \
	typedef UWorldMetricsActorTrackerSubscriber UClassType; \
	typedef IWorldMetricsActorTrackerSubscriber ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_9_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WORLDMETRICSCORE_API UClass* StaticClass<class UWorldMetricsActorTrackerSubscriber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_WorldMetricsCore_Public_WorldMetricsActorTrackerSubscriber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
