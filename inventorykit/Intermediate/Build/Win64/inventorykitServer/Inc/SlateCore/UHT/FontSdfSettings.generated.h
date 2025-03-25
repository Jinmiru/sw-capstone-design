// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fonts/FontSdfSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_FontSdfSettings_generated_h
#error "FontSdfSettings.generated.h already included, missing '#pragma once' in FontSdfSettings.h"
#endif
#define SLATECORE_FontSdfSettings_generated_h

#define FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontSdfSettings_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontSdfSettings_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


template<> SLATECORE_API UScriptStruct* StaticStruct<struct FFontSdfSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_SlateCore_Public_Fonts_FontSdfSettings_h


#define FOREACH_ENUM_EFONTRASTERIZATIONMODE(op) \
	op(EFontRasterizationMode::Bitmap) \
	op(EFontRasterizationMode::Msdf) 

enum class EFontRasterizationMode : uint8;
template<> struct TIsUEnumClass<EFontRasterizationMode> { enum { Value = true }; };
template<> SLATECORE_API UEnum* StaticEnum<EFontRasterizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
