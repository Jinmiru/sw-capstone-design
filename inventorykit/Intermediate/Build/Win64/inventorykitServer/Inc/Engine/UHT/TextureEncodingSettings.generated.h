// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureEncodingSettings.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureEncodingSettings_generated_h
#error "TextureEncodingSettings.generated.h already included, missing '#pragma once' in TextureEncodingSettings.h"
#endif
#define ENGINE_TextureEncodingSettings_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h


#define FOREACH_ENUM_ETEXTUREENCODEEFFORT(op) \
	op(ETextureEncodeEffort::Default) \
	op(ETextureEncodeEffort::Low) \
	op(ETextureEncodeEffort::Normal) \
	op(ETextureEncodeEffort::High) 

enum class ETextureEncodeEffort : uint8;
template<> struct TIsUEnumClass<ETextureEncodeEffort> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureEncodeEffort>();

#define FOREACH_ENUM_ETEXTUREUNIVERSALTILING(op) \
	op(ETextureUniversalTiling::Disabled) \
	op(ETextureUniversalTiling::Enabled_256KB) \
	op(ETextureUniversalTiling::Enabled_64KB) 

enum class ETextureUniversalTiling : uint8;
template<> struct TIsUEnumClass<ETextureUniversalTiling> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureUniversalTiling>();

#define FOREACH_ENUM_ETEXTUREENCODESPEEDOVERRIDE(op) \
	op(ETextureEncodeSpeedOverride::Disabled) \
	op(ETextureEncodeSpeedOverride::Final) \
	op(ETextureEncodeSpeedOverride::FinalIfAvailable) \
	op(ETextureEncodeSpeedOverride::Fast) 

enum class ETextureEncodeSpeedOverride : uint8;
template<> struct TIsUEnumClass<ETextureEncodeSpeedOverride> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETextureEncodeSpeedOverride>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
