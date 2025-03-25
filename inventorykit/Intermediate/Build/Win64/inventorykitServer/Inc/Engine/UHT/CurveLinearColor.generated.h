// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/CurveLinearColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_CurveLinearColor_generated_h
#error "CurveLinearColor.generated.h already included, missing '#pragma once' in CurveLinearColor.h"
#endif
#define ENGINE_CurveLinearColor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeCurveLinearColor_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRuntimeCurveLinearColor>();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetUnadjustedLinearColorValue); \
	DECLARE_FUNCTION(execGetClampedLinearColorValue); \
	DECLARE_FUNCTION(execGetLinearColorValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveLinearColor, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCurveLinearColor(); \
	friend struct Z_Construct_UClass_UCurveLinearColor_Statics; \
public: \
	DECLARE_CLASS(UCurveLinearColor, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveLinearColor) \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveLinearColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveLinearColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveLinearColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveLinearColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveLinearColor(UCurveLinearColor&&); \
	UCurveLinearColor(const UCurveLinearColor&); \
public: \
	ENGINE_API virtual ~UCurveLinearColor();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveLinearColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
