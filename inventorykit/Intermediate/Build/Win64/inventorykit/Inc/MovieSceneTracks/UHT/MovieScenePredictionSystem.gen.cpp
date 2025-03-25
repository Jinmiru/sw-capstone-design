// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Systems/MovieScenePredictionSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePredictionSystem() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_NoRegister();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePredictionSystem();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePredictionSystem_NoRegister();
MOVIESCENETRACKS_API UFunction* Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature();
MOVIESCENETRACKS_API UFunction* Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin Delegate FMovieSceneActorPredictionResult
struct Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics
{
	struct _Script_MovieSceneTracks_eventMovieSceneActorPredictionResult_Parms
	{
		FTransform PredictedTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "namespace UE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredictedTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::NewProp_PredictedTransform = { "PredictedTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MovieSceneTracks_eventMovieSceneActorPredictionResult_Parms, PredictedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::NewProp_PredictedTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks, nullptr, "MovieSceneActorPredictionResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::_Script_MovieSceneTracks_eventMovieSceneActorPredictionResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::_Script_MovieSceneTracks_eventMovieSceneActorPredictionResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMovieSceneActorPredictionResult_DelegateWrapper(const FMulticastScriptDelegate& MovieSceneActorPredictionResult, FTransform PredictedTransform)
{
	struct _Script_MovieSceneTracks_eventMovieSceneActorPredictionResult_Parms
	{
		FTransform PredictedTransform;
	};
	_Script_MovieSceneTracks_eventMovieSceneActorPredictionResult_Parms Parms;
	Parms.PredictedTransform=PredictedTransform;
	MovieSceneActorPredictionResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMovieSceneActorPredictionResult

// Begin Delegate FMovieSceneActorPredictionFailure
struct Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks, nullptr, "MovieSceneActorPredictionFailure__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMovieSceneActorPredictionFailure_DelegateWrapper(const FMulticastScriptDelegate& MovieSceneActorPredictionFailure)
{
	MovieSceneActorPredictionFailure.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FMovieSceneActorPredictionFailure

// Begin Class UMovieSceneAsyncAction_SequencePrediction Function PredictLocalTransformAtFrame
struct Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics
{
	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtFrame_Parms
	{
		UMovieSceneSequencePlayer* Player;
		USceneComponent* TargetComponent;
		FFrameTime FrameTime;
		UMovieSceneAsyncAction_SequencePrediction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "/**\n\x09 * Initiate an asynchronous prediction for the specified component's local transform at a specific time in a sequence\n\x09 * Changes in attachment between the sequence's current time, and the predicted time are not accounted for\n\x09 * Calling this function on a stopped sequence player is undefined.\n\x09 *\n\x09 * @param Player          An active, currently playing sequence player to use for predicting the transform\n\x09 * @param TargetComponent The component to predict a world transform for\n\x09 * @param FrameTime       The frame time to predict at in the sequence's display rate\n\x09 * @return An asynchronous prediction object that contains Result and Failure delegates\n\x09 */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "Initiate an asynchronous prediction for the specified component's local transform at a specific time in a sequence\nChanges in attachment between the sequence's current time, and the predicted time are not accounted for\nCalling this function on a stopped sequence player is undefined.\n\n@param Player          An active, currently playing sequence player to use for predicting the transform\n@param TargetComponent The component to predict a world transform for\n@param FrameTime       The frame time to predict at in the sequence's display rate\n@return An asynchronous prediction object that contains Result and Failure delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtFrame_Parms, Player), Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtFrame_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::NewProp_FrameTime = { "FrameTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtFrame_Parms, FrameTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtFrame_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::NewProp_FrameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction, nullptr, "PredictLocalTransformAtFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAsyncAction_SequencePrediction::execPredictLocalTransformAtFrame)
{
	P_GET_OBJECT(UMovieSceneSequencePlayer,Z_Param_Player);
	P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
	P_GET_STRUCT(FFrameTime,Z_Param_FrameTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneAsyncAction_SequencePrediction**)Z_Param__Result=UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtFrame(Z_Param_Player,Z_Param_TargetComponent,Z_Param_FrameTime);
	P_NATIVE_END;
}
// End Class UMovieSceneAsyncAction_SequencePrediction Function PredictLocalTransformAtFrame

// Begin Class UMovieSceneAsyncAction_SequencePrediction Function PredictLocalTransformAtTime
struct Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics
{
	struct MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtTime_Parms
	{
		UMovieSceneSequencePlayer* Player;
		USceneComponent* TargetComponent;
		float TimeInSeconds;
		UMovieSceneAsyncAction_SequencePrediction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "/**\n\x09 * Initiate an asynchronous prediction for the specified component's local transform at a specific time in a sequence\n\x09 * Changes in attachment between the sequence's current time, and the predicted time are not accounted for\n\x09 * Calling this function on a stopped sequence player is undefined.\n\x09 *\n\x09 * @param Player          An active, currently playing sequence player to use for predicting the transform\n\x09 * @param TargetComponent The component to predict a world transform for\n\x09 * @param TimeInSeconds   The time within the sequence to predict the transform at\n\x09 * @return An asynchronous prediction object that contains Result and Failure delegates\n\x09 */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "Initiate an asynchronous prediction for the specified component's local transform at a specific time in a sequence\nChanges in attachment between the sequence's current time, and the predicted time are not accounted for\nCalling this function on a stopped sequence player is undefined.\n\n@param Player          An active, currently playing sequence player to use for predicting the transform\n@param TargetComponent The component to predict a world transform for\n@param TimeInSeconds   The time within the sequence to predict the transform at\n@return An asynchronous prediction object that contains Result and Failure delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtTime_Parms, Player), Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtTime_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtTime_Parms, TimeInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtTime_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::NewProp_TimeInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction, nullptr, "PredictLocalTransformAtTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::MovieSceneAsyncAction_SequencePrediction_eventPredictLocalTransformAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAsyncAction_SequencePrediction::execPredictLocalTransformAtTime)
{
	P_GET_OBJECT(UMovieSceneSequencePlayer,Z_Param_Player);
	P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneAsyncAction_SequencePrediction**)Z_Param__Result=UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtTime(Z_Param_Player,Z_Param_TargetComponent,Z_Param_TimeInSeconds);
	P_NATIVE_END;
}
// End Class UMovieSceneAsyncAction_SequencePrediction Function PredictLocalTransformAtTime

// Begin Class UMovieSceneAsyncAction_SequencePrediction Function PredictWorldTransformAtFrame
struct Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics
{
	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtFrame_Parms
	{
		UMovieSceneSequencePlayer* Player;
		USceneComponent* TargetComponent;
		FFrameTime FrameTime;
		UMovieSceneAsyncAction_SequencePrediction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "/**\n\x09 * Initiate an asynchronous prediction for the specified component's world transform at a specific time in a sequence\n\x09 * Changes in attachment between the sequence's current time, and the predicted time are not accounted for\n\x09 * Calling this function on a stopped sequence player is undefined.\n\x09 *\n\x09 * @param Player          An active, currently playing sequence player to use for predicting the transform\n\x09 * @param TargetComponent The component to predict a world transform for\n\x09 * @param FrameTime       The frame time to predict at in the sequence's display rate\n\x09 * @return An asynchronous prediction object that contains Result and Failure delegates\n\x09 */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "Initiate an asynchronous prediction for the specified component's world transform at a specific time in a sequence\nChanges in attachment between the sequence's current time, and the predicted time are not accounted for\nCalling this function on a stopped sequence player is undefined.\n\n@param Player          An active, currently playing sequence player to use for predicting the transform\n@param TargetComponent The component to predict a world transform for\n@param FrameTime       The frame time to predict at in the sequence's display rate\n@return An asynchronous prediction object that contains Result and Failure delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtFrame_Parms, Player), Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtFrame_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::NewProp_FrameTime = { "FrameTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtFrame_Parms, FrameTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtFrame_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::NewProp_FrameTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction, nullptr, "PredictWorldTransformAtFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAsyncAction_SequencePrediction::execPredictWorldTransformAtFrame)
{
	P_GET_OBJECT(UMovieSceneSequencePlayer,Z_Param_Player);
	P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
	P_GET_STRUCT(FFrameTime,Z_Param_FrameTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneAsyncAction_SequencePrediction**)Z_Param__Result=UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtFrame(Z_Param_Player,Z_Param_TargetComponent,Z_Param_FrameTime);
	P_NATIVE_END;
}
// End Class UMovieSceneAsyncAction_SequencePrediction Function PredictWorldTransformAtFrame

// Begin Class UMovieSceneAsyncAction_SequencePrediction Function PredictWorldTransformAtTime
struct Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics
{
	struct MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtTime_Parms
	{
		UMovieSceneSequencePlayer* Player;
		USceneComponent* TargetComponent;
		float TimeInSeconds;
		UMovieSceneAsyncAction_SequencePrediction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "/**\n\x09 * Initiate an asynchronous prediction for the specified component's world transform at a specific time in a sequence\n\x09 * Changes in attachment between the sequence's current time, and the predicted time are not accounted for\n\x09 * Calling this function on a stopped sequence player is undefined.\n\x09 *\n\x09 * @param Player          An active, currently playing sequence player to use for predicting the transform\n\x09 * @param TargetComponent The component to predict a world transform for\n\x09 * @param TimeInSeconds   The time within the sequence to predict the transform at\n\x09 * @return An asynchronous prediction object that contains Result and Failure delegates\n\x09 */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "Initiate an asynchronous prediction for the specified component's world transform at a specific time in a sequence\nChanges in attachment between the sequence's current time, and the predicted time are not accounted for\nCalling this function on a stopped sequence player is undefined.\n\n@param Player          An active, currently playing sequence player to use for predicting the transform\n@param TargetComponent The component to predict a world transform for\n@param TimeInSeconds   The time within the sequence to predict the transform at\n@return An asynchronous prediction object that contains Result and Failure delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtTime_Parms, Player), Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtTime_Parms, TargetComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtTime_Parms, TimeInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtTime_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::NewProp_TimeInSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction, nullptr, "PredictWorldTransformAtTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::MovieSceneAsyncAction_SequencePrediction_eventPredictWorldTransformAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneAsyncAction_SequencePrediction::execPredictWorldTransformAtTime)
{
	P_GET_OBJECT(UMovieSceneSequencePlayer,Z_Param_Player);
	P_GET_OBJECT(USceneComponent,Z_Param_TargetComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneAsyncAction_SequencePrediction**)Z_Param__Result=UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtTime(Z_Param_Player,Z_Param_TargetComponent,Z_Param_TimeInSeconds);
	P_NATIVE_END;
}
// End Class UMovieSceneAsyncAction_SequencePrediction Function PredictWorldTransformAtTime

// Begin Class UMovieSceneAsyncAction_SequencePrediction
void UMovieSceneAsyncAction_SequencePrediction::StaticRegisterNativesUMovieSceneAsyncAction_SequencePrediction()
{
	UClass* Class = UMovieSceneAsyncAction_SequencePrediction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PredictLocalTransformAtFrame", &UMovieSceneAsyncAction_SequencePrediction::execPredictLocalTransformAtFrame },
		{ "PredictLocalTransformAtTime", &UMovieSceneAsyncAction_SequencePrediction::execPredictLocalTransformAtTime },
		{ "PredictWorldTransformAtFrame", &UMovieSceneAsyncAction_SequencePrediction::execPredictWorldTransformAtFrame },
		{ "PredictWorldTransformAtTime", &UMovieSceneAsyncAction_SequencePrediction::execPredictWorldTransformAtTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneAsyncAction_SequencePrediction);
UClass* Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_NoRegister()
{
	return UMovieSceneAsyncAction_SequencePrediction::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Async BP action that represents a pending prediction that is dispatched on a playing sequence.\n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "HasDedicatedAsyncNode", "" },
		{ "IncludePath", "Systems/MovieScenePredictionSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "Async BP action that represents a pending prediction that is dispatched on a playing sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Comment", "/** Called when a message is broadcast on the specified channel. Use GetPayload() to request the message payload. */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "Called when a message is broadcast on the specified channel. Use GetPayload() to request the message payload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "Comment", "/** Called when a message is broadcast on the specified channel. Use GetPayload() to request the message payload. */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "Called when a message is broadcast on the specified channel. Use GetPayload() to request the message payload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[] = {
		{ "Comment", "/** The sequence player we're interrogating */" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "The sequence player we're interrogating" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[] = {
		{ "Comment", "/** The target scene component we're interrogating */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ToolTip", "The target scene component we're interrogating" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Result;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame, "PredictLocalTransformAtFrame" }, // 978254649
		{ &Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime, "PredictLocalTransformAtTime" }, // 695554145
		{ &Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame, "PredictWorldTransformAtFrame" }, // 92836203
		{ &Z_Construct_UFunction_UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime, "PredictWorldTransformAtTime" }, // 2396495344
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAsyncAction_SequencePrediction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAsyncAction_SequencePrediction, Result), Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 3692660329
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAsyncAction_SequencePrediction, Failure), Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 2361068265
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAsyncAction_SequencePrediction, SequencePlayer), Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequencePlayer_MetaData), NewProp_SequencePlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneAsyncAction_SequencePrediction, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneComponent_MetaData), NewProp_SceneComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::NewProp_Failure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::NewProp_SequencePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::NewProp_SceneComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::ClassParams = {
	&UMovieSceneAsyncAction_SequencePrediction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction()
{
	if (!Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction.OuterSingleton, Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneAsyncAction_SequencePrediction>()
{
	return UMovieSceneAsyncAction_SequencePrediction::StaticClass();
}
UMovieSceneAsyncAction_SequencePrediction::UMovieSceneAsyncAction_SequencePrediction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAsyncAction_SequencePrediction);
UMovieSceneAsyncAction_SequencePrediction::~UMovieSceneAsyncAction_SequencePrediction() {}
// End Class UMovieSceneAsyncAction_SequencePrediction

// Begin Class UMovieScenePredictionSystem
void UMovieScenePredictionSystem::StaticRegisterNativesUMovieScenePredictionSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePredictionSystem);
UClass* Z_Construct_UClass_UMovieScenePredictionSystem_NoRegister()
{
	return UMovieScenePredictionSystem::StaticClass();
}
struct Z_Construct_UClass_UMovieScenePredictionSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System responsible for managing and reporting on pending UMovieSceneAsyncAction_SequencePrediction tasks\n */" },
		{ "IncludePath", "Systems/MovieScenePredictionSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System responsible for managing and reporting on pending UMovieSceneAsyncAction_SequencePrediction tasks" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingPredictions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProcessingPredictions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieScenePredictionSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingPredictions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingPredictions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProcessingPredictions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcessingPredictions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePredictionSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScenePredictionSystem_Statics::NewProp_PendingPredictions_Inner = { "PendingPredictions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScenePredictionSystem_Statics::NewProp_PendingPredictions = { "PendingPredictions", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePredictionSystem, PendingPredictions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingPredictions_MetaData), NewProp_PendingPredictions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScenePredictionSystem_Statics::NewProp_ProcessingPredictions_Inner = { "ProcessingPredictions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScenePredictionSystem_Statics::NewProp_ProcessingPredictions = { "ProcessingPredictions", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScenePredictionSystem, ProcessingPredictions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProcessingPredictions_MetaData), NewProp_ProcessingPredictions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePredictionSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePredictionSystem_Statics::NewProp_PendingPredictions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePredictionSystem_Statics::NewProp_PendingPredictions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePredictionSystem_Statics::NewProp_ProcessingPredictions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePredictionSystem_Statics::NewProp_ProcessingPredictions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePredictionSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScenePredictionSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePredictionSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePredictionSystem_Statics::ClassParams = {
	&UMovieScenePredictionSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScenePredictionSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePredictionSystem_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePredictionSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScenePredictionSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScenePredictionSystem()
{
	if (!Z_Registration_Info_UClass_UMovieScenePredictionSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePredictionSystem.OuterSingleton, Z_Construct_UClass_UMovieScenePredictionSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScenePredictionSystem.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePredictionSystem>()
{
	return UMovieScenePredictionSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePredictionSystem);
UMovieScenePredictionSystem::~UMovieScenePredictionSystem() {}
// End Class UMovieScenePredictionSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneAsyncAction_SequencePrediction, UMovieSceneAsyncAction_SequencePrediction::StaticClass, TEXT("UMovieSceneAsyncAction_SequencePrediction"), &Z_Registration_Info_UClass_UMovieSceneAsyncAction_SequencePrediction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneAsyncAction_SequencePrediction), 243931594U) },
		{ Z_Construct_UClass_UMovieScenePredictionSystem, UMovieScenePredictionSystem::StaticClass, TEXT("UMovieScenePredictionSystem"), &Z_Registration_Info_UClass_UMovieScenePredictionSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePredictionSystem), 3649200609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_1438257585(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieScenePredictionSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
