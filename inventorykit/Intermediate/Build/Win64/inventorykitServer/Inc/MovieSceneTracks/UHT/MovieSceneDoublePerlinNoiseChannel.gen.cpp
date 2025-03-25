// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneDoublePerlinNoiseChannel.h"
#include "Runtime/MovieSceneTracks/Public/MovieSceneTracksComponentTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoublePerlinNoiseChannel() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseParams();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneDoublePerlinNoiseChannel
static_assert(std::is_polymorphic<FMovieSceneDoublePerlinNoiseChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneDoublePerlinNoiseChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel;
class UScriptStruct* FMovieSceneDoublePerlinNoiseChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneDoublePerlinNoiseChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneDoublePerlinNoiseChannel>()
{
	return FMovieSceneDoublePerlinNoiseChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoublePerlinNoiseChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerlinNoiseParams_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** The noise parameters */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoublePerlinNoiseChannel.h" },
		{ "ToolTip", "The noise parameters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerlinNoiseParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDoublePerlinNoiseChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams = { "PerlinNoiseParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneDoublePerlinNoiseChannel, PerlinNoiseParams), Z_Construct_UScriptStruct_FPerlinNoiseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerlinNoiseParams_MetaData), NewProp_PerlinNoiseParams_MetaData) }; // 325962293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneChannel,
	&NewStructOps,
	"MovieSceneDoublePerlinNoiseChannel",
	Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::PropPointers),
	sizeof(FMovieSceneDoublePerlinNoiseChannel),
	alignof(FMovieSceneDoublePerlinNoiseChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneDoublePerlinNoiseChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneDoublePerlinNoiseChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewStructOps, TEXT("MovieSceneDoublePerlinNoiseChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDoublePerlinNoiseChannel), 2711674358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannel_h_524897004(TEXT("/Script/MovieSceneTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
