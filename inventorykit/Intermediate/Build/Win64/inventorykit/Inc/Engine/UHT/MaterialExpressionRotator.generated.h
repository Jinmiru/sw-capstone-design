// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRotator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionRotator_generated_h
#error "MaterialExpressionRotator.generated.h already included, missing '#pragma once' in MaterialExpressionRotator.h"
#endif
#define ENGINE_MaterialExpressionRotator_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRotator(); \
	friend struct Z_Construct_UClass_UMaterialExpressionRotator_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionRotator, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionRotator)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionRotator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRotator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionRotator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRotator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionRotator(UMaterialExpressionRotator&&); \
	UMaterialExpressionRotator(const UMaterialExpressionRotator&); \
public: \
	NO_API virtual ~UMaterialExpressionRotator();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionRotator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRotator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
