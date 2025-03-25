// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureBase_generated_h
#error "MaterialExpressionTextureBase.generated.h already included, missing '#pragma once' in MaterialExpressionTextureBase.h"
#endif
#define ENGINE_MaterialExpressionTextureBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureBase(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureBase_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureBase, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureBase(UMaterialExpressionTextureBase&&); \
	UMaterialExpressionTextureBase(const UMaterialExpressionTextureBase&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTextureBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
