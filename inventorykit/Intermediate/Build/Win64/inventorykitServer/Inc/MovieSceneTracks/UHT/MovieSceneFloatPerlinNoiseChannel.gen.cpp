// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Channels/MovieSceneFloatPerlinNoiseChannel.h"
#include "Runtime/MovieSceneTracks/Public/MovieSceneTracksComponentTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatPerlinNoiseChannel() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseParams();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneFloatPerlinNoiseChannel
static_assert(std::is_polymorphic<FMovieSceneFloatPerlinNoiseChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneFloatPerlinNoiseChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel;
class UScriptStruct* FMovieSceneFloatPerlinNoiseChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneFloatPerlinNoiseChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneFloatPerlinNoiseChannel>()
{
	return FMovieSceneFloatPerlinNoiseChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatPerlinNoiseChannel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerlinNoiseParams_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** The noise parameters */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatPerlinNoiseChannel.h" },
		{ "ToolTip", "The noise parameters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerlinNoiseParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatPerlinNoiseChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams = { "PerlinNoiseParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneFloatPerlinNoiseChannel, PerlinNoiseParams), Z_Construct_UScriptStruct_FPerlinNoiseParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerlinNoiseParams_MetaData), NewProp_PerlinNoiseParams_MetaData) }; // 325962293
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	Z_Construct_UScriptStruct_FMovieSceneChannel,
	&NewStructOps,
	"MovieSceneFloatPerlinNoiseChannel",
	Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::PropPointers),
	sizeof(FMovieSceneFloatPerlinNoiseChannel),
	alignof(FMovieSceneFloatPerlinNoiseChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneFloatPerlinNoiseChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneFloatPerlinNoiseChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewStructOps, TEXT("MovieSceneFloatPerlinNoiseChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatPerlinNoiseChannel), 3261295556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannel_h_3749147021(TEXT("/Script/MovieSceneTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
