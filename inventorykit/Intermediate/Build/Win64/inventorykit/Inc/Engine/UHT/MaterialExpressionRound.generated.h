// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRound.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionRound_generated_h
#error "MaterialExpressionRound.generated.h already included, missing '#pragma once' in MaterialExpressionRound.h"
#endif
#define ENGINE_MaterialExpressionRound_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRound_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRound(); \
	friend struct Z_Construct_UClass_UMaterialExpressionRound_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionRound, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionRound)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRound_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionRound(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionRound); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionRound(UMaterialExpressionRound&&); \
	UMaterialExpressionRound(const UMaterialExpressionRound&); \
public: \
	NO_API virtual ~UMaterialExpressionRound();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRound_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRound_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRound_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRound_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionRound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
