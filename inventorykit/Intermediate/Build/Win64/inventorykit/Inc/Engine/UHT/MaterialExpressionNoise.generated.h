// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionNoise.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionNoise_generated_h
#error "MaterialExpressionNoise.generated.h already included, missing '#pragma once' in MaterialExpressionNoise.h"
#endif
#define ENGINE_MaterialExpressionNoise_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNoise(); \
	friend struct Z_Construct_UClass_UMaterialExpressionNoise_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionNoise, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionNoise)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionNoise(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNoise) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionNoise); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNoise); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionNoise(UMaterialExpressionNoise&&); \
	UMaterialExpressionNoise(const UMaterialExpressionNoise&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionNoise();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionNoise>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h


#define FOREACH_ENUM_ENOISEFUNCTION(op) \
	op(NOISEFUNCTION_SimplexTex) \
	op(NOISEFUNCTION_GradientTex) \
	op(NOISEFUNCTION_GradientTex3D) \
	op(NOISEFUNCTION_GradientALU) \
	op(NOISEFUNCTION_ValueALU) \
	op(NOISEFUNCTION_VoronoiALU) 

enum ENoiseFunction : int;
template<> ENGINE_API UEnum* StaticEnum<ENoiseFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
