// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMaterialFunctionCall.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialFunctionInterface;
#ifdef ENGINE_MaterialExpressionMaterialFunctionCall_generated_h
#error "MaterialExpressionMaterialFunctionCall.generated.h already included, missing '#pragma once' in MaterialExpressionMaterialFunctionCall.h"
#endif
#define ENGINE_MaterialExpressionMaterialFunctionCall_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFunctionExpressionInput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFunctionExpressionInput>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFunctionExpressionOutput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFunctionExpressionOutput>();

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_82_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSetMaterialFunction);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_82_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialFunctionCall(); \
	friend struct Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionMaterialFunctionCall, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialFunctionCall)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMaterialFunctionCall(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialFunctionCall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMaterialFunctionCall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialFunctionCall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialFunctionCall(UMaterialExpressionMaterialFunctionCall&&); \
	UMaterialExpressionMaterialFunctionCall(const UMaterialExpressionMaterialFunctionCall&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionMaterialFunctionCall();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_79_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_82_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_82_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionMaterialFunctionCall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialFunctionCall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
