// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureSampleParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureSampleParameter_generated_h
#error "MaterialExpressionTextureSampleParameter.generated.h already included, missing '#pragma once' in MaterialExpressionTextureSampleParameter.h"
#endif
#define ENGINE_MaterialExpressionTextureSampleParameter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureSampleParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureSampleParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureSampleParameter, UMaterialExpressionTextureSample, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureSampleParameter)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureSampleParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureSampleParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureSampleParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureSampleParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureSampleParameter(UMaterialExpressionTextureSampleParameter&&); \
	UMaterialExpressionTextureSampleParameter(const UMaterialExpressionTextureSampleParameter&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTextureSampleParameter();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureSampleParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSampleParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
