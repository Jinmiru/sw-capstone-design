// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/CurveLinearColorAtlas.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveLinearColor;
#ifdef ENGINE_CurveLinearColorAtlas_generated_h
#error "CurveLinearColorAtlas.generated.h already included, missing '#pragma once' in CurveLinearColorAtlas.h"
#endif
#define ENGINE_CurveLinearColorAtlas_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveAtlasColorAdjustments>();

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetCurvePosition);


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUCurveLinearColorAtlas(); \
	friend struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics; \
public: \
	DECLARE_CLASS(UCurveLinearColorAtlas, UTexture2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveLinearColorAtlas)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveLinearColorAtlas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveLinearColorAtlas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveLinearColorAtlas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveLinearColorAtlas); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveLinearColorAtlas(UCurveLinearColorAtlas&&); \
	UCurveLinearColorAtlas(const UCurveLinearColorAtlas&); \
public: \
	ENGINE_API virtual ~UCurveLinearColorAtlas();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_70_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveLinearColorAtlas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
