// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraceQueryTestResults.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FUNCTIONALTESTING_TraceQueryTestResults_generated_h
#error "TraceQueryTestResults.generated.h already included, missing '#pragma once' in TraceQueryTestResults.h"
#endif
#define FUNCTIONALTESTING_TraceQueryTestResults_generated_h

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FTraceChannelTestBatchOptions>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_75_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraceQueryTestNames_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FTraceQueryTestNames>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInnerMost_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FTraceQueryTestResultsInnerMost>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_128_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTraceQueryTestResultsInner_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FTraceQueryTestResultsInner>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToString);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTraceQueryTestResults(); \
	friend struct Z_Construct_UClass_UTraceQueryTestResults_Statics; \
public: \
	DECLARE_CLASS(UTraceQueryTestResults, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UTraceQueryTestResults)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTraceQueryTestResults(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTraceQueryTestResults(UTraceQueryTestResults&&); \
	UTraceQueryTestResults(const UTraceQueryTestResults&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTraceQueryTestResults); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceQueryTestResults); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTraceQueryTestResults) \
	NO_API virtual ~UTraceQueryTestResults();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_153_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UTraceQueryTestResults>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_TraceQueryTestResults_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
