// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParticleSize.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionParticleSize_generated_h
#error "MaterialExpressionParticleSize.generated.h already included, missing '#pragma once' in MaterialExpressionParticleSize.h"
#endif
#define ENGINE_MaterialExpressionParticleSize_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParticleSize(); \
	friend struct Z_Construct_UClass_UMaterialExpressionParticleSize_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionParticleSize, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionParticleSize)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionParticleSize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParticleSize) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionParticleSize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParticleSize); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionParticleSize(UMaterialExpressionParticleSize&&); \
	UMaterialExpressionParticleSize(const UMaterialExpressionParticleSize&); \
public: \
	NO_API virtual ~UMaterialExpressionParticleSize();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionParticleSize>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParticleSize_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
