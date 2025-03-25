// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSpriteRendererProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSpriteRendererProperties_generated_h
#error "NiagaraSpriteRendererProperties.generated.h already included, missing '#pragma once' in NiagaraSpriteRendererProperties.h"
#endif
#define NIAGARA_NiagaraSpriteRendererProperties_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_113_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UNiagaraSpriteRendererProperties, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSpriteRendererProperties(); \
	friend struct Z_Construct_UClass_UNiagaraSpriteRendererProperties_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSpriteRendererProperties, UNiagaraRendererProperties, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraSpriteRendererProperties) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_113_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_113_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSpriteRendererProperties(UNiagaraSpriteRendererProperties&&); \
	UNiagaraSpriteRendererProperties(const UNiagaraSpriteRendererProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSpriteRendererProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSpriteRendererProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNiagaraSpriteRendererProperties) \
	NIAGARA_API virtual ~UNiagaraSpriteRendererProperties();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_109_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h_113_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSpriteRendererProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSpriteRendererProperties_h


#define FOREACH_ENUM_ENIAGARASPRITEALIGNMENT(op) \
	op(ENiagaraSpriteAlignment::Unaligned) \
	op(ENiagaraSpriteAlignment::VelocityAligned) \
	op(ENiagaraSpriteAlignment::CustomAlignment) \
	op(ENiagaraSpriteAlignment::Automatic) 

enum class ENiagaraSpriteAlignment : uint8;
template<> struct TIsUEnumClass<ENiagaraSpriteAlignment> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSpriteAlignment>();

#define FOREACH_ENUM_ENIAGARASPRITEFACINGMODE(op) \
	op(ENiagaraSpriteFacingMode::FaceCamera) \
	op(ENiagaraSpriteFacingMode::FaceCameraPlane) \
	op(ENiagaraSpriteFacingMode::CustomFacingVector) \
	op(ENiagaraSpriteFacingMode::FaceCameraPosition) \
	op(ENiagaraSpriteFacingMode::FaceCameraDistanceBlend) \
	op(ENiagaraSpriteFacingMode::Automatic) 

enum class ENiagaraSpriteFacingMode : uint8;
template<> struct TIsUEnumClass<ENiagaraSpriteFacingMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSpriteFacingMode>();

#define FOREACH_ENUM_ENIAGARARENDERERPIXELCOVERAGEMODE(op) \
	op(ENiagaraRendererPixelCoverageMode::Automatic) \
	op(ENiagaraRendererPixelCoverageMode::Disabled) \
	op(ENiagaraRendererPixelCoverageMode::Enabled) \
	op(ENiagaraRendererPixelCoverageMode::Enabled_RGBA) \
	op(ENiagaraRendererPixelCoverageMode::Enabled_RGB) \
	op(ENiagaraRendererPixelCoverageMode::Enabled_A) 

enum class ENiagaraRendererPixelCoverageMode : uint8;
template<> struct TIsUEnumClass<ENiagaraRendererPixelCoverageMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererPixelCoverageMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
