// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSceneTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSceneTexture_generated_h
#error "MaterialExpressionSceneTexture.generated.h already included, missing '#pragma once' in MaterialExpressionSceneTexture.h"
#endif
#define ENGINE_MaterialExpressionSceneTexture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSceneTexture(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSceneTexture_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSceneTexture, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSceneTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSceneTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSceneTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSceneTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSceneTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSceneTexture(UMaterialExpressionSceneTexture&&); \
	UMaterialExpressionSceneTexture(const UMaterialExpressionSceneTexture&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSceneTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSceneTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSceneTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
