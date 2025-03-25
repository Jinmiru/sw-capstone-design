// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraPerfBaseline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraPerfBaseline() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPerfBaselineActor();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController_Basic();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController_Basic_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBaselineController_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraPerfBaselineStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPerfBaselineStats;
class UScriptStruct* FNiagaraPerfBaselineStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPerfBaselineStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPerfBaselineStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPerfBaselineStats"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPerfBaselineStats.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPerfBaselineStats>()
{
	return FNiagaraPerfBaselineStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceAvg_GT_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Per instance average time spent on the GameThread (\xc2\xb5s). */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Per instance average time spent on the GameThread (\xc2\xb5s)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceAvg_RT_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Per instance average time spent on the RenderThread (\xc2\xb5s). */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Per instance average time spent on the RenderThread (\xc2\xb5s)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceMax_GT_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Per instance max time spent on the GameThread (\xc2\xb5s). */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Per instance max time spent on the GameThread (\xc2\xb5s)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceMax_RT_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Per instance max time spent on the RenderThread (\xc2\xb5s). */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Per instance max time spent on the RenderThread (\xc2\xb5s)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerInstanceAvg_GT;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerInstanceAvg_RT;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerInstanceMax_GT;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerInstanceMax_RT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPerfBaselineStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_GT = { "PerInstanceAvg_GT", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraPerfBaselineStats, PerInstanceAvg_GT), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceAvg_GT_MetaData), NewProp_PerInstanceAvg_GT_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_RT = { "PerInstanceAvg_RT", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraPerfBaselineStats, PerInstanceAvg_RT), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceAvg_RT_MetaData), NewProp_PerInstanceAvg_RT_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_GT = { "PerInstanceMax_GT", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraPerfBaselineStats, PerInstanceMax_GT), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceMax_GT_MetaData), NewProp_PerInstanceMax_GT_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_RT = { "PerInstanceMax_RT", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraPerfBaselineStats, PerInstanceMax_RT), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerInstanceMax_RT_MetaData), NewProp_PerInstanceMax_RT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_GT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceAvg_RT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_GT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewProp_PerInstanceMax_RT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraPerfBaselineStats",
	Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::PropPointers),
	sizeof(FNiagaraPerfBaselineStats),
	alignof(FNiagaraPerfBaselineStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPerfBaselineStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPerfBaselineStats.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPerfBaselineStats.InnerSingleton;
}
// End ScriptStruct FNiagaraPerfBaselineStats

// Begin Class UNiagaraBaselineController Function GetSystem
struct Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics
{
	struct NiagaraBaselineController_eventGetSystem_Parms
	{
		UNiagaraSystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Returns the System for this baseline. Will synchronously load the system if needed. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Returns the System for this baseline. Will synchronously load the system if needed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraBaselineController_eventGetSystem_Parms, ReturnValue), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "GetSystem", nullptr, nullptr, Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::NiagaraBaselineController_eventGetSystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::NiagaraBaselineController_eventGetSystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraBaselineController_GetSystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_GetSystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraBaselineController::execGetSystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraSystem**)Z_Param__Result=P_THIS->GetSystem();
	P_NATIVE_END;
}
// End Class UNiagaraBaselineController Function GetSystem

// Begin Class UNiagaraBaselineController Function OnBeginTest
static FName NAME_UNiagaraBaselineController_OnBeginTest = FName(TEXT("OnBeginTest"));
void UNiagaraBaselineController::OnBeginTest()
{
	ProcessEvent(FindFunctionChecked(NAME_UNiagaraBaselineController_OnBeginTest),NULL);
}
struct Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called from the stats system when we begin gathering stats for the given System asset.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Called from the stats system when we begin gathering stats for the given System asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "OnBeginTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraBaselineController::execOnBeginTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginTest_Implementation();
	P_NATIVE_END;
}
// End Class UNiagaraBaselineController Function OnBeginTest

