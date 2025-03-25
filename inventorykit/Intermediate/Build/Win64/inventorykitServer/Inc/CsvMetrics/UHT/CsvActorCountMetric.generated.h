// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CsvActorCountMetric.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CSVMETRICS_CsvActorCountMetric_generated_h
#error "CsvActorCountMetric.generated.h already included, missing '#pragma once' in CsvActorCountMetric.h"
#endif
#define CSVMETRICS_CsvActorCountMetric_generated_h

#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCsvActorCountMetric(); \
	friend struct Z_Construct_UClass_UCsvActorCountMetric_Statics; \
public: \
	DECLARE_CLASS(UCsvActorCountMetric, UWorldMetricInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CsvMetrics"), NO_API) \
	DECLARE_SERIALIZER(UCsvActorCountMetric) \
	virtual UObject* _getUObject() const override { return const_cast<UCsvActorCountMetric*>(this); }


#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCsvActorCountMetric(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCsvActorCountMetric(UCsvActorCountMetric&&); \
	UCsvActorCountMetric(const UCsvActorCountMetric&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCsvActorCountMetric); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCsvActorCountMetric); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCsvActorCountMetric) \
	NO_API virtual ~UCsvActorCountMetric();


#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_16_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CSVMETRICS_API UClass* StaticClass<class UCsvActorCountMetric>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvActorCountMetric_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
