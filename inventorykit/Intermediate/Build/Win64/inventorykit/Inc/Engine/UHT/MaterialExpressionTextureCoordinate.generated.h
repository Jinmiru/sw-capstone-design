// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureCoordinate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureCoordinate_generated_h
#error "MaterialExpressionTextureCoordinate.generated.h already included, missing '#pragma once' in MaterialExpressionTextureCoordinate.h"
#endif
#define ENGINE_MaterialExpressionTextureCoordinate_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureCoordinate_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureCoordinate(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureCoordinate_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureCoordinate, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureCoordinate)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureCoordinate_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureCoordinate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureCoordinate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureCoordinate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureCoordinate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureCoordinate(UMaterialExpressionTextureCoordinate&&); \
	UMaterialExpressionTextureCoordinate(const UMaterialExpressionTextureCoordinate&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTextureCoordinate();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureCoordinate_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureCoordinate_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureCoordinate_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureCoordinate_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureCoordinate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureCoordinate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
