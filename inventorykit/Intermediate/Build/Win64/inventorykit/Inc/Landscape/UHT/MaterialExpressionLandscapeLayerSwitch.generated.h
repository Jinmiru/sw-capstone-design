// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLandscapeLayerSwitch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_MaterialExpressionLandscapeLayerSwitch_generated_h
#error "MaterialExpressionLandscapeLayerSwitch.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapeLayerSwitch.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapeLayerSwitch_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_20_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpressionLandscapeLayerSwitch, LANDSCAPE_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapeLayerSwitch(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLandscapeLayerSwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapeLayerSwitch) \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UMaterialExpressionLandscapeLayerSwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapeLayerSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UMaterialExpressionLandscapeLayerSwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapeLayerSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionLandscapeLayerSwitch(UMaterialExpressionLandscapeLayerSwitch&&); \
	UMaterialExpressionLandscapeLayerSwitch(const UMaterialExpressionLandscapeLayerSwitch&); \
public: \
	LANDSCAPE_API virtual ~UMaterialExpressionLandscapeLayerSwitch();


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_17_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_20_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class UMaterialExpressionLandscapeLayerSwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
