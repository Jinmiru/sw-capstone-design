// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stateless/NiagaraStatelessSpawnInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraStatelessSpawnInfo_generated_h
#error "NiagaraStatelessSpawnInfo.generated.h already included, missing '#pragma once' in NiagaraStatelessSpawnInfo.h"
#endif
#define NIAGARA_NiagaraStatelessSpawnInfo_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraStatelessSpawnInfo_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraStatelessSpawnInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessSpawnInfo_h


#define FOREACH_ENUM_ENIAGARASTATELESSSPAWNINFOTYPE(op) \
	op(ENiagaraStatelessSpawnInfoType::Burst) \
	op(ENiagaraStatelessSpawnInfoType::Rate) 

enum class ENiagaraStatelessSpawnInfoType;
template<> struct TIsUEnumClass<ENiagaraStatelessSpawnInfoType> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStatelessSpawnInfoType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
