// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneSequencePlaybackSettings.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceTickInterval.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequencePlaybackSettings() {}

// Begin Cross Module References
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneSequenceLoopCount
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount;
class UScriptStruct* FMovieSceneSequenceLoopCount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceLoopCount"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceLoopCount>()
{
	return FMovieSceneSequenceLoopCount::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** POD struct that represents a number of loops where -1 signifies infinite looping, 0 means no loops, etc\n * Defined as a struct rather than an int so a property type customization can be bound to it\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "POD struct that represents a number of loops where -1 signifies infinite looping, 0 means no loops, etc\nDefined as a struct rather than an int so a property type customization can be bound to it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Whether or not to loop playback. If Loop Exactly is chosen, you can specify the number of times to loop */" },
		{ "DisplayName", "Loop" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Whether or not to loop playback. If Loop Exactly is chosen, you can specify the number of times to loop" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceLoopCount>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceLoopCount, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequenceLoopCount",
	Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::PropPointers),
	sizeof(FMovieSceneSequenceLoopCount),
	alignof(FMovieSceneSequenceLoopCount),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequenceLoopCount

// Begin Enum EMovieSceneCompletionModeOverride
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneCompletionModeOverride;
static UEnum* EMovieSceneCompletionModeOverride_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneCompletionModeOverride.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMovieSceneCompletionModeOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneCompletionModeOverride"));
	}
	return Z_Registration_Info_UEnum_EMovieSceneCompletionModeOverride.OuterSingleton;
}
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneCompletionModeOverride>()
{
	return EMovieSceneCompletionModeOverride_StaticEnum();
}
struct Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Whether to override track sections' default completion mode when a sequence finishes.*/" },
		{ "ForceKeepState.DisplayName", "Force Keep State" },
		{ "ForceKeepState.Name", "EMovieSceneCompletionModeOverride::ForceKeepState" },
		{ "ForceRestoreState.DisplayName", "Force Restore State" },
		{ "ForceRestoreState.Name", "EMovieSceneCompletionModeOverride::ForceRestoreState" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EMovieSceneCompletionModeOverride::None" },
		{ "ToolTip", "Whether to override track sections' default completion mode when a sequence finishes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMovieSceneCompletionModeOverride::None", (int64)EMovieSceneCompletionModeOverride::None },
		{ "EMovieSceneCompletionModeOverride::ForceKeepState", (int64)EMovieSceneCompletionModeOverride::ForceKeepState },
		{ "EMovieSceneCompletionModeOverride::ForceRestoreState", (int64)EMovieSceneCompletionModeOverride::ForceRestoreState },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	"EMovieSceneCompletionModeOverride",
	"EMovieSceneCompletionModeOverride",
	Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride()
{
	if (!Z_Registration_Info_UEnum_EMovieSceneCompletionModeOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneCompletionModeOverride.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMovieSceneCompletionModeOverride.InnerSingleton;
}
// End Enum EMovieSceneCompletionModeOverride

// Begin ScriptStruct FMovieSceneSequencePlaybackSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings;
class UScriptStruct* FMovieSceneSequencePlaybackSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequencePlaybackSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequencePlaybackSettings>()
{
	return FMovieSceneSequencePlaybackSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for the level sequence player actor.\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Settings for the level sequence player actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Auto-play the sequence when created */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Auto-play the sequence when created" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Number of times to loop playback. -1 for infinite, else the number of times to loop before stopping */" },
		{ "DisplayName", "Loop" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Number of times to loop playback. -1 for infinite, else the number of times to loop before stopping" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Overridable tick interval for this sequence to update at. When not overridden, the owning actor or component's tick interval will be used */" },
		{ "EditCondition", "!bInheritTickIntervalFromOwner" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Overridable tick interval for this sequence to update at. When not overridden, the owning actor or component's tick interval will be used" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** The rate at which to playback the animation */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "The rate at which to playback the animation" },
		{ "Units", "Multiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Start playback at the specified offset from the start of the sequence's playback range */" },
		{ "DisplayName", "Start Offset" },
		{ "EditCondition", "!bRandomStartTime" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Start playback at the specified offset from the start of the sequence's playback range" },
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomStartTime_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Start playback at a random time */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Start playback at a random time" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreState_MetaData[] = {
		{ "Comment", "/** Flag used to specify whether actor states should be restored on stop. \n\x09* This has been deprecated in favor of FinishCompletionStateOverride.\n\x09*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Settings.FinishCompletionStateOverride instead" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Flag used to specify whether actor states should be restored on stop.\nThis has been deprecated in favor of FinishCompletionStateOverride." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMovementInput_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Disable Input from player during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Disable Input from player during play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableLookAtInput_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Disable LookAt Input from player during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Disable LookAt Input from player during play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidePlayer_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Hide Player Pawn during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Hide Player Pawn during play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHideHud_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Hide HUD during play */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Hide HUD during play" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCameraCuts_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/** Disable camera cuts */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Disable camera cuts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishCompletionStateOverride_MetaData[] = {
		{ "Category", "Cinematic" },
		{ "Comment", "/* If set to something other than none, when a sequence ends, the completion mode of any track sections still active will be overridden\n\x09* by the chosen value, either keep state or restore state. Otherwise, completion mode will be determined by each track section.\n\x09* Note that any track sections that finish before the end of a sequence will have their completion mode determined by the section settings rather than this override.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "If set to something other than none, when a sequence ends, the completion mode of any track sections still active will be overridden\n      * by the chosen value, either keep state or restore state. Otherwise, completion mode will be determined by each track section.\n      * Note that any track sections that finish before the end of a sequence will have their completion mode determined by the section settings rather than this override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseAtEnd_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Pause the sequence when playback reaches the end rather than stopping it */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Pause the sequence when playback reaches the end rather than stopping it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritTickIntervalFromOwner_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** When checked, a custom tick interval can be provided to define how often to update this sequence */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "When checked, a custom tick interval can be provided to define how often to update this sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicWeighting_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Whether to enable dynamic weighting on this player or not */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequencePlaybackSettings.h" },
		{ "ToolTip", "Whether to enable dynamic weighting on this player or not" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoopCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static void NewProp_bRandomStartTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomStartTime;
#if WITH_EDITORONLY_DATA
	static void NewProp_bRestoreState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreState;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bDisableMovementInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMovementInput;
	static void NewProp_bDisableLookAtInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableLookAtInput;
	static void NewProp_bHidePlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer;
	static void NewProp_bHideHud_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideHud;
	static void NewProp_bDisableCameraCuts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCameraCuts;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinishCompletionStateOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinishCompletionStateOverride;
	static void NewProp_bPauseAtEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseAtEnd;
	static void NewProp_bInheritTickIntervalFromOwner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritTickIntervalFromOwner;
	static void NewProp_bDynamicWeighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicWeighting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequencePlaybackSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlay_MetaData), NewProp_bAutoPlay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, LoopCount), Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopCount_MetaData), NewProp_LoopCount_MetaData) }; // 4088258948
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, TickInterval), Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickInterval_MetaData), NewProp_TickInterval_MetaData) }; // 3298697527
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bRandomStartTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime = { "bRandomStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomStartTime_MetaData), NewProp_bRandomStartTime_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bRestoreState_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState = { "bRestoreState", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestoreState_MetaData), NewProp_bRestoreState_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableMovementInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput = { "bDisableMovementInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableMovementInput_MetaData), NewProp_bDisableMovementInput_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableLookAtInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput = { "bDisableLookAtInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableLookAtInput_MetaData), NewProp_bDisableLookAtInput_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bHidePlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer = { "bHidePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidePlayer_MetaData), NewProp_bHidePlayer_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bHideHud = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud = { "bHideHud", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHideHud_MetaData), NewProp_bHideHud_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bDisableCameraCuts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts = { "bDisableCameraCuts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableCameraCuts_MetaData), NewProp_bDisableCameraCuts_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_FinishCompletionStateOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_FinishCompletionStateOverride = { "FinishCompletionStateOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequencePlaybackSettings, FinishCompletionStateOverride), Z_Construct_UEnum_MovieScene_EMovieSceneCompletionModeOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishCompletionStateOverride_MetaData), NewProp_FinishCompletionStateOverride_MetaData) }; // 2667170200
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bPauseAtEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd = { "bPauseAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseAtEnd_MetaData), NewProp_bPauseAtEnd_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bInheritTickIntervalFromOwner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner = { "bInheritTickIntervalFromOwner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritTickIntervalFromOwner_MetaData), NewProp_bInheritTickIntervalFromOwner_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting_SetBit(void* Obj)
{
	((FMovieSceneSequencePlaybackSettings*)Obj)->bDynamicWeighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting = { "bDynamicWeighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMovieSceneSequencePlaybackSettings), &Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicWeighting_MetaData), NewProp_bDynamicWeighting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_LoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_TickInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRandomStartTime,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bRestoreState,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableMovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableLookAtInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHidePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bHideHud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDisableCameraCuts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_FinishCompletionStateOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_FinishCompletionStateOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bPauseAtEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bInheritTickIntervalFromOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewProp_bDynamicWeighting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequencePlaybackSettings",
	Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::PropPointers),
	sizeof(FMovieSceneSequencePlaybackSettings),
	alignof(FMovieSceneSequencePlaybackSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequencePlaybackSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMovieSceneCompletionModeOverride_StaticEnum, TEXT("EMovieSceneCompletionModeOverride"), &Z_Registration_Info_UEnum_EMovieSceneCompletionModeOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2667170200U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSequenceLoopCount::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount_Statics::NewStructOps, TEXT("MovieSceneSequenceLoopCount"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceLoopCount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceLoopCount), 4088258948U) },
		{ FMovieSceneSequencePlaybackSettings::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics::NewStructOps, TEXT("MovieSceneSequencePlaybackSettings"), &Z_Registration_Info_UScriptStruct_MovieSceneSequencePlaybackSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequencePlaybackSettings), 1561414897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_3286830632(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlaybackSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
