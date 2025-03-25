// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionBumpOffset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionBumpOffset_generated_h
#error "MaterialExpressionBumpOffset.generated.h already included, missing '#pragma once' in MaterialExpressionBumpOffset.h"
#endif
#define ENGINE_MaterialExpressionBumpOffset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionBumpOffset(); \
	friend struct Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionBumpOffset, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionBumpOffset)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionBumpOffset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionBumpOffset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionBumpOffset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionBumpOffset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionBumpOffset(UMaterialExpressionBumpOffset&&); \
	UMaterialExpressionBumpOffset(const UMaterialExpressionBumpOffset&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionBumpOffset();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionBumpOffset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
