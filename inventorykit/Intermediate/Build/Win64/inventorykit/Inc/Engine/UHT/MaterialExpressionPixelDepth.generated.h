// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionPixelDepth.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionPixelDepth_generated_h
#error "MaterialExpressionPixelDepth.generated.h already included, missing '#pragma once' in MaterialExpressionPixelDepth.h"
#endif
#define ENGINE_MaterialExpressionPixelDepth_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionPixelDepth(); \
	friend struct Z_Construct_UClass_UMaterialExpressionPixelDepth_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionPixelDepth, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionPixelDepth)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionPixelDepth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionPixelDepth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionPixelDepth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionPixelDepth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionPixelDepth(UMaterialExpressionPixelDepth&&); \
	UMaterialExpressionPixelDepth(const UMaterialExpressionPixelDepth&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionPixelDepth();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionPixelDepth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPixelDepth_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
