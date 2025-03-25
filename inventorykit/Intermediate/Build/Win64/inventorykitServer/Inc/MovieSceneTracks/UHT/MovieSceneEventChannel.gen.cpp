// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneEventChannel.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneChannelData.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventChannel() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventChannel();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneEventChannel
static_assert(std::is_polymorphic<FMovieSceneEventChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneEventChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventChannel;
class UScriptStruct* FMovieSceneEventChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventChannel>()
{
	return FMovieSceneEventChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEventChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Array of times for each key */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEventChannel.h" },
		{ "ToolTip", "Array of times for each key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEventChannel.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEventChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventChannel, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyTimes_MetaData), NewProp_KeyTimes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneEvent, METADATA_PARAMS(0, nullptr) }; // 1880327940
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventChannel, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyValues_MetaData), NewProp_KeyValues_MetaData) }; // 1880327940
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEventChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyHandles_MetaData), NewProp_KeyHandles_MetaData) }; // 3777546645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyHandles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneChannel,
	&NewStructOps,
	"MovieSceneEventChannel",
	Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::PropPointers),
	sizeof(FMovieSceneEventChannel),
	alignof(FMovieSceneEventChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneEventChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEventChannel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEventChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewStructOps, TEXT("MovieSceneEventChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneEventChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventChannel), 3045901445U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEventChannel_h_2527834907(TEXT("/Script/MovieSceneTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEventChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEventChannel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
