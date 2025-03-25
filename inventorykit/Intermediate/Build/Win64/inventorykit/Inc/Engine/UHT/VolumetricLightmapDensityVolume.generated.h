// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lightmass/VolumetricLightmapDensityVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VolumetricLightmapDensityVolume_generated_h
#error "VolumetricLightmapDensityVolume.generated.h already included, missing '#pragma once' in VolumetricLightmapDensityVolume.h"
#endif
#define ENGINE_VolumetricLightmapDensityVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAVolumetricLightmapDensityVolume(); \
	friend struct Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics; \
public: \
	DECLARE_CLASS(AVolumetricLightmapDensityVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AVolumetricLightmapDensityVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AVolumetricLightmapDensityVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVolumetricLightmapDensityVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AVolumetricLightmapDensityVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVolumetricLightmapDensityVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVolumetricLightmapDensityVolume(AVolumetricLightmapDensityVolume&&); \
	AVolumetricLightmapDensityVolume(const AVolumetricLightmapDensityVolume&); \
public: \
	ENGINE_API virtual ~AVolumetricLightmapDensityVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AVolumetricLightmapDensityVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Lightmass_VolumetricLightmapDensityVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
