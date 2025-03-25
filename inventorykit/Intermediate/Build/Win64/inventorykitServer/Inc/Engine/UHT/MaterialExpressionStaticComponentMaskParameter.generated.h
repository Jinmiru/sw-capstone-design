// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionStaticComponentMaskParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionStaticComponentMaskParameter_generated_h
#error "MaterialExpressionStaticComponentMaskParameter.generated.h already included, missing '#pragma once' in MaterialExpressionStaticComponentMaskParameter.h"
#endif
#define ENGINE_MaterialExpressionStaticComponentMaskParameter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionStaticComponentMaskParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionStaticComponentMaskParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionStaticComponentMaskParameter, UMaterialExpressionParameter, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionStaticComponentMaskParameter)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionStaticComponentMaskParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionStaticComponentMaskParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionStaticComponentMaskParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionStaticComponentMaskParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionStaticComponentMaskParameter(UMaterialExpressionStaticComponentMaskParameter&&); \
	UMaterialExpressionStaticComponentMaskParameter(const UMaterialExpressionStaticComponentMaskParameter&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionStaticComponentMaskParameter();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionStaticComponentMaskParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionStaticComponentMaskParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
