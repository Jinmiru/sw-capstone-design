// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFrameMigration() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneFrameRange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFrameRange;
class UScriptStruct* FMovieSceneFrameRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFrameRange, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFrameRange"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneFrameRange>()
{
	return FMovieSceneFrameRange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Type used to convert from a FFloatRange to a TRange<FFrameNumber>\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneFrameMigration.h" },
		{ "ToolTip", "Type used to convert from a FFloatRange to a TRange<FFrameNumber>" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFrameRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneFrameRange",
	nullptr,
	0,
	sizeof(FMovieSceneFrameRange),
	alignof(FMovieSceneFrameRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.InnerSingleton;
}
// End ScriptStruct FMovieSceneFrameRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneFrameRange::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::NewStructOps, TEXT("MovieSceneFrameRange"), &Z_Registration_Info_UScriptStruct_MovieSceneFrameRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFrameRange), 83459642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h_1672495749(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
