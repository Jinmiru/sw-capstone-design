// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRuntimeVirtualTextureSample.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionRuntimeVirtualTextureSample_generated_h
#error "MaterialExpressionRuntimeVirtualTextureSample.generated.h already included, missing '#pragma once' in MaterialExpressionRuntimeVirtualTextureSample.h"
#endif
#define ENGINE_MaterialExpressionRuntimeVirtualTextureSample_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRuntimeVirtualTextureSample(); \
	friend struct Z_Construct_UClass_UMaterialExpressionRuntimeVirtualTextureSample_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionRuntimeVirtualTextureSample, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionRuntimeVirtualTextureSample)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionRuntimeVirtualTextureSample(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRuntimeVirtualTextureSample) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionRuntimeVirtualTextureSample); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRuntimeVirtualTextureSample); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionRuntimeVirtualTextureSample(UMaterialExpressionRuntimeVirtualTextureSample&&); \
	UMaterialExpressionRuntimeVirtualTextureSample(const UMaterialExpressionRuntimeVirtualTextureSample&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionRuntimeVirtualTextureSample();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_60_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_63_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureSample_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionRuntimeVirtualTextureSample>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRuntimeVirtualTextureSample_h


#define FOREACH_ENUM_ERUNTIMEVIRTUALTEXTUREMIPVALUEMODE(op) \
	op(RVTMVM_None) \
	op(RVTMVM_MipLevel) \
	op(RVTMVM_MipBias) \
	op(RVTMVM_RecalculateDerivatives) 

enum ERuntimeVirtualTextureMipValueMode : int;
template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureMipValueMode>();

#define FOREACH_ENUM_ERUNTIMEVIRTUALTEXTURETEXTUREADDRESSMODE(op) \
	op(RVTTA_Clamp) \
	op(RVTTA_Wrap) 

enum ERuntimeVirtualTextureTextureAddressMode : int;
template<> ENGINE_API UEnum* StaticEnum<ERuntimeVirtualTextureTextureAddressMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
