// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/MovieSceneMarkedFrame.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroup();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroupCollection();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEditorData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneExpansionState();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMarkedFrame();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionGroup();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackLabels();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneExpansionState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneExpansionState;
class UScriptStruct* FMovieSceneExpansionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneExpansionState, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneExpansionState"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneExpansionState>()
{
	return FMovieSceneExpansionState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** @todo: remove this type when support for intrinsics on TMap values is added? */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "@todo: remove this type when support for intrinsics on TMap values is added?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpanded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneExpansionState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_SetBit(void* Obj)
{
	((FMovieSceneExpansionState*)Obj)->bExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded = { "bExpanded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneExpansionState), &Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExpanded_MetaData), NewProp_bExpanded_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewProp_bExpanded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneExpansionState",
	Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::PropPointers),
	sizeof(FMovieSceneExpansionState),
	alignof(FMovieSceneExpansionState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneExpansionState()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneExpansionState.InnerSingleton;
}
// End ScriptStruct FMovieSceneExpansionState

// Begin ScriptStruct FMovieSceneEditorData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEditorData;
class UScriptStruct* FMovieSceneEditorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEditorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEditorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEditorData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEditorData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEditorData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEditorData>()
{
	return FMovieSceneEditorData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor only data that needs to be saved between sessions for editing but has no runtime purpose\n */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Editor only data that needs to be saved between sessions for editing but has no runtime purpose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpansionStates_MetaData[] = {
		{ "Comment", "/** Map of node path -> expansion state. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Map of node path -> expansion state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinnedNodes_MetaData[] = {
		{ "Comment", "/** List of Pinned nodes. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "List of Pinned nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewStart_MetaData[] = {
		{ "Comment", "/** The last view-range start that the user was observing */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The last view-range start that the user was observing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewEnd_MetaData[] = {
		{ "Comment", "/** The last view-range end that the user was observing */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The last view-range end that the user was observing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkStart_MetaData[] = {
		{ "Comment", "/** User-defined working range start in which the entire sequence should reside. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined working range start in which the entire sequence should reside." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkEnd_MetaData[] = {
		{ "Comment", "/** User-defined working range end in which the entire sequence should reside. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined working range end in which the entire sequence should reside." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkedFrames_MetaData[] = {
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Deprecated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkingRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpansionStates_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpansionStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExpansionStates;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PinnedNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PinnedNodes;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ViewStart;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ViewEnd;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WorkStart;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WorkEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkedFrames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_MarkedFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorkingRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEditorData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_ValueProp = { "ExpansionStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneExpansionState, METADATA_PARAMS(0, nullptr) }; // 2481402029
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_Key_KeyProp = { "ExpansionStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates = { "ExpansionStates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEditorData, ExpansionStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpansionStates_MetaData), NewProp_ExpansionStates_MetaData) }; // 2481402029
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes_Inner = { "PinnedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes = { "PinnedNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEditorData, PinnedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinnedNodes_MetaData), NewProp_PinnedNodes_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart = { "ViewStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEditorData, ViewStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewStart_MetaData), NewProp_ViewStart_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd = { "ViewEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEditorData, ViewEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewEnd_MetaData), NewProp_ViewEnd_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart = { "WorkStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEditorData, WorkStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkStart_MetaData), NewProp_WorkStart_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd = { "WorkEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEditorData, WorkEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkEnd_MetaData), NewProp_WorkEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_ElementProp = { "MarkedFrames", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FFrameNumber>, "The structure 'FFrameNumber' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames = { "MarkedFrames", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEditorData, MarkedFrames_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkedFrames_MetaData), NewProp_MarkedFrames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange = { "WorkingRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEditorData, WorkingRange_DEPRECATED), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkingRange_MetaData), NewProp_WorkingRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange = { "ViewRange", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEditorData, ViewRange_DEPRECATED), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewRange_MetaData), NewProp_ViewRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ExpansionStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_PinnedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_MarkedFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_WorkingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewProp_ViewRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEditorData",
	Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::PropPointers),
	sizeof(FMovieSceneEditorData),
	alignof(FMovieSceneEditorData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEditorData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEditorData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEditorData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEditorData.InnerSingleton;
}
// End ScriptStruct FMovieSceneEditorData

// Begin ScriptStruct FMovieSceneTrackLabels
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels;
class UScriptStruct* FMovieSceneTrackLabels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackLabels, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackLabels"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackLabels>()
{
	return FMovieSceneTrackLabels::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for labels that can be assigned to movie scene tracks.\n */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure for labels that can be assigned to movie scene tracks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Strings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Strings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackLabels>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_Inner = { "Strings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackLabels, Strings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strings_MetaData), NewProp_Strings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewProp_Strings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTrackLabels",
	Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::PropPointers),
	sizeof(FMovieSceneTrackLabels),
	alignof(FMovieSceneTrackLabels),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackLabels()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels.InnerSingleton;
}
// End ScriptStruct FMovieSceneTrackLabels

// Begin ScriptStruct FMovieSceneObjectBindingIDs
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs;
class UScriptStruct* FMovieSceneObjectBindingIDs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneObjectBindingIDs"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneObjectBindingIDs>()
{
	return FMovieSceneObjectBindingIDs::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that comprises a list of object binding IDs\n */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure that comprises a list of object binding IDs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectBindingIDs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(0, nullptr) }; // 2701874266
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneObjectBindingIDs, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDs_MetaData), NewProp_IDs_MetaData) }; // 2701874266
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewProp_IDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneObjectBindingIDs",
	Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::PropPointers),
	sizeof(FMovieSceneObjectBindingIDs),
	alignof(FMovieSceneObjectBindingIDs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs.InnerSingleton;
}
// End ScriptStruct FMovieSceneObjectBindingIDs

// Begin ScriptStruct FMovieSceneSectionGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup;
class UScriptStruct* FMovieSceneSectionGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSectionGroup, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSectionGroup"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSectionGroup>()
{
	return FMovieSceneSectionGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that represents a group of sections\n */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure that represents a group of sections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSectionGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSectionGroup, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewProp_Sections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSectionGroup",
	Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::PropPointers),
	sizeof(FMovieSceneSectionGroup),
	alignof(FMovieSceneSectionGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSectionGroup()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup.InnerSingleton;
}
// End ScriptStruct FMovieSceneSectionGroup

// Begin Class UMovieSceneNodeGroup
void UMovieSceneNodeGroup::StaticRegisterNativesUMovieSceneNodeGroup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNodeGroup);
UClass* Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister()
{
	return UMovieSceneNodeGroup::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneNodeGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that represents a group of nodes\n */" },
		{ "IncludePath", "MovieScene.h" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure that represents a group of nodes" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Comment", "/** Nodes that are part of this node group, stored as node tree paths */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Nodes that are part of this node group, stored as node tree paths" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNodeGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNodeGroup, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNodeGroup, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNodeGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroup_Statics::NewProp_Nodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UMovieSceneNodeGroup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNodeGroup_Statics::ClassParams = {
	&UMovieSceneNodeGroup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNodeGroup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneNodeGroup()
{
	if (!Z_Registration_Info_UClass_UMovieSceneNodeGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNodeGroup.OuterSingleton, Z_Construct_UClass_UMovieSceneNodeGroup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneNodeGroup.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneNodeGroup>()
{
	return UMovieSceneNodeGroup::StaticClass();
}
UMovieSceneNodeGroup::UMovieSceneNodeGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNodeGroup);
UMovieSceneNodeGroup::~UMovieSceneNodeGroup() {}
// End Class UMovieSceneNodeGroup

// Begin Class UMovieSceneNodeGroupCollection
void UMovieSceneNodeGroupCollection::StaticRegisterNativesUMovieSceneNodeGroupCollection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNodeGroupCollection);
UClass* Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister()
{
	return UMovieSceneNodeGroupCollection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that represents a collection of NodeGroups\n */" },
		{ "IncludePath", "MovieScene.h" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Structure that represents a collection of NodeGroups" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroups_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNodeGroupCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups_Inner = { "NodeGroups", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneNodeGroup_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups = { "NodeGroups", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneNodeGroupCollection, NodeGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroups_MetaData), NewProp_NodeGroups_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::NewProp_NodeGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::ClassParams = {
	&UMovieSceneNodeGroupCollection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::PropPointers), 0),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneNodeGroupCollection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.OuterSingleton, Z_Construct_UClass_UMovieSceneNodeGroupCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneNodeGroupCollection>()
{
	return UMovieSceneNodeGroupCollection::StaticClass();
}
UMovieSceneNodeGroupCollection::UMovieSceneNodeGroupCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNodeGroupCollection);
UMovieSceneNodeGroupCollection::~UMovieSceneNodeGroupCollection() {}
// End Class UMovieSceneNodeGroupCollection

// Begin Class UMovieScene
void UMovieScene::StaticRegisterNativesUMovieScene()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene);
UClass* Z_Construct_UClass_UMovieScene_NoRegister()
{
	return UMovieScene::StaticClass();
}
struct Z_Construct_UClass_UMovieScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene asset.\n */" },
		{ "IncludePath", "MovieScene.h" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Implements a movie scene asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spawnables_MetaData[] = {
		{ "Comment", "/**\n\x09 * Data-only blueprints for all of the objects that we we're able to spawn.\n\x09 * These describe objects and actors that we may instantiate at runtime,\n\x09 * or create proxy objects for previewing in the editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Data-only blueprints for all of the objects that we we're able to spawn.\nThese describe objects and actors that we may instantiate at runtime,\nor create proxy objects for previewing in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Possessables_MetaData[] = {
		{ "Comment", "/** Typed slots for already-spawned objects that we are able to control with this MovieScene */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Typed slots for already-spawned objects that we are able to control with this MovieScene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindings_MetaData[] = {
		{ "Comment", "/** Tracks bound to possessed or spawned objects */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Tracks bound to possessed or spawned objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindingGroups_MetaData[] = {
		{ "Comment", "/** Map of persistent tagged bindings for this sequence */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Map of persistent tagged bindings for this sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_Inner_MetaData[] = {
		{ "Comment", "/** Tracks which are not bound to spawned or possessed objects */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Tracks which are not bound to spawned or possessed objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[] = {
		{ "Comment", "/** Tracks which are not bound to spawned or possessed objects */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Tracks which are not bound to spawned or possessed objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraCutTrack_MetaData[] = {
		{ "Comment", "/** The camera cut track is a specialized track for switching between cameras on a cinematic */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The camera cut track is a specialized track for switching between cameras on a cinematic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionRange_MetaData[] = {
		{ "Comment", "/** User-defined selection range. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined selection range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRange_MetaData[] = {
		{ "Comment", "/** User-defined playback range for this movie scene. Must be a finite range. Relative to this movie-scene's 0-time origin. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined playback range for this movie scene. Must be a finite range. Relative to this movie-scene's 0-time origin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickResolution_MetaData[] = {
		{ "Comment", "/** The resolution at which all frame numbers within this movie-scene data are stored */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The resolution at which all frame numbers within this movie-scene data are stored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayRate_MetaData[] = {
		{ "Comment", "/** The rate at which we should interact with this moviescene data on UI, and to movie scene players. Also defines the frame locked frame rate. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The rate at which we should interact with this moviescene data on UI, and to movie scene players. Also defines the frame locked frame rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationType_MetaData[] = {
		{ "Comment", "/** The type of evaluation to use when playing back this sequence */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The type of evaluation to use when playing back this sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClockSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomClockSourcePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkedFrames_MetaData[] = {
		{ "Comment", "/** The set of user-marked frames */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The set of user-marked frames" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReadOnly_MetaData[] = {
		{ "Comment", "/** Indicates whether this movie scene is read only */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Indicates whether this movie scene is read only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaybackRangeLocked_MetaData[] = {
		{ "Comment", "/** User-defined playback range is locked. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined playback range is locked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMarkedFramesLocked_MetaData[] = {
		{ "Comment", "/** User-defined marked frames are locked. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "User-defined marked frames are locked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsToDisplayNames_MetaData[] = {
		{ "Comment", "/** Maps object GUIDs to user defined display names. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Maps object GUIDs to user defined display names." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsToLabels_MetaData[] = {
		{ "Comment", "/** Maps object GUIDs to user defined labels. */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Maps object GUIDs to user defined labels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[] = {
		{ "Comment", "/** Editor only data that needs to be saved between sessions for editing but has no runtime purpose */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Editor only data that needs to be saved between sessions for editing but has no runtime purpose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootFolders_MetaData[] = {
		{ "Comment", "/** The root folders for this movie scene. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "The root folders for this movie scene." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoloNodes_MetaData[] = {
		{ "Comment", "/** Nodes currently marked Solo, stored as node tree paths */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Nodes currently marked Solo, stored as node tree paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuteNodes_MetaData[] = {
		{ "Comment", "/** Nodes currently marked Mute, stored as node tree paths */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Nodes currently marked Mute, stored as node tree paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionGroups_MetaData[] = {
		{ "Comment", "/** Groups of sections which should maintain the same relative offset */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Groups of sections which should maintain the same relative offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGroupCollection_MetaData[] = {
		{ "Comment", "/** Collection of user-defined groups */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Collection of user-defined groups" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGloballyShowMarkedFrames_MetaData[] = {
		{ "Comment", "/** Whether this scene's marked frames should be shown globally */" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
		{ "ToolTip", "Whether this scene's marked frames should be shown globally" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFixedFrameIntervalPlayback_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedFrameInterval_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterTracks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieScene.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spawnables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Spawnables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Possessables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Possessables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectBindings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BindingGroups_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BindingGroups_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BindingGroups;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraCutTrack;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplayRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClockSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ClockSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomClockSourcePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkedFrames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkedFrames;
#if WITH_EDITORONLY_DATA
	static void NewProp_bReadOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadOnly;
	static void NewProp_bPlaybackRangeLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaybackRangeLocked;
	static void NewProp_bMarkedFramesLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkedFramesLocked;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ObjectsToDisplayNames_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectsToDisplayNames_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectsToDisplayNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectsToLabels_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectsToLabels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectsToLabels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditorData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootFolders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SoloNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SoloNodes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MuteNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MuteNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionGroups;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeGroupCollection;
	static void NewProp_bGloballyShowMarkedFrames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGloballyShowMarkedFrames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
	static void NewProp_bForceFixedFrameIntervalPlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFixedFrameIntervalPlayback;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FixedFrameInterval;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MasterTracks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MasterTracks;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_Inner = { "Spawnables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSpawnable, METADATA_PARAMS(0, nullptr) }; // 611580118
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables = { "Spawnables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, Spawnables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spawnables_MetaData), NewProp_Spawnables_MetaData) }; // 611580118
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_Inner = { "Possessables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieScenePossessable, METADATA_PARAMS(0, nullptr) }; // 618785430
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables = { "Possessables", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, Possessables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Possessables_MetaData), NewProp_Possessables_MetaData) }; // 618785430
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_Inner = { "ObjectBindings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneBinding, METADATA_PARAMS(0, nullptr) }; // 22787615
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings = { "ObjectBindings", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, ObjectBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBindings_MetaData), NewProp_ObjectBindings_MetaData) }; // 22787615
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_ValueProp = { "BindingGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs, METADATA_PARAMS(0, nullptr) }; // 1436640203
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_Key_KeyProp = { "BindingGroups_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups = { "BindingGroups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, BindingGroups), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindingGroups_MetaData), NewProp_BindingGroups_MetaData) }; // 1436640203
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_Inner_MetaData), NewProp_Tracks_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tracks_MetaData), NewProp_Tracks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack = { "CameraCutTrack", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, CameraCutTrack), Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraCutTrack_MetaData), NewProp_CameraCutTrack_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange = { "SelectionRange", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, SelectionRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionRange_MetaData), NewProp_SelectionRange_MetaData) }; // 83459642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange = { "PlaybackRange", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, PlaybackRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackRange_MetaData), NewProp_PlaybackRange_MetaData) }; // 83459642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickResolution_MetaData), NewProp_TickResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate = { "DisplayRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, DisplayRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayRate_MetaData), NewProp_DisplayRate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType = { "EvaluationType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, EvaluationType), Z_Construct_UEnum_MovieScene_EMovieSceneEvaluationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvaluationType_MetaData), NewProp_EvaluationType_MetaData) }; // 3725280040
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource = { "ClockSource", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, ClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClockSource_MetaData), NewProp_ClockSource_MetaData) }; // 2266554604
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_CustomClockSourcePath = { "CustomClockSourcePath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, CustomClockSourcePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomClockSourcePath_MetaData), NewProp_CustomClockSourcePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames_Inner = { "MarkedFrames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneMarkedFrame, METADATA_PARAMS(0, nullptr) }; // 739890229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames = { "MarkedFrames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, MarkedFrames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkedFrames_MetaData), NewProp_MarkedFrames_MetaData) }; // 739890229
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_SetBit(void* Obj)
{
	((UMovieScene*)Obj)->bReadOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly = { "bReadOnly", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReadOnly_MetaData), NewProp_bReadOnly_MetaData) };
void Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_SetBit(void* Obj)
{
	((UMovieScene*)Obj)->bPlaybackRangeLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked = { "bPlaybackRangeLocked", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaybackRangeLocked_MetaData), NewProp_bPlaybackRangeLocked_MetaData) };
void Z_Construct_UClass_UMovieScene_Statics::NewProp_bMarkedFramesLocked_SetBit(void* Obj)
{
	((UMovieScene*)Obj)->bMarkedFramesLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bMarkedFramesLocked = { "bMarkedFramesLocked", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bMarkedFramesLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMarkedFramesLocked_MetaData), NewProp_bMarkedFramesLocked_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_ValueProp = { "ObjectsToDisplayNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_Key_KeyProp = { "ObjectsToDisplayNames_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames = { "ObjectsToDisplayNames", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, ObjectsToDisplayNames), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectsToDisplayNames_MetaData), NewProp_ObjectsToDisplayNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_ValueProp = { "ObjectsToLabels", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneTrackLabels, METADATA_PARAMS(0, nullptr) }; // 4254731147
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_Key_KeyProp = { "ObjectsToLabels_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels = { "ObjectsToLabels", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, ObjectsToLabels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectsToLabels_MetaData), NewProp_ObjectsToLabels_MetaData) }; // 4254731147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, EditorData), Z_Construct_UScriptStruct_FMovieSceneEditorData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorData_MetaData), NewProp_EditorData_MetaData) }; // 2427999139
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_Inner = { "RootFolders", nullptr, (EPropertyFlags)0x0104000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders = { "RootFolders", nullptr, (EPropertyFlags)0x0144008800000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, RootFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootFolders_MetaData), NewProp_RootFolders_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes_Inner = { "SoloNodes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes = { "SoloNodes", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, SoloNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoloNodes_MetaData), NewProp_SoloNodes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes_Inner = { "MuteNodes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes = { "MuteNodes", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, MuteNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuteNodes_MetaData), NewProp_MuteNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups_Inner = { "SectionGroups", nullptr, (EPropertyFlags)0x0000008800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSectionGroup, METADATA_PARAMS(0, nullptr) }; // 2188250073
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups = { "SectionGroups", nullptr, (EPropertyFlags)0x0040008800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, SectionGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionGroups_MetaData), NewProp_SectionGroups_MetaData) }; // 2188250073
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_NodeGroupCollection = { "NodeGroupCollection", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, NodeGroupCollection), Z_Construct_UClass_UMovieSceneNodeGroupCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGroupCollection_MetaData), NewProp_NodeGroupCollection_MetaData) };
void Z_Construct_UClass_UMovieScene_Statics::NewProp_bGloballyShowMarkedFrames_SetBit(void* Obj)
{
	((UMovieScene*)Obj)->bGloballyShowMarkedFrames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bGloballyShowMarkedFrames = { "bGloballyShowMarkedFrames", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bGloballyShowMarkedFrames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGloballyShowMarkedFrames_MetaData), NewProp_bGloballyShowMarkedFrames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, InTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTime_MetaData), NewProp_InTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime = { "OutTime", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, OutTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutTime_MetaData), NewProp_OutTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, StartTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, EndTime_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndTime_MetaData), NewProp_EndTime_MetaData) };
void Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_SetBit(void* Obj)
{
	((UMovieScene*)Obj)->bForceFixedFrameIntervalPlayback_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback = { "bForceFixedFrameIntervalPlayback", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMovieScene), &Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFixedFrameIntervalPlayback_MetaData), NewProp_bForceFixedFrameIntervalPlayback_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval = { "FixedFrameInterval", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, FixedFrameInterval_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedFrameInterval_MetaData), NewProp_FixedFrameInterval_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_Inner = { "MasterTracks", nullptr, (EPropertyFlags)0x0104000820080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks = { "MasterTracks", nullptr, (EPropertyFlags)0x0144008820000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieScene, MasterTracks_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterTracks_MetaData), NewProp_MasterTracks_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Spawnables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Possessables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_BindingGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_Tracks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_CameraCutTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SelectionRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_PlaybackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_TickResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_DisplayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EvaluationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ClockSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_CustomClockSourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MarkedFrames,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bReadOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bPlaybackRangeLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bMarkedFramesLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToDisplayNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_ObjectsToLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EditorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_RootFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SoloNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MuteNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_SectionGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_NodeGroupCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bGloballyShowMarkedFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_OutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_EndTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_bForceFixedFrameIntervalPlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_FixedFrameInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene_Statics::NewProp_MasterTracks,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieScene_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSignedObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene_Statics::ClassParams = {
	&UMovieScene::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMovieScene_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieScene_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieScene()
{
	if (!Z_Registration_Info_UClass_UMovieScene.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene.OuterSingleton, Z_Construct_UClass_UMovieScene_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieScene.OuterSingleton;
}
template<> MOVIESCENE_API UClass* StaticClass<UMovieScene>()
{
	return UMovieScene::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene);
UMovieScene::~UMovieScene() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieScene)
// End Class UMovieScene

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneExpansionState::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneExpansionState_Statics::NewStructOps, TEXT("MovieSceneExpansionState"), &Z_Registration_Info_UScriptStruct_MovieSceneExpansionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneExpansionState), 2481402029U) },
		{ FMovieSceneEditorData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEditorData_Statics::NewStructOps, TEXT("MovieSceneEditorData"), &Z_Registration_Info_UScriptStruct_MovieSceneEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEditorData), 2427999139U) },
		{ FMovieSceneTrackLabels::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackLabels_Statics::NewStructOps, TEXT("MovieSceneTrackLabels"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackLabels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackLabels), 4254731147U) },
		{ FMovieSceneObjectBindingIDs::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneObjectBindingIDs_Statics::NewStructOps, TEXT("MovieSceneObjectBindingIDs"), &Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingIDs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneObjectBindingIDs), 1436640203U) },
		{ FMovieSceneSectionGroup::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSectionGroup_Statics::NewStructOps, TEXT("MovieSceneSectionGroup"), &Z_Registration_Info_UScriptStruct_MovieSceneSectionGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSectionGroup), 2188250073U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNodeGroup, UMovieSceneNodeGroup::StaticClass, TEXT("UMovieSceneNodeGroup"), &Z_Registration_Info_UClass_UMovieSceneNodeGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNodeGroup), 3478191892U) },
		{ Z_Construct_UClass_UMovieSceneNodeGroupCollection, UMovieSceneNodeGroupCollection::StaticClass, TEXT("UMovieSceneNodeGroupCollection"), &Z_Registration_Info_UClass_UMovieSceneNodeGroupCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNodeGroupCollection), 3648359207U) },
		{ Z_Construct_UClass_UMovieScene, UMovieScene::StaticClass, TEXT("UMovieScene"), &Z_Registration_Info_UClass_UMovieScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene), 4232361283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_771818687(TEXT("/Script/MovieScene"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScene_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
