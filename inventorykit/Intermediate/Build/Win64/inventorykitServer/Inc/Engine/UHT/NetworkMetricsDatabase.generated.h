// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/NetworkMetricsDatabase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetworkMetricsDatabase_generated_h
#error "NetworkMetricsDatabase.generated.h already included, missing '#pragma once' in NetworkMetricsDatabase.h"
#endif
#define ENGINE_NetworkMetricsDatabase_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsDatabase(); \
	friend struct Z_Construct_UClass_UNetworkMetricsDatabase_Statics; \
public: \
	DECLARE_CLASS(UNetworkMetricsDatabase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkMetricsDatabase)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkMetricsDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkMetricsDatabase(UNetworkMetricsDatabase&&); \
	UNetworkMetricsDatabase(const UNetworkMetricsDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkMetricsDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkMetricsDatabase) \
	NO_API virtual ~UNetworkMetricsDatabase();


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_32_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkMetricsDatabase>();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsBaseListener(); \
	friend struct Z_Construct_UClass_UNetworkMetricsBaseListener_Statics; \
public: \
	DECLARE_CLASS(UNetworkMetricsBaseListener, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkMetricsBaseListener) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_138_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkMetricsBaseListener(UNetworkMetricsBaseListener&&); \
	UNetworkMetricsBaseListener(const UNetworkMetricsBaseListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkMetricsBaseListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsBaseListener); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsBaseListener)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_135_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_138_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkMetricsBaseListener>();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsCSV(); \
	friend struct Z_Construct_UClass_UNetworkMetricsCSV_Statics; \
public: \
	DECLARE_CLASS(UNetworkMetricsCSV, UNetworkMetricsBaseListener, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkMetricsCSV)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_199_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkMetricsCSV(UNetworkMetricsCSV&&); \
	UNetworkMetricsCSV(const UNetworkMetricsCSV&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkMetricsCSV); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsCSV); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsCSV)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_196_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_199_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkMetricsCSV>();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsPerfCounters(); \
	friend struct Z_Construct_UClass_UNetworkMetricsPerfCounters_Statics; \
public: \
	DECLARE_CLASS(UNetworkMetricsPerfCounters, UNetworkMetricsBaseListener, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkMetricsPerfCounters)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkMetricsPerfCounters(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkMetricsPerfCounters(UNetworkMetricsPerfCounters&&); \
	UNetworkMetricsPerfCounters(const UNetworkMetricsPerfCounters&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkMetricsPerfCounters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsPerfCounters); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsPerfCounters)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_222_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_225_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkMetricsPerfCounters>();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_248_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsStats(); \
	friend struct Z_Construct_UClass_UNetworkMetricsStats_Statics; \
public: \
	DECLARE_CLASS(UNetworkMetricsStats, UNetworkMetricsBaseListener, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkMetricsStats)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_248_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkMetricsStats(UNetworkMetricsStats&&); \
	UNetworkMetricsStats(const UNetworkMetricsStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkMetricsStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsStats)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_245_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_248_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_248_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h_248_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkMetricsStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsDatabase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
