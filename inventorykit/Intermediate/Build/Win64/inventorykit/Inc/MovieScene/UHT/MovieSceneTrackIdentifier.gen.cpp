// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTrackIdentifier() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneTrackIdentifier
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTrackIdentifier;
class UScriptStruct* FMovieSceneTrackIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTrackIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTrackIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackIdentifier.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTrackIdentifier>()
{
	return FMovieSceneTrackIdentifier::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackIdentifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTrackIdentifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTrackIdentifier>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTrackIdentifier, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTrackIdentifier",
	Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::PropPointers),
	sizeof(FMovieSceneTrackIdentifier),
	alignof(FMovieSceneTrackIdentifier),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTrackIdentifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTrackIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTrackIdentifier.InnerSingleton;
}
// End ScriptStruct FMovieSceneTrackIdentifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackIdentifier_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTrackIdentifier::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_Statics::NewStructOps, TEXT("MovieSceneTrackIdentifier"), &Z_Registration_Info_UScriptStruct_MovieSceneTrackIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTrackIdentifier), 3653032415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackIdentifier_h_3488627566(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackIdentifier_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTrackIdentifier_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
