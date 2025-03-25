// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionStep.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionStep_generated_h
#error "MaterialExpressionStep.generated.h already included, missing '#pragma once' in MaterialExpressionStep.h"
#endif
#define ENGINE_MaterialExpressionStep_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionStep(); \
	friend struct Z_Construct_UClass_UMaterialExpressionStep_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionStep, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionStep)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionStep(UMaterialExpressionStep&&); \
	UMaterialExpressionStep(const UMaterialExpressionStep&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionStep();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStep_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
