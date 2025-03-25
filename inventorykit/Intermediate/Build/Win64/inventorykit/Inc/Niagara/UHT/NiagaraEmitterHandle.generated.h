// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEmitterHandle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraEmitterHandle_generated_h
#error "NiagaraEmitterHandle.generated.h already included, missing '#pragma once' in NiagaraEmitterHandle.h"
#endif
#define NIAGARA_NiagaraEmitterHandle_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterHandle_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEmitterHandle_h


#define FOREACH_ENUM_ENIAGARAEMITTERMODE(op) \
	op(ENiagaraEmitterMode::Standard) \
	op(ENiagaraEmitterMode::Stateless) 

enum class ENiagaraEmitterMode : uint8;
template<> struct TIsUEnumClass<ENiagaraEmitterMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraEmitterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
