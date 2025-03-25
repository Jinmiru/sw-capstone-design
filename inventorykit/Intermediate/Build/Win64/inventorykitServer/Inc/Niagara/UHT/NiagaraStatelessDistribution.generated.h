// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/NiagaraStatelessDistribution.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraStatelessDistribution_generated_h
#error "NiagaraStatelessDistribution.generated.h already included, missing '#pragma once' in NiagaraStatelessDistribution.h"
#endif
#define NIAGARA_NiagaraStatelessDistribution_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionBase>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionRangeInt>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraDistributionBase Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionRangeFloat>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraDistributionBase Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionRangeVector2>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraDistributionBase Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionRangeVector3>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraDistributionBase Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionRangeColor>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraDistributionBase Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionFloat>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraDistributionBase Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionVector2>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_239_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraDistributionBase Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionVector3>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_261_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraDistributionBase Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDistributionColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h


#define FOREACH_ENUM_ENIAGARADISTRIBUTIONMODE(op) \
	op(ENiagaraDistributionMode::Binding) \
	op(ENiagaraDistributionMode::UniformConstant) \
	op(ENiagaraDistributionMode::NonUniformConstant) \
	op(ENiagaraDistributionMode::UniformRange) \
	op(ENiagaraDistributionMode::NonUniformRange) \
	op(ENiagaraDistributionMode::UniformCurve) \
	op(ENiagaraDistributionMode::NonUniformCurve) 

enum class ENiagaraDistributionMode;
template<> struct TIsUEnumClass<ENiagaraDistributionMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDistributionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
