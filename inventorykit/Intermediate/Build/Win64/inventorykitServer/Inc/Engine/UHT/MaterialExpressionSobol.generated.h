// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSobol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSobol_generated_h
#error "MaterialExpressionSobol.generated.h already included, missing '#pragma once' in MaterialExpressionSobol.h"
#endif
#define ENGINE_MaterialExpressionSobol_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSobol(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSobol_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSobol, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSobol)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSobol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSobol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSobol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSobol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSobol(UMaterialExpressionSobol&&); \
	UMaterialExpressionSobol(const UMaterialExpressionSobol&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSobol();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSobol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSobol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
