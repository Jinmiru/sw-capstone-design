// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Public/ExtensionLibraries/MovieSceneSequenceExtensions.h"
#include "Runtime/MovieScene/Public/MovieSceneBindingProxy.h"
#include "Runtime/MovieScene/Public/MovieSceneMarkedFrame.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "SequencerScripting/Public/SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceExtensions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingProxy();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarkedFrame();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneSequenceExtensions();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneSequenceExtensions_NoRegister();
SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class UMovieSceneSequenceExtensions Function AddMarkedFrame
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics
{
	struct MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms
	{
		UMovieSceneSequence* Sequence;
		FMovieSceneMarkedFrame InMarkedFrame;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddMarkedFrame is deprecated. Please use AddMarkedFrame that takes a time unit instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMarkedFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMarkedFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_InMarkedFrame = { "InMarkedFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms, InMarkedFrame), Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMarkedFrame_MetaData), NewProp_InMarkedFrame_MetaData) }; // 739890229
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_InMarkedFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddMarkedFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::MovieSceneSequenceExtensions_eventAddMarkedFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddMarkedFrame)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT_REF(FMovieSceneMarkedFrame,Z_Param_Out_InMarkedFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::AddMarkedFrame(Z_Param_Sequence,Z_Param_Out_InMarkedFrame);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function AddMarkedFrame

// Begin Class UMovieSceneSequenceExtensions Function AddMarkedFrameToSequence
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics
{
	struct MovieSceneSequenceExtensions_eventAddMarkedFrameToSequence_Parms
	{
		UMovieSceneSequence* Sequence;
		FMovieSceneMarkedFrame InMarkedFrame;
		EMovieSceneTimeUnit TimeUnit;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Add a given user marked frame.\n\x09 * A unique label will be generated if the marked frame label is empty\n\x09 *\n\x09 * @InMarkedFrame The given user marked frame to add\n\x09 * @return The index to the newly added marked frame\n\x09 */" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Add Marked Frame" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Add a given user marked frame.\n* A unique label will be generated if the marked frame label is empty\n*\n* @InMarkedFrame The given user marked frame to add\n* @return The index to the newly added marked frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMarkedFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMarkedFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrameToSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_InMarkedFrame = { "InMarkedFrame", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrameToSequence_Parms, InMarkedFrame), Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMarkedFrame_MetaData), NewProp_InMarkedFrame_MetaData) }; // 739890229
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrameToSequence_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMarkedFrameToSequence_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_InMarkedFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddMarkedFrameToSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::MovieSceneSequenceExtensions_eventAddMarkedFrameToSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::MovieSceneSequenceExtensions_eventAddMarkedFrameToSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddMarkedFrameToSequence)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT_REF(FMovieSceneMarkedFrame,Z_Param_Out_InMarkedFrame);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::AddMarkedFrameToSequence(Z_Param_Sequence,Z_Param_Out_InMarkedFrame,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function AddMarkedFrameToSequence

// Begin Class UMovieSceneSequenceExtensions Function AddMasterTrack
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics
{
	struct MovieSceneSequenceExtensions_eventAddMasterTrack_Parms
	{
		UMovieSceneSequence* Sequence;
		TSubclassOf<UMovieSceneTrack> TrackType;
		UMovieSceneTrack* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddMasterTrack is deprecated. Please use AddTrack instead" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMasterTrack_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMasterTrack_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddMasterTrack_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddMasterTrack", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::MovieSceneSequenceExtensions_eventAddMasterTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::MovieSceneSequenceExtensions_eventAddMasterTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddMasterTrack)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UClass,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneTrack**)Z_Param__Result=UMovieSceneSequenceExtensions::AddMasterTrack(Z_Param_Sequence,Z_Param_TrackType);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function AddMasterTrack

// Begin Class UMovieSceneSequenceExtensions Function AddPossessable
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics
{
	struct MovieSceneSequenceExtensions_eventAddPossessable_Parms
	{
		UMovieSceneSequence* Sequence;
		UObject* ObjectToPossess;
		FMovieSceneBindingProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a new binding to this sequence that will possess the specified object\n\x09 *\n\x09 * @param Sequence        The sequence to add a possessable to\n\x09 * @param ObjectToPossess The object that this sequence should possess when evaluating\n\x09 * @return A unique identifier for the new binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new binding to this sequence that will possess the specified object\n\n@param Sequence        The sequence to add a possessable to\n@param ObjectToPossess The object that this sequence should possess when evaluating\n@return A unique identifier for the new binding" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectToPossess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddPossessable_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_ObjectToPossess = { "ObjectToPossess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddPossessable_Parms, ObjectToPossess), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddPossessable_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_ObjectToPossess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddPossessable", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::MovieSceneSequenceExtensions_eventAddPossessable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::MovieSceneSequenceExtensions_eventAddPossessable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddPossessable)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UObject,Z_Param_ObjectToPossess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::AddPossessable(Z_Param_Sequence,Z_Param_ObjectToPossess);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function AddPossessable

// Begin Class UMovieSceneSequenceExtensions Function AddRootFolderToSequence
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics
{
	struct MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms
	{
		UMovieSceneSequence* Sequence;
		FString NewFolderName;
		UMovieSceneFolder* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a root folder to the given sequence\n\x09 *\n\x09 * @param Sequence\x09\x09\x09The sequence to add a folder to\n\x09 * @param NewFolderName\x09\x09The name to give the added folder\n\x09 * @return The newly created folder\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a root folder to the given sequence\n\n@param Sequence                      The sequence to add a folder to\n@param NewFolderName         The name to give the added folder\n@return The newly created folder" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewFolderName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_NewFolderName = { "NewFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms, NewFolderName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_NewFolderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddRootFolderToSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::MovieSceneSequenceExtensions_eventAddRootFolderToSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddRootFolderToSequence)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewFolderName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneFolder**)Z_Param__Result=UMovieSceneSequenceExtensions::AddRootFolderToSequence(Z_Param_Sequence,Z_Param_NewFolderName);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function AddRootFolderToSequence

// Begin Class UMovieSceneSequenceExtensions Function AddSpawnableFromClass
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics
{
	struct MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms
	{
		UMovieSceneSequence* Sequence;
		UClass* ClassToSpawn;
		FMovieSceneBindingProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a new binding to this sequence that will spawn the specified object\n\x09 *\n\x09 * @param Sequence        The sequence to add to\n\x09 * @param ClassToSpawn    A class or blueprint type to spawn for this binding\n\x09 * @return A unique identifier for the new binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new binding to this sequence that will spawn the specified object\n\n@param Sequence        The sequence to add to\n@param ClassToSpawn    A class or blueprint type to spawn for this binding\n@return A unique identifier for the new binding" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms, ClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_ClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddSpawnableFromClass", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::MovieSceneSequenceExtensions_eventAddSpawnableFromClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddSpawnableFromClass)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UClass,Z_Param_ClassToSpawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::AddSpawnableFromClass(Z_Param_Sequence,Z_Param_ClassToSpawn);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function AddSpawnableFromClass

// Begin Class UMovieSceneSequenceExtensions Function AddSpawnableFromInstance
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics
{
	struct MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms
	{
		UMovieSceneSequence* Sequence;
		UObject* ObjectToSpawn;
		FMovieSceneBindingProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a new binding to this sequence that will spawn the specified object\n\x09 *\n\x09 * @param Sequence        The sequence to add to\n\x09 * @param ObjectToSpawn   An object instance to use as a template for spawning\n\x09 * @return A unique identifier for the new binding\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new binding to this sequence that will spawn the specified object\n\n@param Sequence        The sequence to add to\n@param ObjectToSpawn   An object instance to use as a template for spawning\n@return A unique identifier for the new binding" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectToSpawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_ObjectToSpawn = { "ObjectToSpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms, ObjectToSpawn), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_ObjectToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddSpawnableFromInstance", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::MovieSceneSequenceExtensions_eventAddSpawnableFromInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddSpawnableFromInstance)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UObject,Z_Param_ObjectToSpawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::AddSpawnableFromInstance(Z_Param_Sequence,Z_Param_ObjectToSpawn);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function AddSpawnableFromInstance

// Begin Class UMovieSceneSequenceExtensions Function AddTrack
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics
{
	struct MovieSceneSequenceExtensions_eventAddTrack_Parms
	{
		UMovieSceneSequence* Sequence;
		TSubclassOf<UMovieSceneTrack> TrackType;
		UMovieSceneTrack* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Add a new track of the specified type\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TrackType     A UMovieSceneTrack class type to create\n\x09 * @return The newly created track, if successful\n\x09 */" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Add a new track of the specified type\n\n@param Sequence        The sequence to use\n@param TrackType     A UMovieSceneTrack class type to create\n@return The newly created track, if successful" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddTrack_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddTrack_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAddTrack_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AddTrack", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::MovieSceneSequenceExtensions_eventAddTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::MovieSceneSequenceExtensions_eventAddTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAddTrack)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UClass,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneTrack**)Z_Param__Result=UMovieSceneSequenceExtensions::AddTrack(Z_Param_Sequence,Z_Param_TrackType);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function AddTrack

// Begin Class UMovieSceneSequenceExtensions Function AreMarkedFramesLocked
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics
{
	struct MovieSceneSequenceExtensions_eventAreMarkedFramesLocked_Parms
	{
		UMovieSceneSequence* Sequence;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Are marked frames locked\n\x09 *\n\x09 * @return Whether the movie scene marked frames are locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Are marked frames locked\n*\n* @return Whether the movie scene marked frames are locked" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventAreMarkedFramesLocked_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventAreMarkedFramesLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventAreMarkedFramesLocked_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "AreMarkedFramesLocked", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::MovieSceneSequenceExtensions_eventAreMarkedFramesLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::MovieSceneSequenceExtensions_eventAreMarkedFramesLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execAreMarkedFramesLocked)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovieSceneSequenceExtensions::AreMarkedFramesLocked(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function AreMarkedFramesLocked

// Begin Class UMovieSceneSequenceExtensions Function DeleteMarkedFrame
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics
{
	struct MovieSceneSequenceExtensions_eventDeleteMarkedFrame_Parms
	{
		UMovieSceneSequence* Sequence;
		int32 DeleteIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Delete the user marked frame by index.\n\x09 *\n\x09 * @DeleteIndex The index to the user marked frame to delete\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Delete the user marked frame by index.\n*\n* @DeleteIndex The index to the user marked frame to delete" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeleteIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventDeleteMarkedFrame_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::NewProp_DeleteIndex = { "DeleteIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventDeleteMarkedFrame_Parms, DeleteIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::NewProp_DeleteIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "DeleteMarkedFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::MovieSceneSequenceExtensions_eventDeleteMarkedFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::MovieSceneSequenceExtensions_eventDeleteMarkedFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execDeleteMarkedFrame)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FIntProperty,Z_Param_DeleteIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::DeleteMarkedFrame(Z_Param_Sequence,Z_Param_DeleteIndex);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function DeleteMarkedFrame

// Begin Class UMovieSceneSequenceExtensions Function DeleteMarkedFrames
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics
{
	struct MovieSceneSequenceExtensions_eventDeleteMarkedFrames_Parms
	{
		UMovieSceneSequence* Sequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Delete all user marked frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Delete all user marked frames" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventDeleteMarkedFrames_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::NewProp_Sequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "DeleteMarkedFrames", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::MovieSceneSequenceExtensions_eventDeleteMarkedFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::MovieSceneSequenceExtensions_eventDeleteMarkedFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execDeleteMarkedFrames)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::DeleteMarkedFrames(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function DeleteMarkedFrames

// Begin Class UMovieSceneSequenceExtensions Function FindBindingById
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics
{
	struct MovieSceneSequenceExtensions_eventFindBindingById_Parms
	{
		UMovieSceneSequence* Sequence;
		FGuid BindingId;
		FMovieSceneBindingProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Attempt to locate a binding in this sequence by its Id\n\x09 *\n\x09 * @param Sequence        The sequence within which to find the binding\n\x09 * @param BindingId       The binding Id to look up\n\x09 * @return A unique identifier for the binding, or invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to locate a binding in this sequence by its Id\n\n@param Sequence        The sequence within which to find the binding\n@param BindingId       The binding Id to look up\n@return A unique identifier for the binding, or invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingById_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_BindingId = { "BindingId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingById_Parms, BindingId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingById_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_BindingId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindBindingById", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::MovieSceneSequenceExtensions_eventFindBindingById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::MovieSceneSequenceExtensions_eventFindBindingById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindBindingById)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT(FGuid,Z_Param_BindingId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::FindBindingById(Z_Param_Sequence,Z_Param_BindingId);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindBindingById

// Begin Class UMovieSceneSequenceExtensions Function FindBindingByName
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics
{
	struct MovieSceneSequenceExtensions_eventFindBindingByName_Parms
	{
		UMovieSceneSequence* Sequence;
		FString Name;
		FMovieSceneBindingProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Attempt to locate a binding in this sequence by its name\n\x09 *\n\x09 * @param Sequence        The sequence within which to find the binding\n\x09 * @param Name            The display name of the binding to look up\n\x09 * @return A unique identifier for the binding, or invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Attempt to locate a binding in this sequence by its name\n\n@param Sequence        The sequence within which to find the binding\n@param Name            The display name of the binding to look up\n@return A unique identifier for the binding, or invalid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingByName_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingByName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindBindingByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindBindingByName", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::MovieSceneSequenceExtensions_eventFindBindingByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::MovieSceneSequenceExtensions_eventFindBindingByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindBindingByName)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::FindBindingByName(Z_Param_Sequence,Z_Param_Name);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindBindingByName

// Begin Class UMovieSceneSequenceExtensions Function FindMarkedFrameByFrameNumber
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics
{
	struct MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms
	{
		UMovieSceneSequence* Sequence;
		FFrameNumber InFrameNumber;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FindMarkedFrameByFrameNumber is deprecated. Please use FindMarkedFrameByFrameNumber that takes a time unit instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_InFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindMarkedFrameByFrameNumber", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindMarkedFrameByFrameNumber)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT(FFrameNumber,Z_Param_InFrameNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumber(Z_Param_Sequence,Z_Param_InFrameNumber);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindMarkedFrameByFrameNumber

// Begin Class UMovieSceneSequenceExtensions Function FindMarkedFrameByFrameNumberInSequence
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics
{
	struct MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumberInSequence_Parms
	{
		UMovieSceneSequence* Sequence;
		FFrameNumber InFrameNumber;
		EMovieSceneTimeUnit TimeUnit;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Find the user marked frame by frame number\n\x09 *\n\x09 * @InFrameNumber The frame number of the user marked frame to find\n\x09 */" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Find Marked Frame By Frame Number" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Find the user marked frame by frame number\n*\n* @InFrameNumber The frame number of the user marked frame to find" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumberInSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumberInSequence_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumberInSequence_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumberInSequence_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_InFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindMarkedFrameByFrameNumberInSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumberInSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::MovieSceneSequenceExtensions_eventFindMarkedFrameByFrameNumberInSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindMarkedFrameByFrameNumberInSequence)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT(FFrameNumber,Z_Param_InFrameNumber);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumberInSequence(Z_Param_Sequence,Z_Param_InFrameNumber,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindMarkedFrameByFrameNumberInSequence

// Begin Class UMovieSceneSequenceExtensions Function FindMarkedFrameByLabel
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics
{
	struct MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms
	{
		UMovieSceneSequence* Sequence;
		FString InLabel;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Find the user marked frame by label\n\x09 *\n\x09 * @InLabel The label to the user marked frame to find\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Find the user marked frame by label\n*\n* @InLabel The label to the user marked frame to find" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InLabel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms, InLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLabel_MetaData), NewProp_InLabel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_InLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindMarkedFrameByLabel", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::MovieSceneSequenceExtensions_eventFindMarkedFrameByLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindMarkedFrameByLabel)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FStrProperty,Z_Param_InLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(Z_Param_Sequence,Z_Param_InLabel);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindMarkedFrameByLabel

// Begin Class UMovieSceneSequenceExtensions Function FindMasterTracksByExactType
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics
{
	struct MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms
	{
		UMovieSceneSequence* Sequence;
		TSubclassOf<UMovieSceneTrack> TrackType;
		TArray<UMovieSceneTrack*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FindMasterTracksByExactType is deprecated. Please use FindTracksByExactType instead" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindMasterTracksByExactType", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::MovieSceneSequenceExtensions_eventFindMasterTracksByExactType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindMasterTracksByExactType)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UClass,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::FindMasterTracksByExactType(Z_Param_Sequence,Z_Param_TrackType);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindMasterTracksByExactType

// Begin Class UMovieSceneSequenceExtensions Function FindMasterTracksByType
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics
{
	struct MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms
	{
		UMovieSceneSequence* Sequence;
		TSubclassOf<UMovieSceneTrack> TrackType;
		TArray<UMovieSceneTrack*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FindMasterTracksByType is deprecated. Please use FindTracksByType instead" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindMasterTracksByType", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::MovieSceneSequenceExtensions_eventFindMasterTracksByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindMasterTracksByType)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UClass,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::FindMasterTracksByType(Z_Param_Sequence,Z_Param_TrackType);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindMasterTracksByType

// Begin Class UMovieSceneSequenceExtensions Function FindNextMarkedFrame
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics
{
	struct MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms
	{
		UMovieSceneSequence* Sequence;
		FFrameNumber InFrameNumber;
		bool bForward;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FindNextMarkedFrame is deprecated. Please use FindNextMarkedFrame that takes a time unit and defaults to display rate instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
	static void NewProp_bForward_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForward;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_bForward_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms*)Obj)->bForward = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_bForward = { "bForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_bForward_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_InFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_bForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindNextMarkedFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::MovieSceneSequenceExtensions_eventFindNextMarkedFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindNextMarkedFrame)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT(FFrameNumber,Z_Param_InFrameNumber);
	P_GET_UBOOL(Z_Param_bForward);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::FindNextMarkedFrame(Z_Param_Sequence,Z_Param_InFrameNumber,Z_Param_bForward);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindNextMarkedFrame

// Begin Class UMovieSceneSequenceExtensions Function FindNextMarkedFrameInSequence
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics
{
	struct MovieSceneSequenceExtensions_eventFindNextMarkedFrameInSequence_Parms
	{
		UMovieSceneSequence* Sequence;
		FFrameNumber InFrameNumber;
		bool bForward;
		EMovieSceneTimeUnit TimeUnit;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Find the next/previous user marked frame from the given frame number\n\x09 *\n\x09 * @InFrameNumber The frame number to find the next/previous user marked frame from\n\x09 * @bForward Find forward from the given frame number.\n\x09 */" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Find Next Marked Frame" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Find the next/previous user marked frame from the given frame number\n*\n* @InFrameNumber The frame number to find the next/previous user marked frame from\n* @bForward Find forward from the given frame number." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
	static void NewProp_bForward_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForward;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrameInSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrameInSequence_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_bForward_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventFindNextMarkedFrameInSequence_Parms*)Obj)->bForward = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_bForward = { "bForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventFindNextMarkedFrameInSequence_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_bForward_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrameInSequence_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindNextMarkedFrameInSequence_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_InFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_bForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindNextMarkedFrameInSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::MovieSceneSequenceExtensions_eventFindNextMarkedFrameInSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::MovieSceneSequenceExtensions_eventFindNextMarkedFrameInSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindNextMarkedFrameInSequence)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT(FFrameNumber,Z_Param_InFrameNumber);
	P_GET_UBOOL(Z_Param_bForward);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::FindNextMarkedFrameInSequence(Z_Param_Sequence,Z_Param_InFrameNumber,Z_Param_bForward,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindNextMarkedFrameInSequence

// Begin Class UMovieSceneSequenceExtensions Function FindTracksByExactType
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics
{
	struct MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms
	{
		UMovieSceneSequence* Sequence;
		TSubclassOf<UMovieSceneTrack> TrackType;
		TArray<UMovieSceneTrack*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Find all tracks of the specified type, not allowing sub-classed types\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TrackType     A UMovieSceneTrack class type specifying the exact types of track to return\n\x09 * @return An array containing any tracks that are exactly the same as the type specified\n\x09 */" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all tracks of the specified type, not allowing sub-classed types\n\n@param Sequence        The sequence to use\n@param TrackType     A UMovieSceneTrack class type specifying the exact types of track to return\n@return An array containing any tracks that are exactly the same as the type specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindTracksByExactType", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::MovieSceneSequenceExtensions_eventFindTracksByExactType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindTracksByExactType)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UClass,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::FindTracksByExactType(Z_Param_Sequence,Z_Param_TrackType);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindTracksByExactType

// Begin Class UMovieSceneSequenceExtensions Function FindTracksByType
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics
{
	struct MovieSceneSequenceExtensions_eventFindTracksByType_Parms
	{
		UMovieSceneSequence* Sequence;
		TSubclassOf<UMovieSceneTrack> TrackType;
		TArray<UMovieSceneTrack*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Find all tracks of the specified type\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TrackType     A UMovieSceneTrack class type specifying which types of track to return\n\x09 * @return An array containing any tracks that match the type specified\n\x09 */" },
		{ "DeterminesOutputType", "TrackType" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find all tracks of the specified type\n\n@param Sequence        The sequence to use\n@param TrackType     A UMovieSceneTrack class type specifying which types of track to return\n@return An array containing any tracks that match the type specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrackType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByType_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByType_Parms, TrackType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventFindTracksByType_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_TrackType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "FindTracksByType", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::MovieSceneSequenceExtensions_eventFindTracksByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::MovieSceneSequenceExtensions_eventFindTracksByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execFindTracksByType)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UClass,Z_Param_TrackType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::FindTracksByType(Z_Param_Sequence,Z_Param_TrackType);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function FindTracksByType

// Begin Class UMovieSceneSequenceExtensions Function GetBindingID
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics
{
	struct MovieSceneSequenceExtensions_eventGetBindingID_Parms
	{
		UMovieSceneSequence* Sequence;
		FMovieSceneBindingProxy InBinding;
		FMovieSceneObjectBindingID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the binding ID for a binding within a sequence.\n\x09 * @note: The resulting binding is only valid when applied to properties within the same sequence as this binding. Use GetPortableBindingID for bindings which live in different sub-sequences.\n\x09 *\n\x09 * @param Binding The binding proxy to generate the binding id from\n\x09 * @return The binding's id\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the binding ID for a binding within a sequence.\n@note: The resulting binding is only valid when applied to properties within the same sequence as this binding. Use GetPortableBindingID for bindings which live in different sub-sequences.\n\n@param Binding The binding proxy to generate the binding id from\n@return The binding's id" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetBindingID_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetBindingID_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBinding_MetaData), NewProp_InBinding_MetaData) }; // 2936931176
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_InBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetBindingID", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::MovieSceneSequenceExtensions_eventGetBindingID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::MovieSceneSequenceExtensions_eventGetBindingID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetBindingID)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneObjectBindingID*)Z_Param__Result=UMovieSceneSequenceExtensions::GetBindingID(Z_Param_Sequence,Z_Param_Out_InBinding);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetBindingID

// Begin Class UMovieSceneSequenceExtensions Function GetBindings
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics
{
	struct MovieSceneSequenceExtensions_eventGetBindings_Parms
	{
		UMovieSceneSequence* Sequence;
		TArray<FMovieSceneBindingProxy> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get all the bindings in this sequence\n\x09 *\n\x09 * @param Sequence        The sequence to get bindings for\n\x09 * @return An array of unique identifiers for all the bindings in this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all the bindings in this sequence\n\n@param Sequence        The sequence to get bindings for\n@return An array of unique identifiers for all the bindings in this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetBindings_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetBindings", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::MovieSceneSequenceExtensions_eventGetBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::MovieSceneSequenceExtensions_eventGetBindings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetBindings)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetBindings(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetBindings

// Begin Class UMovieSceneSequenceExtensions Function GetClockSource
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics
{
	struct MovieSceneSequenceExtensions_eventGetClockSource_Parms
	{
		UMovieSceneSequence* InSequence;
		EUpdateClockSource ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the clock source for this sequence\n\x09 *\n\x09 * @param Sequence The sequence within which to get the clock source\n\x09 * @return The clock source for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the clock source for this sequence\n\n@param Sequence The sequence within which to get the clock source\n@return The clock source for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetClockSource_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetClockSource_Parms, ReturnValue), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(0, nullptr) }; // 2266554604
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetClockSource", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::MovieSceneSequenceExtensions_eventGetClockSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::MovieSceneSequenceExtensions_eventGetClockSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetClockSource)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EUpdateClockSource*)Z_Param__Result=UMovieSceneSequenceExtensions::GetClockSource(Z_Param_InSequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetClockSource

// Begin Class UMovieSceneSequenceExtensions Function GetDisplayRate
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct MovieSceneSequenceExtensions_eventGetDisplayRate_Parms
	{
		UMovieSceneSequence* Sequence;
		FFrameRate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Gets this sequence's display rate\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @return The display rate that this sequence is displayed as\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets this sequence's display rate\n\n@param Sequence        The sequence to use\n@return The display rate that this sequence is displayed as" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetDisplayRate_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetDisplayRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetDisplayRate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::MovieSceneSequenceExtensions_eventGetDisplayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::MovieSceneSequenceExtensions_eventGetDisplayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetDisplayRate)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameRate*)Z_Param__Result=UMovieSceneSequenceExtensions::GetDisplayRate(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetDisplayRate

// Begin Class UMovieSceneSequenceExtensions Function GetEvaluationType
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics
{
	struct MovieSceneSequenceExtensions_eventGetEvaluationType_Parms
	{
		UMovieSceneSequence* InSequence;
		EMovieSceneEvaluationType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the evaluation type for this sequence\n\x09 *\n\x09 * @param Sequence The sequence within which to get the evaluation type\n\x09 * @return The evaluation type for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the evaluation type for this sequence\n\n@param Sequence The sequence within which to get the evaluation type\n@return The evaluation type for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetEvaluationType_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetEvaluationType_Parms, ReturnValue), Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, METADATA_PARAMS(0, nullptr) }; // 3725280040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetEvaluationType", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::MovieSceneSequenceExtensions_eventGetEvaluationType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::MovieSceneSequenceExtensions_eventGetEvaluationType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetEvaluationType)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMovieSceneEvaluationType*)Z_Param__Result=UMovieSceneSequenceExtensions::GetEvaluationType(Z_Param_InSequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetEvaluationType

// Begin Class UMovieSceneSequenceExtensions Function GetMarkedFrames
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics
{
	struct MovieSceneSequenceExtensions_eventGetMarkedFrames_Parms
	{
		UMovieSceneSequence* Sequence;
		TArray<FMovieSceneMarkedFrame> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetMarkedFrames is deprecated. Please use GetMarkedFrames that takes a time unit instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMarkedFrames_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, METADATA_PARAMS(0, nullptr) }; // 739890229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMarkedFrames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 739890229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetMarkedFrames", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::MovieSceneSequenceExtensions_eventGetMarkedFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::MovieSceneSequenceExtensions_eventGetMarkedFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetMarkedFrames)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMovieSceneMarkedFrame>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetMarkedFrames(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetMarkedFrames

// Begin Class UMovieSceneSequenceExtensions Function GetMarkedFramesFromSequence
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics
{
	struct MovieSceneSequenceExtensions_eventGetMarkedFramesFromSequence_Parms
	{
		UMovieSceneSequence* Sequence;
		EMovieSceneTimeUnit TimeUnit;
		TArray<FMovieSceneMarkedFrame> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Get the marked frames for this sequence\n\x09 *\n\x09 * @return Return the user marked frames\n\x09 */" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Get Marked Frames" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Get the marked frames for this sequence\n*\n* @return Return the user marked frames" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMarkedFramesFromSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMarkedFramesFromSequence_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, METADATA_PARAMS(0, nullptr) }; // 739890229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMarkedFramesFromSequence_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 739890229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_TimeUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetMarkedFramesFromSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::MovieSceneSequenceExtensions_eventGetMarkedFramesFromSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::MovieSceneSequenceExtensions_eventGetMarkedFramesFromSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetMarkedFramesFromSequence)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMovieSceneMarkedFrame>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetMarkedFramesFromSequence(Z_Param_Sequence,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetMarkedFramesFromSequence

// Begin Class UMovieSceneSequenceExtensions Function GetMasterTracks
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics
{
	struct MovieSceneSequenceExtensions_eventGetMasterTracks_Parms
	{
		UMovieSceneSequence* Sequence;
		TArray<UMovieSceneTrack*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetMasterTracks is deprecated. Please use GetTracks instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMasterTracks_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMasterTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetMasterTracks", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::MovieSceneSequenceExtensions_eventGetMasterTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::MovieSceneSequenceExtensions_eventGetMasterTracks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetMasterTracks)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetMasterTracks(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetMasterTracks

// Begin Class UMovieSceneSequenceExtensions Function GetMovieScene
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics
{
	struct MovieSceneSequenceExtensions_eventGetMovieScene_Parms
	{
		UMovieSceneSequence* Sequence;
		UMovieScene* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get this sequence's movie scene data\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @return This sequence's movie scene data object\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get this sequence's movie scene data\n\n@param Sequence        The sequence to use\n@return This sequence's movie scene data object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMovieScene_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetMovieScene_Parms, ReturnValue), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetMovieScene", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::MovieSceneSequenceExtensions_eventGetMovieScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::MovieSceneSequenceExtensions_eventGetMovieScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetMovieScene)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieScene**)Z_Param__Result=UMovieSceneSequenceExtensions::GetMovieScene(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetMovieScene

// Begin Class UMovieSceneSequenceExtensions Function GetPlaybackEnd
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics
{
	struct MovieSceneSequenceExtensions_eventGetPlaybackEnd_Parms
	{
		UMovieSceneSequence* Sequence;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback end of this sequence in display rate resolution\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback end\n\x09 * @return Playback end of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback end of this sequence in display rate resolution\n\n@param Sequence        The sequence within which to get the playback end\n@return Playback end of this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackEnd_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackEnd", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::MovieSceneSequenceExtensions_eventGetPlaybackEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::MovieSceneSequenceExtensions_eventGetPlaybackEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackEnd)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackEnd(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetPlaybackEnd

// Begin Class UMovieSceneSequenceExtensions Function GetPlaybackEndSeconds
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics
{
	struct MovieSceneSequenceExtensions_eventGetPlaybackEndSeconds_Parms
	{
		UMovieSceneSequence* Sequence;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback end of this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback end\n\x09 * @return Playback end of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback end of this sequence in seconds\n\n@param Sequence        The sequence within which to get the playback end\n@return Playback end of this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackEndSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackEndSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackEndSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::MovieSceneSequenceExtensions_eventGetPlaybackEndSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::MovieSceneSequenceExtensions_eventGetPlaybackEndSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackEndSeconds)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackEndSeconds(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetPlaybackEndSeconds

// Begin Class UMovieSceneSequenceExtensions Function GetPlaybackRange
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics
{
	struct MovieSceneSequenceExtensions_eventGetPlaybackRange_Parms
	{
		UMovieSceneSequence* Sequence;
		FSequencerScriptingRange ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback range of this sequence in display rate resolution\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback range\n\x09 * @return Playback range of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback range of this sequence in display rate resolution\n\n@param Sequence        The sequence within which to get the playback range\n@return Playback range of this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackRange_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackRange", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::MovieSceneSequenceExtensions_eventGetPlaybackRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::MovieSceneSequenceExtensions_eventGetPlaybackRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackRange)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencerScriptingRange*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackRange(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetPlaybackRange

// Begin Class UMovieSceneSequenceExtensions Function GetPlaybackStart
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics
{
	struct MovieSceneSequenceExtensions_eventGetPlaybackStart_Parms
	{
		UMovieSceneSequence* Sequence;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback start of this sequence in display rate resolution\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback start\n\x09 * @return Playback start of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback start of this sequence in display rate resolution\n\n@param Sequence        The sequence within which to get the playback start\n@return Playback start of this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackStart_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackStart_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackStart", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::MovieSceneSequenceExtensions_eventGetPlaybackStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::MovieSceneSequenceExtensions_eventGetPlaybackStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackStart)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackStart(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetPlaybackStart

// Begin Class UMovieSceneSequenceExtensions Function GetPlaybackStartSeconds
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics
{
	struct MovieSceneSequenceExtensions_eventGetPlaybackStartSeconds_Parms
	{
		UMovieSceneSequence* Sequence;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get playback start of this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to get the playback start\n\x09 * @return Playback start of this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get playback start of this sequence in seconds\n\n@param Sequence        The sequence within which to get the playback start\n@return Playback start of this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackStartSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPlaybackStartSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPlaybackStartSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::MovieSceneSequenceExtensions_eventGetPlaybackStartSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::MovieSceneSequenceExtensions_eventGetPlaybackStartSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPlaybackStartSeconds)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPlaybackStartSeconds(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetPlaybackStartSeconds

// Begin Class UMovieSceneSequenceExtensions Function GetPortableBindingID
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics
{
	struct MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms
	{
		UMovieSceneSequence* RootSequence;
		UMovieSceneSequence* DestinationSequence;
		FMovieSceneBindingProxy InBinding;
		FMovieSceneObjectBindingID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get a portable binding ID for a binding that resides in a different sequence to the one where this binding will be resolved.\n\x09 * @note: This function must be used over GetBindingID when the target binding resides in different shots or sub-sequences.\n\x09 * @note: Only unique instances of sequences within a root sequences are supported\n\x09 *\n\x09 * @param RootSequence The root sequence that contains both the destination sequence (that will resolve the binding ID) and the target sequence that contains the actual binding\n\x09 * @param DestinationSequence The sequence that will own or resolve the resulting binding ID. For example, if the binding ID will be applied to a camera cut section pass the sequence that contains the camera cut track to this parameter.\n\x09 * @param Binding The target binding to create the ID from\n\x09 * @return The binding's id\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get a portable binding ID for a binding that resides in a different sequence to the one where this binding will be resolved.\n@note: This function must be used over GetBindingID when the target binding resides in different shots or sub-sequences.\n@note: Only unique instances of sequences within a root sequences are supported\n\n@param RootSequence The root sequence that contains both the destination sequence (that will resolve the binding ID) and the target sequence that contains the actual binding\n@param DestinationSequence The sequence that will own or resolve the resulting binding ID. For example, if the binding ID will be applied to a camera cut section pass the sequence that contains the camera cut track to this parameter.\n@param Binding The target binding to create the ID from\n@return The binding's id" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationSequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_RootSequence = { "RootSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms, RootSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_DestinationSequence = { "DestinationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms, DestinationSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBinding_MetaData), NewProp_InBinding_MetaData) }; // 2936931176
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_RootSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_DestinationSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_InBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPortableBindingID", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::MovieSceneSequenceExtensions_eventGetPortableBindingID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPortableBindingID)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_RootSequence);
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_DestinationSequence);
	P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneObjectBindingID*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPortableBindingID(Z_Param_RootSequence,Z_Param_DestinationSequence,Z_Param_Out_InBinding);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetPortableBindingID

// Begin Class UMovieSceneSequenceExtensions Function GetPossessables
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics
{
	struct MovieSceneSequenceExtensions_eventGetPossessables_Parms
	{
		UMovieSceneSequence* Sequence;
		TArray<FMovieSceneBindingProxy> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09* Get all the possessables in this sequence\n\x09*\n\x09* @param Sequence        The sequence to get possessables for\n\x09* @return Possessables in this sequence\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all the possessables in this sequence\n\n@param Sequence        The sequence to get possessables for\n@return Possessables in this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPossessables_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetPossessables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetPossessables", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::MovieSceneSequenceExtensions_eventGetPossessables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::MovieSceneSequenceExtensions_eventGetPossessables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetPossessables)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetPossessables(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetPossessables

// Begin Class UMovieSceneSequenceExtensions Function GetRootFoldersInSequence
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics
{
	struct MovieSceneSequenceExtensions_eventGetRootFoldersInSequence_Parms
	{
		UMovieSceneSequence* Sequence;
		TArray<UMovieSceneFolder*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the root folders in the provided sequence\n\x09 *\n\x09 * @param Sequence\x09The sequence to retrieve folders from\n\x09 * @return The folders contained within the given sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the root folders in the provided sequence\n\n@param Sequence      The sequence to retrieve folders from\n@return The folders contained within the given sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetRootFoldersInSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetRootFoldersInSequence_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetRootFoldersInSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::MovieSceneSequenceExtensions_eventGetRootFoldersInSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::MovieSceneSequenceExtensions_eventGetRootFoldersInSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetRootFoldersInSequence)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneFolder*>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetRootFoldersInSequence(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetRootFoldersInSequence

// Begin Class UMovieSceneSequenceExtensions Function GetSpawnables
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics
{
	struct MovieSceneSequenceExtensions_eventGetSpawnables_Parms
	{
		UMovieSceneSequence* Sequence;
		TArray<FMovieSceneBindingProxy> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09* Get all the spawnables in this sequence\n\x09*\n\x09* @param Sequence        The sequence to get spawnables for\n\x09* @return Spawnables in this sequence\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all the spawnables in this sequence\n\n@param Sequence        The sequence to get spawnables for\n@return Spawnables in this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetSpawnables_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetSpawnables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetSpawnables", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::MovieSceneSequenceExtensions_eventGetSpawnables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::MovieSceneSequenceExtensions_eventGetSpawnables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetSpawnables)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMovieSceneBindingProxy>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetSpawnables(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetSpawnables

// Begin Class UMovieSceneSequenceExtensions Function GetTickResolution
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct MovieSceneSequenceExtensions_eventGetTickResolution_Parms
	{
		UMovieSceneSequence* Sequence;
		FFrameRate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Gets this sequence's tick resolution\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @return The tick resolution of the sequence, defining the smallest unit of time representable on this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets this sequence's tick resolution\n\n@param Sequence        The sequence to use\n@return The tick resolution of the sequence, defining the smallest unit of time representable on this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTickResolution_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTickResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetTickResolution", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::MovieSceneSequenceExtensions_eventGetTickResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::MovieSceneSequenceExtensions_eventGetTickResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetTickResolution)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameRate*)Z_Param__Result=UMovieSceneSequenceExtensions::GetTickResolution(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetTickResolution

// Begin Class UMovieSceneSequenceExtensions Function GetTracks
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics
{
	struct MovieSceneSequenceExtensions_eventGetTracks_Parms
	{
		UMovieSceneSequence* Sequence;
		TArray<UMovieSceneTrack*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get all tracks\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @return An array containing all tracks in this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get all tracks\n\n@param Sequence        The sequence to use\n@return An array containing all tracks in this sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTracks_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetTracks", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::MovieSceneSequenceExtensions_eventGetTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::MovieSceneSequenceExtensions_eventGetTracks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetTracks)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovieSceneTrack*>*)Z_Param__Result=UMovieSceneSequenceExtensions::GetTracks(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetTracks

// Begin Class UMovieSceneSequenceExtensions Function GetViewRangeEnd
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics
{
	struct MovieSceneSequenceExtensions_eventGetViewRangeEnd_Parms
	{
		UMovieSceneSequence* InSequence;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the sequence view range end in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to get the view range end\n\x09 * @return The view range end time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sequence view range end in seconds\n\n@param Sequence The sequence within which to get the view range end\n@return The view range end time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetViewRangeEnd_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetViewRangeEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetViewRangeEnd", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::MovieSceneSequenceExtensions_eventGetViewRangeEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::MovieSceneSequenceExtensions_eventGetViewRangeEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetViewRangeEnd)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UMovieSceneSequenceExtensions::GetViewRangeEnd(Z_Param_InSequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetViewRangeEnd

// Begin Class UMovieSceneSequenceExtensions Function GetViewRangeStart
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics
{
	struct MovieSceneSequenceExtensions_eventGetViewRangeStart_Parms
	{
		UMovieSceneSequence* InSequence;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the sequence view range start in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to get the view range start\n\x09 * @return The view range start time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sequence view range start in seconds\n\n@param Sequence The sequence within which to get the view range start\n@return The view range start time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetViewRangeStart_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetViewRangeStart_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetViewRangeStart", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::MovieSceneSequenceExtensions_eventGetViewRangeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::MovieSceneSequenceExtensions_eventGetViewRangeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetViewRangeStart)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UMovieSceneSequenceExtensions::GetViewRangeStart(Z_Param_InSequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetViewRangeStart

// Begin Class UMovieSceneSequenceExtensions Function GetWorkRangeEnd
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics
{
	struct MovieSceneSequenceExtensions_eventGetWorkRangeEnd_Parms
	{
		UMovieSceneSequence* InSequence;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the sequence work range end in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to get the work range end\n\x09 * @return The work range end time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sequence work range end in seconds\n\n@param Sequence The sequence within which to get the work range end\n@return The work range end time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetWorkRangeEnd_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetWorkRangeEnd_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetWorkRangeEnd", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::MovieSceneSequenceExtensions_eventGetWorkRangeEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::MovieSceneSequenceExtensions_eventGetWorkRangeEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetWorkRangeEnd)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UMovieSceneSequenceExtensions::GetWorkRangeEnd(Z_Param_InSequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetWorkRangeEnd

// Begin Class UMovieSceneSequenceExtensions Function GetWorkRangeStart
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics
{
	struct MovieSceneSequenceExtensions_eventGetWorkRangeStart_Parms
	{
		UMovieSceneSequence* InSequence;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the sequence work range start in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to get the work range start\n\x09 * @return The work range start time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the sequence work range start in seconds\n\n@param Sequence The sequence within which to get the work range start\n@return The work range start time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetWorkRangeStart_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventGetWorkRangeStart_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "GetWorkRangeStart", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::MovieSceneSequenceExtensions_eventGetWorkRangeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::MovieSceneSequenceExtensions_eventGetWorkRangeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execGetWorkRangeStart)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UMovieSceneSequenceExtensions::GetWorkRangeStart(Z_Param_InSequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function GetWorkRangeStart

// Begin Class UMovieSceneSequenceExtensions Function IsPlaybackRangeLocked
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics
{
	struct MovieSceneSequenceExtensions_eventIsPlaybackRangeLocked_Parms
	{
		UMovieSceneSequence* Sequence;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Is playback ranged locked\n\x09 *\n\x09 * @return Whether the movie scene playback range is locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Is playback ranged locked\n*\n* @return Whether the movie scene playback range is locked" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventIsPlaybackRangeLocked_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventIsPlaybackRangeLocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventIsPlaybackRangeLocked_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "IsPlaybackRangeLocked", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::MovieSceneSequenceExtensions_eventIsPlaybackRangeLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::MovieSceneSequenceExtensions_eventIsPlaybackRangeLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execIsPlaybackRangeLocked)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovieSceneSequenceExtensions::IsPlaybackRangeLocked(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function IsPlaybackRangeLocked

// Begin Class UMovieSceneSequenceExtensions Function IsReadOnly
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics
{
	struct MovieSceneSequenceExtensions_eventIsReadOnly_Parms
	{
		UMovieSceneSequence* Sequence;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Is read only\n\x09 *\n\x09 * @return Whether the movie scene is read only or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Is read only\n*\n* @return Whether the movie scene is read only or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventIsReadOnly_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventIsReadOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventIsReadOnly_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "IsReadOnly", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::MovieSceneSequenceExtensions_eventIsReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::MovieSceneSequenceExtensions_eventIsReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execIsReadOnly)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovieSceneSequenceExtensions::IsReadOnly(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function IsReadOnly

// Begin Class UMovieSceneSequenceExtensions Function LocateBoundObjects
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics
{
	struct MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms
	{
		UMovieSceneSequence* Sequence;
		FMovieSceneBindingProxy InBinding;
		UObject* Context;
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Locate all the objects that correspond to the specified object ID, using the specified context\n\x09 *\n\x09 * @param Sequence   The sequence to locate bound objects for\n\x09 * @param InBinding  The object binding\n\x09 * @param Context    Optional context to use to find the required object\n\x09 * @return An array of all bound objects\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Locate all the objects that correspond to the specified object ID, using the specified context\n\n@param Sequence   The sequence to locate bound objects for\n@param InBinding  The object binding\n@param Context    Optional context to use to find the required object\n@return An array of all bound objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBinding_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_InBinding = { "InBinding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms, InBinding), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBinding_MetaData), NewProp_InBinding_MetaData) }; // 2936931176
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_InBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "LocateBoundObjects", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::MovieSceneSequenceExtensions_eventLocateBoundObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execLocateBoundObjects)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT_REF(FMovieSceneBindingProxy,Z_Param_Out_InBinding);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=UMovieSceneSequenceExtensions::LocateBoundObjects(Z_Param_Sequence,Z_Param_Out_InBinding,Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function LocateBoundObjects

// Begin Class UMovieSceneSequenceExtensions Function MakeRange
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics
{
	struct MovieSceneSequenceExtensions_eventMakeRange_Parms
	{
		UMovieSceneSequence* Sequence;
		int32 StartFrame;
		int32 Duration;
		FSequencerScriptingRange ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Make a new range for this sequence in its display rate\n\x09 *\n\x09 * @param Sequence        The sequence within which to find the binding\n\x09 * @param StartFrame      The frame at which to start the range\n\x09 * @param Duration        The length of the range\n\x09 * @return Specified sequencer range\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Make a new range for this sequence in its display rate\n\n@param Sequence        The sequence within which to find the binding\n@param StartFrame      The frame at which to start the range\n@param Duration        The length of the range\n@return Specified sequencer range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRange_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRange_Parms, StartFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRange_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_StartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "MakeRange", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::MovieSceneSequenceExtensions_eventMakeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::MovieSceneSequenceExtensions_eventMakeRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execMakeRange)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
	P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencerScriptingRange*)Z_Param__Result=UMovieSceneSequenceExtensions::MakeRange(Z_Param_Sequence,Z_Param_StartFrame,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function MakeRange

// Begin Class UMovieSceneSequenceExtensions Function MakeRangeSeconds
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics
{
	struct MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms
	{
		UMovieSceneSequence* Sequence;
		float StartTime;
		float Duration;
		FSequencerScriptingRange ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Make a new range for this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to find the binding\n\x09 * @param StartTime       The time in seconds at which to start the range\n\x09 * @param Duration        The length of the range in seconds\n\x09 * @return Specified sequencer range\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Make a new range for this sequence in seconds\n\n@param Sequence        The sequence within which to find the binding\n@param StartTime       The time in seconds at which to start the range\n@param Duration        The length of the range in seconds\n@return Specified sequencer range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "MakeRangeSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::MovieSceneSequenceExtensions_eventMakeRangeSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execMakeRangeSeconds)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSequencerScriptingRange*)Z_Param__Result=UMovieSceneSequenceExtensions::MakeRangeSeconds(Z_Param_Sequence,Z_Param_StartTime,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function MakeRangeSeconds

// Begin Class UMovieSceneSequenceExtensions Function RemoveMasterTrack
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics
{
	struct MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms
	{
		UMovieSceneSequence* Sequence;
		UMovieSceneTrack* Track;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveMasterTrack is deprecated. Please use RemoveTrack instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "RemoveMasterTrack", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::MovieSceneSequenceExtensions_eventRemoveMasterTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execRemoveMasterTrack)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovieSceneSequenceExtensions::RemoveMasterTrack(Z_Param_Sequence,Z_Param_Track);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function RemoveMasterTrack

// Begin Class UMovieSceneSequenceExtensions Function RemoveRootFolderFromSequence
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics
{
	struct MovieSceneSequenceExtensions_eventRemoveRootFolderFromSequence_Parms
	{
		UMovieSceneSequence* Sequence;
		UMovieSceneFolder* Folder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Remove a root folder from the given sequence. Will throw an exception if the specified folder is not valid or not a root folder.\n\x09 *\n\x09 * @param Sequence\x09\x09\x09The sequence That the folder belongs to\n\x09 * @param Folder\x09\x09\x09The folder to remove\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove a root folder from the given sequence. Will throw an exception if the specified folder is not valid or not a root folder.\n\n@param Sequence                      The sequence That the folder belongs to\n@param Folder                        The folder to remove" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Folder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveRootFolderFromSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveRootFolderFromSequence_Parms, Folder), Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Folder_MetaData), NewProp_Folder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::NewProp_Folder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "RemoveRootFolderFromSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::MovieSceneSequenceExtensions_eventRemoveRootFolderFromSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::MovieSceneSequenceExtensions_eventRemoveRootFolderFromSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execRemoveRootFolderFromSequence)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UMovieSceneFolder,Z_Param_Folder);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::RemoveRootFolderFromSequence(Z_Param_Sequence,Z_Param_Folder);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function RemoveRootFolderFromSequence

// Begin Class UMovieSceneSequenceExtensions Function RemoveTrack
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics
{
	struct MovieSceneSequenceExtensions_eventRemoveTrack_Parms
	{
		UMovieSceneSequence* Sequence;
		UMovieSceneTrack* Track;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Removes a track\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param Track           The track to remove\n\x09 * @return Whether the track was successfully removed\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Removes a track\n\n@param Sequence        The sequence to use\n@param Track           The track to remove\n@return Whether the track was successfully removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Track;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveTrack_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventRemoveTrack_Parms, Track), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Track_MetaData), NewProp_Track_MetaData) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventRemoveTrack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventRemoveTrack_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_Track,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "RemoveTrack", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::MovieSceneSequenceExtensions_eventRemoveTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::MovieSceneSequenceExtensions_eventRemoveTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execRemoveTrack)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_OBJECT(UMovieSceneTrack,Z_Param_Track);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMovieSceneSequenceExtensions::RemoveTrack(Z_Param_Sequence,Z_Param_Track);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function RemoveTrack

// Begin Class UMovieSceneSequenceExtensions Function ResolveBindingID
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics
{
	struct MovieSceneSequenceExtensions_eventResolveBindingID_Parms
	{
		UMovieSceneSequence* RootSequence;
		FMovieSceneObjectBindingID InObjectBindingID;
		FMovieSceneBindingProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Make a binding for the given binding ID\n\x09 *\n\x09 * @param RootSequence  The root sequence that contains the sequence\n\x09 * @param ObjectBindingID The object binding id that has the guid and the sequence id\n\x09 * @return The new binding proxy\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Make a binding for the given binding ID\n\n@param RootSequence  The root sequence that contains the sequence\n@param ObjectBindingID The object binding id that has the guid and the sequence id\n@return The new binding proxy" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootSequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InObjectBindingID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_RootSequence = { "RootSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventResolveBindingID_Parms, RootSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_InObjectBindingID = { "InObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventResolveBindingID_Parms, InObjectBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventResolveBindingID_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneBindingProxy, METADATA_PARAMS(0, nullptr) }; // 2936931176
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_RootSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_InObjectBindingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "ResolveBindingID", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::MovieSceneSequenceExtensions_eventResolveBindingID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::MovieSceneSequenceExtensions_eventResolveBindingID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execResolveBindingID)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_RootSequence);
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_InObjectBindingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMovieSceneBindingProxy*)Z_Param__Result=UMovieSceneSequenceExtensions::ResolveBindingID(Z_Param_RootSequence,Z_Param_InObjectBindingID);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function ResolveBindingID

// Begin Class UMovieSceneSequenceExtensions Function SetClockSource
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics
{
	struct MovieSceneSequenceExtensions_eventSetClockSource_Parms
	{
		UMovieSceneSequence* InSequence;
		EUpdateClockSource InClockSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the clock source for this sequence\n\x09 *\n\x09 * @param Sequence The sequence within which to set the clock source\n\x09 * @param InClockSource The clock source to set for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the clock source for this sequence\n\n@param Sequence The sequence within which to set the clock source\n@param InClockSource The clock source to set for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InClockSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InClockSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetClockSource_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InClockSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InClockSource = { "InClockSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetClockSource_Parms, InClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(0, nullptr) }; // 2266554604
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InClockSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::NewProp_InClockSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetClockSource", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::MovieSceneSequenceExtensions_eventSetClockSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::MovieSceneSequenceExtensions_eventSetClockSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetClockSource)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_GET_ENUM(EUpdateClockSource,Z_Param_InClockSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetClockSource(Z_Param_InSequence,EUpdateClockSource(Z_Param_InClockSource));
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetClockSource

// Begin Class UMovieSceneSequenceExtensions Function SetDisplayRate
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct MovieSceneSequenceExtensions_eventSetDisplayRate_Parms
	{
		UMovieSceneSequence* Sequence;
		FFrameRate DisplayRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Sets this sequence's display rate\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param DisplayRate The display rate that this sequence is displayed as\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets this sequence's display rate\n\n@param Sequence        The sequence to use\n@param DisplayRate The display rate that this sequence is displayed as" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetDisplayRate_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::NewProp_DisplayRate = { "DisplayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetDisplayRate_Parms, DisplayRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::NewProp_DisplayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetDisplayRate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::MovieSceneSequenceExtensions_eventSetDisplayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::MovieSceneSequenceExtensions_eventSetDisplayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetDisplayRate)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT(FFrameRate,Z_Param_DisplayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetDisplayRate(Z_Param_Sequence,Z_Param_DisplayRate);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetDisplayRate

// Begin Class UMovieSceneSequenceExtensions Function SetEvaluationType
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics
{
	struct MovieSceneSequenceExtensions_eventSetEvaluationType_Parms
	{
		UMovieSceneSequence* InSequence;
		EMovieSceneEvaluationType InEvaluationType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the evaluation type for this sequence\n\x09 *\n\x09 * @param Sequence The sequence within which to set the evaluation type\n\x09 * @param InEvaluationType The evaluation type to set for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the evaluation type for this sequence\n\n@param Sequence The sequence within which to set the evaluation type\n@param InEvaluationType The evaluation type to set for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InEvaluationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InEvaluationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetEvaluationType_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InEvaluationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InEvaluationType = { "InEvaluationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetEvaluationType_Parms, InEvaluationType), Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, METADATA_PARAMS(0, nullptr) }; // 3725280040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InEvaluationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::NewProp_InEvaluationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetEvaluationType", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::MovieSceneSequenceExtensions_eventSetEvaluationType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::MovieSceneSequenceExtensions_eventSetEvaluationType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetEvaluationType)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_GET_ENUM(EMovieSceneEvaluationType,Z_Param_InEvaluationType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetEvaluationType(Z_Param_InSequence,EMovieSceneEvaluationType(Z_Param_InEvaluationType));
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetEvaluationType

// Begin Class UMovieSceneSequenceExtensions Function SetMarkedFrame
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics
{
	struct MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms
	{
		UMovieSceneSequence* Sequence;
		int32 InMarkIndex;
		FFrameNumber InFrameNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SetMarkedFrame is deprecated. Please use SetMarkedFrame that takes a time unit instead" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMarkIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_InMarkIndex = { "InMarkIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms, InMarkIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_InMarkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::NewProp_InFrameNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetMarkedFrame", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::MovieSceneSequenceExtensions_eventSetMarkedFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetMarkedFrame)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMarkIndex);
	P_GET_STRUCT(FFrameNumber,Z_Param_InFrameNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetMarkedFrame(Z_Param_Sequence,Z_Param_InMarkIndex,Z_Param_InFrameNumber);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetMarkedFrame

// Begin Class UMovieSceneSequenceExtensions Function SetMarkedFrameInSequence
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics
{
	struct MovieSceneSequenceExtensions_eventSetMarkedFrameInSequence_Parms
	{
		UMovieSceneSequence* Sequence;
		int32 InMarkIndex;
		FFrameNumber InFrameNumber;
		EMovieSceneTimeUnit TimeUnit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Sets the frame number for the given marked frame index. Does not maintain sort. Call SortMarkedFrames\n\x09 *\n\x09 * @InMarkIndex The given user marked frame index to edit\n\x09 * @InFrameNumber The frame number to set\n\x09 */" },
		{ "CPP_Default_TimeUnit", "DisplayRate" },
		{ "DisplayName", "Set Marked Frame" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Sets the frame number for the given marked frame index. Does not maintain sort. Call SortMarkedFrames\n*\n* @InMarkIndex The given user marked frame index to edit\n* @InFrameNumber The frame number to set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMarkIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TimeUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TimeUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrameInSequence_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_InMarkIndex = { "InMarkIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrameInSequence_Parms, InMarkIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_InFrameNumber = { "InFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrameInSequence_Parms, InFrameNumber), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_TimeUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_TimeUnit = { "TimeUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFrameInSequence_Parms, TimeUnit), Z_Construct_UEnum_MovieScene_EMovieSceneTimeUnit, METADATA_PARAMS(0, nullptr) }; // 4120247350
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_InMarkIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_InFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_TimeUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::NewProp_TimeUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetMarkedFrameInSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::MovieSceneSequenceExtensions_eventSetMarkedFrameInSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::MovieSceneSequenceExtensions_eventSetMarkedFrameInSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetMarkedFrameInSequence)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMarkIndex);
	P_GET_STRUCT(FFrameNumber,Z_Param_InFrameNumber);
	P_GET_ENUM(EMovieSceneTimeUnit,Z_Param_TimeUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetMarkedFrameInSequence(Z_Param_Sequence,Z_Param_InMarkIndex,Z_Param_InFrameNumber,EMovieSceneTimeUnit(Z_Param_TimeUnit));
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetMarkedFrameInSequence

// Begin Class UMovieSceneSequenceExtensions Function SetMarkedFramesLocked
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics
{
	struct MovieSceneSequenceExtensions_eventSetMarkedFramesLocked_Parms
	{
		UMovieSceneSequence* Sequence;
		bool bInLocked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Set marked frames locked\n\x09 *\n\x09 * @bInLocked Whether the movie scene marked frames should be locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Set marked frames locked\n*\n* @bInLocked Whether the movie scene marked frames should be locked" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static void NewProp_bInLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetMarkedFramesLocked_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::NewProp_bInLocked_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventSetMarkedFramesLocked_Parms*)Obj)->bInLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::NewProp_bInLocked = { "bInLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventSetMarkedFramesLocked_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::NewProp_bInLocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::NewProp_bInLocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetMarkedFramesLocked", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::MovieSceneSequenceExtensions_eventSetMarkedFramesLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::MovieSceneSequenceExtensions_eventSetMarkedFramesLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetMarkedFramesLocked)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_UBOOL(Z_Param_bInLocked);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetMarkedFramesLocked(Z_Param_Sequence,Z_Param_bInLocked);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetMarkedFramesLocked

// Begin Class UMovieSceneSequenceExtensions Function SetPlaybackEnd
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics
{
	struct MovieSceneSequenceExtensions_eventSetPlaybackEnd_Parms
	{
		UMovieSceneSequence* Sequence;
		int32 EndFrame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set playback end of this sequence\n\x09 *\n\x09 * @param Sequence        The sequence within which to set the playback end\n\x09 * @param EndFrame        The desired end frame for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set playback end of this sequence\n\n@param Sequence        The sequence within which to set the playback end\n@param EndFrame        The desired end frame for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackEnd_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackEnd_Parms, EndFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::NewProp_EndFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetPlaybackEnd", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::MovieSceneSequenceExtensions_eventSetPlaybackEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::MovieSceneSequenceExtensions_eventSetPlaybackEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetPlaybackEnd)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetPlaybackEnd(Z_Param_Sequence,Z_Param_EndFrame);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetPlaybackEnd

// Begin Class UMovieSceneSequenceExtensions Function SetPlaybackEndSeconds
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics
{
	struct MovieSceneSequenceExtensions_eventSetPlaybackEndSeconds_Parms
	{
		UMovieSceneSequence* Sequence;
		float EndTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set playback end of this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to set the playback end\n\x09 * @param EndTime         The desired end time in seconds for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set playback end of this sequence in seconds\n\n@param Sequence        The sequence within which to set the playback end\n@param EndTime         The desired end time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackEndSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackEndSeconds_Parms, EndTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::NewProp_EndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetPlaybackEndSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::MovieSceneSequenceExtensions_eventSetPlaybackEndSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::MovieSceneSequenceExtensions_eventSetPlaybackEndSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetPlaybackEndSeconds)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(Z_Param_Sequence,Z_Param_EndTime);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetPlaybackEndSeconds

// Begin Class UMovieSceneSequenceExtensions Function SetPlaybackRangeLocked
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics
{
	struct MovieSceneSequenceExtensions_eventSetPlaybackRangeLocked_Parms
	{
		UMovieSceneSequence* Sequence;
		bool bInLocked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Set playback range locked\n\x09 *\n\x09 * @bInLocked Whether the movie scene playback range should be locked\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Set playback range locked\n*\n* @bInLocked Whether the movie scene playback range should be locked" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static void NewProp_bInLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackRangeLocked_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::NewProp_bInLocked_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventSetPlaybackRangeLocked_Parms*)Obj)->bInLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::NewProp_bInLocked = { "bInLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventSetPlaybackRangeLocked_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::NewProp_bInLocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::NewProp_bInLocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetPlaybackRangeLocked", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::MovieSceneSequenceExtensions_eventSetPlaybackRangeLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::MovieSceneSequenceExtensions_eventSetPlaybackRangeLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetPlaybackRangeLocked)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_UBOOL(Z_Param_bInLocked);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetPlaybackRangeLocked(Z_Param_Sequence,Z_Param_bInLocked);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetPlaybackRangeLocked

// Begin Class UMovieSceneSequenceExtensions Function SetPlaybackStart
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics
{
	struct MovieSceneSequenceExtensions_eventSetPlaybackStart_Parms
	{
		UMovieSceneSequence* Sequence;
		int32 StartFrame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set playback start of this sequence\n\x09 *\n\x09 * @param Sequence        The sequence within which to set the playback start\n\x09 * @param StartFrame      The desired start frame for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set playback start of this sequence\n\n@param Sequence        The sequence within which to set the playback start\n@param StartFrame      The desired start frame for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackStart_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackStart_Parms, StartFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::NewProp_StartFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetPlaybackStart", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::MovieSceneSequenceExtensions_eventSetPlaybackStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::MovieSceneSequenceExtensions_eventSetPlaybackStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetPlaybackStart)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetPlaybackStart(Z_Param_Sequence,Z_Param_StartFrame);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetPlaybackStart

// Begin Class UMovieSceneSequenceExtensions Function SetPlaybackStartSeconds
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics
{
	struct MovieSceneSequenceExtensions_eventSetPlaybackStartSeconds_Parms
	{
		UMovieSceneSequence* Sequence;
		float StartTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set playback start of this sequence in seconds\n\x09 *\n\x09 * @param Sequence        The sequence within which to set the playback start\n\x09 * @param StartTime       The desired start time in seconds for this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set playback start of this sequence in seconds\n\n@param Sequence        The sequence within which to set the playback start\n@param StartTime       The desired start time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackStartSeconds_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetPlaybackStartSeconds_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::NewProp_StartTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetPlaybackStartSeconds", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::MovieSceneSequenceExtensions_eventSetPlaybackStartSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::MovieSceneSequenceExtensions_eventSetPlaybackStartSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetPlaybackStartSeconds)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(Z_Param_Sequence,Z_Param_StartTime);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetPlaybackStartSeconds

// Begin Class UMovieSceneSequenceExtensions Function SetReadOnly
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics
{
	struct MovieSceneSequenceExtensions_eventSetReadOnly_Parms
	{
		UMovieSceneSequence* Sequence;
		bool bInReadOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Set read only\n\x09 *\n\x09 * @bInReadOnly Whether the movie scene should be read only or not\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Set read only\n*\n* @bInReadOnly Whether the movie scene should be read only or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static void NewProp_bInReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReadOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetReadOnly_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_bInReadOnly_SetBit(void* Obj)
{
	((MovieSceneSequenceExtensions_eventSetReadOnly_Parms*)Obj)->bInReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_bInReadOnly = { "bInReadOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequenceExtensions_eventSetReadOnly_Parms), &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_bInReadOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::NewProp_bInReadOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetReadOnly", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::MovieSceneSequenceExtensions_eventSetReadOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::MovieSceneSequenceExtensions_eventSetReadOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetReadOnly)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_UBOOL(Z_Param_bInReadOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetReadOnly(Z_Param_Sequence,Z_Param_bInReadOnly);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetReadOnly

// Begin Class UMovieSceneSequenceExtensions Function SetTickResolution
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct MovieSceneSequenceExtensions_eventSetTickResolution_Parms
	{
		UMovieSceneSequence* Sequence;
		FFrameRate TickResolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Sets this sequence's tick resolution and migrates frame times\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TickResolution The tick resolution of the sequence, defining the smallest unit of time representable on this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets this sequence's tick resolution and migrates frame times\n\n@param Sequence        The sequence to use\n@param TickResolution The tick resolution of the sequence, defining the smallest unit of time representable on this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetTickResolution_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetTickResolution_Parms, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::NewProp_TickResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetTickResolution", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::MovieSceneSequenceExtensions_eventSetTickResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::MovieSceneSequenceExtensions_eventSetTickResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetTickResolution)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT(FFrameRate,Z_Param_TickResolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetTickResolution(Z_Param_Sequence,Z_Param_TickResolution);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetTickResolution

// Begin Class UMovieSceneSequenceExtensions Function SetTickResolutionDirectly
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct MovieSceneSequenceExtensions_eventSetTickResolutionDirectly_Parms
	{
		UMovieSceneSequence* Sequence;
		FFrameRate TickResolution;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Sets this sequence's tick resolution directly without migrating frame times\n\x09 *\n\x09 * @param Sequence        The sequence to use\n\x09 * @param TickResolution The tick resolution of the sequence, defining the smallest unit of time representable on this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets this sequence's tick resolution directly without migrating frame times\n\n@param Sequence        The sequence to use\n@param TickResolution The tick resolution of the sequence, defining the smallest unit of time representable on this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetTickResolutionDirectly_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetTickResolutionDirectly_Parms, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::NewProp_TickResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetTickResolutionDirectly", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::MovieSceneSequenceExtensions_eventSetTickResolutionDirectly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::MovieSceneSequenceExtensions_eventSetTickResolutionDirectly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetTickResolutionDirectly)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_GET_STRUCT(FFrameRate,Z_Param_TickResolution);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetTickResolutionDirectly(Z_Param_Sequence,Z_Param_TickResolution);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetTickResolutionDirectly

// Begin Class UMovieSceneSequenceExtensions Function SetViewRangeEnd
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics
{
	struct MovieSceneSequenceExtensions_eventSetViewRangeEnd_Parms
	{
		UMovieSceneSequence* InSequence;
		double EndTimeInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the sequence view range end in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to set the view range end\n\x09 * @param StartTimeInSeconds The desired view range end time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sequence view range end in seconds\n\n@param Sequence The sequence within which to set the view range end\n@param StartTimeInSeconds The desired view range end time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndTimeInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetViewRangeEnd_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::NewProp_EndTimeInSeconds = { "EndTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetViewRangeEnd_Parms, EndTimeInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::NewProp_EndTimeInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetViewRangeEnd", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::MovieSceneSequenceExtensions_eventSetViewRangeEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::MovieSceneSequenceExtensions_eventSetViewRangeEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetViewRangeEnd)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_EndTimeInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetViewRangeEnd(Z_Param_InSequence,Z_Param_EndTimeInSeconds);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetViewRangeEnd

// Begin Class UMovieSceneSequenceExtensions Function SetViewRangeStart
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics
{
	struct MovieSceneSequenceExtensions_eventSetViewRangeStart_Parms
	{
		UMovieSceneSequence* InSequence;
		double StartTimeInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the sequence view range start in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to set the view range start\n\x09 * @param StartTimeInSeconds The desired view range start time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sequence view range start in seconds\n\n@param Sequence The sequence within which to set the view range start\n@param StartTimeInSeconds The desired view range start time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartTimeInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetViewRangeStart_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::NewProp_StartTimeInSeconds = { "StartTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetViewRangeStart_Parms, StartTimeInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::NewProp_StartTimeInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetViewRangeStart", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::MovieSceneSequenceExtensions_eventSetViewRangeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::MovieSceneSequenceExtensions_eventSetViewRangeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetViewRangeStart)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_StartTimeInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetViewRangeStart(Z_Param_InSequence,Z_Param_StartTimeInSeconds);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetViewRangeStart

// Begin Class UMovieSceneSequenceExtensions Function SetWorkRangeEnd
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics
{
	struct MovieSceneSequenceExtensions_eventSetWorkRangeEnd_Parms
	{
		UMovieSceneSequence* InSequence;
		double EndTimeInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the sequence work range end in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to set the work range end\n\x09 * @param StartTimeInSeconds The desired work range end time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sequence work range end in seconds\n\n@param Sequence The sequence within which to set the work range end\n@param StartTimeInSeconds The desired work range end time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndTimeInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetWorkRangeEnd_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::NewProp_EndTimeInSeconds = { "EndTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetWorkRangeEnd_Parms, EndTimeInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::NewProp_EndTimeInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetWorkRangeEnd", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::MovieSceneSequenceExtensions_eventSetWorkRangeEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::MovieSceneSequenceExtensions_eventSetWorkRangeEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetWorkRangeEnd)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_EndTimeInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetWorkRangeEnd(Z_Param_InSequence,Z_Param_EndTimeInSeconds);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetWorkRangeEnd

// Begin Class UMovieSceneSequenceExtensions Function SetWorkRangeStart
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics
{
	struct MovieSceneSequenceExtensions_eventSetWorkRangeStart_Parms
	{
		UMovieSceneSequence* InSequence;
		double StartTimeInSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the sequence work range start in seconds\n\x09 *\n\x09 * @param Sequence The sequence within which to set the work range start\n\x09 * @param StartTimeInSeconds The desired work range start time in seconds for this sequence\n\x09 */" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the sequence work range start in seconds\n\n@param Sequence The sequence within which to set the work range start\n@param StartTimeInSeconds The desired work range start time in seconds for this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartTimeInSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetWorkRangeStart_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::NewProp_StartTimeInSeconds = { "StartTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSetWorkRangeStart_Parms, StartTimeInSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::NewProp_InSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::NewProp_StartTimeInSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SetWorkRangeStart", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::MovieSceneSequenceExtensions_eventSetWorkRangeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::MovieSceneSequenceExtensions_eventSetWorkRangeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSetWorkRangeStart)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_StartTimeInSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SetWorkRangeStart(Z_Param_InSequence,Z_Param_StartTimeInSeconds);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SetWorkRangeStart

// Begin Class UMovieSceneSequenceExtensions Function SortMarkedFrames
struct Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics
{
	struct MovieSceneSequenceExtensions_eventSortMarkedFrames_Parms
	{
		UMovieSceneSequence* Sequence;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/*\n\x09 * Sort the marked frames in chronological order\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "* Sort the marked frames in chronological order" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequenceExtensions_eventSortMarkedFrames_Parms, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::NewProp_Sequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequenceExtensions, nullptr, "SortMarkedFrames", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::MovieSceneSequenceExtensions_eventSortMarkedFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::MovieSceneSequenceExtensions_eventSortMarkedFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequenceExtensions::execSortMarkedFrames)
{
	P_GET_OBJECT(UMovieSceneSequence,Z_Param_Sequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMovieSceneSequenceExtensions::SortMarkedFrames(Z_Param_Sequence);
	P_NATIVE_END;
}
// End Class UMovieSceneSequenceExtensions Function SortMarkedFrames

// Begin Class UMovieSceneSequenceExtensions
void UMovieSceneSequenceExtensions::StaticRegisterNativesUMovieSceneSequenceExtensions()
{
	UClass* Class = UMovieSceneSequenceExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMarkedFrame", &UMovieSceneSequenceExtensions::execAddMarkedFrame },
		{ "AddMarkedFrameToSequence", &UMovieSceneSequenceExtensions::execAddMarkedFrameToSequence },
		{ "AddMasterTrack", &UMovieSceneSequenceExtensions::execAddMasterTrack },
		{ "AddPossessable", &UMovieSceneSequenceExtensions::execAddPossessable },
		{ "AddRootFolderToSequence", &UMovieSceneSequenceExtensions::execAddRootFolderToSequence },
		{ "AddSpawnableFromClass", &UMovieSceneSequenceExtensions::execAddSpawnableFromClass },
		{ "AddSpawnableFromInstance", &UMovieSceneSequenceExtensions::execAddSpawnableFromInstance },
		{ "AddTrack", &UMovieSceneSequenceExtensions::execAddTrack },
		{ "AreMarkedFramesLocked", &UMovieSceneSequenceExtensions::execAreMarkedFramesLocked },
		{ "DeleteMarkedFrame", &UMovieSceneSequenceExtensions::execDeleteMarkedFrame },
		{ "DeleteMarkedFrames", &UMovieSceneSequenceExtensions::execDeleteMarkedFrames },
		{ "FindBindingById", &UMovieSceneSequenceExtensions::execFindBindingById },
		{ "FindBindingByName", &UMovieSceneSequenceExtensions::execFindBindingByName },
		{ "FindMarkedFrameByFrameNumber", &UMovieSceneSequenceExtensions::execFindMarkedFrameByFrameNumber },
		{ "FindMarkedFrameByFrameNumberInSequence", &UMovieSceneSequenceExtensions::execFindMarkedFrameByFrameNumberInSequence },
		{ "FindMarkedFrameByLabel", &UMovieSceneSequenceExtensions::execFindMarkedFrameByLabel },
		{ "FindMasterTracksByExactType", &UMovieSceneSequenceExtensions::execFindMasterTracksByExactType },
		{ "FindMasterTracksByType", &UMovieSceneSequenceExtensions::execFindMasterTracksByType },
		{ "FindNextMarkedFrame", &UMovieSceneSequenceExtensions::execFindNextMarkedFrame },
		{ "FindNextMarkedFrameInSequence", &UMovieSceneSequenceExtensions::execFindNextMarkedFrameInSequence },
		{ "FindTracksByExactType", &UMovieSceneSequenceExtensions::execFindTracksByExactType },
		{ "FindTracksByType", &UMovieSceneSequenceExtensions::execFindTracksByType },
		{ "GetBindingID", &UMovieSceneSequenceExtensions::execGetBindingID },
		{ "GetBindings", &UMovieSceneSequenceExtensions::execGetBindings },
		{ "GetClockSource", &UMovieSceneSequenceExtensions::execGetClockSource },
		{ "GetDisplayRate", &UMovieSceneSequenceExtensions::execGetDisplayRate },
		{ "GetEvaluationType", &UMovieSceneSequenceExtensions::execGetEvaluationType },
		{ "GetMarkedFrames", &UMovieSceneSequenceExtensions::execGetMarkedFrames },
		{ "GetMarkedFramesFromSequence", &UMovieSceneSequenceExtensions::execGetMarkedFramesFromSequence },
		{ "GetMasterTracks", &UMovieSceneSequenceExtensions::execGetMasterTracks },
		{ "GetMovieScene", &UMovieSceneSequenceExtensions::execGetMovieScene },
		{ "GetPlaybackEnd", &UMovieSceneSequenceExtensions::execGetPlaybackEnd },
		{ "GetPlaybackEndSeconds", &UMovieSceneSequenceExtensions::execGetPlaybackEndSeconds },
		{ "GetPlaybackRange", &UMovieSceneSequenceExtensions::execGetPlaybackRange },
		{ "GetPlaybackStart", &UMovieSceneSequenceExtensions::execGetPlaybackStart },
		{ "GetPlaybackStartSeconds", &UMovieSceneSequenceExtensions::execGetPlaybackStartSeconds },
		{ "GetPortableBindingID", &UMovieSceneSequenceExtensions::execGetPortableBindingID },
		{ "GetPossessables", &UMovieSceneSequenceExtensions::execGetPossessables },
		{ "GetRootFoldersInSequence", &UMovieSceneSequenceExtensions::execGetRootFoldersInSequence },
		{ "GetSpawnables", &UMovieSceneSequenceExtensions::execGetSpawnables },
		{ "GetTickResolution", &UMovieSceneSequenceExtensions::execGetTickResolution },
		{ "GetTracks", &UMovieSceneSequenceExtensions::execGetTracks },
		{ "GetViewRangeEnd", &UMovieSceneSequenceExtensions::execGetViewRangeEnd },
		{ "GetViewRangeStart", &UMovieSceneSequenceExtensions::execGetViewRangeStart },
		{ "GetWorkRangeEnd", &UMovieSceneSequenceExtensions::execGetWorkRangeEnd },
		{ "GetWorkRangeStart", &UMovieSceneSequenceExtensions::execGetWorkRangeStart },
		{ "IsPlaybackRangeLocked", &UMovieSceneSequenceExtensions::execIsPlaybackRangeLocked },
		{ "IsReadOnly", &UMovieSceneSequenceExtensions::execIsReadOnly },
		{ "LocateBoundObjects", &UMovieSceneSequenceExtensions::execLocateBoundObjects },
		{ "MakeRange", &UMovieSceneSequenceExtensions::execMakeRange },
		{ "MakeRangeSeconds", &UMovieSceneSequenceExtensions::execMakeRangeSeconds },
		{ "RemoveMasterTrack", &UMovieSceneSequenceExtensions::execRemoveMasterTrack },
		{ "RemoveRootFolderFromSequence", &UMovieSceneSequenceExtensions::execRemoveRootFolderFromSequence },
		{ "RemoveTrack", &UMovieSceneSequenceExtensions::execRemoveTrack },
		{ "ResolveBindingID", &UMovieSceneSequenceExtensions::execResolveBindingID },
		{ "SetClockSource", &UMovieSceneSequenceExtensions::execSetClockSource },
		{ "SetDisplayRate", &UMovieSceneSequenceExtensions::execSetDisplayRate },
		{ "SetEvaluationType", &UMovieSceneSequenceExtensions::execSetEvaluationType },
		{ "SetMarkedFrame", &UMovieSceneSequenceExtensions::execSetMarkedFrame },
		{ "SetMarkedFrameInSequence", &UMovieSceneSequenceExtensions::execSetMarkedFrameInSequence },
		{ "SetMarkedFramesLocked", &UMovieSceneSequenceExtensions::execSetMarkedFramesLocked },
		{ "SetPlaybackEnd", &UMovieSceneSequenceExtensions::execSetPlaybackEnd },
		{ "SetPlaybackEndSeconds", &UMovieSceneSequenceExtensions::execSetPlaybackEndSeconds },
		{ "SetPlaybackRangeLocked", &UMovieSceneSequenceExtensions::execSetPlaybackRangeLocked },
		{ "SetPlaybackStart", &UMovieSceneSequenceExtensions::execSetPlaybackStart },
		{ "SetPlaybackStartSeconds", &UMovieSceneSequenceExtensions::execSetPlaybackStartSeconds },
		{ "SetReadOnly", &UMovieSceneSequenceExtensions::execSetReadOnly },
		{ "SetTickResolution", &UMovieSceneSequenceExtensions::execSetTickResolution },
		{ "SetTickResolutionDirectly", &UMovieSceneSequenceExtensions::execSetTickResolutionDirectly },
		{ "SetViewRangeEnd", &UMovieSceneSequenceExtensions::execSetViewRangeEnd },
		{ "SetViewRangeStart", &UMovieSceneSequenceExtensions::execSetViewRangeStart },
		{ "SetWorkRangeEnd", &UMovieSceneSequenceExtensions::execSetWorkRangeEnd },
		{ "SetWorkRangeStart", &UMovieSceneSequenceExtensions::execSetWorkRangeStart },
		{ "SortMarkedFrames", &UMovieSceneSequenceExtensions::execSortMarkedFrames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequenceExtensions);
UClass* Z_Construct_UClass_UMovieSceneSequenceExtensions_NoRegister()
{
	return UMovieSceneSequenceExtensions::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto UMovieSceneSequences for scripting purposes\n */" },
		{ "IncludePath", "ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/MovieSceneSequenceExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto UMovieSceneSequences for scripting purposes" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrame, "AddMarkedFrame" }, // 311024265
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMarkedFrameToSequence, "AddMarkedFrameToSequence" }, // 1252299514
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddMasterTrack, "AddMasterTrack" }, // 1462384496
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddPossessable, "AddPossessable" }, // 2464227514
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddRootFolderToSequence, "AddRootFolderToSequence" }, // 416523848
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromClass, "AddSpawnableFromClass" }, // 2866702386
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddSpawnableFromInstance, "AddSpawnableFromInstance" }, // 3617117420
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AddTrack, "AddTrack" }, // 2507634598
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_AreMarkedFramesLocked, "AreMarkedFramesLocked" }, // 3912416827
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrame, "DeleteMarkedFrame" }, // 1786354657
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_DeleteMarkedFrames, "DeleteMarkedFrames" }, // 2380505073
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingById, "FindBindingById" }, // 3079413500
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindBindingByName, "FindBindingByName" }, // 2859729655
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber, "FindMarkedFrameByFrameNumber" }, // 1727676581
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByFrameNumberInSequence, "FindMarkedFrameByFrameNumberInSequence" }, // 4200629296
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMarkedFrameByLabel, "FindMarkedFrameByLabel" }, // 3865344412
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByExactType, "FindMasterTracksByExactType" }, // 2013934593
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindMasterTracksByType, "FindMasterTracksByType" }, // 2134462728
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrame, "FindNextMarkedFrame" }, // 3315839223
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindNextMarkedFrameInSequence, "FindNextMarkedFrameInSequence" }, // 1911260258
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByExactType, "FindTracksByExactType" }, // 4234035822
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_FindTracksByType, "FindTracksByType" }, // 3394037211
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindingID, "GetBindingID" }, // 3454966156
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetBindings, "GetBindings" }, // 123432441
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetClockSource, "GetClockSource" }, // 547128504
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetDisplayRate, "GetDisplayRate" }, // 3484911114
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetEvaluationType, "GetEvaluationType" }, // 3489267740
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFrames, "GetMarkedFrames" }, // 4024169535
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMarkedFramesFromSequence, "GetMarkedFramesFromSequence" }, // 3212562278
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMasterTracks, "GetMasterTracks" }, // 830262421
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetMovieScene, "GetMovieScene" }, // 1089237274
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEnd, "GetPlaybackEnd" }, // 441189374
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackEndSeconds, "GetPlaybackEndSeconds" }, // 3526494569
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackRange, "GetPlaybackRange" }, // 1082454211
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStart, "GetPlaybackStart" }, // 2147646282
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPlaybackStartSeconds, "GetPlaybackStartSeconds" }, // 153669785
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPortableBindingID, "GetPortableBindingID" }, // 1162459401
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetPossessables, "GetPossessables" }, // 2995063049
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetRootFoldersInSequence, "GetRootFoldersInSequence" }, // 1104751757
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetSpawnables, "GetSpawnables" }, // 3984892992
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTickResolution, "GetTickResolution" }, // 387228313
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetTracks, "GetTracks" }, // 2542566486
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeEnd, "GetViewRangeEnd" }, // 2417876392
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetViewRangeStart, "GetViewRangeStart" }, // 2111107416
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeEnd, "GetWorkRangeEnd" }, // 2956954564
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_GetWorkRangeStart, "GetWorkRangeStart" }, // 1025383636
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsPlaybackRangeLocked, "IsPlaybackRangeLocked" }, // 2003260210
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_IsReadOnly, "IsReadOnly" }, // 2473137927
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_LocateBoundObjects, "LocateBoundObjects" }, // 1472929298
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRange, "MakeRange" }, // 3218870295
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_MakeRangeSeconds, "MakeRangeSeconds" }, // 1859032718
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveMasterTrack, "RemoveMasterTrack" }, // 2749279765
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveRootFolderFromSequence, "RemoveRootFolderFromSequence" }, // 3046250823
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_RemoveTrack, "RemoveTrack" }, // 3194335324
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_ResolveBindingID, "ResolveBindingID" }, // 3866274666
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetClockSource, "SetClockSource" }, // 4073819681
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetDisplayRate, "SetDisplayRate" }, // 241542089
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetEvaluationType, "SetEvaluationType" }, // 1280926825
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrame, "SetMarkedFrame" }, // 2647036610
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFrameInSequence, "SetMarkedFrameInSequence" }, // 2737458153
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetMarkedFramesLocked, "SetMarkedFramesLocked" }, // 2264185434
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEnd, "SetPlaybackEnd" }, // 466815828
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackEndSeconds, "SetPlaybackEndSeconds" }, // 3874721302
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackRangeLocked, "SetPlaybackRangeLocked" }, // 3675305339
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStart, "SetPlaybackStart" }, // 1036568092
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetPlaybackStartSeconds, "SetPlaybackStartSeconds" }, // 1516827504
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetReadOnly, "SetReadOnly" }, // 1811437177
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolution, "SetTickResolution" }, // 444857247
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetTickResolutionDirectly, "SetTickResolutionDirectly" }, // 1400878632
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeEnd, "SetViewRangeEnd" }, // 863003625
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetViewRangeStart, "SetViewRangeStart" }, // 1965103553
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeEnd, "SetWorkRangeEnd" }, // 1935685354
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SetWorkRangeStart, "SetWorkRangeStart" }, // 2498017480
		{ &Z_Construct_UFunction_UMovieSceneSequenceExtensions_SortMarkedFrames, "SortMarkedFrames" }, // 879896164
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequenceExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::ClassParams = {
	&UMovieSceneSequenceExtensions::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSequenceExtensions()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.OuterSingleton, Z_Construct_UClass_UMovieSceneSequenceExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSequenceExtensions.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneSequenceExtensions>()
{
	return UMovieSceneSequenceExtensions::StaticClass();
}
UMovieSceneSequenceExtensions::UMovieSceneSequenceExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequenceExtensions);
UMovieSceneSequenceExtensions::~UMovieSceneSequenceExtensions() {}
// End Class UMovieSceneSequenceExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSequenceExtensions, UMovieSceneSequenceExtensions::StaticClass, TEXT("UMovieSceneSequenceExtensions"), &Z_Registration_Info_UClass_UMovieSceneSequenceExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequenceExtensions), 326492166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_156206185(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieSceneSequenceExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
