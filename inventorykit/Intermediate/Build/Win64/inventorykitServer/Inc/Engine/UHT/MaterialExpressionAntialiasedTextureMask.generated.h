// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionAntialiasedTextureMask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionAntialiasedTextureMask_generated_h
#error "MaterialExpressionAntialiasedTextureMask.generated.h already included, missing '#pragma once' in MaterialExpressionAntialiasedTextureMask.h"
#endif
#define ENGINE_MaterialExpressionAntialiasedTextureMask_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask(); \
	friend struct Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionAntialiasedTextureMask, UMaterialExpressionTextureSampleParameter2D, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionAntialiasedTextureMask)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionAntialiasedTextureMask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionAntialiasedTextureMask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionAntialiasedTextureMask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionAntialiasedTextureMask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionAntialiasedTextureMask(UMaterialExpressionAntialiasedTextureMask&&); \
	UMaterialExpressionAntialiasedTextureMask(const UMaterialExpressionAntialiasedTextureMask&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionAntialiasedTextureMask();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionAntialiasedTextureMask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h


#define FOREACH_ENUM_ETEXTURECOLORCHANNEL(op) \
	op(TCC_Red) \
	op(TCC_Green) \
	op(TCC_Blue) \
	op(TCC_Alpha) 

enum ETextureColorChannel : int;
template<> ENGINE_API UEnum* StaticEnum<ETextureColorChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
