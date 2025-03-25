// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCameraFilmbackSettings;
struct FCameraFocusSettings;
struct FCameraLensSettings;
struct FNamedFilmbackPreset;
struct FNamedLensPreset;
struct FPlateCropSettings;
#ifdef CINEMATICCAMERA_CineCameraComponent_generated_h
#error "CineCameraComponent.generated.h already included, missing '#pragma once' in CineCameraComponent.h"
#endif
#define CINEMATICCAMERA_CineCameraComponent_generated_h

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLensPresetsCopy); \
	DECLARE_FUNCTION(execGetFilmbackPresetsCopy); \
	DECLARE_FUNCTION(execSetCropPresetByName); \
	DECLARE_FUNCTION(execGetCropPresetName); \
	DECLARE_FUNCTION(execSetLensPresetByName); \
	DECLARE_FUNCTION(execGetLensPresetName); \
	DECLARE_FUNCTION(execSetFilmbackPresetByName); \
	DECLARE_FUNCTION(execGetDefaultFilmbackPresetName); \
	DECLARE_FUNCTION(execGetFilmbackPresetName); \
	DECLARE_FUNCTION(execGetVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView); \
	DECLARE_FUNCTION(execSetCustomNearClippingPlane); \
	DECLARE_FUNCTION(execSetCurrentFocalLength); \
	DECLARE_FUNCTION(execSetCurrentAperture); \
	DECLARE_FUNCTION(execSetCropSettings); \
	DECLARE_FUNCTION(execSetFocusSettings); \
	DECLARE_FUNCTION(execSetLensSettings); \
	DECLARE_FUNCTION(execSetFilmback);


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCineCameraComponent, CINEMATICCAMERA_API)


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineCameraComponent(); \
	friend struct Z_Construct_UClass_UCineCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCineCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), CINEMATICCAMERA_API) \
	DECLARE_SERIALIZER(UCineCameraComponent) \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_23_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCineCameraComponent(UCineCameraComponent&&); \
	UCineCameraComponent(const UCineCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEMATICCAMERA_API, UCineCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCineCameraComponent) \
	CINEMATICCAMERA_API virtual ~UCineCameraComponent();


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_20_PROLOG
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERA_API UClass* StaticClass<class UCineCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
