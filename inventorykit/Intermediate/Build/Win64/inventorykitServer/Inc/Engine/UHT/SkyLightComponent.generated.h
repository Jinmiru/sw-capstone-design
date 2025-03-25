// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SkyLightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureCube;
struct FColor;
struct FLinearColor;
#ifdef ENGINE_SkyLightComponent_generated_h
#error "SkyLightComponent.generated.h already included, missing '#pragma once' in SkyLightComponent.h"
#endif
#define ENGINE_SkyLightComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_102_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRecaptureSky); \
	DECLARE_FUNCTION(execSetMinOcclusion); \
	DECLARE_FUNCTION(execSetOcclusionExponent); \
	DECLARE_FUNCTION(execSetOcclusionContrast); \
	DECLARE_FUNCTION(execSetOcclusionTint); \
	DECLARE_FUNCTION(execSetLowerHemisphereColor); \
	DECLARE_FUNCTION(execSetCubemapBlend); \
	DECLARE_FUNCTION(execSetSourceCubemapAngle); \
	DECLARE_FUNCTION(execSetCubemap); \
	DECLARE_FUNCTION(execSetLightColor); \
	DECLARE_FUNCTION(execSetVolumetricScatteringIntensity); \
	DECLARE_FUNCTION(execSetIndirectLightingIntensity); \
	DECLARE_FUNCTION(execSetIntensity);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_102_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkyLightComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUSkyLightComponent(); \
	friend struct Z_Construct_UClass_USkyLightComponent_Statics; \
public: \
	DECLARE_CLASS(USkyLightComponent, ULightComponentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkyLightComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_102_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkyLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkyLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkyLightComponent(USkyLightComponent&&); \
	USkyLightComponent(const USkyLightComponent&); \
public: \
	ENGINE_API virtual ~USkyLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_99_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_102_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_102_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkyLightComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h_373_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPrecomputedSkyLightInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPrecomputedSkyLightInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SkyLightComponent_h


#define FOREACH_ENUM_ESKYLIGHTSOURCETYPE(op) \
	op(SLS_CapturedScene) \
	op(SLS_SpecifiedCubemap) 

enum ESkyLightSourceType : int;
template<> ENGINE_API UEnum* StaticEnum<ESkyLightSourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
