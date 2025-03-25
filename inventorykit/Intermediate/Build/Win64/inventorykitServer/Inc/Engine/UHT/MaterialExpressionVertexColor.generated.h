// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionVertexColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionVertexColor_generated_h
#error "MaterialExpressionVertexColor.generated.h already included, missing '#pragma once' in MaterialExpressionVertexColor.h"
#endif
#define ENGINE_MaterialExpressionVertexColor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionVertexColor(); \
	friend struct Z_Construct_UClass_UMaterialExpressionVertexColor_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionVertexColor, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionVertexColor)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionVertexColor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionVertexColor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionVertexColor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionVertexColor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionVertexColor(UMaterialExpressionVertexColor&&); \
	UMaterialExpressionVertexColor(const UMaterialExpressionVertexColor&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionVertexColor();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionVertexColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVertexColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
