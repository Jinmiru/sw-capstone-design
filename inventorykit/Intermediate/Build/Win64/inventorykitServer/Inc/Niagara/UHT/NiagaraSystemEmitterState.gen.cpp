// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/NiagaraSystemEmitterState.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystemEmitterState() {}

// Begin Cross Module References
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterStateData();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemStateData();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraSystemInactiveResponse
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse;
static UEnum* ENiagaraSystemInactiveResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSystemInactiveResponse"));
	}
	return Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemInactiveResponse>()
{
	return ENiagaraSystemInactiveResponse_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Complete.Comment", "/** Let Emitters Finish Then Kill Emitter */" },
		{ "Complete.Name", "ENiagaraSystemInactiveResponse::Complete" },
		{ "Complete.ToolTip", "Let Emitters Finish Then Kill Emitter" },
		{ "Kill.Comment", "/** Emitter & Particles Die Immediatly */" },
		{ "Kill.Name", "ENiagaraSystemInactiveResponse::Kill" },
		{ "Kill.ToolTip", "Emitter & Particles Die Immediatly" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraSystemInactiveResponse::Complete", (int64)ENiagaraSystemInactiveResponse::Complete },
		{ "ENiagaraSystemInactiveResponse::Kill", (int64)ENiagaraSystemInactiveResponse::Kill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraSystemInactiveResponse",
	"ENiagaraSystemInactiveResponse",
	Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse()
{
	if (!Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse.InnerSingleton;
}
// End Enum ENiagaraSystemInactiveResponse

// Begin Enum ENiagaraEmitterInactiveResponse
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse;
static UEnum* ENiagaraEmitterInactiveResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraEmitterInactiveResponse"));
	}
	return Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraEmitterInactiveResponse>()
{
	return ENiagaraEmitterInactiveResponse_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Complete.Comment", "/** Let Particles Finish Then Kill Emitter */" },
		{ "Complete.Name", "ENiagaraEmitterInactiveResponse::Complete" },
		{ "Complete.ToolTip", "Let Particles Finish Then Kill Emitter" },
		{ "Kill.Comment", "/** Emitter & Particles Die Immediatly */" },
		{ "Kill.Name", "ENiagaraEmitterInactiveResponse::Kill" },
		{ "Kill.ToolTip", "Emitter & Particles Die Immediatly" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraEmitterInactiveResponse::Complete", (int64)ENiagaraEmitterInactiveResponse::Complete },
		{ "ENiagaraEmitterInactiveResponse::Kill", (int64)ENiagaraEmitterInactiveResponse::Kill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraEmitterInactiveResponse",
	"ENiagaraEmitterInactiveResponse",
	Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse()
{
	if (!Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse.InnerSingleton;
}
// End Enum ENiagaraEmitterInactiveResponse

// Begin Enum ENiagaraLoopBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraLoopBehavior;
static UEnum* ENiagaraLoopBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraLoopBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraLoopBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraLoopBehavior"));
	}
	return Z_Registration_Info_UEnum_ENiagaraLoopBehavior.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraLoopBehavior>()
{
	return ENiagaraLoopBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Infinite.Name", "ENiagaraLoopBehavior::Infinite" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
		{ "Multiple.Name", "ENiagaraLoopBehavior::Multiple" },
		{ "Once.Name", "ENiagaraLoopBehavior::Once" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraLoopBehavior::Infinite", (int64)ENiagaraLoopBehavior::Infinite },
		{ "ENiagaraLoopBehavior::Multiple", (int64)ENiagaraLoopBehavior::Multiple },
		{ "ENiagaraLoopBehavior::Once", (int64)ENiagaraLoopBehavior::Once },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraLoopBehavior",
	"ENiagaraLoopBehavior",
	Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior()
{
	if (!Z_Registration_Info_UEnum_ENiagaraLoopBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraLoopBehavior.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraLoopBehavior.InnerSingleton;
}
// End Enum ENiagaraLoopBehavior

// Begin ScriptStruct FNiagaraSystemStateData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemStateData;
class UScriptStruct* FNiagaraSystemStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemStateData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemStateData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemStateData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemStateData>()
{
	return FNiagaraSystemStateData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSystemState_MetaData[] = {
		{ "Category", "System State" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveResponse_MetaData[] = {
		{ "Category", "System State" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopBehavior_MetaData[] = {
		{ "Category", "System State" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopDuration_MetaData[] = {
		{ "Category", "System State" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
		{ "Category", "System State" },
		{ "ClampMin", "1" },
		{ "EditCondition", "LoopBehavior == ENiagaraLoopBehavior::Multiple" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalculateDurationEachLoop_MetaData[] = {
		{ "Category", "System State" },
		{ "EditCondition", "LoopBehavior != ENiagaraLoopBehavior::Once" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopDelay_MetaData[] = {
		{ "Category", "System State" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstLoopOnly_MetaData[] = {
		{ "Category", "System State" },
		{ "EditCondition", "LoopBehavior != ENiagaraLoopBehavior::Once" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalculateDelayEachLoop_MetaData[] = {
		{ "Category", "System State" },
		{ "EditCondition", "LoopBehavior != ENiagaraLoopBehavior::Once && !bDelayFirstLoopOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnoreSystemState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSystemState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InactiveResponse_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InactiveResponse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoopBehavior;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
	static void NewProp_bRecalculateDurationEachLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalculateDurationEachLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopDelay;
	static void NewProp_bDelayFirstLoopOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayFirstLoopOnly;
	static void NewProp_bRecalculateDelayEachLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalculateDelayEachLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemStateData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bIgnoreSystemState_SetBit(void* Obj)
{
	((FNiagaraSystemStateData*)Obj)->bIgnoreSystemState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bIgnoreSystemState = { "bIgnoreSystemState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraSystemStateData), &Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bIgnoreSystemState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreSystemState_MetaData), NewProp_bIgnoreSystemState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_InactiveResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_InactiveResponse = { "InactiveResponse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemStateData, InactiveResponse), Z_Construct_UEnum_Niagara_ENiagaraSystemInactiveResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveResponse_MetaData), NewProp_InactiveResponse_MetaData) }; // 831657228
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopBehavior = { "LoopBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemStateData, LoopBehavior), Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopBehavior_MetaData), NewProp_LoopBehavior_MetaData) }; // 1934198256
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopDuration = { "LoopDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemStateData, LoopDuration), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopDuration_MetaData), NewProp_LoopDuration_MetaData) }; // 1814083401
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemStateData, LoopCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopCount_MetaData), NewProp_LoopCount_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRecalculateDurationEachLoop_SetBit(void* Obj)
{
	((FNiagaraSystemStateData*)Obj)->bRecalculateDurationEachLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRecalculateDurationEachLoop = { "bRecalculateDurationEachLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraSystemStateData), &Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRecalculateDurationEachLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalculateDurationEachLoop_MetaData), NewProp_bRecalculateDurationEachLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopDelay = { "LoopDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraSystemStateData, LoopDelay), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopDelay_MetaData), NewProp_LoopDelay_MetaData) }; // 1814083401
void Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bDelayFirstLoopOnly_SetBit(void* Obj)
{
	((FNiagaraSystemStateData*)Obj)->bDelayFirstLoopOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bDelayFirstLoopOnly = { "bDelayFirstLoopOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraSystemStateData), &Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bDelayFirstLoopOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayFirstLoopOnly_MetaData), NewProp_bDelayFirstLoopOnly_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRecalculateDelayEachLoop_SetBit(void* Obj)
{
	((FNiagaraSystemStateData*)Obj)->bRecalculateDelayEachLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRecalculateDelayEachLoop = { "bRecalculateDelayEachLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraSystemStateData), &Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRecalculateDelayEachLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalculateDelayEachLoop_MetaData), NewProp_bRecalculateDelayEachLoop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bIgnoreSystemState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_InactiveResponse_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_InactiveResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRecalculateDurationEachLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_LoopDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bDelayFirstLoopOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewProp_bRecalculateDelayEachLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraSystemStateData",
	Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::PropPointers),
	sizeof(FNiagaraSystemStateData),
	alignof(FNiagaraSystemStateData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemStateData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemStateData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemStateData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemStateData.InnerSingleton;
}
// End ScriptStruct FNiagaraSystemStateData

// Begin ScriptStruct FNiagaraEmitterStateData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEmitterStateData;
class UScriptStruct* FNiagaraEmitterStateData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterStateData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEmitterStateData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEmitterStateData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEmitterStateData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterStateData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEmitterStateData>()
{
	return FNiagaraEmitterStateData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveResponse_MetaData[] = {
		{ "Category", "Emitter State" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category=\"Emitter State\")\n//ENiagaraStatelessEmitterState_SelfSystem LifeCycleMode = ENiagaraStatelessEmitterState_SelfSystem::Self;\n" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category=\"Emitter State\")\nENiagaraStatelessEmitterState_SelfSystem LifeCycleMode = ENiagaraStatelessEmitterState_SelfSystem::Self;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopBehavior_MetaData[] = {
		{ "Category", "Emitter State" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
		{ "Category", "Emitter State" },
		{ "ClampMin", "1" },
		{ "EditCondition", "LoopBehavior == ENiagaraLoopBehavior::Multiple" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopDuration_MetaData[] = {
		{ "Category", "Emitter State" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalculateDurationEachLoop_MetaData[] = {
		{ "Category", "Emitter State" },
		{ "EditCondition", "LoopBehavior != ENiagaraLoopBehavior::Once" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopDelay_MetaData[] = {
		{ "Category", "Emitter State" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstLoopOnly_MetaData[] = {
		{ "Category", "Emitter State" },
		{ "EditCondition", "LoopBehavior != ENiagaraLoopBehavior::Once" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalculateDelayEachLoop_MetaData[] = {
		{ "Category", "Emitter State" },
		{ "EditCondition", "LoopBehavior != ENiagaraLoopBehavior::Once && !bDelayFirstLoopOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Internal/NiagaraSystemEmitterState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InactiveResponse_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InactiveResponse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LoopBehavior;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopDuration;
	static void NewProp_bRecalculateDurationEachLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalculateDurationEachLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopDelay;
	static void NewProp_bDelayFirstLoopOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDelayFirstLoopOnly;
	static void NewProp_bRecalculateDelayEachLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalculateDelayEachLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEmitterStateData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_InactiveResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_InactiveResponse = { "InactiveResponse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterStateData, InactiveResponse), Z_Construct_UEnum_Niagara_ENiagaraEmitterInactiveResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveResponse_MetaData), NewProp_InactiveResponse_MetaData) }; // 2936396651
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopBehavior = { "LoopBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterStateData, LoopBehavior), Z_Construct_UEnum_Niagara_ENiagaraLoopBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopBehavior_MetaData), NewProp_LoopBehavior_MetaData) }; // 1934198256
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterStateData, LoopCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopCount_MetaData), NewProp_LoopCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopDuration = { "LoopDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterStateData, LoopDuration), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopDuration_MetaData), NewProp_LoopDuration_MetaData) }; // 1814083401
void Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bRecalculateDurationEachLoop_SetBit(void* Obj)
{
	((FNiagaraEmitterStateData*)Obj)->bRecalculateDurationEachLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bRecalculateDurationEachLoop = { "bRecalculateDurationEachLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraEmitterStateData), &Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bRecalculateDurationEachLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalculateDurationEachLoop_MetaData), NewProp_bRecalculateDurationEachLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopDelay = { "LoopDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraEmitterStateData, LoopDelay), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopDelay_MetaData), NewProp_LoopDelay_MetaData) }; // 1814083401
void Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bDelayFirstLoopOnly_SetBit(void* Obj)
{
	((FNiagaraEmitterStateData*)Obj)->bDelayFirstLoopOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bDelayFirstLoopOnly = { "bDelayFirstLoopOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraEmitterStateData), &Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bDelayFirstLoopOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDelayFirstLoopOnly_MetaData), NewProp_bDelayFirstLoopOnly_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bRecalculateDelayEachLoop_SetBit(void* Obj)
{
	((FNiagaraEmitterStateData*)Obj)->bRecalculateDelayEachLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bRecalculateDelayEachLoop = { "bRecalculateDelayEachLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraEmitterStateData), &Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bRecalculateDelayEachLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalculateDelayEachLoop_MetaData), NewProp_bRecalculateDelayEachLoop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_InactiveResponse_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_InactiveResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bRecalculateDurationEachLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_LoopDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bDelayFirstLoopOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewProp_bRecalculateDelayEachLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraEmitterStateData",
	Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::PropPointers),
	sizeof(FNiagaraEmitterStateData),
	alignof(FNiagaraEmitterStateData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEmitterStateData()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEmitterStateData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEmitterStateData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEmitterStateData.InnerSingleton;
}
// End ScriptStruct FNiagaraEmitterStateData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraSystemInactiveResponse_StaticEnum, TEXT("ENiagaraSystemInactiveResponse"), &Z_Registration_Info_UEnum_ENiagaraSystemInactiveResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 831657228U) },
		{ ENiagaraEmitterInactiveResponse_StaticEnum, TEXT("ENiagaraEmitterInactiveResponse"), &Z_Registration_Info_UEnum_ENiagaraEmitterInactiveResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2936396651U) },
		{ ENiagaraLoopBehavior_StaticEnum, TEXT("ENiagaraLoopBehavior"), &Z_Registration_Info_UEnum_ENiagaraLoopBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1934198256U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraSystemStateData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemStateData_Statics::NewStructOps, TEXT("NiagaraSystemStateData"), &Z_Registration_Info_UScriptStruct_NiagaraSystemStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemStateData), 3744481345U) },
		{ FNiagaraEmitterStateData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEmitterStateData_Statics::NewStructOps, TEXT("NiagaraEmitterStateData"), &Z_Registration_Info_UScriptStruct_NiagaraEmitterStateData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEmitterStateData), 2942417068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h_605053647(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_NiagaraSystemEmitterState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
