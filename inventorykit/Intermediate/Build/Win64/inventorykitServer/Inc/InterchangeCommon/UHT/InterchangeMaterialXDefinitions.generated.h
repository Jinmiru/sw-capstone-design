// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialX/InterchangeMaterialXDefinitions.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGECOMMON_InterchangeMaterialXDefinitions_generated_h
#error "InterchangeMaterialXDefinitions.generated.h already included, missing '#pragma once' in InterchangeMaterialXDefinitions.h"
#endif
#define INTERCHANGECOMMON_InterchangeMaterialXDefinitions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Common_Public_MaterialX_InterchangeMaterialXDefinitions_h


#define FOREACH_ENUM_EINTERCHANGEMATERIALXSHADERS(op) \
	op(EInterchangeMaterialXShaders::OpenPBRSurface) \
	op(EInterchangeMaterialXShaders::OpenPBRSurfaceTransmission) \
	op(EInterchangeMaterialXShaders::StandardSurface) \
	op(EInterchangeMaterialXShaders::StandardSurfaceTransmission) \
	op(EInterchangeMaterialXShaders::SurfaceUnlit) \
	op(EInterchangeMaterialXShaders::UsdPreviewSurface) \
	op(EInterchangeMaterialXShaders::Surface) \
	op(EInterchangeMaterialXShaders::MaxShaderCount) 

enum class EInterchangeMaterialXShaders : uint8;
template<> struct TIsUEnumClass<EInterchangeMaterialXShaders> { enum { Value = true }; };
template<> INTERCHANGECOMMON_API UEnum* StaticEnum<EInterchangeMaterialXShaders>();

#define FOREACH_ENUM_EINTERCHANGEMATERIALXBSDF(op) \
	op(EInterchangeMaterialXBSDF::OrenNayarDiffuse) \
	op(EInterchangeMaterialXBSDF::BurleyDiffuse) \
	op(EInterchangeMaterialXBSDF::Translucent) \
	op(EInterchangeMaterialXBSDF::Dielectric) \
	op(EInterchangeMaterialXBSDF::Conductor) \
	op(EInterchangeMaterialXBSDF::GeneralizedSchlick) \
	op(EInterchangeMaterialXBSDF::Subsurface) \
	op(EInterchangeMaterialXBSDF::Sheen) \
	op(EInterchangeMaterialXBSDF::ThinFilm) \
	op(EInterchangeMaterialXBSDF::MaxBSDFCount) 

enum class EInterchangeMaterialXBSDF : uint8;
template<> struct TIsUEnumClass<EInterchangeMaterialXBSDF> { enum { Value = true }; };
template<> INTERCHANGECOMMON_API UEnum* StaticEnum<EInterchangeMaterialXBSDF>();

#define FOREACH_ENUM_EINTERCHANGEMATERIALXEDF(op) \
	op(EInterchangeMaterialXEDF::Uniform) \
	op(EInterchangeMaterialXEDF::Conical) \
	op(EInterchangeMaterialXEDF::Measured) \
	op(EInterchangeMaterialXEDF::MaxEDFCount) 

enum class EInterchangeMaterialXEDF : uint8;
template<> struct TIsUEnumClass<EInterchangeMaterialXEDF> { enum { Value = true }; };
template<> INTERCHANGECOMMON_API UEnum* StaticEnum<EInterchangeMaterialXEDF>();

#define FOREACH_ENUM_EINTERCHANGEMATERIALXVDF(op) \
	op(EInterchangeMaterialXVDF::Absorption) \
	op(EInterchangeMaterialXVDF::Anisotropic) \
	op(EInterchangeMaterialXVDF::MaxVDFCount) 

enum class EInterchangeMaterialXVDF : uint8;
template<> struct TIsUEnumClass<EInterchangeMaterialXVDF> { enum { Value = true }; };
template<> INTERCHANGECOMMON_API UEnum* StaticEnum<EInterchangeMaterialXVDF>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
