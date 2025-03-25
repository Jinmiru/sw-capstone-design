// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionDynamicParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionDynamicParameter_generated_h
#error "MaterialExpressionDynamicParameter.generated.h already included, missing '#pragma once' in MaterialExpressionDynamicParameter.h"
#endif
#define ENGINE_MaterialExpressionDynamicParameter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionDynamicParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionDynamicParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionDynamicParameter, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionDynamicParameter)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionDynamicParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionDynamicParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionDynamicParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionDynamicParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionDynamicParameter(UMaterialExpressionDynamicParameter&&); \
	UMaterialExpressionDynamicParameter(const UMaterialExpressionDynamicParameter&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionDynamicParameter();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionDynamicParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDynamicParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
