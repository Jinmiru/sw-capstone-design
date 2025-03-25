// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureProperty.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureProperty_generated_h
#error "MaterialExpressionTextureProperty.generated.h already included, missing '#pragma once' in MaterialExpressionTextureProperty.h"
#endif
#define ENGINE_MaterialExpressionTextureProperty_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureProperty(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureProperty_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureProperty, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureProperty) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureProperty); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureProperty(UMaterialExpressionTextureProperty&&); \
	UMaterialExpressionTextureProperty(const UMaterialExpressionTextureProperty&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTextureProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureProperty_h


#define FOREACH_ENUM_EMATERIALEXPOSEDTEXTUREPROPERTY(op) \
	op(TMTM_TextureSize) \
	op(TMTM_TexelSize) 

enum EMaterialExposedTextureProperty : int;
template<> ENGINE_API UEnum* StaticEnum<EMaterialExposedTextureProperty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
