// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/MovieSceneSequencePlaybackSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequencePlayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayerObserver_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePositionType();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdatePositionMethod();
MOVIESCENE_API UFunction* Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin Delegate FOnMovieSceneSequencePlayerEvent
struct Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MovieScene, nullptr, "OnMovieSceneSequencePlayerEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMovieSceneSequencePlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMovieSceneSequencePlayerEvent)
{
	OnMovieSceneSequencePlayerEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnMovieSceneSequencePlayerEvent

// Begin Enum EUpdatePositionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdatePositionMethod;
static UEnum* EUpdatePositionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EUpdatePositionMethod"));
	}
	return Z_Registration_Info_UEnum_EUpdatePositionMethod.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EUpdatePositionMethod>()
{
	return EUpdatePositionMethod_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum used to define how to update to a particular time\n */" },
		{ "Jump.Comment", "/** Jump to a specified position (without triggering events in between), using the current player status */" },
		{ "Jump.Name", "EUpdatePositionMethod::Jump" },
		{ "Jump.ToolTip", "Jump to a specified position (without triggering events in between), using the current player status" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "Play.Comment", "/** Update from the current position to a specified position (including triggering events), using the current player status */" },
		{ "Play.Name", "EUpdatePositionMethod::Play" },
		{ "Play.ToolTip", "Update from the current position to a specified position (including triggering events), using the current player status" },
		{ "Scrub.Comment", "/** Jump to a specified position, temporarily using EMovieScenePlayerStatus::Scrubbing */" },
		{ "Scrub.Name", "EUpdatePositionMethod::Scrub" },
		{ "Scrub.ToolTip", "Jump to a specified position, temporarily using EMovieScenePlayerStatus::Scrubbing" },
		{ "ToolTip", "Enum used to define how to update to a particular time" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpdatePositionMethod::Play", (int64)EUpdatePositionMethod::Play },
		{ "EUpdatePositionMethod::Jump", (int64)EUpdatePositionMethod::Jump },
		{ "EUpdatePositionMethod::Scrub", (int64)EUpdatePositionMethod::Scrub },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EUpdatePositionMethod",
	"EUpdatePositionMethod",
	Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EUpdatePositionMethod()
{
	if (!Z_Registration_Info_UEnum_EUpdatePositionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdatePositionMethod.InnerSingleton, Z_Construct_UEnum_MovieScene_EUpdatePositionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUpdatePositionMethod.InnerSingleton;
}
// End Enum EUpdatePositionMethod

// Begin ScriptStruct FMovieSceneSequenceReplProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties;
class UScriptStruct* FMovieSceneSequenceReplProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceReplProperties"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceReplProperties>()
{
	return FMovieSceneSequenceReplProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties that are broadcast from server->clients for time/state synchronization\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Properties that are broadcast from server->clients for time/state synchronization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownPosition_MetaData[] = {
		{ "Comment", "/** The last known position of the sequence on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known position of the sequence on the server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownStatus_MetaData[] = {
		{ "Comment", "/** The last known playback status of the sequence on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known playback status of the sequence on the server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownNumLoops_MetaData[] = {
		{ "Comment", "/** The last known number of loops of the sequence on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known number of loops of the sequence on the server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastKnownSerialNumber_MetaData[] = {
		{ "Comment", "/** The last known serial number on the server */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The last known serial number on the server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastKnownPosition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LastKnownStatus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastKnownNumLoops;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastKnownSerialNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceReplProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition = { "LastKnownPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownPosition), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownPosition_MetaData), NewProp_LastKnownPosition_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus = { "LastKnownStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownStatus), Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownStatus_MetaData), NewProp_LastKnownStatus_MetaData) }; // 13852033
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops = { "LastKnownNumLoops", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownNumLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownNumLoops_MetaData), NewProp_LastKnownNumLoops_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownSerialNumber = { "LastKnownSerialNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceReplProperties, LastKnownSerialNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastKnownSerialNumber_MetaData), NewProp_LastKnownSerialNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownNumLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewProp_LastKnownSerialNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequenceReplProperties",
	Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::PropPointers),
	sizeof(FMovieSceneSequenceReplProperties),
	alignof(FMovieSceneSequenceReplProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequenceReplProperties

// Begin Enum EMovieScenePositionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieScenePositionType;
static UEnum* EMovieScenePositionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieScenePositionType, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieScenePositionType"));
	}
	return Z_Registration_Info_UEnum_EMovieScenePositionType.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieScenePositionType>()
{
	return EMovieScenePositionType_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Frame.Name", "EMovieScenePositionType::Frame" },
		{ "MarkedFrame.Name", "EMovieScenePositionType::MarkedFrame" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "Time.Name", "EMovieScenePositionType::Time" },
		{ "Timecode.Name", "EMovieScenePositionType::Timecode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieScenePositionType::Frame", (int64)EMovieScenePositionType::Frame },
		{ "EMovieScenePositionType::Time", (int64)EMovieScenePositionType::Time },
		{ "EMovieScenePositionType::MarkedFrame", (int64)EMovieScenePositionType::MarkedFrame },
		{ "EMovieScenePositionType::Timecode", (int64)EMovieScenePositionType::Timecode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieScenePositionType",
	"EMovieScenePositionType",
	Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieScenePositionType()
{
	if (!Z_Registration_Info_UEnum_EMovieScenePositionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieScenePositionType.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieScenePositionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieScenePositionType.InnerSingleton;
}
// End Enum EMovieScenePositionType

// Begin ScriptStruct FMovieSceneSequencePlaybackParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams;
class UScriptStruct* FMovieSceneSequencePlaybackParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequencePlaybackParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequencePlaybackParams>()
{
	return FMovieSceneSequencePlaybackParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::Frame" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::Time" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "unit", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkedFrame_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::MarkedFrame" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "EditCondition", "PositionType == EMovieScenePositionType::Timecode" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionType_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateMethod_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasJumped_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkedFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PositionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PositionType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMethod;
	static void NewProp_bHasJumped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasJumped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequencePlaybackParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, Frame), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame = { "MarkedFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, MarkedFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkedFrame_MetaData), NewProp_MarkedFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, Timecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timecode_MetaData), NewProp_Timecode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType = { "PositionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, PositionType), Z_Construct_UEnum_MovieScene_EMovieScenePositionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionType_MetaData), NewProp_PositionType_MetaData) }; // 2919278861
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod = { "UpdateMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackParams, UpdateMethod), Z_Construct_UEnum_MovieScene_EUpdatePositionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateMethod_MetaData), NewProp_UpdateMethod_MetaData) }; // 776222591
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackParams*)Obj)->bHasJumped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped = { "bHasJumped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneSequencePlaybackParams), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasJumped_MetaData), NewProp_bHasJumped_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_MarkedFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_Timecode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_PositionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_UpdateMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewProp_bHasJumped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequencePlaybackParams",
	Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::PropPointers),
	sizeof(FMovieSceneSequencePlaybackParams),
	alignof(FMovieSceneSequencePlaybackParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequencePlaybackParams

// Begin ScriptStruct FMovieSceneSequencePlayToParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams;
class UScriptStruct* FMovieSceneSequencePlayToParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequencePlayToParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequencePlayToParams>()
{
	return FMovieSceneSequencePlayToParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExclusive_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Should the PlayTo time be considered exclusive? Defaults to true as end frames in Sequencer are exclusive by default. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Should the PlayTo time be considered exclusive? Defaults to true as end frames in Sequencer are exclusive by default." },
	};
#endif // WITH_METADATA
	static void NewProp_bExclusive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExclusive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequencePlayToParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive_SetBit(void* Obj)
{
	((FMovieSceneSequencePlayToParams*)Obj)->bExclusive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive = { "bExclusive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneSequencePlayToParams), &Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExclusive_MetaData), NewProp_bExclusive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewProp_bExclusive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequencePlayToParams",
	Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::PropPointers),
	sizeof(FMovieSceneSequencePlayToParams),
	alignof(FMovieSceneSequencePlayToParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequencePlayToParams

// Begin Class UMovieSceneSequencePlayer Function ChangePlaybackDirection
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Changes the direction of playback (go in reverse if it was going forward, or vice versa) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Changes the direction of playback (go in reverse if it was going forward, or vice versa)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "ChangePlaybackDirection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execChangePlaybackDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangePlaybackDirection();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function ChangePlaybackDirection

// Begin Class UMovieSceneSequencePlayer Function GetBoundObjects
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics
{
	struct MovieSceneSequencePlayer_eventGetBoundObjects_Parms
	{
		FMovieSceneObjectBindingID ObjectBinding;
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Retrieve all objects currently bound to the specified binding identifier */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Retrieve all objects currently bound to the specified binding identifier" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBinding;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ObjectBinding = { "ObjectBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetBoundObjects_Parms, ObjectBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetBoundObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ObjectBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetBoundObjects", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::MovieSceneSequencePlayer_eventGetBoundObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::MovieSceneSequencePlayer_eventGetBoundObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetBoundObjects)
{
	P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetBoundObjects(Z_Param_ObjectBinding);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetBoundObjects

// Begin Class UMovieSceneSequencePlayer Function GetCompletionModeOverride
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics
{
	struct MovieSceneSequencePlayer_eventGetCompletionModeOverride_Parms
	{
		EMovieSceneCompletionModeOverride ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/** Get the state of the completion mode override */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the state of the completion mode override" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetCompletionModeOverride_Parms, ReturnValue), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride, METADATA_PARAMS(0, nullptr) }; // 2667170200
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetCompletionModeOverride", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::MovieSceneSequencePlayer_eventGetCompletionModeOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::MovieSceneSequencePlayer_eventGetCompletionModeOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetCompletionModeOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMovieSceneCompletionModeOverride*)Z_Param__Result=P_THIS->GetCompletionModeOverride();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetCompletionModeOverride

// Begin Class UMovieSceneSequencePlayer Function GetCurrentTime
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct MovieSceneSequencePlayer_eventGetCurrentTime_Parms
	{
		FQualifiedFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the current playback position\n\x09 * @return The current playback position\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the current playback position\n@return The current playback position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetCurrentTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetCurrentTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::MovieSceneSequencePlayer_eventGetCurrentTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::MovieSceneSequencePlayer_eventGetCurrentTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetCurrentTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetCurrentTime();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetCurrentTime

// Begin Class UMovieSceneSequencePlayer Function GetDisableCameraCuts
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics
{
	struct MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Set whether to disable camera cuts */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set whether to disable camera cuts" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetDisableCameraCuts", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::MovieSceneSequencePlayer_eventGetDisableCameraCuts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetDisableCameraCuts)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDisableCameraCuts();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetDisableCameraCuts

// Begin Class UMovieSceneSequencePlayer Function GetDuration
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct MovieSceneSequencePlayer_eventGetDuration_Parms
	{
		FQualifiedFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the total duration of the sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the total duration of the sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::MovieSceneSequencePlayer_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::MovieSceneSequencePlayer_eventGetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetDuration();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetDuration

// Begin Class UMovieSceneSequencePlayer Function GetEndTime
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct MovieSceneSequencePlayer_eventGetEndTime_Parms
	{
		FQualifiedFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the offset within the level sequence to finish playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the offset within the level sequence to finish playing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetEndTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetEndTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::MovieSceneSequencePlayer_eventGetEndTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::MovieSceneSequencePlayer_eventGetEndTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetEndTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetEndTime();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetEndTime

// Begin Class UMovieSceneSequencePlayer Function GetFrameDuration
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics
{
	struct MovieSceneSequencePlayer_eventGetFrameDuration_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get this sequence's duration in frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get this sequence's duration in frames" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetFrameDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetFrameDuration", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::MovieSceneSequencePlayer_eventGetFrameDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::MovieSceneSequencePlayer_eventGetFrameDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetFrameDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFrameDuration();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetFrameDuration

// Begin Class UMovieSceneSequencePlayer Function GetFrameRate
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct MovieSceneSequencePlayer_eventGetFrameRate_Parms
	{
		FFrameRate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get this sequence's display rate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get this sequence's display rate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetFrameRate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::MovieSceneSequencePlayer_eventGetFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::MovieSceneSequencePlayer_eventGetFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetFrameRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetFrameRate

// Begin Class UMovieSceneSequencePlayer Function GetObjectBindings
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics
{
	struct MovieSceneSequencePlayer_eventGetObjectBindings_Parms
	{
		UObject* InObject;
		TArray<FMovieSceneObjectBindingID> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Get the object bindings for the requested object */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the object bindings for the requested object" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetObjectBindings_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetObjectBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_InObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetObjectBindings", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::MovieSceneSequencePlayer_eventGetObjectBindings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::MovieSceneSequencePlayer_eventGetObjectBindings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetObjectBindings)
{
	P_GET_OBJECT(UObject,Z_Param_InObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->GetObjectBindings(Z_Param_InObject);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetObjectBindings

// Begin Class UMovieSceneSequencePlayer Function GetPlayRate
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics
{
	struct MovieSceneSequencePlayer_eventGetPlayRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Get the playback rate of this player. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the playback rate of this player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::MovieSceneSequencePlayer_eventGetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::MovieSceneSequencePlayer_eventGetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetPlayRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayRate();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetPlayRate

// Begin Class UMovieSceneSequencePlayer Function GetSequence
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics
{
	struct MovieSceneSequencePlayer_eventGetSequence_Parms
	{
		UMovieSceneSequence* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Access the sequence this player is playing\n\x09 * @return the sequence currently assigned to this player\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Access the sequence this player is playing\n@return the sequence currently assigned to this player" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetSequence", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::MovieSceneSequencePlayer_eventGetSequence_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::MovieSceneSequencePlayer_eventGetSequence_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetSequence)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMovieSceneSequence**)Z_Param__Result=P_THIS->GetSequence();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetSequence

// Begin Class UMovieSceneSequencePlayer Function GetSequenceName
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics
{
	struct MovieSceneSequencePlayer_eventGetSequenceName_Parms
	{
		bool bAddClientInfo;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the name of the sequence this player is playing\n\x09 * @param bAddClientInfo  If true, add client index if running as a client\n\x09 * @return the name of the sequence, or None if no sequence is set\n\x09 */" },
		{ "CPP_Default_bAddClientInfo", "false" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the name of the sequence this player is playing\n@param bAddClientInfo  If true, add client index if running as a client\n@return the name of the sequence, or None if no sequence is set" },
	};
#endif // WITH_METADATA
	static void NewProp_bAddClientInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddClientInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_bAddClientInfo_SetBit(void* Obj)
{
	((MovieSceneSequencePlayer_eventGetSequenceName_Parms*)Obj)->bAddClientInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_bAddClientInfo = { "bAddClientInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventGetSequenceName_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_bAddClientInfo_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetSequenceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_bAddClientInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetSequenceName", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::MovieSceneSequencePlayer_eventGetSequenceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::MovieSceneSequencePlayer_eventGetSequenceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetSequenceName)
{
	P_GET_UBOOL(Z_Param_bAddClientInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSequenceName(Z_Param_bAddClientInfo);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetSequenceName

// Begin Class UMovieSceneSequencePlayer Function GetStartTime
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct FFrameTime
	{
		FFrameNumber FrameNumber;
		float SubFrame;
	};

	struct FQualifiedFrameTime
	{
		FFrameTime Time;
		FFrameRate Rate;
	};

	struct MovieSceneSequencePlayer_eventGetStartTime_Parms
	{
		FQualifiedFrameTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Get the offset within the level sequence to start playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Get the offset within the level sequence to start playing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventGetStartTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GetStartTime", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::MovieSceneSequencePlayer_eventGetStartTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::MovieSceneSequencePlayer_eventGetStartTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGetStartTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetStartTime();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GetStartTime

// Begin Class UMovieSceneSequencePlayer Function GoToEndAndStop
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Go to end of the sequence and stop. Adheres to 'When Finished' section rules." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "GoToEndAndStop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execGoToEndAndStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoToEndAndStop();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function GoToEndAndStop

// Begin Class UMovieSceneSequencePlayer Function IsPaused
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics
{
	struct MovieSceneSequencePlayer_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Check whether the sequence is paused. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Check whether the sequence is paused." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSequencePlayer_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventIsPaused_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "IsPaused", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::MovieSceneSequencePlayer_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::MovieSceneSequencePlayer_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function IsPaused

// Begin Class UMovieSceneSequencePlayer Function IsPlaying
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics
{
	struct MovieSceneSequencePlayer_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Check whether the sequence is actively playing. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Check whether the sequence is actively playing." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSequencePlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::MovieSceneSequencePlayer_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::MovieSceneSequencePlayer_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function IsPlaying

// Begin Class UMovieSceneSequencePlayer Function IsReversed
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics
{
	struct MovieSceneSequencePlayer_eventIsReversed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Check whether playback is reversed. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Check whether playback is reversed." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneSequencePlayer_eventIsReversed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventIsReversed_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "IsReversed", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::MovieSceneSequencePlayer_eventIsReversed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::MovieSceneSequencePlayer_eventIsReversed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execIsReversed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReversed();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function IsReversed

// Begin Class UMovieSceneSequencePlayer Function Pause
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Pause playback. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Pause playback." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function Pause

// Begin Class UMovieSceneSequencePlayer Function Play
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Start playback forwards from the current time cursor position, using the current play rate. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Start playback forwards from the current time cursor position, using the current play rate." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function Play

// Begin Class UMovieSceneSequencePlayer Function PlayLooping
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics
{
	struct MovieSceneSequencePlayer_eventPlayLooping_Parms
	{
		int32 NumLoops;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Start playback from the current time cursor position, looping the specified number of times.\n\x09 * @param NumLoops - The number of loops to play. -1 indicates infinite looping.\n\x09 */" },
		{ "CPP_Default_NumLoops", "-1" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Start playback from the current time cursor position, looping the specified number of times.\n@param NumLoops - The number of loops to play. -1 indicates infinite looping." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoops;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayLooping_Parms, NumLoops), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::NewProp_NumLoops,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayLooping", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::MovieSceneSequencePlayer_eventPlayLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::MovieSceneSequencePlayer_eventPlayLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayLooping)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumLoops);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayLooping(Z_Param_NumLoops);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function PlayLooping

// Begin Class UMovieSceneSequencePlayer Function PlayReverse
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Reverse playback. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Reverse playback." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayReverse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayReverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayReverse();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function PlayReverse

// Begin Class UMovieSceneSequencePlayer Function PlayTo
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics
{
	struct MovieSceneSequencePlayer_eventPlayTo_Parms
	{
		FMovieSceneSequencePlaybackParams PlaybackParams;
		FMovieSceneSequencePlayToParams PlayToParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Play from the current position to the requested position and pause. If requested position is before the current position, \n\x09 * playback will be reversed. Playback to the requested position will be cancelled if Stop() or Pause() is invoked during this \n\x09 * playback.\n\x09 *\n\x09 * @param PlaybackParams The position settings (ie. the position to play to)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Play from the current position to the requested position and pause. If requested position is before the current position,\nplayback will be reversed. Playback to the requested position will be cancelled if Stop() or Pause() is invoked during this\nplayback.\n\n@param PlaybackParams The position settings (ie. the position to play to)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayToParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlaybackParams = { "PlaybackParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayTo_Parms, PlaybackParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, METADATA_PARAMS(0, nullptr) }; // 1136563175
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlayToParams = { "PlayToParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventPlayTo_Parms, PlayToParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams, METADATA_PARAMS(0, nullptr) }; // 275168295
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlaybackParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::NewProp_PlayToParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "PlayTo", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::MovieSceneSequencePlayer_eventPlayTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::MovieSceneSequencePlayer_eventPlayTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execPlayTo)
{
	P_GET_STRUCT(FMovieSceneSequencePlaybackParams,Z_Param_PlaybackParams);
	P_GET_STRUCT(FMovieSceneSequencePlayToParams,Z_Param_PlayToParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayTo(Z_Param_PlaybackParams,Z_Param_PlayToParams);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function PlayTo

// Begin Class UMovieSceneSequencePlayer Function RemoveWeight
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Removes a previously assigned weight\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Removes a previously assigned weight" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RemoveWeight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRemoveWeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWeight();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function RemoveWeight

// Begin Class UMovieSceneSequencePlayer Function RestoreState
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Restore any changes made by this player to their original state\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Restore any changes made by this player to their original state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RestoreState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRestoreState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreState();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function RestoreState

// Begin Class UMovieSceneSequencePlayer Function RPC_ExplicitServerUpdateEvent
struct MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms
{
	EUpdatePositionMethod Method;
	FFrameTime RelevantTime;
	int32 NewSerialNumber;
};
static FName NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent = FName(TEXT("RPC_ExplicitServerUpdateEvent"));
void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime, int32 NewSerialNumber)
{
	MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms Parms;
	Parms.Method=Method;
	Parms.RelevantTime=RelevantTime;
	Parms.NewSerialNumber=NewSerialNumber;
	ProcessEvent(FindFunctionChecked(NAME_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent),&Parms);
}
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server whenever an explicit change in time has occurred through one of the (Play|Jump|Scrub)To methods\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Called on the server whenever an explicit change in time has occurred through one of the (Play|Jump|Scrub)To methods" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelevantTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSerialNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms, Method), Z_Construct_UEnum_MovieScene_EUpdatePositionMethod, METADATA_PARAMS(0, nullptr) }; // 776222591
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_RelevantTime = { "RelevantTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms, RelevantTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_NewSerialNumber = { "NewSerialNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms, NewSerialNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_RelevantTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::NewProp_NewSerialNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RPC_ExplicitServerUpdateEvent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::PropPointers), sizeof(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneSequencePlayer_eventRPC_ExplicitServerUpdateEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRPC_ExplicitServerUpdateEvent)
{
	P_GET_ENUM(EUpdatePositionMethod,Z_Param_Method);
	P_GET_STRUCT(FFrameTime,Z_Param_RelevantTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSerialNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPC_ExplicitServerUpdateEvent_Implementation(EUpdatePositionMethod(Z_Param_Method),Z_Param_RelevantTime,Z_Param_NewSerialNumber);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function RPC_ExplicitServerUpdateEvent

// Begin Class UMovieSceneSequencePlayer Function RPC_OnFinishPlaybackEvent
struct MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms
{
	FFrameTime StoppedTime;
	int32 NewSerialNumber;
};
static FName NAME_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent = FName(TEXT("RPC_OnFinishPlaybackEvent"));
void UMovieSceneSequencePlayer::RPC_OnFinishPlaybackEvent(FFrameTime StoppedTime, int32 NewSerialNumber)
{
	MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms Parms;
	Parms.StoppedTime=StoppedTime;
	Parms.NewSerialNumber=NewSerialNumber;
	ProcessEvent(FindFunctionChecked(NAME_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent),&Parms);
}
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server when playback has reached the end. Could lead to stopping or pausing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Called on the server when playback has reached the end. Could lead to stopping or pausing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoppedTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSerialNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::NewProp_StoppedTime = { "StoppedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms, StoppedTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::NewProp_NewSerialNumber = { "NewSerialNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms, NewSerialNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::NewProp_StoppedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::NewProp_NewSerialNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RPC_OnFinishPlaybackEvent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::PropPointers), sizeof(MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneSequencePlayer_eventRPC_OnFinishPlaybackEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRPC_OnFinishPlaybackEvent)
{
	P_GET_STRUCT(FFrameTime,Z_Param_StoppedTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSerialNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPC_OnFinishPlaybackEvent_Implementation(Z_Param_StoppedTime,Z_Param_NewSerialNumber);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function RPC_OnFinishPlaybackEvent

// Begin Class UMovieSceneSequencePlayer Function RPC_OnStopEvent
struct MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms
{
	FFrameTime StoppedTime;
	int32 NewSerialNumber;
};
static FName NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent = FName(TEXT("RPC_OnStopEvent"));
void UMovieSceneSequencePlayer::RPC_OnStopEvent(FFrameTime StoppedTime, int32 NewSerialNumber)
{
	MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms Parms;
	Parms.StoppedTime=StoppedTime;
	Parms.NewSerialNumber=NewSerialNumber;
	ProcessEvent(FindFunctionChecked(NAME_UMovieSceneSequencePlayer_RPC_OnStopEvent),&Parms);
}
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server when Stop() is called in order to differentiate Stops from Pauses.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Called on the server when Stop() is called in order to differentiate Stops from Pauses." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StoppedTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewSerialNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::NewProp_StoppedTime = { "StoppedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms, StoppedTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::NewProp_NewSerialNumber = { "NewSerialNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms, NewSerialNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::NewProp_StoppedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::NewProp_NewSerialNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "RPC_OnStopEvent", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::PropPointers), sizeof(MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(MovieSceneSequencePlayer_eventRPC_OnStopEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execRPC_OnStopEvent)
{
	P_GET_STRUCT(FFrameTime,Z_Param_StoppedTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewSerialNumber);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RPC_OnStopEvent_Implementation(Z_Param_StoppedTime,Z_Param_NewSerialNumber);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function RPC_OnStopEvent

// Begin Class UMovieSceneSequencePlayer Function Scrub
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Scrub playback. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Scrub playback." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Scrub", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execScrub)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Scrub();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function Scrub

// Begin Class UMovieSceneSequencePlayer Function SetCompletionModeOverride
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics
{
	struct MovieSceneSequencePlayer_eventSetCompletionModeOverride_Parms
	{
		EMovieSceneCompletionModeOverride CompletionModeOverride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/** Set the state of the completion mode override. Note, setting the state to force restore state will only take effect if the sequence hasn't started playing */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the state of the completion mode override. Note, setting the state to force restore state will only take effect if the sequence hasn't started playing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompletionModeOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompletionModeOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::NewProp_CompletionModeOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::NewProp_CompletionModeOverride = { "CompletionModeOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetCompletionModeOverride_Parms, CompletionModeOverride), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride, METADATA_PARAMS(0, nullptr) }; // 2667170200
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::NewProp_CompletionModeOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::NewProp_CompletionModeOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetCompletionModeOverride", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::MovieSceneSequencePlayer_eventSetCompletionModeOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::MovieSceneSequencePlayer_eventSetCompletionModeOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetCompletionModeOverride)
{
	P_GET_ENUM(EMovieSceneCompletionModeOverride,Z_Param_CompletionModeOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCompletionModeOverride(EMovieSceneCompletionModeOverride(Z_Param_CompletionModeOverride));
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function SetCompletionModeOverride

// Begin Class UMovieSceneSequencePlayer Function SetDisableCameraCuts
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics
{
	struct MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms
	{
		bool bInDisableCameraCuts;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Set whether to disable camera cuts */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set whether to disable camera cuts" },
	};
#endif // WITH_METADATA
	static void NewProp_bInDisableCameraCuts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDisableCameraCuts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts_SetBit(void* Obj)
{
	((MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms*)Obj)->bInDisableCameraCuts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts = { "bInDisableCameraCuts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms), &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::NewProp_bInDisableCameraCuts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetDisableCameraCuts", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::MovieSceneSequencePlayer_eventSetDisableCameraCuts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetDisableCameraCuts)
{
	P_GET_UBOOL(Z_Param_bInDisableCameraCuts);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisableCameraCuts(Z_Param_bInDisableCameraCuts);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function SetDisableCameraCuts

// Begin Class UMovieSceneSequencePlayer Function SetFrameRange
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics
{
	struct MovieSceneSequencePlayer_eventSetFrameRange_Parms
	{
		int32 StartFrame;
		int32 Duration;
		float SubFrames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the valid play range for this sequence, determined by a starting frame number (in this sequence player's plaback frame), and a number of frames duration\n\x09 *\n\x09 * @param StartFrame      The frame number to start playing back the sequence\n\x09 * @param Duration        The number of frames to play\n\x09 */" },
		{ "CPP_Default_SubFrames", "0.000000" },
		{ "DisplayName", "Set Play Range (Frames)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the valid play range for this sequence, determined by a starting frame number (in this sequence player's plaback frame), and a number of frames duration\n\n@param StartFrame      The frame number to start playing back the sequence\n@param Duration        The number of frames to play" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SubFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRange_Parms, StartFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRange_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_SubFrames = { "SubFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRange_Parms, SubFrames), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_StartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::NewProp_SubFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetFrameRange", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::MovieSceneSequencePlayer_eventSetFrameRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::MovieSceneSequencePlayer_eventSetFrameRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetFrameRange)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartFrame);
	P_GET_PROPERTY(FIntProperty,Z_Param_Duration);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SubFrames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRange(Z_Param_StartFrame,Z_Param_Duration,Z_Param_SubFrames);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function SetFrameRange

// Begin Class UMovieSceneSequencePlayer Function SetFrameRate
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct MovieSceneSequencePlayer_eventSetFrameRate_Parms
	{
		FFrameRate FrameRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the frame-rate that this player should play with, making all frame numbers in the specified time-space\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the frame-rate that this player should play with, making all frame numbers in the specified time-space" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetFrameRate_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::NewProp_FrameRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetFrameRate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::MovieSceneSequencePlayer_eventSetFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::MovieSceneSequencePlayer_eventSetFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetFrameRate)
{
	P_GET_STRUCT(FFrameRate,Z_Param_FrameRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRate(Z_Param_FrameRate);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function SetFrameRate

// Begin Class UMovieSceneSequencePlayer Function SetPlaybackPosition
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics
{
	struct MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms
	{
		FMovieSceneSequencePlaybackParams PlaybackParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the current time of the player by evaluating from the current time to the specified time, as if the sequence is playing. \n\x09 * Triggers events that lie within the evaluated range. Does not alter the persistent playback status of the player (IsPlaying).\n\x09 *\n\x09 * @param PlaybackParams The position settings (ie. the position to set playback to)\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the current time of the player by evaluating from the current time to the specified time, as if the sequence is playing.\nTriggers events that lie within the evaluated range. Does not alter the persistent playback status of the player (IsPlaying).\n\n@param PlaybackParams The position settings (ie. the position to set playback to)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::NewProp_PlaybackParams = { "PlaybackParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms, PlaybackParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams, METADATA_PARAMS(0, nullptr) }; // 1136563175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::NewProp_PlaybackParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetPlaybackPosition", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::MovieSceneSequencePlayer_eventSetPlaybackPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetPlaybackPosition)
{
	P_GET_STRUCT(FMovieSceneSequencePlaybackParams,Z_Param_PlaybackParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackPosition(Z_Param_PlaybackParams);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function SetPlaybackPosition

// Begin Class UMovieSceneSequencePlayer Function SetPlayRate
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics
{
	struct MovieSceneSequencePlayer_eventSetPlayRate_Parms
	{
		float PlayRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the playback rate of this player. Negative values will play the animation in reverse.\n\x09 * @param PlayRate - The new rate of playback for the animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the playback rate of this player. Negative values will play the animation in reverse.\n@param PlayRate - The new rate of playback for the animation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetPlayRate_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::NewProp_PlayRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::MovieSceneSequencePlayer_eventSetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::MovieSceneSequencePlayer_eventSetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetPlayRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayRate(Z_Param_PlayRate);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function SetPlayRate

// Begin Class UMovieSceneSequencePlayer Function SetTimeRange
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics
{
	struct MovieSceneSequencePlayer_eventSetTimeRange_Parms
	{
		float StartTime;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set the valid play range for this sequence, determined by a starting time  and a duration (in seconds)\n\x09 *\n\x09 * @param StartTime       The time to start playing back the sequence in seconds\n\x09 * @param Duration        The length to play for\n\x09 */" },
		{ "DisplayName", "Set Play Range (Seconds)" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set the valid play range for this sequence, determined by a starting time  and a duration (in seconds)\n\n@param StartTime       The time to start playing back the sequence in seconds\n@param Duration        The length to play for" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetTimeRange_Parms, StartTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetTimeRange_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetTimeRange", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::MovieSceneSequencePlayer_eventSetTimeRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::MovieSceneSequencePlayer_eventSetTimeRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetTimeRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimeRange(Z_Param_StartTime,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function SetTimeRange

// Begin Class UMovieSceneSequencePlayer Function SetWeight
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics
{
	struct MovieSceneSequencePlayer_eventSetWeight_Parms
	{
		double InWeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Set a manual weight to be multiplied with all blendable elements within this sequence\n\x09 * @note: It is recommended that a weight between 0 and 1 is supplied, though this is not enforced\n\x09 * @note: It is recommended that either FMovieSceneSequencePlaybackSettings::DynamicWeighting should be true for this player or the asset it's playing back should be set to enable dynamic weight to avoid undesirable behavior\n\x09 *\n\x09 * @param InWeight    The weight to suuply to all elements in this sequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Set a manual weight to be multiplied with all blendable elements within this sequence\n@note: It is recommended that a weight between 0 and 1 is supplied, though this is not enforced\n@note: It is recommended that either FMovieSceneSequencePlaybackSettings::DynamicWeighting should be true for this player or the asset it's playing back should be set to enable dynamic weight to avoid undesirable behavior\n\n@param InWeight    The weight to suuply to all elements in this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneSequencePlayer_eventSetWeight_Parms, InWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::NewProp_InWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "SetWeight", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::MovieSceneSequencePlayer_eventSetWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::MovieSceneSequencePlayer_eventSetWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execSetWeight)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWeight(Z_Param_InWeight);
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function SetWeight

// Begin Class UMovieSceneSequencePlayer Function Stop
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Stop playback and move the cursor to the end (or start, for reversed playback) of the sequence. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Stop playback and move the cursor to the end (or start, for reversed playback) of the sequence." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function Stop

// Begin Class UMovieSceneSequencePlayer Function StopAtCurrentTime
struct Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Stop playback without moving the cursor. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Stop playback without moving the cursor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneSequencePlayer, nullptr, "StopAtCurrentTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneSequencePlayer::execStopAtCurrentTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopAtCurrentTime();
	P_NATIVE_END;
}
// End Class UMovieSceneSequencePlayer Function StopAtCurrentTime

// Begin Class UMovieSceneSequencePlayer
void UMovieSceneSequencePlayer::StaticRegisterNativesUMovieSceneSequencePlayer()
{
	UClass* Class = UMovieSceneSequencePlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangePlaybackDirection", &UMovieSceneSequencePlayer::execChangePlaybackDirection },
		{ "GetBoundObjects", &UMovieSceneSequencePlayer::execGetBoundObjects },
		{ "GetCompletionModeOverride", &UMovieSceneSequencePlayer::execGetCompletionModeOverride },
		{ "GetCurrentTime", &UMovieSceneSequencePlayer::execGetCurrentTime },
		{ "GetDisableCameraCuts", &UMovieSceneSequencePlayer::execGetDisableCameraCuts },
		{ "GetDuration", &UMovieSceneSequencePlayer::execGetDuration },
		{ "GetEndTime", &UMovieSceneSequencePlayer::execGetEndTime },
		{ "GetFrameDuration", &UMovieSceneSequencePlayer::execGetFrameDuration },
		{ "GetFrameRate", &UMovieSceneSequencePlayer::execGetFrameRate },
		{ "GetObjectBindings", &UMovieSceneSequencePlayer::execGetObjectBindings },
		{ "GetPlayRate", &UMovieSceneSequencePlayer::execGetPlayRate },
		{ "GetSequence", &UMovieSceneSequencePlayer::execGetSequence },
		{ "GetSequenceName", &UMovieSceneSequencePlayer::execGetSequenceName },
		{ "GetStartTime", &UMovieSceneSequencePlayer::execGetStartTime },
		{ "GoToEndAndStop", &UMovieSceneSequencePlayer::execGoToEndAndStop },
		{ "IsPaused", &UMovieSceneSequencePlayer::execIsPaused },
		{ "IsPlaying", &UMovieSceneSequencePlayer::execIsPlaying },
		{ "IsReversed", &UMovieSceneSequencePlayer::execIsReversed },
		{ "Pause", &UMovieSceneSequencePlayer::execPause },
		{ "Play", &UMovieSceneSequencePlayer::execPlay },
		{ "PlayLooping", &UMovieSceneSequencePlayer::execPlayLooping },
		{ "PlayReverse", &UMovieSceneSequencePlayer::execPlayReverse },
		{ "PlayTo", &UMovieSceneSequencePlayer::execPlayTo },
		{ "RemoveWeight", &UMovieSceneSequencePlayer::execRemoveWeight },
		{ "RestoreState", &UMovieSceneSequencePlayer::execRestoreState },
		{ "RPC_ExplicitServerUpdateEvent", &UMovieSceneSequencePlayer::execRPC_ExplicitServerUpdateEvent },
		{ "RPC_OnFinishPlaybackEvent", &UMovieSceneSequencePlayer::execRPC_OnFinishPlaybackEvent },
		{ "RPC_OnStopEvent", &UMovieSceneSequencePlayer::execRPC_OnStopEvent },
		{ "Scrub", &UMovieSceneSequencePlayer::execScrub },
		{ "SetCompletionModeOverride", &UMovieSceneSequencePlayer::execSetCompletionModeOverride },
		{ "SetDisableCameraCuts", &UMovieSceneSequencePlayer::execSetDisableCameraCuts },
		{ "SetFrameRange", &UMovieSceneSequencePlayer::execSetFrameRange },
		{ "SetFrameRate", &UMovieSceneSequencePlayer::execSetFrameRate },
		{ "SetPlaybackPosition", &UMovieSceneSequencePlayer::execSetPlaybackPosition },
		{ "SetPlayRate", &UMovieSceneSequencePlayer::execSetPlayRate },
		{ "SetTimeRange", &UMovieSceneSequencePlayer::execSetTimeRange },
		{ "SetWeight", &UMovieSceneSequencePlayer::execSetWeight },
		{ "Stop", &UMovieSceneSequencePlayer::execStop },
		{ "StopAtCurrentTime", &UMovieSceneSequencePlayer::execStopAtCurrentTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequencePlayer);
UClass* Z_Construct_UClass_UMovieSceneSequencePlayer_NoRegister()
{
	return UMovieSceneSequencePlayer::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneSequencePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract class that provides consistent player behaviour for various animation players\n */" },
		{ "IncludePath", "MovieSceneSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract class that provides consistent player behaviour for various animation players" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[] = {
		{ "Comment", "/** Obeserver interface used for controlling whether this sequence can be played. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Obeserver interface used for controlling whether this sequence can be played." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlay_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is played */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is played" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayReverse_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is played in reverse */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is played in reverse" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStop_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is stopped */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is stopped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPause_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player is paused */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player is paused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when the level sequence player finishes naturally (without explicitly calling stop) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Event triggered when the level sequence player finishes naturally (without explicitly calling stop)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Comment", "/** Movie player status. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Movie player status." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[] = {
		{ "Comment", "/** Whether we're currently playing in reverse. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Whether we're currently playing in reverse." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "Comment", "/** The sequence to play back */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The sequence to play back" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Comment", "/** Time (in playback frames) at which to start playing the sequence (defaults to the lower bound of the sequence's play range) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Time (in playback frames) at which to start playing the sequence (defaults to the lower bound of the sequence's play range)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationFrames_MetaData[] = {
		{ "Comment", "/** Time (in playback frames) at which to stop playing the sequence (defaults to the upper bound of the sequence's play range) */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Time (in playback frames) at which to stop playing the sequence (defaults to the upper bound of the sequence's play range)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationSubFrames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumLoops_MetaData[] = {
		{ "Comment", "/** The number of times we have looped in the current playback */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The number of times we have looped in the current playback" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[] = {
		{ "Comment", "/**\n\x09 * The serial number for the current update lifespan\n\x09 * It is incremented every time we pass a \"gate\" such as an RPC call that stops/finishes the sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The serial number for the current update lifespan\nIt is incremented every time we pass a \"gate\" such as an RPC call that stops/finishes the sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[] = {
		{ "Comment", "/** Specific playback settings for the animation. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Specific playback settings for the animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootTemplateInstance_MetaData[] = {
		{ "Comment", "/** The root template instance we're evaluating */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "The root template instance we're evaluating" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetSyncProps_MetaData[] = {
		{ "Comment", "/** Replicated playback status and current time that are replicated to clients */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Replicated playback status and current time that are replicated to clients" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackClient_MetaData[] = {
		{ "Comment", "/** External client pointer in charge of playing back this sequence */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "External client pointer in charge of playing back this sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickManager_MetaData[] = {
		{ "Comment", "/** Global tick manager, held here to keep it alive while world sequences are in play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlayer.h" },
		{ "ToolTip", "Global tick manager, held here to keep it alive while world sequences are in play" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Observer;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlay;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayReverse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStop;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPause;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status;
	static void NewProp_bReversePlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DurationFrames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSubFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNumLoops;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SerialNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootTemplateInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetSyncProps;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_PlaybackClient;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TickManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_ChangePlaybackDirection, "ChangePlaybackDirection" }, // 3680304201
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetBoundObjects, "GetBoundObjects" }, // 1922381721
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCompletionModeOverride, "GetCompletionModeOverride" }, // 1546158870
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetCurrentTime, "GetCurrentTime" }, // 2706859627
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDisableCameraCuts, "GetDisableCameraCuts" }, // 488133962
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetDuration, "GetDuration" }, // 2182890981
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetEndTime, "GetEndTime" }, // 187862909
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameDuration, "GetFrameDuration" }, // 4088297240
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetFrameRate, "GetFrameRate" }, // 393366271
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetObjectBindings, "GetObjectBindings" }, // 4249978347
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetPlayRate, "GetPlayRate" }, // 740074141
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequence, "GetSequence" }, // 2474576112
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetSequenceName, "GetSequenceName" }, // 246646974
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GetStartTime, "GetStartTime" }, // 3761505149
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_GoToEndAndStop, "GoToEndAndStop" }, // 3281343382
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPaused, "IsPaused" }, // 3387770898
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsPlaying, "IsPlaying" }, // 2297250409
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_IsReversed, "IsReversed" }, // 416163953
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Pause, "Pause" }, // 2193018840
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Play, "Play" }, // 3835268507
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayLooping, "PlayLooping" }, // 1395482976
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayReverse, "PlayReverse" }, // 253219994
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_PlayTo, "PlayTo" }, // 3486851947
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RemoveWeight, "RemoveWeight" }, // 1512376696
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RestoreState, "RestoreState" }, // 2382896897
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent, "RPC_ExplicitServerUpdateEvent" }, // 1284150814
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent, "RPC_OnFinishPlaybackEvent" }, // 3081651328
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_RPC_OnStopEvent, "RPC_OnStopEvent" }, // 2666605987
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Scrub, "Scrub" }, // 2935634619
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetCompletionModeOverride, "SetCompletionModeOverride" }, // 2822966187
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetDisableCameraCuts, "SetDisableCameraCuts" }, // 2156397885
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRange, "SetFrameRange" }, // 2818599222
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetFrameRate, "SetFrameRate" }, // 1143877140
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlaybackPosition, "SetPlaybackPosition" }, // 846534347
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetPlayRate, "SetPlayRate" }, // 2583787067
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetTimeRange, "SetTimeRange" }, // 2990754216
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_SetWeight, "SetWeight" }, // 300782145
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_Stop, "Stop" }, // 1921152794
		{ &Z_Construct_UFunction_UMovieSceneSequencePlayer_StopAtCurrentTime, "StopAtCurrentTime" }, // 3681450643
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequencePlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0014000000000020, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, Observer), Z_Construct_UClass_UMovieSceneSequencePlayerObserver_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observer_MetaData), NewProp_Observer_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay = { "OnPlay", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPlay), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlay_MetaData), NewProp_OnPlay_MetaData) }; // 2375102935
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse = { "OnPlayReverse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPlayReverse), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayReverse_MetaData), NewProp_OnPlayReverse_MetaData) }; // 2375102935
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop = { "OnStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnStop), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStop_MetaData), NewProp_OnStop_MetaData) }; // 2375102935
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause = { "OnPause", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnPause), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPause_MetaData), NewProp_OnPause_MetaData) }; // 2375102935
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, OnFinished), Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 2375102935
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, Status), Z_Construct_UEnum_MovieScene_EMovieScenePlayerStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 13852033
void Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
{
	((UMovieSceneSequencePlayer*)Obj)->bReversePlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback = { "bReversePlayback", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMovieSceneSequencePlayer), &Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReversePlayback_MetaData), NewProp_bReversePlayback_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, Sequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, StartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames = { "DurationFrames", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, DurationFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationFrames_MetaData), NewProp_DurationFrames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames = { "DurationSubFrames", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, DurationSubFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationSubFrames_MetaData), NewProp_DurationSubFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops = { "CurrentNumLoops", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, CurrentNumLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNumLoops_MetaData), NewProp_CurrentNumLoops_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, SerialNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SerialNumber_MetaData), NewProp_SerialNumber_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackSettings_MetaData), NewProp_PlaybackSettings_MetaData) }; // 1561414897
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance = { "RootTemplateInstance", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, RootTemplateInstance), Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootTemplateInstance_MetaData), NewProp_RootTemplateInstance_MetaData) }; // 3481942416
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps = { "NetSyncProps", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, NetSyncProps), Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetSyncProps_MetaData), NewProp_NetSyncProps_MetaData) }; // 957532481
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient = { "PlaybackClient", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackClient), Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackClient_MetaData), NewProp_PlaybackClient_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager = { "TickManager", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneSequencePlayer, TickManager), Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickManager_MetaData), NewProp_TickManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Observer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPlayReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnPause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_OnFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_bReversePlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_DurationSubFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_CurrentNumLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_SerialNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_RootTemplateInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_NetSyncProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_PlaybackClient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::NewProp_TickManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneSequenceTickManagerClient_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSequencePlayer, IMovieSceneSequenceTickManagerClient), false },  // 4208931107
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::ClassParams = {
	&UMovieSceneSequencePlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneSequencePlayer()
{
	if (!Z_Registration_Info_UClass_UMovieSceneSequencePlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequencePlayer.OuterSingleton, Z_Construct_UClass_UMovieSceneSequencePlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneSequencePlayer.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequencePlayer>()
{
	return UMovieSceneSequencePlayer::StaticClass();
}
void UMovieSceneSequencePlayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Observer(TEXT("Observer"));
	static const FName Name_bReversePlayback(TEXT("bReversePlayback"));
	static const FName Name_StartTime(TEXT("StartTime"));
	static const FName Name_DurationFrames(TEXT("DurationFrames"));
	static const FName Name_DurationSubFrames(TEXT("DurationSubFrames"));
	static const FName Name_PlaybackSettings(TEXT("PlaybackSettings"));
	static const FName Name_NetSyncProps(TEXT("NetSyncProps"));
	const bool bIsValid = true
		&& Name_Observer == ClassReps[(int32)ENetFields_Private::Observer].Property->GetFName()
		&& Name_bReversePlayback == ClassReps[(int32)ENetFields_Private::bReversePlayback].Property->GetFName()
		&& Name_StartTime == ClassReps[(int32)ENetFields_Private::StartTime].Property->GetFName()
		&& Name_DurationFrames == ClassReps[(int32)ENetFields_Private::DurationFrames].Property->GetFName()
		&& Name_DurationSubFrames == ClassReps[(int32)ENetFields_Private::DurationSubFrames].Property->GetFName()
		&& Name_PlaybackSettings == ClassReps[(int32)ENetFields_Private::PlaybackSettings].Property->GetFName()
		&& Name_NetSyncProps == ClassReps[(int32)ENetFields_Private::NetSyncProps].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMovieSceneSequencePlayer"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequencePlayer);
// End Class UMovieSceneSequencePlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUpdatePositionMethod_StaticEnum, TEXT("EUpdatePositionMethod"), &Z_Registration_Info_UEnum_EUpdatePositionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 776222591U) },
		{ EMovieScenePositionType_StaticEnum, TEXT("EMovieScenePositionType"), &Z_Registration_Info_UEnum_EMovieScenePositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2919278861U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSequenceReplProperties::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceReplProperties_Statics::NewStructOps, TEXT("MovieSceneSequenceReplProperties"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceReplProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceReplProperties), 957532481U) },
		{ FMovieSceneSequencePlaybackParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackParams_Statics::NewStructOps, TEXT("MovieSceneSequencePlaybackParams"), &Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequencePlaybackParams), 1136563175U) },
		{ FMovieSceneSequencePlayToParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequencePlayToParams_Statics::NewStructOps, TEXT("MovieSceneSequencePlayToParams"), &Z_Registration_Info_UScriptStruct_MovieSceneSequencePlayToParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequencePlayToParams), 275168295U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSequencePlayer, UMovieSceneSequencePlayer::StaticClass, TEXT("UMovieSceneSequencePlayer"), &Z_Registration_Info_UClass_UMovieSceneSequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequencePlayer), 2586124438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_243206825(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
