// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraVariableMetaData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraVariableMetaData_generated_h
#error "NiagaraVariableMetaData.generated.h already included, missing '#pragma once' in NiagaraVariableMetaData.h"
#endif
#define NIAGARA_NiagaraVariableMetaData_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraInputConditionMetadata>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEnumParameterMetaData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetNamedInputValue_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FWidgetNamedInputValue>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetSegmentValueOverride_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FWidgetSegmentValueOverride>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraWidgetNamedIntegerInputValue_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraWidgetNamedIntegerInputValue>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraInputParameterCustomization_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraInputParameterCustomization>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_181_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraBoolParameterMetaData>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h_210_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVariableMetaData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariableMetaData_h


#define FOREACH_ENUM_ENIAGARAINPUTWIDGETTYPE(op) \
	op(ENiagaraInputWidgetType::Default) \
	op(ENiagaraInputWidgetType::Slider) \
	op(ENiagaraInputWidgetType::Volume) \
	op(ENiagaraInputWidgetType::NumericDropdown) \
	op(ENiagaraInputWidgetType::EnumStyle) \
	op(ENiagaraInputWidgetType::SegmentedButtons) 

enum class ENiagaraInputWidgetType : uint8;
template<> struct TIsUEnumClass<ENiagaraInputWidgetType> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraInputWidgetType>();

#define FOREACH_ENUM_ENIAGARABOOLDISPLAYMODE(op) \
	op(ENiagaraBoolDisplayMode::DisplayAlways) \
	op(ENiagaraBoolDisplayMode::DisplayIfTrue) \
	op(ENiagaraBoolDisplayMode::DisplayIfFalse) 

enum class ENiagaraBoolDisplayMode : uint8;
template<> struct TIsUEnumClass<ENiagaraBoolDisplayMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraBoolDisplayMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
