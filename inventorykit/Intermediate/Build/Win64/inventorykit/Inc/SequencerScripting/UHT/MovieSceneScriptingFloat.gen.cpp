// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingFloat.h"
#include "SequencerScripting/Public/SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingFloat() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingActualFloatKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatChannel();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieSceneScriptingFloatKey Function GetArriveTangent
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics
{
	struct MovieSceneScriptingFloatKey_eventGetArriveTangent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key\n\x09* @return Arrival Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key\n@return Arrival Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetArriveTangent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetArriveTangent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::MovieSceneScriptingFloatKey_eventGetArriveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::MovieSceneScriptingFloatKey_eventGetArriveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetArriveTangent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetArriveTangent();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function GetArriveTangent

// Begin Class UMovieSceneScriptingFloatKey Function GetArriveTangentWeight
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics
{
	struct MovieSceneScriptingFloatKey_eventGetArriveTangentWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n\x09* @return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n@return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetArriveTangentWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetArriveTangentWeight", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventGetArriveTangentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventGetArriveTangentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetArriveTangentWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetArriveTangentWeight();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function GetArriveTangentWeight

// Begin Class UMovieSceneScriptingFloatKey Function GetInterpolationMode
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics
{
	struct MovieSceneScriptingFloatKey_eventGetInterpolationMode_Parms
	{
		TEnumAsByte<ERichCurveInterpMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the interpolation mode for this key from the owning channel.\n\x09* @return\x09Interpolation mode this key uses to interpolate between this key and the next.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets the interpolation mode for this key from the owning channel.\n@return       Interpolation mode this key uses to interpolate between this key and the next." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetInterpolationMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(0, nullptr) }; // 294528593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetInterpolationMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::MovieSceneScriptingFloatKey_eventGetInterpolationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::MovieSceneScriptingFloatKey_eventGetInterpolationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetInterpolationMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveInterpMode>*)Z_Param__Result=P_THIS->GetInterpolationMode();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function GetInterpolationMode

// Begin Class UMovieSceneScriptingFloatKey Function GetLeaveTangent
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics
{
	struct MovieSceneScriptingFloatKey_eventGetLeaveTangent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key\n\x09* @return Leaving Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key\n@return Leaving Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetLeaveTangent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetLeaveTangent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::MovieSceneScriptingFloatKey_eventGetLeaveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::MovieSceneScriptingFloatKey_eventGetLeaveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetLeaveTangent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLeaveTangent();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function GetLeaveTangent

// Begin Class UMovieSceneScriptingFloatKey Function GetLeaveTangentWeight
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics
{
	struct MovieSceneScriptingFloatKey_eventGetLeaveTangentWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n\x09* @return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n@return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetLeaveTangentWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetLeaveTangentWeight", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventGetLeaveTangentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventGetLeaveTangentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetLeaveTangentWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLeaveTangentWeight();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function GetLeaveTangentWeight

// Begin Class UMovieSceneScriptingFloatKey Function GetTangentMode
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics
{
	struct MovieSceneScriptingFloatKey_eventGetTangentMode_Parms
	{
		TEnumAsByte<ERichCurveTangentMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the tangent mode for this key from the owning channel.\n\x09* @return\x09Tangent mode that this key is using specifying which tangent values are respected when evaluating.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets the tangent mode for this key from the owning channel.\n@return       Tangent mode that this key is using specifying which tangent values are respected when evaluating." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetTangentMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(0, nullptr) }; // 1321210525
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetTangentMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::MovieSceneScriptingFloatKey_eventGetTangentMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::MovieSceneScriptingFloatKey_eventGetTangentMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetTangentMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveTangentMode>*)Z_Param__Result=P_THIS->GetTangentMode();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function GetTangentMode

// Begin Class UMovieSceneScriptingFloatKey Function GetTangentWeightMode
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics
{
	struct MovieSceneScriptingFloatKey_eventGetTangentWeightMode_Parms
	{
		TEnumAsByte<ERichCurveTangentWeightMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key\n\x09* @return Tangent Weight Mode. See ERichCurveTangentWeightMode for more detail on what each mode does.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key\n@return Tangent Weight Mode. See ERichCurveTangentWeightMode for more detail on what each mode does." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetTangentWeightMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(0, nullptr) }; // 256318866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetTangentWeightMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::MovieSceneScriptingFloatKey_eventGetTangentWeightMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::MovieSceneScriptingFloatKey_eventGetTangentWeightMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetTangentWeightMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveTangentWeightMode>*)Z_Param__Result=P_THIS->GetTangentWeightMode();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function GetTangentWeightMode

// Begin Class UMovieSceneScriptingFloatKey Function GetTime
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics
{
	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct MovieSceneScriptingFloatKey_eventGetTime_Parms
	{
		EMovieSceneTimeUnit TimeUnit;
		FFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the time for this key from the owning channel.\n\x09* @param TimeUnit\x09Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n\x09* @return\x09\x09\x09The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Get Time (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets the time for this key from the owning channel.\n@param TimeUnit       Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n@return                       The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetTime_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::MovieSceneScriptingFloatKey_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::MovieSceneScriptingFloatKey_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetTime)
{
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameTime*)Z_Param__Result=P_THIS->GetTime(EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function GetTime

// Begin Class UMovieSceneScriptingFloatKey Function GetValue
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics
{
	struct MovieSceneScriptingFloatKey_eventGetValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the value for this key from the owning channel.\n\x09* @return\x09The float value this key represents.\n\x09*/" },
		{ "DisplayName", "Get Value (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets the value for this key from the owning channel.\n@return       The float value this key represents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::MovieSceneScriptingFloatKey_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::MovieSceneScriptingFloatKey_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function GetValue

// Begin Class UMovieSceneScriptingFloatKey Function SetArriveTangent
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics
{
	struct MovieSceneScriptingFloatKey_eventSetArriveTangent_Parms
	{
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.\n\x09* @param InNewValue\x09Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.\n@param InNewValue     Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetArriveTangent_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetArriveTangent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::MovieSceneScriptingFloatKey_eventSetArriveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::MovieSceneScriptingFloatKey_eventSetArriveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetArriveTangent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArriveTangent(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function SetArriveTangent

// Begin Class UMovieSceneScriptingFloatKey Function SetArriveTangentWeight
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics
{
	struct MovieSceneScriptingFloatKey_eventSetArriveTangentWeight_Parms
	{
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n\x09* @param InNewValue\x09Specifies the new arriving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n@param InNewValue     Specifies the new arriving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetArriveTangentWeight_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetArriveTangentWeight", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventSetArriveTangentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventSetArriveTangentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetArriveTangentWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArriveTangentWeight(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function SetArriveTangentWeight

// Begin Class UMovieSceneScriptingFloatKey Function SetInterpolationMode
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics
{
	struct MovieSceneScriptingFloatKey_eventSetInterpolationMode_Parms
	{
		TEnumAsByte<ERichCurveInterpMode> InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the interpolation mode for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09Interpolation mode this key should use to interpolate between this key and the next.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the interpolation mode for this key, reflecting it in the owning channel.\n@param InNewValue     Interpolation mode this key should use to interpolate between this key and the next." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetInterpolationMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(0, nullptr) }; // 294528593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetInterpolationMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::MovieSceneScriptingFloatKey_eventSetInterpolationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::MovieSceneScriptingFloatKey_eventSetInterpolationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetInterpolationMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInterpolationMode(ERichCurveInterpMode(Z_Param_InNewValue));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function SetInterpolationMode

// Begin Class UMovieSceneScriptingFloatKey Function SetLeaveTangent
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics
{
	struct MovieSceneScriptingFloatKey_eventSetLeaveTangent_Parms
	{
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.\n\x09* @param InNewValue\x09Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.\n@param InNewValue     Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetLeaveTangent_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetLeaveTangent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::MovieSceneScriptingFloatKey_eventSetLeaveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::MovieSceneScriptingFloatKey_eventSetLeaveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetLeaveTangent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLeaveTangent(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function SetLeaveTangent

// Begin Class UMovieSceneScriptingFloatKey Function SetLeaveTangentWeight
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics
{
	struct MovieSceneScriptingFloatKey_eventSetLeaveTangentWeight_Parms
	{
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n\x09* @param InNewValue\x09Specifies the new leaving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n@param InNewValue     Specifies the new leaving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetLeaveTangentWeight_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetLeaveTangentWeight", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventSetLeaveTangentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::MovieSceneScriptingFloatKey_eventSetLeaveTangentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetLeaveTangentWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLeaveTangentWeight(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function SetLeaveTangentWeight

// Begin Class UMovieSceneScriptingFloatKey Function SetTangentMode
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics
{
	struct MovieSceneScriptingFloatKey_eventSetTangentMode_Parms
	{
		TEnumAsByte<ERichCurveTangentMode> InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the tangent mode for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09Tangent mode that this key should use to specify which tangent values are respected when evaluating. See ERichCurveTangentMode for more details.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the tangent mode for this key, reflecting it in the owning channel.\n@param InNewValue     Tangent mode that this key should use to specify which tangent values are respected when evaluating. See ERichCurveTangentMode for more details." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTangentMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(0, nullptr) }; // 1321210525
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetTangentMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::MovieSceneScriptingFloatKey_eventSetTangentMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::MovieSceneScriptingFloatKey_eventSetTangentMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetTangentMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTangentMode(ERichCurveTangentMode(Z_Param_InNewValue));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function SetTangentMode

// Begin Class UMovieSceneScriptingFloatKey Function SetTangentWeightMode
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics
{
	struct MovieSceneScriptingFloatKey_eventSetTangentWeightMode_Parms
	{
		TEnumAsByte<ERichCurveTangentWeightMode> InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.\n\x09* @param InNewValue\x09Specifies which tangent weights should be respected when evaluating the key. \n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.\n@param InNewValue     Specifies which tangent weights should be respected when evaluating the key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTangentWeightMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(0, nullptr) }; // 256318866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetTangentWeightMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::MovieSceneScriptingFloatKey_eventSetTangentWeightMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::MovieSceneScriptingFloatKey_eventSetTangentWeightMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetTangentWeightMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTangentWeightMode(ERichCurveTangentWeightMode(Z_Param_InNewValue));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function SetTangentWeightMode

// Begin Class UMovieSceneScriptingFloatKey Function SetTime
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics
{
	struct MovieSceneScriptingFloatKey_eventSetTime_Parms
	{
		FFrameNumber NewFrameNumber;
		float SubFrame;
		EMovieSceneTimeUnit TimeUnit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n\x09* @param NewFrameNumber\x09What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n\x09* @param SubFrame\x09\x09If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n\x09* @param TimeUnit\x09\x09Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?\n\x09*/" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Set Time (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.\n@param NewFrameNumber What frame should this key be moved to? This should be in the time unit specified by TimeUnit.\n@param SubFrame               If using Display Rate time, what is the sub-frame this should go to? Clamped [0-1), and ignored with when TimeUnit is set to Tick Resolution.\n@param TimeUnit               Should the NewFrameNumber be interpreted as Display Rate frames or in Tick Resolution?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFrameNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewFrameNumber;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_NewFrameNumber = { "NewFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTime_Parms, NewFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFrameNumber_MetaData), NewProp_NewFrameNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTime_Parms, SubFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetTime_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_NewFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_SubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::NewProp_TimeUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::MovieSceneScriptingFloatKey_eventSetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::MovieSceneScriptingFloatKey_eventSetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetTime)
{
	P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_NewFrameNumber);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTime(Z_Param_Out_NewFrameNumber,Z_Param_SubFrame,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function SetTime

// Begin Class UMovieSceneScriptingFloatKey Function SetValue
struct Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics
{
	struct MovieSceneScriptingFloatKey_eventSetValue_Parms
	{
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the value for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09The new float value for this key.\n\x09*/" },
		{ "DisplayName", "Set Value (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the value for this key, reflecting it in the owning channel.\n@param InNewValue     The new float value for this key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatKey_eventSetValue_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::MovieSceneScriptingFloatKey_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::MovieSceneScriptingFloatKey_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatKey::execSetValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatKey Function SetValue

// Begin Class UMovieSceneScriptingFloatKey
void UMovieSceneScriptingFloatKey::StaticRegisterNativesUMovieSceneScriptingFloatKey()
{
	UClass* Class = UMovieSceneScriptingFloatKey::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetArriveTangent", &UMovieSceneScriptingFloatKey::execGetArriveTangent },
		{ "GetArriveTangentWeight", &UMovieSceneScriptingFloatKey::execGetArriveTangentWeight },
		{ "GetInterpolationMode", &UMovieSceneScriptingFloatKey::execGetInterpolationMode },
		{ "GetLeaveTangent", &UMovieSceneScriptingFloatKey::execGetLeaveTangent },
		{ "GetLeaveTangentWeight", &UMovieSceneScriptingFloatKey::execGetLeaveTangentWeight },
		{ "GetTangentMode", &UMovieSceneScriptingFloatKey::execGetTangentMode },
		{ "GetTangentWeightMode", &UMovieSceneScriptingFloatKey::execGetTangentWeightMode },
		{ "GetTime", &UMovieSceneScriptingFloatKey::execGetTime },
		{ "GetValue", &UMovieSceneScriptingFloatKey::execGetValue },
		{ "SetArriveTangent", &UMovieSceneScriptingFloatKey::execSetArriveTangent },
		{ "SetArriveTangentWeight", &UMovieSceneScriptingFloatKey::execSetArriveTangentWeight },
		{ "SetInterpolationMode", &UMovieSceneScriptingFloatKey::execSetInterpolationMode },
		{ "SetLeaveTangent", &UMovieSceneScriptingFloatKey::execSetLeaveTangent },
		{ "SetLeaveTangentWeight", &UMovieSceneScriptingFloatKey::execSetLeaveTangentWeight },
		{ "SetTangentMode", &UMovieSceneScriptingFloatKey::execSetTangentMode },
		{ "SetTangentWeightMode", &UMovieSceneScriptingFloatKey::execSetTangentWeightMode },
		{ "SetTime", &UMovieSceneScriptingFloatKey::execSetTime },
		{ "SetValue", &UMovieSceneScriptingFloatKey::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingFloatKey);
UClass* Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister()
{
	return UMovieSceneScriptingFloatKey::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Exposes a Sequencer float type key to Python/Blueprints.\n* Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.\n*/" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Exposes a Sequencer float type key to Python/Blueprints.\nStores a reference to the data so changes to this class are forwarded onto the underlying data structures." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangent, "GetArriveTangent" }, // 1870582952
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetArriveTangentWeight, "GetArriveTangentWeight" }, // 458900884
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetInterpolationMode, "GetInterpolationMode" }, // 1096127418
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangent, "GetLeaveTangent" }, // 357782905
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetLeaveTangentWeight, "GetLeaveTangentWeight" }, // 3553253922
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentMode, "GetTangentMode" }, // 2081702621
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTangentWeightMode, "GetTangentWeightMode" }, // 434012693
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetTime, "GetTime" }, // 1313466347
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_GetValue, "GetValue" }, // 1100192157
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangent, "SetArriveTangent" }, // 1139268652
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetArriveTangentWeight, "SetArriveTangentWeight" }, // 2166431140
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetInterpolationMode, "SetInterpolationMode" }, // 1342252167
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangent, "SetLeaveTangent" }, // 710902536
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetLeaveTangentWeight, "SetLeaveTangentWeight" }, // 1040719418
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentMode, "SetTangentMode" }, // 3404647961
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTangentWeightMode, "SetTangentWeightMode" }, // 4288985928
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetTime, "SetTime" }, // 2089247813
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatKey_SetValue, "SetValue" }, // 1706891090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingFloatKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingKey,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::ClassParams = {
	&UMovieSceneScriptingFloatKey::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingFloatKey()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingFloatKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingFloatKey>()
{
	return UMovieSceneScriptingFloatKey::StaticClass();
}
UMovieSceneScriptingFloatKey::UMovieSceneScriptingFloatKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingFloatKey);
UMovieSceneScriptingFloatKey::~UMovieSceneScriptingFloatKey() {}
// End Class UMovieSceneScriptingFloatKey

// Begin Class UMovieSceneScriptingActualFloatKey
void UMovieSceneScriptingActualFloatKey::StaticRegisterNativesUMovieSceneScriptingActualFloatKey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingActualFloatKey);
UClass* Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_NoRegister()
{
	return UMovieSceneScriptingActualFloatKey::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingActualFloatKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::ClassParams = {
	&UMovieSceneScriptingActualFloatKey::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingActualFloatKey()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingActualFloatKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingActualFloatKey>()
{
	return UMovieSceneScriptingActualFloatKey::StaticClass();
}
UMovieSceneScriptingActualFloatKey::UMovieSceneScriptingActualFloatKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingActualFloatKey);
UMovieSceneScriptingActualFloatKey::~UMovieSceneScriptingActualFloatKey() {}
// End Class UMovieSceneScriptingActualFloatKey

// Begin Class UMovieSceneScriptingDoubleAsFloatKey
void UMovieSceneScriptingDoubleAsFloatKey::StaticRegisterNativesUMovieSceneScriptingDoubleAsFloatKey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingDoubleAsFloatKey);
UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_NoRegister()
{
	return UMovieSceneScriptingDoubleAsFloatKey::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingDoubleAsFloatKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingFloatKey,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::ClassParams = {
	&UMovieSceneScriptingDoubleAsFloatKey::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingDoubleAsFloatKey>()
{
	return UMovieSceneScriptingDoubleAsFloatKey::StaticClass();
}
UMovieSceneScriptingDoubleAsFloatKey::UMovieSceneScriptingDoubleAsFloatKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingDoubleAsFloatKey);
UMovieSceneScriptingDoubleAsFloatKey::~UMovieSceneScriptingDoubleAsFloatKey() {}
// End Class UMovieSceneScriptingDoubleAsFloatKey

// Begin Class UMovieSceneScriptingFloatChannel Function AddKey
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics
{
	struct MovieSceneScriptingFloatChannel_eventAddKey_Parms
	{
		FFrameNumber InTime;
		float NewValue;
		float SubFrame;
		EMovieSceneTimeUnit TimeUnit;
		EMovieSceneKeyInterpolation InInterpolation;
		UMovieSceneScriptingFloatKey* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Add a key to this channel. This initializes a new key and returns a reference to it.\n\x09* @param\x09InTime\x09\x09\x09The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n\x09* @param\x09NewValue\x09\x09The value that this key should be created with.\n\x09* @param\x09SubFrame\x09\x09Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n\x09* @param\x09TimeUnit \x09\x09Is the specified InTime in Display Rate frames or Tick Resolution.\n\x09* @param\x09InInterpolation\x09Interpolation method the key should use.\n\x09* @return\x09The key that was created with the specified values at the specified time.\n\x09*/" },
		{ "CPP_Default_InInterpolation", "Auto" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Add Key (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Add a key to this channel. This initializes a new key and returns a reference to it.\n@param        InTime                  The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n@param        NewValue                The value that this key should be created with.\n@param        SubFrame                Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n@param        TimeUnit                Is the specified InTime in Display Rate frames or Tick Resolution.\n@param        InInterpolation Interpolation method the key should use.\n@return       The key that was created with the specified values at the specified time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InInterpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InInterpolation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTime_MetaData), NewProp_InTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, SubFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InInterpolation = { "InInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, InInterpolation), Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation, METADATA_PARAMS(0, nullptr) }; // 2572474140
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventAddKey_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneScriptingFloatKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_SubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InInterpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_InInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "AddKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::MovieSceneScriptingFloatChannel_eventAddKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::MovieSceneScriptingFloatChannel_eventAddKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execAddKey)
{
	P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_GET_ENUM(EMovieSceneKeyInterpolation,Z_Param_InInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneScriptingFloatKey**)Z_Param__Result=P_THIS->AddKey(Z_Param_Out_InTime,Z_Param_NewValue,Z_Param_SubFrame,EMovieSceneTimeUnit(Z_Param_TimeUnit),EMovieSceneKeyInterpolation(Z_Param_InInterpolation));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function AddKey

// Begin Class UMovieSceneScriptingFloatChannel Function ComputeEffectiveRange
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics
{
	struct MovieSceneScriptingFloatChannel_eventComputeEffectiveRange_Parms
	{
		FSequencerScriptingRange ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Compute the effective range of this channel, for example, the extents of its key times\n\x09*\n\x09* @return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution\n\x09*/" },
		{ "DisplayName", "Compute Effective Range (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Compute the effective range of this channel, for example, the extents of its key times\n\n@return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventComputeEffectiveRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "ComputeEffectiveRange", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::MovieSceneScriptingFloatChannel_eventComputeEffectiveRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::MovieSceneScriptingFloatChannel_eventComputeEffectiveRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execComputeEffectiveRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencerScriptingRange*)Z_Param__Result=P_THIS->ComputeEffectiveRange();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function ComputeEffectiveRange

// Begin Class UMovieSceneScriptingFloatChannel Function EvaluateKeys
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms
	{
		FSequencerScriptingRange Range;
		FFrameRate FrameRate;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets baked keys in this channel.\n\x09* @return\x09""An array of float's contained by this channel.\n\x09*\x09\x09\x09Returns baked keys in the specified range.\n\x09*/" },
		{ "DisplayName", "Evaluate Keys (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets baked keys in this channel.\n@return       An array of float's contained by this channel.\n                      Returns baked keys in the specified range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "EvaluateKeys", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::MovieSceneScriptingFloatChannel_eventEvaluateKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execEvaluateKeys)
{
	P_GET_STRUCT(FSequencerScriptingRange,Z_Param_Range);
	P_GET_STRUCT(FFrameRate,Z_Param_FrameRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->EvaluateKeys(Z_Param_Range,Z_Param_FrameRate);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function EvaluateKeys

// Begin Class UMovieSceneScriptingFloatChannel Function GetDefault
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics
{
	struct MovieSceneScriptingFloatChannel_eventGetDefault_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Get this channel's default value that will be used when no keys are present. Only a valid\n\x09* value when HasDefault() returns true.\n\x09*/" },
		{ "DisplayName", "Get Default (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Get this channel's default value that will be used when no keys are present. Only a valid\nvalue when HasDefault() returns true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetDefault_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::MovieSceneScriptingFloatChannel_eventGetDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::MovieSceneScriptingFloatChannel_eventGetDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function GetDefault

// Begin Class UMovieSceneScriptingFloatChannel Function GetKeys
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics
{
	struct MovieSceneScriptingFloatChannel_eventGetKeys_Parms
	{
		TArray<UMovieSceneScriptingKey*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets all of the keys in this channel.\n\x09* @return\x09""An array of UMovieSceneScriptingFloatKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.\n\x09*/" },
		{ "DisplayName", "Get Keys (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets all of the keys in this channel.\n@return       An array of UMovieSceneScriptingFloatKey's contained by this channel.\n                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetKeys", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::MovieSceneScriptingFloatChannel_eventGetKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::MovieSceneScriptingFloatChannel_eventGetKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetKeys)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeys();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function GetKeys

// Begin Class UMovieSceneScriptingFloatChannel Function GetKeysByIndex
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics
{
	struct MovieSceneScriptingFloatChannel_eventGetKeysByIndex_Parms
	{
		TArray<int32> Indices;
		TArray<UMovieSceneScriptingKey*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the keys in this channel specified by the specific index\n\x09* @Indices  The indices from which to get the keys from\n\x09* @return\x09""An array of UMovieSceneScriptingKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys specified by the indices, even if out of range.\n\x09*/" },
		{ "DisplayName", "Get Keys By Index (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Gets the keys in this channel specified by the specific index\n@Indices  The indices from which to get the keys from\n@return       An array of UMovieSceneScriptingKey's contained by this channel.\n                      Returns all keys specified by the indices, even if out of range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetKeysByIndex_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetKeysByIndex_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetKeysByIndex", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::MovieSceneScriptingFloatChannel_eventGetKeysByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::MovieSceneScriptingFloatChannel_eventGetKeysByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetKeysByIndex)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Indices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeysByIndex(Z_Param_Out_Indices);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function GetKeysByIndex

// Begin Class UMovieSceneScriptingFloatChannel Function GetNumKeys
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics
{
	struct MovieSceneScriptingFloatChannel_eventGetNumKeys_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Returns number of keys in this channel.\n\x09*/" },
		{ "DisplayName", "Get Num Keys (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Returns number of keys in this channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetNumKeys_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetNumKeys", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::MovieSceneScriptingFloatChannel_eventGetNumKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::MovieSceneScriptingFloatChannel_eventGetNumKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetNumKeys)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumKeys();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function GetNumKeys

// Begin Class UMovieSceneScriptingFloatChannel Function GetPostInfinityExtrapolation
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics
{
	struct MovieSceneScriptingFloatChannel_eventGetPostInfinityExtrapolation_Parms
	{
		TEnumAsByte<ERichCurveExtrapolation> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Gets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "@return Gets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetPostInfinityExtrapolation_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(0, nullptr) }; // 1973521097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetPostInfinityExtrapolation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventGetPostInfinityExtrapolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventGetPostInfinityExtrapolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetPostInfinityExtrapolation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveExtrapolation>*)Z_Param__Result=P_THIS->GetPostInfinityExtrapolation();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function GetPostInfinityExtrapolation

// Begin Class UMovieSceneScriptingFloatChannel Function GetPreInfinityExtrapolation
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics
{
	struct MovieSceneScriptingFloatChannel_eventGetPreInfinityExtrapolation_Parms
	{
		TEnumAsByte<ERichCurveExtrapolation> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Gets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "@return Gets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventGetPreInfinityExtrapolation_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(0, nullptr) }; // 1973521097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "GetPreInfinityExtrapolation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventGetPreInfinityExtrapolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventGetPreInfinityExtrapolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execGetPreInfinityExtrapolation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveExtrapolation>*)Z_Param__Result=P_THIS->GetPreInfinityExtrapolation();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function GetPreInfinityExtrapolation

// Begin Class UMovieSceneScriptingFloatChannel Function HasDefault
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics
{
	struct MovieSceneScriptingFloatChannel_eventHasDefault_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Does this channel have a default value set?\n\x09*/" },
		{ "DisplayName", "Has Default (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "@return Does this channel have a default value set?" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneScriptingFloatChannel_eventHasDefault_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneScriptingFloatChannel_eventHasDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "HasDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::MovieSceneScriptingFloatChannel_eventHasDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::MovieSceneScriptingFloatChannel_eventHasDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execHasDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function HasDefault

// Begin Class UMovieSceneScriptingFloatChannel Function RemoveDefault
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Remove this channel's default value causing the channel to have no effect where no keys are present\n\x09*/" },
		{ "DisplayName", "Remove Default (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Remove this channel's default value causing the channel to have no effect where no keys are present" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "RemoveDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execRemoveDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function RemoveDefault

// Begin Class UMovieSceneScriptingFloatChannel Function RemoveKey
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics
{
	struct MovieSceneScriptingFloatChannel_eventRemoveKey_Parms
	{
		UMovieSceneScriptingKey* Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.\n\x09*/" },
		{ "DisplayName", "Remove Key (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventRemoveKey_Parms, Key), Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "RemoveKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::MovieSceneScriptingFloatChannel_eventRemoveKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::MovieSceneScriptingFloatChannel_eventRemoveKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execRemoveKey)
{
	P_GET_OBJECT(UMovieSceneScriptingKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveKey(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function RemoveKey

// Begin Class UMovieSceneScriptingFloatChannel Function SetDefault
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics
{
	struct MovieSceneScriptingFloatChannel_eventSetDefault_Parms
	{
		float InDefaultValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Set this channel's default value that should be used when no keys are present.\n\x09* Sets bHasDefaultValue to true automatically.\n\x09*/" },
		{ "DisplayName", "Set Default (Float)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Set this channel's default value that should be used when no keys are present.\nSets bHasDefaultValue to true automatically." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventSetDefault_Parms, InDefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::NewProp_InDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "SetDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::MovieSceneScriptingFloatChannel_eventSetDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::MovieSceneScriptingFloatChannel_eventSetDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execSetDefault)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefault(Z_Param_InDefaultValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function SetDefault

// Begin Class UMovieSceneScriptingFloatChannel Function SetPostInfinityExtrapolation
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics
{
	struct MovieSceneScriptingFloatChannel_eventSetPostInfinityExtrapolation_Parms
	{
		TEnumAsByte<ERichCurveExtrapolation> InExtrapolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09* @param InExtrapolation The new extrapolation mode this key should use for evaluating after this key.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n@param InExtrapolation The new extrapolation mode this key should use for evaluating after this key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExtrapolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::NewProp_InExtrapolation = { "InExtrapolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventSetPostInfinityExtrapolation_Parms, InExtrapolation), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(0, nullptr) }; // 1973521097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::NewProp_InExtrapolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "SetPostInfinityExtrapolation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventSetPostInfinityExtrapolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventSetPostInfinityExtrapolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execSetPostInfinityExtrapolation)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InExtrapolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPostInfinityExtrapolation(ERichCurveExtrapolation(Z_Param_InExtrapolation));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function SetPostInfinityExtrapolation

// Begin Class UMovieSceneScriptingFloatChannel Function SetPreInfinityExtrapolation
struct Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics
{
	struct MovieSceneScriptingFloatChannel_eventSetPreInfinityExtrapolation_Parms
	{
		TEnumAsByte<ERichCurveExtrapolation> InExtrapolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09* @param InExtrapolation The new extrapolation mode this key should use for evaluating before this key.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ToolTip", "Sets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n@param InExtrapolation The new extrapolation mode this key should use for evaluating before this key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExtrapolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::NewProp_InExtrapolation = { "InExtrapolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingFloatChannel_eventSetPreInfinityExtrapolation_Parms, InExtrapolation), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(0, nullptr) }; // 1973521097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::NewProp_InExtrapolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingFloatChannel, nullptr, "SetPreInfinityExtrapolation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventSetPreInfinityExtrapolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::MovieSceneScriptingFloatChannel_eventSetPreInfinityExtrapolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingFloatChannel::execSetPreInfinityExtrapolation)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InExtrapolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPreInfinityExtrapolation(ERichCurveExtrapolation(Z_Param_InExtrapolation));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingFloatChannel Function SetPreInfinityExtrapolation

// Begin Class UMovieSceneScriptingFloatChannel
void UMovieSceneScriptingFloatChannel::StaticRegisterNativesUMovieSceneScriptingFloatChannel()
{
	UClass* Class = UMovieSceneScriptingFloatChannel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddKey", &UMovieSceneScriptingFloatChannel::execAddKey },
		{ "ComputeEffectiveRange", &UMovieSceneScriptingFloatChannel::execComputeEffectiveRange },
		{ "EvaluateKeys", &UMovieSceneScriptingFloatChannel::execEvaluateKeys },
		{ "GetDefault", &UMovieSceneScriptingFloatChannel::execGetDefault },
		{ "GetKeys", &UMovieSceneScriptingFloatChannel::execGetKeys },
		{ "GetKeysByIndex", &UMovieSceneScriptingFloatChannel::execGetKeysByIndex },
		{ "GetNumKeys", &UMovieSceneScriptingFloatChannel::execGetNumKeys },
		{ "GetPostInfinityExtrapolation", &UMovieSceneScriptingFloatChannel::execGetPostInfinityExtrapolation },
		{ "GetPreInfinityExtrapolation", &UMovieSceneScriptingFloatChannel::execGetPreInfinityExtrapolation },
		{ "HasDefault", &UMovieSceneScriptingFloatChannel::execHasDefault },
		{ "RemoveDefault", &UMovieSceneScriptingFloatChannel::execRemoveDefault },
		{ "RemoveKey", &UMovieSceneScriptingFloatChannel::execRemoveKey },
		{ "SetDefault", &UMovieSceneScriptingFloatChannel::execSetDefault },
		{ "SetPostInfinityExtrapolation", &UMovieSceneScriptingFloatChannel::execSetPostInfinityExtrapolation },
		{ "SetPreInfinityExtrapolation", &UMovieSceneScriptingFloatChannel::execSetPreInfinityExtrapolation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingFloatChannel);
UClass* Z_Construct_UClass_UMovieSceneScriptingFloatChannel_NoRegister()
{
	return UMovieSceneScriptingFloatChannel::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingFloat.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingFloat.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_AddKey, "AddKey" }, // 2177273819
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_ComputeEffectiveRange, "ComputeEffectiveRange" }, // 3546083392
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_EvaluateKeys, "EvaluateKeys" }, // 2774216571
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetDefault, "GetDefault" }, // 1228958047
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeys, "GetKeys" }, // 4052284489
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetKeysByIndex, "GetKeysByIndex" }, // 771822759
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetNumKeys, "GetNumKeys" }, // 1882808468
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation, "GetPostInfinityExtrapolation" }, // 2433913059
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation, "GetPreInfinityExtrapolation" }, // 3225683302
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_HasDefault, "HasDefault" }, // 1338039980
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveDefault, "RemoveDefault" }, // 4110180725
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_RemoveKey, "RemoveKey" }, // 513915200
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetDefault, "SetDefault" }, // 2506676642
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation, "SetPostInfinityExtrapolation" }, // 727834069
		{ &Z_Construct_UFunction_UMovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation, "SetPreInfinityExtrapolation" }, // 482507730
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingFloatChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::ClassParams = {
	&UMovieSceneScriptingFloatChannel::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingFloatChannel()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingFloatChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingFloatChannel>()
{
	return UMovieSceneScriptingFloatChannel::StaticClass();
}
UMovieSceneScriptingFloatChannel::UMovieSceneScriptingFloatChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingFloatChannel);
UMovieSceneScriptingFloatChannel::~UMovieSceneScriptingFloatChannel() {}
// End Class UMovieSceneScriptingFloatChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingFloatKey, UMovieSceneScriptingFloatKey::StaticClass, TEXT("UMovieSceneScriptingFloatKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingFloatKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingFloatKey), 776118838U) },
		{ Z_Construct_UClass_UMovieSceneScriptingActualFloatKey, UMovieSceneScriptingActualFloatKey::StaticClass, TEXT("UMovieSceneScriptingActualFloatKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingActualFloatKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingActualFloatKey), 1260179511U) },
		{ Z_Construct_UClass_UMovieSceneScriptingDoubleAsFloatKey, UMovieSceneScriptingDoubleAsFloatKey::StaticClass, TEXT("UMovieSceneScriptingDoubleAsFloatKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleAsFloatKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingDoubleAsFloatKey), 617448027U) },
		{ Z_Construct_UClass_UMovieSceneScriptingFloatChannel, UMovieSceneScriptingFloatChannel::StaticClass, TEXT("UMovieSceneScriptingFloatChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingFloatChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingFloatChannel), 3510554959U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_2398547049(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingFloat_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
