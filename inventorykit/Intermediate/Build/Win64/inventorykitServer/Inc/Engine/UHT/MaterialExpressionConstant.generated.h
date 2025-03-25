// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionConstant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionConstant_generated_h
#error "MaterialExpressionConstant.generated.h already included, missing '#pragma once' in MaterialExpressionConstant.h"
#endif
#define ENGINE_MaterialExpressionConstant_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionConstant(); \
	friend struct Z_Construct_UClass_UMaterialExpressionConstant_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionConstant, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionConstant)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionConstant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionConstant(UMaterialExpressionConstant&&); \
	UMaterialExpressionConstant(const UMaterialExpressionConstant&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionConstant();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionConstant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionConstant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
