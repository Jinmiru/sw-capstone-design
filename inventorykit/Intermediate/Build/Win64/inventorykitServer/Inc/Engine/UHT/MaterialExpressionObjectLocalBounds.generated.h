// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionObjectLocalBounds.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionObjectLocalBounds_generated_h
#error "MaterialExpressionObjectLocalBounds.generated.h already included, missing '#pragma once' in MaterialExpressionObjectLocalBounds.h"
#endif
#define ENGINE_MaterialExpressionObjectLocalBounds_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionObjectLocalBounds(); \
	friend struct Z_Construct_UClass_UMaterialExpressionObjectLocalBounds_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionObjectLocalBounds, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionObjectLocalBounds)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionObjectLocalBounds(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionObjectLocalBounds) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionObjectLocalBounds); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionObjectLocalBounds); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionObjectLocalBounds(UMaterialExpressionObjectLocalBounds&&); \
	UMaterialExpressionObjectLocalBounds(const UMaterialExpressionObjectLocalBounds&); \
public: \
	NO_API virtual ~UMaterialExpressionObjectLocalBounds();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionObjectLocalBounds>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionObjectLocalBounds_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
