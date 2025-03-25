// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSaturate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSaturate_generated_h
#error "MaterialExpressionSaturate.generated.h already included, missing '#pragma once' in MaterialExpressionSaturate.h"
#endif
#define ENGINE_MaterialExpressionSaturate_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSaturate_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSaturate(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSaturate_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSaturate, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSaturate)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSaturate_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSaturate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSaturate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSaturate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSaturate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSaturate(UMaterialExpressionSaturate&&); \
	UMaterialExpressionSaturate(const UMaterialExpressionSaturate&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSaturate();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSaturate_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSaturate_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSaturate_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSaturate_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSaturate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSaturate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