// Begin Class UNiagaraBaselineController Function OnEndTest
struct NiagaraBaselineController_eventOnEndTest_Parms
{
	FNiagaraPerfBaselineStats Stats;
};
static FName NAME_UNiagaraBaselineController_OnEndTest = FName(TEXT("OnEndTest"));
void UNiagaraBaselineController::OnEndTest(FNiagaraPerfBaselineStats Stats)
{
	NiagaraBaselineController_eventOnEndTest_Parms Parms;
	Parms.Stats=Stats;
	ProcessEvent(FindFunctionChecked(NAME_UNiagaraBaselineController_OnEndTest),&Parms);
}
struct Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called from the stats system on completion of the test with the final stats for the given system asset. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Called from the stats system on completion of the test with the final stats for the given system asset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraBaselineController_eventOnEndTest_Parms, Stats), Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats, METADATA_PARAMS(0, nullptr) }; // 1504386839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "OnEndTest", nullptr, nullptr, Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::PropPointers), sizeof(NiagaraBaselineController_eventOnEndTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(NiagaraBaselineController_eventOnEndTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraBaselineController::execOnEndTest)
{
	P_GET_STRUCT(FNiagaraPerfBaselineStats,Z_Param_Stats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndTest_Implementation(Z_Param_Stats);
	P_NATIVE_END;
}
// End Class UNiagaraBaselineController Function OnEndTest

// Begin Class UNiagaraBaselineController Function OnOwnerTick
struct NiagaraBaselineController_eventOnOwnerTick_Parms
{
	float DeltaTime;
};
static FName NAME_UNiagaraBaselineController_OnOwnerTick = FName(TEXT("OnOwnerTick"));
void UNiagaraBaselineController::OnOwnerTick(float DeltaTime)
{
	NiagaraBaselineController_eventOnOwnerTick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_UNiagaraBaselineController_OnOwnerTick),&Parms);
}
struct Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the owning actor is ticked. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Called when the owning actor is ticked." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NiagaraBaselineController_eventOnOwnerTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "OnOwnerTick", nullptr, nullptr, Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::PropPointers), sizeof(NiagaraBaselineController_eventOnOwnerTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(NiagaraBaselineController_eventOnOwnerTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraBaselineController::execOnOwnerTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOwnerTick_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UNiagaraBaselineController Function OnOwnerTick

// Begin Class UNiagaraBaselineController Function OnTickTest
struct NiagaraBaselineController_eventOnTickTest_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	NiagaraBaselineController_eventOnTickTest_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UNiagaraBaselineController_OnTickTest = FName(TEXT("OnTickTest"));
bool UNiagaraBaselineController::OnTickTest()
{
	NiagaraBaselineController_eventOnTickTest_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UNiagaraBaselineController_OnTickTest),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Returns whether the baseline test is complete. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Returns whether the baseline test is complete." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NiagaraBaselineController_eventOnTickTest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NiagaraBaselineController_eventOnTickTest_Parms), &Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraBaselineController, nullptr, "OnTickTest", nullptr, nullptr, Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::PropPointers), sizeof(NiagaraBaselineController_eventOnTickTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(NiagaraBaselineController_eventOnTickTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNiagaraBaselineController::execOnTickTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnTickTest_Implementation();
	P_NATIVE_END;
}
// End Class UNiagaraBaselineController Function OnTickTest

