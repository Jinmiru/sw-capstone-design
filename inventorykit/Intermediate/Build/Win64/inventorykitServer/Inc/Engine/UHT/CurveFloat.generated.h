// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/CurveFloat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CurveFloat_generated_h
#error "CurveFloat.generated.h already included, missing '#pragma once' in CurveFloat.h"
#endif
#define ENGINE_CurveFloat_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRuntimeFloatCurve>();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetFloatValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCurveFloat(); \
	friend struct Z_Construct_UClass_UCurveFloat_Statics; \
public: \
	DECLARE_CLASS(UCurveFloat, UCurveBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveFloat)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveFloat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveFloat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveFloat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveFloat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveFloat(UCurveFloat&&); \
	UCurveFloat(const UCurveFloat&); \
public: \
	ENGINE_API virtual ~UCurveFloat();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveFloat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
