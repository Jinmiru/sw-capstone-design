// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/SequencePlayerLibrary.h"
#include "Runtime/Engine/Classes/Animation/AnimExecutionContext.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencePlayerLibrary() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencePlayerLibrary();
ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencePlayerLibrary_NoRegister();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSequencePlayerReference();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimUpdateContext();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FSequencePlayerReference
static_assert(std::is_polymorphic<FSequencePlayerReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FSequencePlayerReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencePlayerReference;
class UScriptStruct* FSequencePlayerReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencePlayerReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencePlayerReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencePlayerReference, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("SequencePlayerReference"));
	}
	return Z_Registration_Info_UScriptStruct_SequencePlayerReference.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FSequencePlayerReference>()
{
	return FSequencePlayerReference::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSequencePlayerReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencePlayerReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencePlayerReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"SequencePlayerReference",
	nullptr,
	0,
	sizeof(FSequencePlayerReference),
	alignof(FSequencePlayerReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencePlayerReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSequencePlayerReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSequencePlayerReference()
{
	if (!Z_Registration_Info_UScriptStruct_SequencePlayerReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencePlayerReference.InnerSingleton, Z_Construct_UScriptStruct_FSequencePlayerReference_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SequencePlayerReference.InnerSingleton;
}
// End ScriptStruct FSequencePlayerReference

// Begin Class USequencePlayerLibrary Function ComputePlayRateFromDuration
struct Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics
{
	struct SequencePlayerLibrary_eventComputePlayRateFromDuration_Parms
	{
		FSequencePlayerReference SequencePlayer;
		float Duration;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Returns the Play Rate to provide when playing this animation if a specific animation duration is desired */" },
		{ "CPP_Default_Duration", "1.000000" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Returns the Play Rate to provide when playing this animation if a specific animation duration is desired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventComputePlayRateFromDuration_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventComputePlayRateFromDuration_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventComputePlayRateFromDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "ComputePlayRateFromDuration", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::SequencePlayerLibrary_eventComputePlayRateFromDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::SequencePlayerLibrary_eventComputePlayRateFromDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execComputePlayRateFromDuration)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USequencePlayerLibrary::ComputePlayRateFromDuration(Z_Param_Out_SequencePlayer,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function ComputePlayRateFromDuration

// Begin Class USequencePlayerLibrary Function ConvertToSequencePlayer
struct Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics
{
	struct SequencePlayerLibrary_eventConvertToSequencePlayer_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FSequencePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Get a sequence player context from an anim node context */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Get a sequence player context from an anim node context" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventConvertToSequencePlayer_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventConvertToSequencePlayer_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 1211585839
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventConvertToSequencePlayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(0, nullptr) }; // 4172011247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "ConvertToSequencePlayer", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::SequencePlayerLibrary_eventConvertToSequencePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::SequencePlayerLibrary_eventConvertToSequencePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execConvertToSequencePlayer)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencePlayerReference*)Z_Param__Result=USequencePlayerLibrary::ConvertToSequencePlayer(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function ConvertToSequencePlayer

// Begin Class USequencePlayerLibrary Function ConvertToSequencePlayerPure
struct Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics
{
	struct SequencePlayerLibrary_eventConvertToSequencePlayerPure_Parms
	{
		FAnimNodeReference Node;
		FSequencePlayerReference SequencePlayer;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Get a sequence player context from an anim node context (pure) */" },
		{ "DisplayName", "Convert to Sequence Player" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Get a sequence player context from an anim node context (pure)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventConvertToSequencePlayerPure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 3482719010
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventConvertToSequencePlayerPure_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(0, nullptr) }; // 4172011247
void Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((SequencePlayerLibrary_eventConvertToSequencePlayerPure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SequencePlayerLibrary_eventConvertToSequencePlayerPure_Parms), &Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "ConvertToSequencePlayerPure", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::SequencePlayerLibrary_eventConvertToSequencePlayerPure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::SequencePlayerLibrary_eventConvertToSequencePlayerPure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execConvertToSequencePlayerPure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USequencePlayerLibrary::ConvertToSequencePlayerPure(Z_Param_Out_Node,Z_Param_Out_SequencePlayer,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function ConvertToSequencePlayerPure

// Begin Class USequencePlayerLibrary Function GetAccumulatedTime
struct Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics
{
	struct SequencePlayerLibrary_eventGetAccumulatedTime_Parms
	{
		FSequencePlayerReference SequencePlayer;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Gets the current accumulated time of the sequence player */" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Gets the current accumulated time of the sequence player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetAccumulatedTime_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetAccumulatedTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "GetAccumulatedTime", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::SequencePlayerLibrary_eventGetAccumulatedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::SequencePlayerLibrary_eventGetAccumulatedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execGetAccumulatedTime)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USequencePlayerLibrary::GetAccumulatedTime(Z_Param_Out_SequencePlayer);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function GetAccumulatedTime

// Begin Class USequencePlayerLibrary Function GetLoopAnimation
struct Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics
{
	struct SequencePlayerLibrary_eventGetLoopAnimation_Parms
	{
		FSequencePlayerReference SequencePlayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Get the looping state of the sequence player */" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Get the looping state of the sequence player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetLoopAnimation_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
void Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SequencePlayerLibrary_eventGetLoopAnimation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SequencePlayerLibrary_eventGetLoopAnimation_Parms), &Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "GetLoopAnimation", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::SequencePlayerLibrary_eventGetLoopAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::SequencePlayerLibrary_eventGetLoopAnimation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execGetLoopAnimation)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USequencePlayerLibrary::GetLoopAnimation(Z_Param_Out_SequencePlayer);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function GetLoopAnimation

// Begin Class USequencePlayerLibrary Function GetPlayRate
struct Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics
{
	struct SequencePlayerLibrary_eventGetPlayRate_Parms
	{
		FSequencePlayerReference SequencePlayer;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Get the play rate of the sequence player */" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Get the play rate of the sequence player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetPlayRate_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "GetPlayRate", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::SequencePlayerLibrary_eventGetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::SequencePlayerLibrary_eventGetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execGetPlayRate)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USequencePlayerLibrary::GetPlayRate(Z_Param_Out_SequencePlayer);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function GetPlayRate

// Begin Class USequencePlayerLibrary Function GetSequence
struct Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics
{
	struct SequencePlayerLibrary_eventGetSequence_Parms
	{
		FSequencePlayerReference SequencePlayer;
		UAnimSequenceBase* SequenceBase;
		FSequencePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Get the current sequence of the sequence player - DEPRECATED, please use pure version */" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Get the current sequence of the sequence player - DEPRECATED, please use pure version" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetSequence_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::NewProp_SequenceBase = { "SequenceBase", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetSequence_Parms, SequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetSequence_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(0, nullptr) }; // 4172011247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::NewProp_SequenceBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "GetSequence", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::SequencePlayerLibrary_eventGetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::SequencePlayerLibrary_eventGetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_GetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_GetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execGetSequence)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_GET_OBJECT_REF(UAnimSequenceBase,Z_Param_Out_SequenceBase);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencePlayerReference*)Z_Param__Result=USequencePlayerLibrary::GetSequence(Z_Param_Out_SequencePlayer,P_ARG_GC_BARRIER(Z_Param_Out_SequenceBase));
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function GetSequence

// Begin Class USequencePlayerLibrary Function GetSequencePure
struct Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics
{
	struct SequencePlayerLibrary_eventGetSequencePure_Parms
	{
		FSequencePlayerReference SequencePlayer;
		UAnimSequenceBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Get the current sequence of the sequence player */" },
		{ "DisplayName", "Get Sequence" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Get the current sequence of the sequence player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetSequencePure_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetSequencePure_Parms, ReturnValue), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "GetSequencePure", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::SequencePlayerLibrary_eventGetSequencePure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::SequencePlayerLibrary_eventGetSequencePure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execGetSequencePure)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimSequenceBase**)Z_Param__Result=USequencePlayerLibrary::GetSequencePure(Z_Param_Out_SequencePlayer);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function GetSequencePure

// Begin Class USequencePlayerLibrary Function GetStartPosition
struct Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics
{
	struct SequencePlayerLibrary_eventGetStartPosition_Parms
	{
		FSequencePlayerReference SequencePlayer;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Get the start position of the sequence player */" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Get the start position of the sequence player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetStartPosition_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventGetStartPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "GetStartPosition", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::SequencePlayerLibrary_eventGetStartPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::SequencePlayerLibrary_eventGetStartPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execGetStartPosition)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USequencePlayerLibrary::GetStartPosition(Z_Param_Out_SequencePlayer);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function GetStartPosition

// Begin Class USequencePlayerLibrary Function SetAccumulatedTime
struct Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics
{
	struct SequencePlayerLibrary_eventSetAccumulatedTime_Parms
	{
		FSequencePlayerReference SequencePlayer;
		float Time;
		FSequencePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Set the current accumulated time of the sequence player */" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Set the current accumulated time of the sequence player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetAccumulatedTime_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetAccumulatedTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetAccumulatedTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(0, nullptr) }; // 4172011247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "SetAccumulatedTime", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::SequencePlayerLibrary_eventSetAccumulatedTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::SequencePlayerLibrary_eventSetAccumulatedTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execSetAccumulatedTime)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencePlayerReference*)Z_Param__Result=USequencePlayerLibrary::SetAccumulatedTime(Z_Param_Out_SequencePlayer,Z_Param_Time);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function SetAccumulatedTime

// Begin Class USequencePlayerLibrary Function SetPlayRate
struct Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics
{
	struct SequencePlayerLibrary_eventSetPlayRate_Parms
	{
		FSequencePlayerReference SequencePlayer;
		float PlayRate;
		FSequencePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Set the play rate of the sequence player */" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Set the play rate of the sequence player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetPlayRate_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetPlayRate_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetPlayRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(0, nullptr) }; // 4172011247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "SetPlayRate", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::SequencePlayerLibrary_eventSetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::SequencePlayerLibrary_eventSetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execSetPlayRate)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencePlayerReference*)Z_Param__Result=USequencePlayerLibrary::SetPlayRate(Z_Param_Out_SequencePlayer,Z_Param_PlayRate);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function SetPlayRate

// Begin Class USequencePlayerLibrary Function SetSequence
struct Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics
{
	struct SequencePlayerLibrary_eventSetSequence_Parms
	{
		FSequencePlayerReference SequencePlayer;
		UAnimSequenceBase* Sequence;
		FSequencePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Set the current sequence of the sequence player */" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Set the current sequence of the sequence player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetSequence_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetSequence_Parms, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetSequence_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(0, nullptr) }; // 4172011247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "SetSequence", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::SequencePlayerLibrary_eventSetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::SequencePlayerLibrary_eventSetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_SetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_SetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execSetSequence)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencePlayerReference*)Z_Param__Result=USequencePlayerLibrary::SetSequence(Z_Param_Out_SequencePlayer,Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function SetSequence

// Begin Class USequencePlayerLibrary Function SetSequenceWithInertialBlending
struct Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics
{
	struct SequencePlayerLibrary_eventSetSequenceWithInertialBlending_Parms
	{
		FAnimUpdateContext UpdateContext;
		FSequencePlayerReference SequencePlayer;
		UAnimSequenceBase* Sequence;
		float BlendTime;
		FSequencePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** Set the current sequence of the sequence player with an inertial blend time */" },
		{ "CPP_Default_BlendTime", "0.200000" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Set the current sequence of the sequence player with an inertial blend time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetSequenceWithInertialBlending_Parms, UpdateContext), Z_Construct_UScriptStruct_FAnimUpdateContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 3943655895
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetSequenceWithInertialBlending_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetSequenceWithInertialBlending_Parms, Sequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetSequenceWithInertialBlending_Parms, BlendTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetSequenceWithInertialBlending_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(0, nullptr) }; // 4172011247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "SetSequenceWithInertialBlending", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::SequencePlayerLibrary_eventSetSequenceWithInertialBlending_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::SequencePlayerLibrary_eventSetSequenceWithInertialBlending_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execSetSequenceWithInertialBlending)
{
	P_GET_STRUCT_REF(FAnimUpdateContext,Z_Param_Out_UpdateContext);
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_GET_OBJECT(UAnimSequenceBase,Z_Param_Sequence);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencePlayerReference*)Z_Param__Result=USequencePlayerLibrary::SetSequenceWithInertialBlending(Z_Param_Out_UpdateContext,Z_Param_Out_SequencePlayer,Z_Param_Sequence,Z_Param_BlendTime);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function SetSequenceWithInertialBlending

// Begin Class USequencePlayerLibrary Function SetStartPosition
struct Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics
{
	struct SequencePlayerLibrary_eventSetStartPosition_Parms
	{
		FSequencePlayerReference SequencePlayer;
		float StartPosition;
		FSequencePlayerReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation|Sequences" },
		{ "Comment", "/** \n\x09 * Set the start position of the sequence player. \n\x09 * If this is called from On Become Relevant or On Initial Update then it should be accompanied by a call to\n\x09 * SetAccumulatedTime to achieve the desired effect of resetting the play time of a sequence player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Set the start position of the sequence player.\nIf this is called from On Become Relevant or On Initial Update then it should be accompanied by a call to\nSetAccumulatedTime to achieve the desired effect of resetting the play time of a sequence player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetStartPosition_Parms, SequencePlayer), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) }; // 4172011247
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetStartPosition_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencePlayerLibrary_eventSetStartPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencePlayerReference, METADATA_PARAMS(0, nullptr) }; // 4172011247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencePlayerLibrary, nullptr, "SetStartPosition", nullptr, nullptr, Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::SequencePlayerLibrary_eventSetStartPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::SequencePlayerLibrary_eventSetStartPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencePlayerLibrary::execSetStartPosition)
{
	P_GET_STRUCT_REF(FSequencePlayerReference,Z_Param_Out_SequencePlayer);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencePlayerReference*)Z_Param__Result=USequencePlayerLibrary::SetStartPosition(Z_Param_Out_SequencePlayer,Z_Param_StartPosition);
	P_NATIVE_END;
}
// End Class USequencePlayerLibrary Function SetStartPosition

// Begin Class USequencePlayerLibrary
void USequencePlayerLibrary::StaticRegisterNativesUSequencePlayerLibrary()
{
	UClass* Class = USequencePlayerLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputePlayRateFromDuration", &USequencePlayerLibrary::execComputePlayRateFromDuration },
		{ "ConvertToSequencePlayer", &USequencePlayerLibrary::execConvertToSequencePlayer },
		{ "ConvertToSequencePlayerPure", &USequencePlayerLibrary::execConvertToSequencePlayerPure },
		{ "GetAccumulatedTime", &USequencePlayerLibrary::execGetAccumulatedTime },
		{ "GetLoopAnimation", &USequencePlayerLibrary::execGetLoopAnimation },
		{ "GetPlayRate", &USequencePlayerLibrary::execGetPlayRate },
		{ "GetSequence", &USequencePlayerLibrary::execGetSequence },
		{ "GetSequencePure", &USequencePlayerLibrary::execGetSequencePure },
		{ "GetStartPosition", &USequencePlayerLibrary::execGetStartPosition },
		{ "SetAccumulatedTime", &USequencePlayerLibrary::execSetAccumulatedTime },
		{ "SetPlayRate", &USequencePlayerLibrary::execSetPlayRate },
		{ "SetSequence", &USequencePlayerLibrary::execSetSequence },
		{ "SetSequenceWithInertialBlending", &USequencePlayerLibrary::execSetSequenceWithInertialBlending },
		{ "SetStartPosition", &USequencePlayerLibrary::execSetStartPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencePlayerLibrary);
UClass* Z_Construct_UClass_USequencePlayerLibrary_NoRegister()
{
	return USequencePlayerLibrary::StaticClass();
}
struct Z_Construct_UClass_USequencePlayerLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Exposes operations to be performed on a sequence player anim node\n// Note: Experimental and subject to change!\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "SequencePlayerLibrary.h" },
		{ "ModuleRelativePath", "Public/SequencePlayerLibrary.h" },
		{ "ToolTip", "Exposes operations to be performed on a sequence player anim node\nNote: Experimental and subject to change!" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USequencePlayerLibrary_ComputePlayRateFromDuration, "ComputePlayRateFromDuration" }, // 3218478396
		{ &Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayer, "ConvertToSequencePlayer" }, // 1852170759
		{ &Z_Construct_UFunction_USequencePlayerLibrary_ConvertToSequencePlayerPure, "ConvertToSequencePlayerPure" }, // 267965191
		{ &Z_Construct_UFunction_USequencePlayerLibrary_GetAccumulatedTime, "GetAccumulatedTime" }, // 1024163063
		{ &Z_Construct_UFunction_USequencePlayerLibrary_GetLoopAnimation, "GetLoopAnimation" }, // 903989716
		{ &Z_Construct_UFunction_USequencePlayerLibrary_GetPlayRate, "GetPlayRate" }, // 338865063
		{ &Z_Construct_UFunction_USequencePlayerLibrary_GetSequence, "GetSequence" }, // 1445335281
		{ &Z_Construct_UFunction_USequencePlayerLibrary_GetSequencePure, "GetSequencePure" }, // 3161197583
		{ &Z_Construct_UFunction_USequencePlayerLibrary_GetStartPosition, "GetStartPosition" }, // 707508901
		{ &Z_Construct_UFunction_USequencePlayerLibrary_SetAccumulatedTime, "SetAccumulatedTime" }, // 3616725017
		{ &Z_Construct_UFunction_USequencePlayerLibrary_SetPlayRate, "SetPlayRate" }, // 1801179862
		{ &Z_Construct_UFunction_USequencePlayerLibrary_SetSequence, "SetSequence" }, // 1254921704
		{ &Z_Construct_UFunction_USequencePlayerLibrary_SetSequenceWithInertialBlending, "SetSequenceWithInertialBlending" }, // 249524994
		{ &Z_Construct_UFunction_USequencePlayerLibrary_SetStartPosition, "SetStartPosition" }, // 3566569746
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencePlayerLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USequencePlayerLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequencePlayerLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencePlayerLibrary_Statics::ClassParams = {
	&USequencePlayerLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequencePlayerLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USequencePlayerLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequencePlayerLibrary()
{
	if (!Z_Registration_Info_UClass_USequencePlayerLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencePlayerLibrary.OuterSingleton, Z_Construct_UClass_USequencePlayerLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequencePlayerLibrary.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<USequencePlayerLibrary>()
{
	return USequencePlayerLibrary::StaticClass();
}
USequencePlayerLibrary::USequencePlayerLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequencePlayerLibrary);
USequencePlayerLibrary::~USequencePlayerLibrary() {}
// End Class USequencePlayerLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSequencePlayerReference::StaticStruct, Z_Construct_UScriptStruct_FSequencePlayerReference_Statics::NewStructOps, TEXT("SequencePlayerReference"), &Z_Registration_Info_UScriptStruct_SequencePlayerReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencePlayerReference), 4172011247U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequencePlayerLibrary, USequencePlayerLibrary::StaticClass, TEXT("USequencePlayerLibrary"), &Z_Registration_Info_UClass_USequencePlayerLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencePlayerLibrary), 2729610307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_693647851(TEXT("/Script/AnimGraphRuntime"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_SequencePlayerLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
