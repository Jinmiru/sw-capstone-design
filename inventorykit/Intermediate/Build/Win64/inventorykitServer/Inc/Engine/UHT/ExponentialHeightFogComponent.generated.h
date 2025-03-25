// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ExponentialHeightFogComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureCube;
struct FColor;
struct FExponentialHeightFogData;
struct FLinearColor;
#ifdef ENGINE_ExponentialHeightFogComponent_generated_h
#error "ExponentialHeightFogComponent.generated.h already included, missing '#pragma once' in ExponentialHeightFogComponent.h"
#endif
#define ENGINE_ExponentialHeightFogComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FExponentialHeightFogData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_49_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetRenderInMainPass); \
	DECLARE_FUNCTION(execSetHoldout); \
	DECLARE_FUNCTION(execSetSecondFogData); \
	DECLARE_FUNCTION(execSetVolumetricFogDistance); \
	DECLARE_FUNCTION(execSetVolumetricFogEmissive); \
	DECLARE_FUNCTION(execSetVolumetricFogAlbedo); \
	DECLARE_FUNCTION(execSetVolumetricFogExtinctionScale); \
	DECLARE_FUNCTION(execSetVolumetricFogScatteringDistribution); \
	DECLARE_FUNCTION(execSetVolumetricFog); \
	DECLARE_FUNCTION(execSetFogCutoffDistance); \
	DECLARE_FUNCTION(execSetStartDistance); \
	DECLARE_FUNCTION(execSetFogMaxOpacity); \
	DECLARE_FUNCTION(execSetSecondFogHeightFalloff); \
	DECLARE_FUNCTION(execSetFogHeightFalloff); \
	DECLARE_FUNCTION(execSetSecondFogHeightOffset); \
	DECLARE_FUNCTION(execSetDirectionalInscatteringColor); \
	DECLARE_FUNCTION(execSetDirectionalInscatteringStartDistance); \
	DECLARE_FUNCTION(execSetDirectionalInscatteringExponent); \
	DECLARE_FUNCTION(execSetInscatteringTextureTint); \
	DECLARE_FUNCTION(execSetNonDirectionalInscatteringColorDistance); \
	DECLARE_FUNCTION(execSetFullyDirectionalInscatteringColorDistance); \
	DECLARE_FUNCTION(execSetInscatteringColorCubemapAngle); \
	DECLARE_FUNCTION(execSetInscatteringColorCubemap); \
	DECLARE_FUNCTION(execSetFogInscatteringColor); \
	DECLARE_FUNCTION(execSetSecondFogDensity); \
	DECLARE_FUNCTION(execSetFogDensity);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_49_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UExponentialHeightFogComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUExponentialHeightFogComponent(); \
	friend struct Z_Construct_UClass_UExponentialHeightFogComponent_Statics; \
public: \
	DECLARE_CLASS(UExponentialHeightFogComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UExponentialHeightFogComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_49_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UExponentialHeightFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExponentialHeightFogComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UExponentialHeightFogComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExponentialHeightFogComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExponentialHeightFogComponent(UExponentialHeightFogComponent&&); \
	UExponentialHeightFogComponent(const UExponentialHeightFogComponent&); \
public: \
	ENGINE_API virtual ~UExponentialHeightFogComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_49_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_49_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UExponentialHeightFogComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
