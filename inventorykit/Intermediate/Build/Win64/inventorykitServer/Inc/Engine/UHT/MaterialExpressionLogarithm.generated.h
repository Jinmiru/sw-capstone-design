// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLogarithm.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionLogarithm_generated_h
#error "MaterialExpressionLogarithm.generated.h already included, missing '#pragma once' in MaterialExpressionLogarithm.h"
#endif
#define ENGINE_MaterialExpressionLogarithm_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLogarithm(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLogarithm_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLogarithm, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLogarithm)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLogarithm(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLogarithm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLogarithm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLogarithm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionLogarithm(UMaterialExpressionLogarithm&&); \
	UMaterialExpressionLogarithm(const UMaterialExpressionLogarithm&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionLogarithm();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm_h_12_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionLogarithm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLogarithm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
