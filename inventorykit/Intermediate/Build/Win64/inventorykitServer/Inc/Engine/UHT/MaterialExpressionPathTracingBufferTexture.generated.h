// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPathTracingBufferTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionPathTracingBufferTexture_generated_h
#error "MaterialExpressionPathTracingBufferTexture.generated.h already included, missing '#pragma once' in MaterialExpressionPathTracingBufferTexture.h"
#endif
#define ENGINE_MaterialExpressionPathTracingBufferTexture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPathTracingBufferTexture(); \
	friend struct Z_Construct_UClass_UMaterialExpressionPathTracingBufferTexture_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionPathTracingBufferTexture, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionPathTracingBufferTexture)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionPathTracingBufferTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPathTracingBufferTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionPathTracingBufferTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPathTracingBufferTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionPathTracingBufferTexture(UMaterialExpressionPathTracingBufferTexture&&); \
	UMaterialExpressionPathTracingBufferTexture(const UMaterialExpressionPathTracingBufferTexture&); \
public: \
	NO_API virtual ~UMaterialExpressionPathTracingBufferTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionPathTracingBufferTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPathTracingBufferTexture_h


#define FOREACH_ENUM_EPATHTRACINGBUFFERTEXTUREID(op) \
	op(PTBT_Radiance) \
	op(PTBT_DenoisedRadiance) \
	op(PTBT_Albedo) \
	op(PTBT_Normal) \
	op(PTBT_Variance) 

enum EPathTracingBufferTextureId : int;
template<> ENGINE_API UEnum* StaticEnum<EPathTracingBufferTextureId>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
