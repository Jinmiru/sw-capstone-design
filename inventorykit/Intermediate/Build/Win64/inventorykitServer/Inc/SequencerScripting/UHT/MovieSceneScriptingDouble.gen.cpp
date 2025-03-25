// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Private/KeysAndChannels/MovieSceneScriptingDouble.h"
#include "SequencerScripting/Public/SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingDouble() {}

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
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleChannel();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleKey_NoRegister();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieSceneScriptingDoubleKey Function GetArriveTangent
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics
{
	struct MovieSceneScriptingDoubleKey_eventGetArriveTangent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key\n\x09* @return Arrival Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key\n@return Arrival Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetArriveTangent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetArriveTangent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::MovieSceneScriptingDoubleKey_eventGetArriveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::MovieSceneScriptingDoubleKey_eventGetArriveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetArriveTangent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetArriveTangent();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function GetArriveTangent

// Begin Class UMovieSceneScriptingDoubleKey Function GetArriveTangentWeight
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics
{
	struct MovieSceneScriptingDoubleKey_eventGetArriveTangentWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n\x09* @return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n@return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetArriveTangentWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetArriveTangentWeight", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventGetArriveTangentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventGetArriveTangentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetArriveTangentWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetArriveTangentWeight();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function GetArriveTangentWeight

// Begin Class UMovieSceneScriptingDoubleKey Function GetInterpolationMode
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics
{
	struct MovieSceneScriptingDoubleKey_eventGetInterpolationMode_Parms
	{
		TEnumAsByte<ERichCurveInterpMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the interpolation mode for this key from the owning channel.\n\x09* @return\x09Interpolation mode this key uses to interpolate between this key and the next.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets the interpolation mode for this key from the owning channel.\n@return       Interpolation mode this key uses to interpolate between this key and the next." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetInterpolationMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(0, nullptr) }; // 294528593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetInterpolationMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::MovieSceneScriptingDoubleKey_eventGetInterpolationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::MovieSceneScriptingDoubleKey_eventGetInterpolationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetInterpolationMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveInterpMode>*)Z_Param__Result=P_THIS->GetInterpolationMode();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function GetInterpolationMode

// Begin Class UMovieSceneScriptingDoubleKey Function GetLeaveTangent
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics
{
	struct MovieSceneScriptingDoubleKey_eventGetLeaveTangent_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key\n\x09* @return Leaving Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key\n@return Leaving Tangent value. Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetLeaveTangent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetLeaveTangent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::MovieSceneScriptingDoubleKey_eventGetLeaveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::MovieSceneScriptingDoubleKey_eventGetLeaveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetLeaveTangent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLeaveTangent();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function GetLeaveTangent

// Begin Class UMovieSceneScriptingDoubleKey Function GetLeaveTangentWeight
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics
{
	struct MovieSceneScriptingDoubleKey_eventGetLeaveTangentWeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n\x09* @return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n@return Tangent Weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetLeaveTangentWeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetLeaveTangentWeight", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventGetLeaveTangentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventGetLeaveTangentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetLeaveTangentWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLeaveTangentWeight();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function GetLeaveTangentWeight

// Begin Class UMovieSceneScriptingDoubleKey Function GetTangentMode
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics
{
	struct MovieSceneScriptingDoubleKey_eventGetTangentMode_Parms
	{
		TEnumAsByte<ERichCurveTangentMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the tangent mode for this key from the owning channel.\n\x09* @return\x09Tangent mode that this key is using specifying which tangent values are respected when evaluating.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets the tangent mode for this key from the owning channel.\n@return       Tangent mode that this key is using specifying which tangent values are respected when evaluating." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetTangentMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(0, nullptr) }; // 1321210525
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetTangentMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::MovieSceneScriptingDoubleKey_eventGetTangentMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::MovieSceneScriptingDoubleKey_eventGetTangentMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetTangentMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveTangentMode>*)Z_Param__Result=P_THIS->GetTangentMode();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function GetTangentMode

// Begin Class UMovieSceneScriptingDoubleKey Function GetTangentWeightMode
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics
{
	struct MovieSceneScriptingDoubleKey_eventGetTangentWeightMode_Parms
	{
		TEnumAsByte<ERichCurveTangentWeightMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key\n\x09* @return Tangent Weight Mode. See ERichCurveTangentWeightMode for more detail on what each mode does.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key\n@return Tangent Weight Mode. See ERichCurveTangentWeightMode for more detail on what each mode does." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetTangentWeightMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(0, nullptr) }; // 256318866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetTangentWeightMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::MovieSceneScriptingDoubleKey_eventGetTangentWeightMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::MovieSceneScriptingDoubleKey_eventGetTangentWeightMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetTangentWeightMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveTangentWeightMode>*)Z_Param__Result=P_THIS->GetTangentWeightMode();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function GetTangentWeightMode

// Begin Class UMovieSceneScriptingDoubleKey Function GetTime
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics
{
	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct MovieSceneScriptingDoubleKey_eventGetTime_Parms
	{
		EMovieSceneTimeUnit TimeUnit;
		FFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the time for this key from the owning channel.\n\x09* @param TimeUnit\x09Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n\x09* @return\x09\x09\x09The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution.\n\x09*/" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Get Time (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets the time for this key from the owning channel.\n@param TimeUnit       Should the time be returned in Display Rate frames (possibly with a sub-frame value) or in Tick Resolution with no sub-frame values?\n@return                       The time of this key which combines both the frame number and the sub-frame it is on. Sub-frame will be zero if you request Tick Resolution." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetTime_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::MovieSceneScriptingDoubleKey_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::MovieSceneScriptingDoubleKey_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetTime)
{
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameTime*)Z_Param__Result=P_THIS->GetTime(EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function GetTime

// Begin Class UMovieSceneScriptingDoubleKey Function GetValue
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics
{
	struct MovieSceneScriptingDoubleKey_eventGetValue_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the value for this key from the owning channel.\n\x09* @return\x09The double value this key represents.\n\x09*/" },
		{ "DisplayName", "Get Value (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets the value for this key from the owning channel.\n@return       The double value this key represents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::MovieSceneScriptingDoubleKey_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::MovieSceneScriptingDoubleKey_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function GetValue

// Begin Class UMovieSceneScriptingDoubleKey Function SetArriveTangent
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics
{
	struct MovieSceneScriptingDoubleKey_eventSetArriveTangent_Parms
	{
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.\n\x09* @param InNewValue\x09Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the arriving tangent at this key.\n@param InNewValue     Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetArriveTangent_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetArriveTangent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::MovieSceneScriptingDoubleKey_eventSetArriveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::MovieSceneScriptingDoubleKey_eventSetArriveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetArriveTangent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArriveTangent(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function SetArriveTangent

// Begin Class UMovieSceneScriptingDoubleKey Function SetArriveTangentWeight
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics
{
	struct MovieSceneScriptingDoubleKey_eventSetArriveTangentWeight_Parms
	{
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n\x09* @param InNewValue\x09Specifies the new arriving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the arriving tangent on the left side.\n@param InNewValue     Specifies the new arriving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetArriveTangentWeight_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetArriveTangentWeight", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventSetArriveTangentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventSetArriveTangentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetArriveTangentWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetArriveTangentWeight(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function SetArriveTangentWeight

// Begin Class UMovieSceneScriptingDoubleKey Function SetInterpolationMode
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics
{
	struct MovieSceneScriptingDoubleKey_eventSetInterpolationMode_Parms
	{
		TEnumAsByte<ERichCurveInterpMode> InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the interpolation mode for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09Interpolation mode this key should use to interpolate between this key and the next.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the interpolation mode for this key, reflecting it in the owning channel.\n@param InNewValue     Interpolation mode this key should use to interpolate between this key and the next." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetInterpolationMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(0, nullptr) }; // 294528593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetInterpolationMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::MovieSceneScriptingDoubleKey_eventSetInterpolationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::MovieSceneScriptingDoubleKey_eventSetInterpolationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetInterpolationMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInterpolationMode(ERichCurveInterpMode(Z_Param_InNewValue));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function SetInterpolationMode

// Begin Class UMovieSceneScriptingDoubleKey Function SetLeaveTangent
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics
{
	struct MovieSceneScriptingDoubleKey_eventSetLeaveTangent_Parms
	{
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.\n\x09* @param InNewValue\x09Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the leaving tangent at this key.\n@param InNewValue     Represents the geometric tangents in the form of \"tan(y/x)\" where y is the key's value and x is the seconds (both relative to key)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetLeaveTangent_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetLeaveTangent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::MovieSceneScriptingDoubleKey_eventSetLeaveTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::MovieSceneScriptingDoubleKey_eventSetLeaveTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetLeaveTangent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLeaveTangent(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function SetLeaveTangent

// Begin Class UMovieSceneScriptingDoubleKey Function SetLeaveTangentWeight
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics
{
	struct MovieSceneScriptingDoubleKey_eventSetLeaveTangentWeight_Parms
	{
		float InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n\x09* @param InNewValue\x09Specifies the new leaving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Tangent Weight Mode is RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the leaving tangent on the right side.\n@param InNewValue     Specifies the new leaving tangent weight. Represents the length of the hypotenuse in the form of \"sqrt(x*x+y*y)\" using the same definitions for x and y as tangents." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetLeaveTangentWeight_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetLeaveTangentWeight", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventSetLeaveTangentWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::MovieSceneScriptingDoubleKey_eventSetLeaveTangentWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetLeaveTangentWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLeaveTangentWeight(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function SetLeaveTangentWeight

// Begin Class UMovieSceneScriptingDoubleKey Function SetTangentMode
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics
{
	struct MovieSceneScriptingDoubleKey_eventSetTangentMode_Parms
	{
		TEnumAsByte<ERichCurveTangentMode> InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the tangent mode for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09Tangent mode that this key should use to specify which tangent values are respected when evaluating. See ERichCurveTangentMode for more details.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the tangent mode for this key, reflecting it in the owning channel.\n@param InNewValue     Tangent mode that this key should use to specify which tangent values are respected when evaluating. See ERichCurveTangentMode for more details." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTangentMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(0, nullptr) }; // 1321210525
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetTangentMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::MovieSceneScriptingDoubleKey_eventSetTangentMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::MovieSceneScriptingDoubleKey_eventSetTangentMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetTangentMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTangentMode(ERichCurveTangentMode(Z_Param_InNewValue));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function SetTangentMode

// Begin Class UMovieSceneScriptingDoubleKey Function SetTangentWeightMode
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics
{
	struct MovieSceneScriptingDoubleKey_eventSetTangentWeightMode_Parms
	{
		TEnumAsByte<ERichCurveTangentWeightMode> InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.\n\x09* @param InNewValue\x09Specifies which tangent weights should be respected when evaluating the key. \n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "If Interpolation Mode is RCIM_Cubic, the tangent weight mode at this key.\n@param InNewValue     Specifies which tangent weights should be respected when evaluating the key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTangentWeightMode_Parms, InNewValue), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(0, nullptr) }; // 256318866
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetTangentWeightMode", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::MovieSceneScriptingDoubleKey_eventSetTangentWeightMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::MovieSceneScriptingDoubleKey_eventSetTangentWeightMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetTangentWeightMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTangentWeightMode(ERichCurveTangentWeightMode(Z_Param_InNewValue));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function SetTangentWeightMode

// Begin Class UMovieSceneScriptingDoubleKey Function SetTime
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics
{
	struct MovieSceneScriptingDoubleKey_eventSetTime_Parms
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
		{ "DisplayName", "Set Time (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_NewFrameNumber = { "NewFrameNumber", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTime_Parms, NewFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFrameNumber_MetaData), NewProp_NewFrameNumber_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTime_Parms, SubFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetTime_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_NewFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_SubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::NewProp_TimeUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::MovieSceneScriptingDoubleKey_eventSetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::MovieSceneScriptingDoubleKey_eventSetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetTime)
{
	P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_NewFrameNumber);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTime(Z_Param_Out_NewFrameNumber,Z_Param_SubFrame,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function SetTime

// Begin Class UMovieSceneScriptingDoubleKey Function SetValue
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics
{
	struct MovieSceneScriptingDoubleKey_eventSetValue_Parms
	{
		double InNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the value for this key, reflecting it in the owning channel.\n\x09* @param InNewValue\x09The new double value for this key.\n\x09*/" },
		{ "DisplayName", "Set Value (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the value for this key, reflecting it in the owning channel.\n@param InNewValue     The new double value for this key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::NewProp_InNewValue = { "InNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleKey_eventSetValue_Parms, InNewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::NewProp_InNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleKey, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::MovieSceneScriptingDoubleKey_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::MovieSceneScriptingDoubleKey_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleKey::execSetValue)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_InNewValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleKey Function SetValue

// Begin Class UMovieSceneScriptingDoubleKey
void UMovieSceneScriptingDoubleKey::StaticRegisterNativesUMovieSceneScriptingDoubleKey()
{
	UClass* Class = UMovieSceneScriptingDoubleKey::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetArriveTangent", &UMovieSceneScriptingDoubleKey::execGetArriveTangent },
		{ "GetArriveTangentWeight", &UMovieSceneScriptingDoubleKey::execGetArriveTangentWeight },
		{ "GetInterpolationMode", &UMovieSceneScriptingDoubleKey::execGetInterpolationMode },
		{ "GetLeaveTangent", &UMovieSceneScriptingDoubleKey::execGetLeaveTangent },
		{ "GetLeaveTangentWeight", &UMovieSceneScriptingDoubleKey::execGetLeaveTangentWeight },
		{ "GetTangentMode", &UMovieSceneScriptingDoubleKey::execGetTangentMode },
		{ "GetTangentWeightMode", &UMovieSceneScriptingDoubleKey::execGetTangentWeightMode },
		{ "GetTime", &UMovieSceneScriptingDoubleKey::execGetTime },
		{ "GetValue", &UMovieSceneScriptingDoubleKey::execGetValue },
		{ "SetArriveTangent", &UMovieSceneScriptingDoubleKey::execSetArriveTangent },
		{ "SetArriveTangentWeight", &UMovieSceneScriptingDoubleKey::execSetArriveTangentWeight },
		{ "SetInterpolationMode", &UMovieSceneScriptingDoubleKey::execSetInterpolationMode },
		{ "SetLeaveTangent", &UMovieSceneScriptingDoubleKey::execSetLeaveTangent },
		{ "SetLeaveTangentWeight", &UMovieSceneScriptingDoubleKey::execSetLeaveTangentWeight },
		{ "SetTangentMode", &UMovieSceneScriptingDoubleKey::execSetTangentMode },
		{ "SetTangentWeightMode", &UMovieSceneScriptingDoubleKey::execSetTangentWeightMode },
		{ "SetTime", &UMovieSceneScriptingDoubleKey::execSetTime },
		{ "SetValue", &UMovieSceneScriptingDoubleKey::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingDoubleKey);
UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleKey_NoRegister()
{
	return UMovieSceneScriptingDoubleKey::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Exposes a Sequencer double type key to Python/Blueprints.\n* Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.\n*/" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Exposes a Sequencer double type key to Python/Blueprints.\nStores a reference to the data so changes to this class are forwarded onto the underlying data structures." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangent, "GetArriveTangent" }, // 1429679908
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetArriveTangentWeight, "GetArriveTangentWeight" }, // 1066896773
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetInterpolationMode, "GetInterpolationMode" }, // 3739461708
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangent, "GetLeaveTangent" }, // 1612107264
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetLeaveTangentWeight, "GetLeaveTangentWeight" }, // 610733024
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentMode, "GetTangentMode" }, // 2855764282
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTangentWeightMode, "GetTangentWeightMode" }, // 284736201
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetTime, "GetTime" }, // 1549142009
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_GetValue, "GetValue" }, // 3497443214
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangent, "SetArriveTangent" }, // 1878691013
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetArriveTangentWeight, "SetArriveTangentWeight" }, // 38631616
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetInterpolationMode, "SetInterpolationMode" }, // 4245578178
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangent, "SetLeaveTangent" }, // 2317304331
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetLeaveTangentWeight, "SetLeaveTangentWeight" }, // 3969667777
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentMode, "SetTangentMode" }, // 1133576835
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTangentWeightMode, "SetTangentWeightMode" }, // 2783650207
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetTime, "SetTime" }, // 778488509
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleKey_SetValue, "SetValue" }, // 153849225
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingDoubleKey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingKey,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::ClassParams = {
	&UMovieSceneScriptingDoubleKey::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleKey()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingDoubleKey>()
{
	return UMovieSceneScriptingDoubleKey::StaticClass();
}
UMovieSceneScriptingDoubleKey::UMovieSceneScriptingDoubleKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingDoubleKey);
UMovieSceneScriptingDoubleKey::~UMovieSceneScriptingDoubleKey() {}
// End Class UMovieSceneScriptingDoubleKey

// Begin Class UMovieSceneScriptingDoubleChannel Function AddKey
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventAddKey_Parms
	{
		FFrameNumber InTime;
		double NewValue;
		float SubFrame;
		EMovieSceneTimeUnit TimeUnit;
		EMovieSceneKeyInterpolation InInterpolation;
		UMovieSceneScriptingDoubleKey* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Add a key to this channel. This initializes a new key and returns a reference to it.\n\x09* @param\x09InTime\x09\x09\x09The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n\x09* @param\x09NewValue\x09\x09The value that this key should be created with.\n\x09* @param\x09SubFrame\x09\x09Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n\x09* @param\x09TimeUnit \x09\x09Is the specified InTime in Display Rate frames or Tick Resolution.\n\x09* @param\x09InInterpolation\x09Interpolation method the key should use.\n\x09* @return\x09The key that was created with the specified values at the specified time.\n\x09*/" },
		{ "CPP_Default_InInterpolation", "Auto" },
		{ "CPP_Default_SubFrame", "0.000000" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Add Key (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Add a key to this channel. This initializes a new key and returns a reference to it.\n@param        InTime                  The frame this key should go on. Respects TimeUnit to determine if it is a display rate frame or a tick resolution frame.\n@param        NewValue                The value that this key should be created with.\n@param        SubFrame                Optional [0-1) clamped sub-frame to put this key on. Ignored if TimeUnit is set to Tick Resolution.\n@param        TimeUnit                Is the specified InTime in Display Rate frames or Tick Resolution.\n@param        InInterpolation Interpolation method the key should use.\n@return       The key that was created with the specified values at the specified time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InInterpolation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InInterpolation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTime_MetaData), NewProp_InTime_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_SubFrame = { "SubFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, SubFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InInterpolation = { "InInterpolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, InInterpolation), Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation, METADATA_PARAMS(0, nullptr) }; // 2572474140
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventAddKey_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneScriptingDoubleKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_SubFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InInterpolation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_InInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "AddKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::MovieSceneScriptingDoubleChannel_eventAddKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::MovieSceneScriptingDoubleChannel_eventAddKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execAddKey)
{
	P_GET_STRUCT_REF(FFrameNumber,Z_Param_Out_InTime);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_NewValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrame);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_GET_ENUM(EMovieSceneKeyInterpolation,Z_Param_InInterpolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneScriptingDoubleKey**)Z_Param__Result=P_THIS->AddKey(Z_Param_Out_InTime,Z_Param_NewValue,Z_Param_SubFrame,EMovieSceneTimeUnit(Z_Param_TimeUnit),EMovieSceneKeyInterpolation(Z_Param_InInterpolation));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function AddKey

// Begin Class UMovieSceneScriptingDoubleChannel Function ComputeEffectiveRange
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventComputeEffectiveRange_Parms
	{
		FSequencerScriptingRange ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Compute the effective range of this channel, for example, the extents of its key times\n\x09*\n\x09* @return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution\n\x09*/" },
		{ "DisplayName", "Compute Effective Range (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Compute the effective range of this channel, for example, the extents of its key times\n\n@return A range that represents the greatest range of times occupied by this channel, in the sequence's frame resolution" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventComputeEffectiveRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "ComputeEffectiveRange", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::MovieSceneScriptingDoubleChannel_eventComputeEffectiveRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::MovieSceneScriptingDoubleChannel_eventComputeEffectiveRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execComputeEffectiveRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencerScriptingRange*)Z_Param__Result=P_THIS->ComputeEffectiveRange();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function ComputeEffectiveRange

// Begin Class UMovieSceneScriptingDoubleChannel Function EvaluateKeys
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms
	{
		FSequencerScriptingRange Range;
		FFrameRate FrameRate;
		TArray<double> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets baked keys in this channel.\n\x09* @return\x09""An array of double's contained by this channel.\n\x09*\x09\x09\x09Returns baked keys in the specified range.\n\x09*/" },
		{ "DisplayName", "Evaluate Keys (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets baked keys in this channel.\n@return       An array of double's contained by this channel.\n                      Returns baked keys in the specified range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "EvaluateKeys", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::MovieSceneScriptingDoubleChannel_eventEvaluateKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execEvaluateKeys)
{
	P_GET_STRUCT(FSequencerScriptingRange,Z_Param_Range);
	P_GET_STRUCT(FFrameRate,Z_Param_FrameRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<double>*)Z_Param__Result=P_THIS->EvaluateKeys(Z_Param_Range,Z_Param_FrameRate);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function EvaluateKeys

// Begin Class UMovieSceneScriptingDoubleChannel Function GetDefault
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventGetDefault_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Get this channel's default value that will be used when no keys are present. Only a valid\n\x09* value when HasDefault() returns true.\n\x09*/" },
		{ "DisplayName", "Get Default (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Get this channel's default value that will be used when no keys are present. Only a valid\nvalue when HasDefault() returns true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetDefault_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::MovieSceneScriptingDoubleChannel_eventGetDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::MovieSceneScriptingDoubleChannel_eventGetDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function GetDefault

// Begin Class UMovieSceneScriptingDoubleChannel Function GetKeys
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventGetKeys_Parms
	{
		TArray<UMovieSceneScriptingKey*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets all of the keys in this channel.\n\x09* @return\x09""An array of UMovieSceneScriptingDoubleKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.\n\x09*/" },
		{ "DisplayName", "Get Keys (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Gets all of the keys in this channel.\n@return       An array of UMovieSceneScriptingDoubleKey's contained by this channel.\n                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetKeys", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::MovieSceneScriptingDoubleChannel_eventGetKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::MovieSceneScriptingDoubleChannel_eventGetKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetKeys)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeys();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function GetKeys

// Begin Class UMovieSceneScriptingDoubleChannel Function GetKeysByIndex
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventGetKeysByIndex_Parms
	{
		TArray<int32> Indices;
		TArray<UMovieSceneScriptingKey*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Gets the keys in this channel specified by the specific index\n\x09* @Indices  The indices from which to get the keys from\n\x09* @return\x09""An array of UMovieSceneScriptingKey's contained by this channel.\n\x09*\x09\x09\x09Returns all keys specified by the indices, even if out of range.\n\x09*/" },
		{ "DisplayName", "Get Keys By Index (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetKeysByIndex_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetKeysByIndex_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetKeysByIndex", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::MovieSceneScriptingDoubleChannel_eventGetKeysByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::MovieSceneScriptingDoubleChannel_eventGetKeysByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetKeysByIndex)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_Indices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneScriptingKey*>*)Z_Param__Result=P_THIS->GetKeysByIndex(Z_Param_Out_Indices);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function GetKeysByIndex

// Begin Class UMovieSceneScriptingDoubleChannel Function GetNumKeys
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventGetNumKeys_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Returns number of keys in this channel.\n\x09*/" },
		{ "DisplayName", "Get Num Keys (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Returns number of keys in this channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetNumKeys_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetNumKeys", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::MovieSceneScriptingDoubleChannel_eventGetNumKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::MovieSceneScriptingDoubleChannel_eventGetNumKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetNumKeys)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumKeys();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function GetNumKeys

// Begin Class UMovieSceneScriptingDoubleChannel Function GetPostInfinityExtrapolation
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventGetPostInfinityExtrapolation_Parms
	{
		TEnumAsByte<ERichCurveExtrapolation> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Gets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "@return Gets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetPostInfinityExtrapolation_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(0, nullptr) }; // 1973521097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetPostInfinityExtrapolation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventGetPostInfinityExtrapolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventGetPostInfinityExtrapolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetPostInfinityExtrapolation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveExtrapolation>*)Z_Param__Result=P_THIS->GetPostInfinityExtrapolation();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function GetPostInfinityExtrapolation

// Begin Class UMovieSceneScriptingDoubleChannel Function GetPreInfinityExtrapolation
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventGetPreInfinityExtrapolation_Parms
	{
		TEnumAsByte<ERichCurveExtrapolation> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Gets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "@return Gets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventGetPreInfinityExtrapolation_Parms, ReturnValue), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(0, nullptr) }; // 1973521097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "GetPreInfinityExtrapolation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventGetPreInfinityExtrapolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventGetPreInfinityExtrapolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execGetPreInfinityExtrapolation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ERichCurveExtrapolation>*)Z_Param__Result=P_THIS->GetPreInfinityExtrapolation();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function GetPreInfinityExtrapolation

// Begin Class UMovieSceneScriptingDoubleChannel Function HasDefault
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventHasDefault_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* @return Does this channel have a default value set?\n\x09*/" },
		{ "DisplayName", "Has Default (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "@return Does this channel have a default value set?" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneScriptingDoubleChannel_eventHasDefault_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneScriptingDoubleChannel_eventHasDefault_Parms), &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "HasDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::MovieSceneScriptingDoubleChannel_eventHasDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::MovieSceneScriptingDoubleChannel_eventHasDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execHasDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function HasDefault

// Begin Class UMovieSceneScriptingDoubleChannel Function RemoveDefault
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Remove this channel's default value causing the channel to have no effect where no keys are present\n\x09*/" },
		{ "DisplayName", "Remove Default (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Remove this channel's default value causing the channel to have no effect where no keys are present" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "RemoveDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execRemoveDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDefault();
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function RemoveDefault

// Begin Class UMovieSceneScriptingDoubleChannel Function RemoveKey
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventRemoveKey_Parms
	{
		UMovieSceneScriptingKey* Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.\n\x09*/" },
		{ "DisplayName", "Remove Key (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventRemoveKey_Parms, Key), Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "RemoveKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::MovieSceneScriptingDoubleChannel_eventRemoveKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::MovieSceneScriptingDoubleChannel_eventRemoveKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execRemoveKey)
{
	P_GET_OBJECT(UMovieSceneScriptingKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveKey(Z_Param_Key);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function RemoveKey

// Begin Class UMovieSceneScriptingDoubleChannel Function SetDefault
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventSetDefault_Parms
	{
		double InDefaultValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Set this channel's default value that should be used when no keys are present.\n\x09* Sets bHasDefaultValue to true automatically.\n\x09*/" },
		{ "DisplayName", "Set Default (Double)" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Set this channel's default value that should be used when no keys are present.\nSets bHasDefaultValue to true automatically." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::NewProp_InDefaultValue = { "InDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventSetDefault_Parms, InDefaultValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::NewProp_InDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "SetDefault", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::MovieSceneScriptingDoubleChannel_eventSetDefault_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::MovieSceneScriptingDoubleChannel_eventSetDefault_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execSetDefault)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InDefaultValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefault(Z_Param_InDefaultValue);
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function SetDefault

// Begin Class UMovieSceneScriptingDoubleChannel Function SetPostInfinityExtrapolation
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventSetPostInfinityExtrapolation_Parms
	{
		TEnumAsByte<ERichCurveExtrapolation> InExtrapolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09* @param InExtrapolation The new extrapolation mode this key should use for evaluating after this key.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n@param InExtrapolation The new extrapolation mode this key should use for evaluating after this key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExtrapolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::NewProp_InExtrapolation = { "InExtrapolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventSetPostInfinityExtrapolation_Parms, InExtrapolation), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(0, nullptr) }; // 1973521097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::NewProp_InExtrapolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "SetPostInfinityExtrapolation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventSetPostInfinityExtrapolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventSetPostInfinityExtrapolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execSetPostInfinityExtrapolation)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InExtrapolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPostInfinityExtrapolation(ERichCurveExtrapolation(Z_Param_InExtrapolation));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function SetPostInfinityExtrapolation

// Begin Class UMovieSceneScriptingDoubleChannel Function SetPreInfinityExtrapolation
struct Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics
{
	struct MovieSceneScriptingDoubleChannel_eventSetPreInfinityExtrapolation_Parms
	{
		TEnumAsByte<ERichCurveExtrapolation> InExtrapolation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Keys" },
		{ "Comment", "/**\n\x09* Sets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n\x09* @param InExtrapolation The new extrapolation mode this key should use for evaluating before this key.\n\x09*/" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ToolTip", "Sets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.\n@param InExtrapolation The new extrapolation mode this key should use for evaluating before this key." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InExtrapolation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::NewProp_InExtrapolation = { "InExtrapolation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneScriptingDoubleChannel_eventSetPreInfinityExtrapolation_Parms, InExtrapolation), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(0, nullptr) }; // 1973521097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::NewProp_InExtrapolation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, nullptr, "SetPreInfinityExtrapolation", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventSetPreInfinityExtrapolation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::MovieSceneScriptingDoubleChannel_eventSetPreInfinityExtrapolation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneScriptingDoubleChannel::execSetPreInfinityExtrapolation)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InExtrapolation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPreInfinityExtrapolation(ERichCurveExtrapolation(Z_Param_InExtrapolation));
	P_NATIVE_END;
}
// End Class UMovieSceneScriptingDoubleChannel Function SetPreInfinityExtrapolation

// Begin Class UMovieSceneScriptingDoubleChannel
void UMovieSceneScriptingDoubleChannel::StaticRegisterNativesUMovieSceneScriptingDoubleChannel()
{
	UClass* Class = UMovieSceneScriptingDoubleChannel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddKey", &UMovieSceneScriptingDoubleChannel::execAddKey },
		{ "ComputeEffectiveRange", &UMovieSceneScriptingDoubleChannel::execComputeEffectiveRange },
		{ "EvaluateKeys", &UMovieSceneScriptingDoubleChannel::execEvaluateKeys },
		{ "GetDefault", &UMovieSceneScriptingDoubleChannel::execGetDefault },
		{ "GetKeys", &UMovieSceneScriptingDoubleChannel::execGetKeys },
		{ "GetKeysByIndex", &UMovieSceneScriptingDoubleChannel::execGetKeysByIndex },
		{ "GetNumKeys", &UMovieSceneScriptingDoubleChannel::execGetNumKeys },
		{ "GetPostInfinityExtrapolation", &UMovieSceneScriptingDoubleChannel::execGetPostInfinityExtrapolation },
		{ "GetPreInfinityExtrapolation", &UMovieSceneScriptingDoubleChannel::execGetPreInfinityExtrapolation },
		{ "HasDefault", &UMovieSceneScriptingDoubleChannel::execHasDefault },
		{ "RemoveDefault", &UMovieSceneScriptingDoubleChannel::execRemoveDefault },
		{ "RemoveKey", &UMovieSceneScriptingDoubleChannel::execRemoveKey },
		{ "SetDefault", &UMovieSceneScriptingDoubleChannel::execSetDefault },
		{ "SetPostInfinityExtrapolation", &UMovieSceneScriptingDoubleChannel::execSetPostInfinityExtrapolation },
		{ "SetPreInfinityExtrapolation", &UMovieSceneScriptingDoubleChannel::execSetPreInfinityExtrapolation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingDoubleChannel);
UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_NoRegister()
{
	return UMovieSceneScriptingDoubleChannel::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingDouble.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingDouble.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_AddKey, "AddKey" }, // 370378990
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_ComputeEffectiveRange, "ComputeEffectiveRange" }, // 3715222429
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_EvaluateKeys, "EvaluateKeys" }, // 2009709960
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetDefault, "GetDefault" }, // 3183245044
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeys, "GetKeys" }, // 789636933
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetKeysByIndex, "GetKeysByIndex" }, // 811080440
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetNumKeys, "GetNumKeys" }, // 2072156793
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation, "GetPostInfinityExtrapolation" }, // 3860072571
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation, "GetPreInfinityExtrapolation" }, // 3256457576
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_HasDefault, "HasDefault" }, // 397586424
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveDefault, "RemoveDefault" }, // 2478052809
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_RemoveKey, "RemoveKey" }, // 770659264
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetDefault, "SetDefault" }, // 825078394
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation, "SetPostInfinityExtrapolation" }, // 3474772491
		{ &Z_Construct_UFunction_UMovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation, "SetPreInfinityExtrapolation" }, // 2529229764
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingDoubleChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneScriptingChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::ClassParams = {
	&UMovieSceneScriptingDoubleChannel::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneScriptingDoubleChannel()
{
	if (!Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingDoubleChannel>()
{
	return UMovieSceneScriptingDoubleChannel::StaticClass();
}
UMovieSceneScriptingDoubleChannel::UMovieSceneScriptingDoubleChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingDoubleChannel);
UMovieSceneScriptingDoubleChannel::~UMovieSceneScriptingDoubleChannel() {}
// End Class UMovieSceneScriptingDoubleChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingDoubleKey, UMovieSceneScriptingDoubleKey::StaticClass, TEXT("UMovieSceneScriptingDoubleKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingDoubleKey), 2907357768U) },
		{ Z_Construct_UClass_UMovieSceneScriptingDoubleChannel, UMovieSceneScriptingDoubleChannel::StaticClass, TEXT("UMovieSceneScriptingDoubleChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingDoubleChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingDoubleChannel), 2827880344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_1361145368(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
