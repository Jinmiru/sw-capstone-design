// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UTextureLightProfile;
struct FColor;
struct FLinearColor;
#ifdef ENGINE_LightComponent_generated_h
#error "LightComponent.generated.h already included, missing '#pragma once' in LightComponent.h"
#endif
#define ENGINE_LightComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_43_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetLightingChannels); \
	DECLARE_FUNCTION(execSetForceCachedShadowsForMovablePrimitives); \
	DECLARE_FUNCTION(execSetSpecularScale); \
	DECLARE_FUNCTION(execSetShadowSlopeBias); \
	DECLARE_FUNCTION(execSetShadowBias); \
	DECLARE_FUNCTION(execSetIESBrightnessScale); \
	DECLARE_FUNCTION(execSetUseIESBrightness); \
	DECLARE_FUNCTION(execSetIESTexture); \
	DECLARE_FUNCTION(execSetBloomTint); \
	DECLARE_FUNCTION(execSetBloomMaxBrightness); \
	DECLARE_FUNCTION(execSetBloomThreshold); \
	DECLARE_FUNCTION(execSetBloomScale); \
	DECLARE_FUNCTION(execSetEnableLightShaftBloom); \
	DECLARE_FUNCTION(execSetTransmission); \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting); \
	DECLARE_FUNCTION(execSetLightFunctionDisabledBrightness); \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance); \
	DECLARE_FUNCTION(execSetLightFunctionScale); \
	DECLARE_FUNCTION(execSetLightFunctionMaterial); \
	DECLARE_FUNCTION(execSetUseTemperature); \
	DECLARE_FUNCTION(execSetTemperature); \
	DECLARE_FUNCTION(execSetLightFColor); \
	DECLARE_FUNCTION(execSetLightColor); \
	DECLARE_FUNCTION(execSetVolumetricScatteringIntensity); \
	DECLARE_FUNCTION(execSetIndirectLightingIntensity); \
	DECLARE_FUNCTION(execSetIntensity);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_43_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_43_INCLASS \
private: \
	static void StaticRegisterNativesULightComponent(); \
	friend struct Z_Construct_UClass_ULightComponent_Statics; \
public: \
	DECLARE_CLASS(ULightComponent, ULightComponentBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULightComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_43_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULightComponent(ULightComponent&&); \
	ULightComponent(const ULightComponent&); \
public: \
	ENGINE_API virtual ~ULightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_505_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrecomputedLightInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
