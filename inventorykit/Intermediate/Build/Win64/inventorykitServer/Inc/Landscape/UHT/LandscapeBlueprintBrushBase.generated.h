// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeBlueprintBrushBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTextureRenderTarget2D;
struct FLandscapeBrushParameters;
#ifdef LANDSCAPE_LandscapeBlueprintBrushBase_generated_h
#error "LandscapeBlueprintBrushBase.generated.h already included, missing '#pragma once' in LandscapeBlueprintBrushBase.h"
#endif
#define LANDSCAPE_LandscapeBlueprintBrushBase_generated_h

#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeBrushParameters>();

#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_RPC_WRAPPERS \
	LANDSCAPE_API virtual void Initialize_Implementation(FTransform const& InLandscapeTransform, FIntPoint const& InLandscapeSize, FIntPoint const& InLandscapeRenderTargetSize); \
	LANDSCAPE_API virtual UTextureRenderTarget2D* RenderLayer_Implementation(FLandscapeBrushParameters const& InParameters); \
	LANDSCAPE_API virtual UTextureRenderTarget2D* Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName const& InWeightmapLayerName); \
	DECLARE_FUNCTION(execRequestLandscapeUpdate); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execRenderLayer); \
	DECLARE_FUNCTION(execRender);


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_ACCESSORS \
static void SetAffectHeightmap_WrapperImpl(void* Object, const void* InValue); \
static void SetAffectWeightmap_WrapperImpl(void* Object, const void* InValue); \
static void SetAffectVisibilityLayer_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintBrushBase(); \
	friend struct Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics; \
public: \
	DECLARE_CLASS(ALandscapeBlueprintBrushBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeBlueprintBrushBase)


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeBlueprintBrushBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintBrushBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeBlueprintBrushBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintBrushBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALandscapeBlueprintBrushBase(ALandscapeBlueprintBrushBase&&); \
	ALandscapeBlueprintBrushBase(const ALandscapeBlueprintBrushBase&); \
public: \
	LANDSCAPE_API virtual ~ALandscapeBlueprintBrushBase();


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_42_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeBlueprintBrushBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
