// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChannel() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneChannel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneChannel;
class UScriptStruct* FMovieSceneChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChannel, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChannel.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneChannel>()
{
	return FMovieSceneChannel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneChannel.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneChannel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneChannel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneChannel",
	nullptr,
	0,
	sizeof(FMovieSceneChannel),
	alignof(FMovieSceneChannel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChannel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneChannel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneChannel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChannel.InnerSingleton;
}
// End ScriptStruct FMovieSceneChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneChannel_Statics::NewStructOps, TEXT("MovieSceneChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneChannel), 4217182766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannel_h_3650133835(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
