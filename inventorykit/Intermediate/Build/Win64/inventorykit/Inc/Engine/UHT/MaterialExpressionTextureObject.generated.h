// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionTextureObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionTextureObject_generated_h
#error "MaterialExpressionTextureObject.generated.h already included, missing '#pragma once' in MaterialExpressionTextureObject.h"
#endif
#define ENGINE_MaterialExpressionTextureObject_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionTextureObject(); \
	friend struct Z_Construct_UClass_UMaterialExpressionTextureObject_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionTextureObject, UMaterialExpressionTextureBase, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionTextureObject)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionTextureObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionTextureObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionTextureObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionTextureObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionTextureObject(UMaterialExpressionTextureObject&&); \
	UMaterialExpressionTextureObject(const UMaterialExpressionTextureObject&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionTextureObject();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionTextureObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
