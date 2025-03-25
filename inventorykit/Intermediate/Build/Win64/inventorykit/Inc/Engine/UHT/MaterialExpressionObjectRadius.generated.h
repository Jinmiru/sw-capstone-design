// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionObjectRadius.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionObjectRadius_generated_h
#error "MaterialExpressionObjectRadius.generated.h already included, missing '#pragma once' in MaterialExpressionObjectRadius.h"
#endif
#define ENGINE_MaterialExpressionObjectRadius_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionObjectRadius(); \
	friend struct Z_Construct_UClass_UMaterialExpressionObjectRadius_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionObjectRadius, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionObjectRadius)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionObjectRadius(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionObjectRadius) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionObjectRadius); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionObjectRadius); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionObjectRadius(UMaterialExpressionObjectRadius&&); \
	UMaterialExpressionObjectRadius(const UMaterialExpressionObjectRadius&); \
public: \
	NO_API virtual ~UMaterialExpressionObjectRadius();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionObjectRadius>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectRadius_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
