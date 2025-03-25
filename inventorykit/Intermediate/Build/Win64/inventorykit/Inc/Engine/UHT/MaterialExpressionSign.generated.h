// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSign.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSign_generated_h
#error "MaterialExpressionSign.generated.h already included, missing '#pragma once' in MaterialExpressionSign.h"
#endif
#define ENGINE_MaterialExpressionSign_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSign_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSign(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSign_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSign, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSign)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSign_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionSign(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSign) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionSign); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSign); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSign(UMaterialExpressionSign&&); \
	UMaterialExpressionSign(const UMaterialExpressionSign&); \
public: \
	NO_API virtual ~UMaterialExpressionSign();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSign_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSign_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSign_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSign_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSign>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSign_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