// Begin Class UNiagaraBaselineController
void UNiagaraBaselineController::StaticRegisterNativesUNiagaraBaselineController()
{
	UClass* Class = UNiagaraBaselineController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSystem", &UNiagaraBaselineController::execGetSystem },
		{ "OnBeginTest", &UNiagaraBaselineController::execOnBeginTest },
		{ "OnEndTest", &UNiagaraBaselineController::execOnEndTest },
		{ "OnOwnerTick", &UNiagaraBaselineController::execOnOwnerTick },
		{ "OnTickTest", &UNiagaraBaselineController::execOnTickTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBaselineController);
UClass* Z_Construct_UClass_UNiagaraBaselineController_NoRegister()
{
	return UNiagaraBaselineController::StaticClass();
}
struct Z_Construct_UClass_UNiagaraBaselineController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base class for baseline controllers. These can are responsible for spawning and manipulating the FX needed for the baseline perf tests.\n*/" },
		{ "IncludePath", "NiagaraPerfBaseline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Base class for baseline controllers. These can are responsible for spawning and manipulating the FX needed for the baseline perf tests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestDuration_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** Duration to gather performance stats for the given system. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Duration to gather performance stats for the given system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** The effect type this controller is in use by. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "The effect type this controller is in use by." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** The owning actor for this baseline controller. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "The owning actor for this baseline controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[] = {
		{ "Category", "Baseline" },
		{ "Comment", "/** The baseline system to spawn. */" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "The baseline system to spawn." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TestDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_System;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraBaselineController_GetSystem, "GetSystem" }, // 3611335271
		{ &Z_Construct_UFunction_UNiagaraBaselineController_OnBeginTest, "OnBeginTest" }, // 3812544459
		{ &Z_Construct_UFunction_UNiagaraBaselineController_OnEndTest, "OnEndTest" }, // 2044590440
		{ &Z_Construct_UFunction_UNiagaraBaselineController_OnOwnerTick, "OnOwnerTick" }, // 1713540294
		{ &Z_Construct_UFunction_UNiagaraBaselineController_OnTickTest, "OnTickTest" }, // 1279117432
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBaselineController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_TestDuration = { "TestDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBaselineController, TestDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestDuration_MetaData), NewProp_TestDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBaselineController, EffectType), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectType_MetaData), NewProp_EffectType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBaselineController, Owner), Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBaselineController, System), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_System_MetaData), NewProp_System_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBaselineController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_TestDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_EffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Statics::NewProp_System,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraBaselineController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBaselineController_Statics::ClassParams = {
	&UNiagaraBaselineController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNiagaraBaselineController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraBaselineController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraBaselineController()
{
	if (!Z_Registration_Info_UClass_UNiagaraBaselineController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBaselineController.OuterSingleton, Z_Construct_UClass_UNiagaraBaselineController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraBaselineController.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraBaselineController>()
{
	return UNiagaraBaselineController::StaticClass();
}
UNiagaraBaselineController::UNiagaraBaselineController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBaselineController);
UNiagaraBaselineController::~UNiagaraBaselineController() {}
// End Class UNiagaraBaselineController

// Begin Class UNiagaraBaselineController_Basic
void UNiagaraBaselineController_Basic::StaticRegisterNativesUNiagaraBaselineController_Basic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBaselineController_Basic);
UClass* Z_Construct_UClass_UNiagaraBaselineController_Basic_NoRegister()
{
	return UNiagaraBaselineController_Basic::StaticClass();
}
struct Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\nSimple controller that will just spawn the given system N times. If any instance completes, it will spawn a new one to replace it.\nCan handle simple burst or looping systems.\n*/" },
		{ "IncludePath", "NiagaraPerfBaseline.h" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Simple controller that will just spawn the given system N times. If any instance completes, it will spawn a new one to replace it.\nCan handle simple burst or looping systems." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[] = {
		{ "Category", "Baseline" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBaselineController_Basic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBaselineController_Basic, NumInstances), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumInstances_MetaData), NewProp_NumInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents_Inner = { "SpawnedComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents = { "SpawnedComponents", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraBaselineController_Basic, SpawnedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedComponents_MetaData), NewProp_SpawnedComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_NumInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::NewProp_SpawnedComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraBaselineController,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::ClassParams = {
	&UNiagaraBaselineController_Basic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraBaselineController_Basic()
{
	if (!Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.OuterSingleton, Z_Construct_UClass_UNiagaraBaselineController_Basic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraBaselineController_Basic.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraBaselineController_Basic>()
{
	return UNiagaraBaselineController_Basic::StaticClass();
}
UNiagaraBaselineController_Basic::UNiagaraBaselineController_Basic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBaselineController_Basic);
UNiagaraBaselineController_Basic::~UNiagaraBaselineController_Basic() {}
// End Class UNiagaraBaselineController_Basic

// Begin Class ANiagaraPerfBaselineActor
void ANiagaraPerfBaselineActor::StaticRegisterNativesANiagaraPerfBaselineActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANiagaraPerfBaselineActor);
UClass* Z_Construct_UClass_ANiagaraPerfBaselineActor_NoRegister()
{
	return ANiagaraPerfBaselineActor::StaticClass();
}
struct Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Actor that controls how the baseline system behaves and also controls stats gathering for. */" },
		{ "IncludePath", "NiagaraPerfBaseline.h" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
		{ "ToolTip", "Actor that controls how the baseline system behaves and also controls stats gathering for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "Category", "Baseline" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Baseline" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraPerfBaseline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Label;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraPerfBaselineActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPerfBaselineActor, Controller), Z_Construct_UClass_UNiagaraBaselineController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANiagaraPerfBaselineActor, Label), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::NewProp_Label,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::ClassParams = {
	&ANiagaraPerfBaselineActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANiagaraPerfBaselineActor()
{
	if (!Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.OuterSingleton, Z_Construct_UClass_ANiagaraPerfBaselineActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANiagaraPerfBaselineActor.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<ANiagaraPerfBaselineActor>()
{
	return ANiagaraPerfBaselineActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraPerfBaselineActor);
ANiagaraPerfBaselineActor::~ANiagaraPerfBaselineActor() {}
// End Class ANiagaraPerfBaselineActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraPerfBaselineStats::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPerfBaselineStats_Statics::NewStructOps, TEXT("NiagaraPerfBaselineStats"), &Z_Registration_Info_UScriptStruct_NiagaraPerfBaselineStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPerfBaselineStats), 1504386839U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBaselineController, UNiagaraBaselineController::StaticClass, TEXT("UNiagaraBaselineController"), &Z_Registration_Info_UClass_UNiagaraBaselineController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBaselineController), 2974380333U) },
		{ Z_Construct_UClass_UNiagaraBaselineController_Basic, UNiagaraBaselineController_Basic::StaticClass, TEXT("UNiagaraBaselineController_Basic"), &Z_Registration_Info_UClass_UNiagaraBaselineController_Basic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBaselineController_Basic), 174881701U) },
		{ Z_Construct_UClass_ANiagaraPerfBaselineActor, ANiagaraPerfBaselineActor::StaticClass, TEXT("ANiagaraPerfBaselineActor"), &Z_Registration_Info_UClass_ANiagaraPerfBaselineActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANiagaraPerfBaselineActor), 1203010903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_575772462(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPerfBaseline_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
