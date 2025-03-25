// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceHierarchy() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneSubSequenceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData;
class UScriptStruct* FMovieSceneSubSequenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSequenceData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSubSequenceData>()
{
	return FMovieSceneSubSequenceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Sub sequence data that is stored within an evaluation template as a backreference to the originating sequence, and section\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Sub sequence data that is stored within an evaluation template as a backreference to the originating sequence, and section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[] = {
		{ "AllowedClasses", "/Script/MovieScene.MovieSceneSequence" },
		{ "Comment", "/** The sequence that the sub section references */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sequence that the sub section references" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterToInnerTransform_MetaData[] = {
		{ "Comment", "/** The transform from this sub sequence's parent to its own play space. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The transform from this sub sequence's parent to its own play space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootToSequenceTransform_MetaData[] = {
		{ "Comment", "/** Transform that transforms a given time from the sequences outer space, to its authored space. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Transform that transforms a given time from the sequences outer space, to its authored space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickResolution_MetaData[] = {
		{ "Comment", "/** The tick resolution of the inner sequence. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The tick resolution of the inner sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeterministicSequenceID_MetaData[] = {
		{ "Comment", "/** This sequence's deterministic sequence ID. Used in editor to reduce the risk of collisions on recompilation. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "This sequence's deterministic sequence ID. Used in editor to reduce the risk of collisions on recompilation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentPlayRange_MetaData[] = {
		{ "Comment", "/** The play range of the parent section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The play range of the parent section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentStartFrameOffset_MetaData[] = {
		{ "Comment", "/** The start frame offset of the parent section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The start frame offset of the parent section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentEndFrameOffset_MetaData[] = {
		{ "Comment", "/** The end frame offset of the parent section */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The end frame offset of the parent section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentFirstLoopStartFrameOffset_MetaData[] = {
		{ "Comment", "/** The offset for the first loop of the sub-sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The offset for the first loop of the sub-sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanLoop_MetaData[] = {
		{ "Comment", "/** Whether this sub-sequence can loop */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Whether this sub-sequence can loop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRange_MetaData[] = {
		{ "Comment", "/** This sub sequence's playback range according to its parent sub section. Clamped recursively during template generation */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "This sub sequence's playback range according to its parent sub section. Clamped recursively during template generation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullPlayRange_MetaData[] = {
		{ "Comment", "/** The sub-sequence's full playback range, in its own local time space. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sub-sequence's full playback range, in its own local time space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnwarpedPlayRange_MetaData[] = {
		{ "Comment", "/**\n\x09 * The play range of the parent section, without any warping involved.\n\x09 * That means that, for a sub-sequence playing with an initial offset of 50 and looping 3 times,\n\x09 * this play range will start 50 frames after PlayRange's lower bound, and extend much past PlayRange's \n\x09 * upper bound (3 times longer).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The play range of the parent section, without any warping involved.\nThat means that, for a sub-sequence playing with an initial offset of 50 and looping 3 times,\nthis play range will start 50 frames after PlayRange's lower bound, and extend much past PlayRange's\nupper bound (3 times longer)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreRollRange_MetaData[] = {
		{ "Comment", "/** The sequence preroll range considering the start offset */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sequence preroll range considering the start offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostRollRange_MetaData[] = {
		{ "Comment", "/** The sequence postroll range considering the start offset */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sequence postroll range considering the start offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HierarchicalBias_MetaData[] = {
		{ "Comment", "/** The accumulated hierarchical bias of this sequence. Higher bias will take precedence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The accumulated hierarchical bias of this sequence. Higher bias will take precedence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedFlags_MetaData[] = {
		{ "Comment", "/** Flags accumulated from parent->child for each sub-section that led to the inclusion of this sub-sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Flags accumulated from parent->child for each sub-section that led to the inclusion of this sub-sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceData_MetaData[] = {
		{ "Comment", "/** Instance data that should be used for any tracks contained immediately within this sub sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Instance data that should be used for any tracks contained immediately within this sub sequence" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionPath_MetaData[] = {
		{ "Comment", "/** This sequence's path within its movie scene */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "This sequence's path within its movie scene" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSectionSignature_MetaData[] = {
		{ "Comment", "/** The sub section's signature at the time this structure was populated. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "The sub section's signature at the time this structure was populated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OuterToInnerTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootToSequenceTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DeterministicSequenceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPlayRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentStartFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentEndFrameOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentFirstLoopStartFrameOffset;
	static void NewProp_bCanLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FullPlayRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnwarpedPlayRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreRollRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostRollRange;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_HierarchicalBias;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccumulatedFlags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccumulatedFlags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SectionPath;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubSectionSignature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, Sequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequence_MetaData), NewProp_Sequence_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform = { "OuterToInnerTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, OuterToInnerTransform), Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterToInnerTransform_MetaData), NewProp_OuterToInnerTransform_MetaData) }; // 3142838919
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform = { "RootToSequenceTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, RootToSequenceTransform), Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootToSequenceTransform_MetaData), NewProp_RootToSequenceTransform_MetaData) }; // 3142838919
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickResolution_MetaData), NewProp_TickResolution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID = { "DeterministicSequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, DeterministicSequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeterministicSequenceID_MetaData), NewProp_DeterministicSequenceID_MetaData) }; // 3318969255
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentPlayRange = { "ParentPlayRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, ParentPlayRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentPlayRange_MetaData), NewProp_ParentPlayRange_MetaData) }; // 83459642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentStartFrameOffset = { "ParentStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, ParentStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentStartFrameOffset_MetaData), NewProp_ParentStartFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentEndFrameOffset = { "ParentEndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, ParentEndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentEndFrameOffset_MetaData), NewProp_ParentEndFrameOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentFirstLoopStartFrameOffset = { "ParentFirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, ParentFirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentFirstLoopStartFrameOffset_MetaData), NewProp_ParentFirstLoopStartFrameOffset_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop_SetBit(void* Obj)
{
	((FMovieSceneSubSequenceData*)Obj)->bCanLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop = { "bCanLoop", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneSubSequenceData), &Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanLoop_MetaData), NewProp_bCanLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange = { "PlayRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, PlayRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRange_MetaData), NewProp_PlayRange_MetaData) }; // 83459642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_FullPlayRange = { "FullPlayRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, FullPlayRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullPlayRange_MetaData), NewProp_FullPlayRange_MetaData) }; // 83459642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_UnwarpedPlayRange = { "UnwarpedPlayRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, UnwarpedPlayRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnwarpedPlayRange_MetaData), NewProp_UnwarpedPlayRange_MetaData) }; // 83459642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange = { "PreRollRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, PreRollRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreRollRange_MetaData), NewProp_PreRollRange_MetaData) }; // 83459642
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange = { "PostRollRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, PostRollRange), Z_Construct_UScriptStruct_FMovieSceneFrameRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostRollRange_MetaData), NewProp_PostRollRange_MetaData) }; // 83459642
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias = { "HierarchicalBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, HierarchicalBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HierarchicalBias_MetaData), NewProp_HierarchicalBias_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_AccumulatedFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_AccumulatedFlags = { "AccumulatedFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, AccumulatedFlags), Z_Construct_UEnum_MovieScene_EMovieSceneSubSectionFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedFlags_MetaData), NewProp_AccumulatedFlags_MetaData) }; // 2440461908
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, InstanceData), Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceData_MetaData), NewProp_InstanceData_MetaData) }; // 2645484279
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath = { "SectionPath", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, SectionPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionPath_MetaData), NewProp_SectionPath_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature = { "SubSectionSignature", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSubSequenceData, SubSectionSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSectionSignature_MetaData), NewProp_SubSectionSignature_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_Sequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_OuterToInnerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_RootToSequenceTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_TickResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_DeterministicSequenceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentPlayRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentStartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentEndFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_ParentFirstLoopStartFrameOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_bCanLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PlayRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_FullPlayRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_UnwarpedPlayRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PreRollRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_PostRollRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_HierarchicalBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_AccumulatedFlags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_AccumulatedFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_InstanceData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SectionPath,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewProp_SubSectionSignature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSubSequenceData",
	Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::PropPointers),
	sizeof(FMovieSceneSubSequenceData),
	alignof(FMovieSceneSubSequenceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData.InnerSingleton;
}
// End ScriptStruct FMovieSceneSubSequenceData

// Begin ScriptStruct FMovieSceneSequenceHierarchyNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode;
class UScriptStruct* FMovieSceneSequenceHierarchyNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceHierarchyNode"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceHierarchyNode>()
{
	return FMovieSceneSequenceHierarchyNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple structure specifying parent and child sequence IDs for any given sequences\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Simple structure specifying parent and child sequence IDs for any given sequences" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[] = {
		{ "Comment", "/** Movie scene sequence ID of this node's parent sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Movie scene sequence ID of this node's parent sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Comment", "/** Array of child sequences contained within this sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Array of child sequences contained within this sequence" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParentID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchyNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceHierarchyNode, ParentID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentID_MetaData), NewProp_ParentID_MetaData) }; // 3318969255
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(0, nullptr) }; // 3318969255
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceHierarchyNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) }; // 3318969255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_ParentID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequenceHierarchyNode",
	Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::PropPointers),
	sizeof(FMovieSceneSequenceHierarchyNode),
	alignof(FMovieSceneSequenceHierarchyNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequenceHierarchyNode

// Begin ScriptStruct FMovieSceneSubSequenceTreeEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry;
class UScriptStruct* FMovieSceneSubSequenceTreeEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSequenceTreeEntry"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSubSequenceTreeEntry>()
{
	return FMovieSceneSubSequenceTreeEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceTreeEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSubSequenceTreeEntry",
	nullptr,
	0,
	sizeof(FMovieSceneSubSequenceTreeEntry),
	alignof(FMovieSceneSubSequenceTreeEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry.InnerSingleton;
}
// End ScriptStruct FMovieSceneSubSequenceTreeEntry

// Begin ScriptStruct FMovieSceneSubSequenceTree
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree;
class UScriptStruct* FMovieSceneSubSequenceTree::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSubSequenceTree"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSubSequenceTree>()
{
	return FMovieSceneSubSequenceTree::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSubSequenceTree>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSubSequenceTree",
	nullptr,
	0,
	sizeof(FMovieSceneSubSequenceTree),
	alignof(FMovieSceneSubSequenceTree),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree.InnerSingleton;
}
// End ScriptStruct FMovieSceneSubSequenceTree

// Begin ScriptStruct FMovieSceneSequenceHierarchy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy;
class UScriptStruct* FMovieSceneSequenceHierarchy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceHierarchy"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceHierarchy>()
{
	return FMovieSceneSequenceHierarchy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that stores hierarchical information pertaining to all sequences contained within a root sequence\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Structure that stores hierarchical information pertaining to all sequences contained within a root sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tree_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubSequences_MetaData[] = {
		{ "Comment", "/** Map of all (recursive) sub sequences found in this template, keyed on sequence ID */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Map of all (recursive) sub sequences found in this template, keyed on sequence ID" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hierarchy_MetaData[] = {
		{ "Comment", "/** Structural information describing the structure of the sequence */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Structural information describing the structure of the sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedNetworkMask_MetaData[] = {
		{ "Comment", "/** Holds the accumulated network mask from all included sub-sections. \n\x09* If client or server-only subsections are found and included based on the gather params network mask, other bits will be excluded.\n\x09* If the gather param network mask excludes client or server-only sub-sections, these will be skipped, and so not accumulated.\n\x09* If no client or server-only subsections are found and included, the mask will be All.\n\x09* If both client and server-only subsections are found and included, the mask will be None as each would exclude the other.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceHierarchy.h" },
		{ "ToolTip", "Holds the accumulated network mask from all included sub-sections.\nIf client or server-only subsections are found and included based on the gather params network mask, other bits will be excluded.\nIf the gather param network mask excludes client or server-only sub-sections, these will be skipped, and so not accumulated.\nIf no client or server-only subsections are found and included, the mask will be All.\nIf both client and server-only subsections are found and included, the mask will be None as each would exclude the other." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubSequences_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubSequences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SubSequences;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchy_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hierarchy_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Hierarchy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccumulatedNetworkMask_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccumulatedNetworkMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceHierarchy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, RootNode), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNode_MetaData), NewProp_RootNode_MetaData) }; // 3948289842
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Tree = { "Tree", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, Tree), Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tree_MetaData), NewProp_Tree_MetaData) }; // 3289434864
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_ValueProp = { "SubSequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneSubSequenceData, METADATA_PARAMS(0, nullptr) }; // 2053433530
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_Key_KeyProp = { "SubSequences_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(0, nullptr) }; // 3318969255
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences = { "SubSequences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, SubSequences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubSequences_MetaData), NewProp_SubSequences_MetaData) }; // 3318969255 2053433530
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_ValueProp = { "Hierarchy", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode, METADATA_PARAMS(0, nullptr) }; // 3948289842
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_Key_KeyProp = { "Hierarchy_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(0, nullptr) }; // 3318969255
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy = { "Hierarchy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, Hierarchy), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hierarchy_MetaData), NewProp_Hierarchy_MetaData) }; // 3318969255 3948289842
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_AccumulatedNetworkMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_AccumulatedNetworkMask = { "AccumulatedNetworkMask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceHierarchy, AccumulatedNetworkMask), Z_Construct_UEnum_MovieScene_EMovieSceneServerClientMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedNetworkMask_MetaData), NewProp_AccumulatedNetworkMask_MetaData) }; // 1205096813
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_RootNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Tree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_SubSequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_Hierarchy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_AccumulatedNetworkMask_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewProp_AccumulatedNetworkMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequenceHierarchy",
	Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::PropPointers),
	sizeof(FMovieSceneSequenceHierarchy),
	alignof(FMovieSceneSequenceHierarchy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequenceHierarchy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneSubSequenceData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSubSequenceData_Statics::NewStructOps, TEXT("MovieSceneSubSequenceData"), &Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSubSequenceData), 2053433530U) },
		{ FMovieSceneSequenceHierarchyNode::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchyNode_Statics::NewStructOps, TEXT("MovieSceneSequenceHierarchyNode"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchyNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceHierarchyNode), 3948289842U) },
		{ FMovieSceneSubSequenceTreeEntry::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry_Statics::NewStructOps, TEXT("MovieSceneSubSequenceTreeEntry"), &Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTreeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSubSequenceTreeEntry), 3860170521U) },
		{ FMovieSceneSubSequenceTree::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSubSequenceTree_Statics::NewStructOps, TEXT("MovieSceneSubSequenceTree"), &Z_Registration_Info_UScriptStruct_MovieSceneSubSequenceTree, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSubSequenceTree), 3289434864U) },
		{ FMovieSceneSequenceHierarchy::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceHierarchy_Statics::NewStructOps, TEXT("MovieSceneSequenceHierarchy"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceHierarchy), 1395539713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_2904647245(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceHierarchy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
