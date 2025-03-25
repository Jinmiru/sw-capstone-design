// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionObjectOrientation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionObjectOrientation_generated_h
#error "MaterialExpressionObjectOrientation.generated.h already included, missing '#pragma once' in MaterialExpressionObjectOrientation.h"
#endif
#define ENGINE_MaterialExpressionObjectOrientation_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionObjectOrientation(); \
	friend struct Z_Construct_UClass_UMaterialExpressionObjectOrientation_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionObjectOrientation, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionObjectOrientation)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionObjectOrientation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionObjectOrientation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionObjectOrientation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionObjectOrientation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionObjectOrientation(UMaterialExpressionObjectOrientation&&); \
	UMaterialExpressionObjectOrientation(const UMaterialExpressionObjectOrientation&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionObjectOrientation();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionObjectOrientation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectOrientation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
