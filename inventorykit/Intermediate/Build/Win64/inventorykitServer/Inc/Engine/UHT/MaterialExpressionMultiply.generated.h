// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMultiply.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionMultiply_generated_h
#error "MaterialExpressionMultiply.generated.h already included, missing '#pragma once' in MaterialExpressionMultiply.h"
#endif
#define ENGINE_MaterialExpressionMultiply_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMultiply(); \
	friend struct Z_Construct_UClass_UMaterialExpressionMultiply_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionMultiply, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMultiply)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMultiply(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMultiply) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMultiply); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMultiply); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionMultiply(UMaterialExpressionMultiply&&); \
	UMaterialExpressionMultiply(const UMaterialExpressionMultiply&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionMultiply();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionMultiply>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMultiply_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
