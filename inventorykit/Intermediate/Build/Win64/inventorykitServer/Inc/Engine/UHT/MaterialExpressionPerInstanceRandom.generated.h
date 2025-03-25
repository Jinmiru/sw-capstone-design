// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPerInstanceRandom.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionPerInstanceRandom_generated_h
#error "MaterialExpressionPerInstanceRandom.generated.h already included, missing '#pragma once' in MaterialExpressionPerInstanceRandom.h"
#endif
#define ENGINE_MaterialExpressionPerInstanceRandom_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceRandom_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPerInstanceRandom(); \
	friend struct Z_Construct_UClass_UMaterialExpressionPerInstanceRandom_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionPerInstanceRandom, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionPerInstanceRandom)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceRandom_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionPerInstanceRandom(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPerInstanceRandom) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionPerInstanceRandom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPerInstanceRandom); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionPerInstanceRandom(UMaterialExpressionPerInstanceRandom&&); \
	UMaterialExpressionPerInstanceRandom(const UMaterialExpressionPerInstanceRandom&); \
public: \
	NO_API virtual ~UMaterialExpressionPerInstanceRandom();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceRandom_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceRandom_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceRandom_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceRandom_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionPerInstanceRandom>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceRandom_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
