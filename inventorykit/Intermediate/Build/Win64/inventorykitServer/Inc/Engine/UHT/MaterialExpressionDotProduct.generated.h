// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDotProduct.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionDotProduct_generated_h
#error "MaterialExpressionDotProduct.generated.h already included, missing '#pragma once' in MaterialExpressionDotProduct.h"
#endif
#define ENGINE_MaterialExpressionDotProduct_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDotProduct(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDotProduct_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDotProduct, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDotProduct)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionDotProduct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDotProduct) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionDotProduct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDotProduct); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionDotProduct(UMaterialExpressionDotProduct&&); \
	UMaterialExpressionDotProduct(const UMaterialExpressionDotProduct&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionDotProduct();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionDotProduct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDotProduct_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
