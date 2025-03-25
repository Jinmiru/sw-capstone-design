// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionSparseVolumeTextureBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionSparseVolumeTextureBase_generated_h
#error "MaterialExpressionSparseVolumeTextureBase.generated.h already included, missing '#pragma once' in MaterialExpressionSparseVolumeTextureBase.h"
#endif
#define ENGINE_MaterialExpressionSparseVolumeTextureBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionSparseVolumeTextureBase(); \
	friend struct Z_Construct_UClass_UMaterialExpressionSparseVolumeTextureBase_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionSparseVolumeTextureBase, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionSparseVolumeTextureBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionSparseVolumeTextureBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionSparseVolumeTextureBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionSparseVolumeTextureBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionSparseVolumeTextureBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionSparseVolumeTextureBase(UMaterialExpressionSparseVolumeTextureBase&&); \
	UMaterialExpressionSparseVolumeTextureBase(const UMaterialExpressionSparseVolumeTextureBase&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionSparseVolumeTextureBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionSparseVolumeTextureBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSparseVolumeTextureBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
