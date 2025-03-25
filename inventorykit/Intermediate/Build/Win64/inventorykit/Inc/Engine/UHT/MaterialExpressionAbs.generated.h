// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionAbs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionAbs_generated_h
#error "MaterialExpressionAbs.generated.h already included, missing '#pragma once' in MaterialExpressionAbs.h"
#endif
#define ENGINE_MaterialExpressionAbs_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbs_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAbs(); \
	friend struct Z_Construct_UClass_UMaterialExpressionAbs_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionAbs, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionAbs)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbs_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionAbs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAbs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionAbs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAbs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionAbs(UMaterialExpressionAbs&&); \
	UMaterialExpressionAbs(const UMaterialExpressionAbs&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionAbs();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbs_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbs_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbs_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbs_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionAbs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAbs_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
