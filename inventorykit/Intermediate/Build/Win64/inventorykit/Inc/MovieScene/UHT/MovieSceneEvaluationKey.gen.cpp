// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationKey() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneEvaluationKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey;
class UScriptStruct* FMovieSceneEvaluationKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationKey>()
{
	return FMovieSceneEvaluationKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Keyable struct that represents a particular entity within an evaluation template (either a section/template or a track) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
		{ "ToolTip", "Keyable struct that represents a particular entity within an evaluation template (either a section/template or a track)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[] = {
		{ "Comment", "/** ID of the sequence that the entity is contained within */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
		{ "ToolTip", "ID of the sequence that the entity is contained within" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackIdentifier_MetaData[] = {
		{ "Comment", "/** ID of the track this key relates to */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
		{ "ToolTip", "ID of the track this key relates to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[] = {
		{ "Comment", "/** Index of the section template within the track this key relates to (or -1 where this key relates to a track) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
		{ "ToolTip", "Index of the section template within the track this key relates to (or -1 where this key relates to a track)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackIdentifier;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SectionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationKey, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceID_MetaData), NewProp_SequenceID_MetaData) }; // 3318969255
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_TrackIdentifier = { "TrackIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationKey, TrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackIdentifier_MetaData), NewProp_TrackIdentifier_MetaData) }; // 3653032415
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationKey, SectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionIndex_MetaData), NewProp_SectionIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SequenceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_TrackIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SectionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationKey",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationKey),
	alignof(FMovieSceneEvaluationKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationKey

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationKey_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEvaluationKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewStructOps, TEXT("MovieSceneEvaluationKey"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationKey), 96721660U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationKey_h_2306455315(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationKey_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationKey_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
