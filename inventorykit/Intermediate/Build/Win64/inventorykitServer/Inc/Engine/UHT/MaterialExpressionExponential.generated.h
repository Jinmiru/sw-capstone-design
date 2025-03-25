// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionExponential.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionExponential_generated_h
#error "MaterialExpressionExponential.generated.h already included, missing '#pragma once' in MaterialExpressionExponential.h"
#endif
#define ENGINE_MaterialExpressionExponential_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExponential_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionExponential(); \
	friend struct Z_Construct_UClass_UMaterialExpressionExponential_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionExponential, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionExponential)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExponential_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionExponential(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionExponential) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionExponential); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionExponential); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionExponential(UMaterialExpressionExponential&&); \
	UMaterialExpressionExponential(const UMaterialExpressionExponential&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionExponential();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExponential_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExponential_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExponential_h_12_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExponential_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionExponential>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionExponential_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
