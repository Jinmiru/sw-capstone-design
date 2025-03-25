// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HeterogeneousVolumeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HeterogeneousVolumeComponent_generated_h
#error "HeterogeneousVolumeComponent.generated.h already included, missing '#pragma once' in HeterogeneousVolumeComponent.h"
#endif
#define ENGINE_HeterogeneousVolumeComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetStreamingMipBias); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execSetPlaying); \
	DECLARE_FUNCTION(execSetEndFrame); \
	DECLARE_FUNCTION(execSetStartFrame); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execSetFrame); \
	DECLARE_FUNCTION(execSetVolumeResolution);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUHeterogeneousVolumeComponent(); \
	friend struct Z_Construct_UClass_UHeterogeneousVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UHeterogeneousVolumeComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UHeterogeneousVolumeComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHeterogeneousVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeterogeneousVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHeterogeneousVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeterogeneousVolumeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeterogeneousVolumeComponent(UHeterogeneousVolumeComponent&&); \
	UHeterogeneousVolumeComponent(const UHeterogeneousVolumeComponent&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHeterogeneousVolumeComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_138_INCLASS \
private: \
	static void StaticRegisterNativesAHeterogeneousVolume(); \
	friend struct Z_Construct_UClass_AHeterogeneousVolume_Statics; \
public: \
	DECLARE_CLASS(AHeterogeneousVolume, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AHeterogeneousVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_138_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AHeterogeneousVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeterogeneousVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AHeterogeneousVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeterogeneousVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHeterogeneousVolume(AHeterogeneousVolume&&); \
	AHeterogeneousVolume(const AHeterogeneousVolume&); \
public: \
	ENGINE_API virtual ~AHeterogeneousVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_135_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_138_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_138_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h_138_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AHeterogeneousVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_HeterogeneousVolumeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
