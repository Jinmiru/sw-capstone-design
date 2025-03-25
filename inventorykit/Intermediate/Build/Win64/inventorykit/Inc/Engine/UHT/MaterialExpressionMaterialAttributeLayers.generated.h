// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionMaterialAttributeLayers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionMaterialAttributeLayers_generated_h
#error "MaterialExpressionMaterialAttributeLayers.generated.h already included, missing '#pragma once' in MaterialExpressionMaterialAttributeLayers.h"
#endif
#define ENGINE_MaterialExpressionMaterialAttributeLayers_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers(); \
	friend struct Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionMaterialAttributeLayers, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialAttributeLayers)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionMaterialAttributeLayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialAttributeLayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionMaterialAttributeLayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialAttributeLayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialAttributeLayers(UMaterialExpressionMaterialAttributeLayers&&); \
	UMaterialExpressionMaterialAttributeLayers(const UMaterialExpressionMaterialAttributeLayers&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionMaterialAttributeLayers();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionMaterialAttributeLayers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
