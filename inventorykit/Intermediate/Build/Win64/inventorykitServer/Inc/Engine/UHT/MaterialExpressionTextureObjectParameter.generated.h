// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureObjectParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureObjectParameter_generated_h
#error "MaterialExpressionTextureObjectParameter.generated.h already included, missing '#pragma once' in MaterialExpressionTextureObjectParameter.h"
#endif
#define ENGINE_MaterialExpressionTextureObjectParameter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureObjectParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureObjectParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureObjectParameter, UMaterialExpressionTextureSampleParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureObjectParameter)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureObjectParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureObjectParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureObjectParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureObjectParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureObjectParameter(UMaterialExpressionTextureObjectParameter&&); \
	UMaterialExpressionTextureObjectParameter(const UMaterialExpressionTextureObjectParameter&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTextureObjectParameter();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureObjectParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObjectParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
