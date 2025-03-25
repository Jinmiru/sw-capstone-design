// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CsvMetricsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CSVMETRICS_CsvMetricsSubsystem_generated_h
#error "CsvMetricsSubsystem.generated.h already included, missing '#pragma once' in CsvMetricsSubsystem.h"
#endif
#define CSVMETRICS_CsvMetricsSubsystem_generated_h

#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCsvMetricsSubsystem(); \
	friend struct Z_Construct_UClass_UCsvMetricsSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCsvMetricsSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CsvMetrics"), CSVMETRICS_API) \
	DECLARE_SERIALIZER(UCsvMetricsSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CSVMETRICS_API UCsvMetricsSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCsvMetricsSubsystem(UCsvMetricsSubsystem&&); \
	UCsvMetricsSubsystem(const UCsvMetricsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CSVMETRICS_API, UCsvMetricsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCsvMetricsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCsvMetricsSubsystem) \
	CSVMETRICS_API virtual ~UCsvMetricsSubsystem();


#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CSVMETRICS_API UClass* StaticClass<class UCsvMetricsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_WorldMetrics_Source_CsvMetrics_Public_CsvMetricsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
