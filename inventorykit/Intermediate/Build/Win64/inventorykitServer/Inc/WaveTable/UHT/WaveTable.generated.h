// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaveTable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WAVETABLE_WaveTable_generated_h
#error "WaveTable.generated.h already included, missing '#pragma once' in WaveTable.h"
#endif
#define WAVETABLE_WaveTable_generated_h

#define FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaveTableData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WAVETABLE_API UScriptStruct* StaticStruct<struct FWaveTableData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTable_h


#define FOREACH_ENUM_EWAVETABLEBITDEPTH(op) \
	op(EWaveTableBitDepth::PCM_16) \
	op(EWaveTableBitDepth::IEEE_Float) \
	op(EWaveTableBitDepth::COUNT) 

enum class EWaveTableBitDepth : uint8;
template<> struct TIsUEnumClass<EWaveTableBitDepth> { enum { Value = true }; };
template<> WAVETABLE_API UEnum* StaticEnum<EWaveTableBitDepth>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
