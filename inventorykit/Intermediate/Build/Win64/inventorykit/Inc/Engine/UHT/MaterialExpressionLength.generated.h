// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLength.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionLength_generated_h
#error "MaterialExpressionLength.generated.h already included, missing '#pragma once' in MaterialExpressionLength.h"
#endif
#define ENGINE_MaterialExpressionLength_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLength_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLength(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLength_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLength, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLength)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLength_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionLength(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLength) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionLength); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLength); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionLength(UMaterialExpressionLength&&); \
	UMaterialExpressionLength(const UMaterialExpressionLength&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionLength();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLength_h_7_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLength_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLength_h_10_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLength_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionLength>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionLength_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
