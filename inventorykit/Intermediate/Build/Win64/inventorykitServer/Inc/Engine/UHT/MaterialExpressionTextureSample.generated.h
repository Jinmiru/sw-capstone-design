// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureSample.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureSample_generated_h
#error "MaterialExpressionTextureSample.generated.h already included, missing '#pragma once' in MaterialExpressionTextureSample.h"
#endif
#define ENGINE_MaterialExpressionTextureSample_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureSample(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureSample_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureSample, UMaterialExpressionTextureBase, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureSample)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureSample); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureSample(UMaterialExpressionTextureSample&&); \
	UMaterialExpressionTextureSample(const UMaterialExpressionTextureSample&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTextureSample();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureSample>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
