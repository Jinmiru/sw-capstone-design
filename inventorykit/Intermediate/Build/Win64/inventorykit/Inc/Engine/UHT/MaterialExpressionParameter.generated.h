// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionParameter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionParameter_generated_h
#error "MaterialExpressionParameter.generated.h already included, missing '#pragma once' in MaterialExpressionParameter.h"
#endif
#define ENGINE_MaterialExpressionParameter_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionParameter(); \
	friend struct Z_Construct_UClass_UMaterialExpressionParameter_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionParameter, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionParameter)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionParameter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionParameter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionParameter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionParameter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionParameter(UMaterialExpressionParameter&&); \
	UMaterialExpressionParameter(const UMaterialExpressionParameter&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionParameter();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionParameter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionParameter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
