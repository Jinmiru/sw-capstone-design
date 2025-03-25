// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeTransform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneTimeTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform;
class UScriptStruct* FMovieSceneTimeTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeTransform>()
{
	return FMovieSceneTimeTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene sequence transform class that transforms from one time-space to another.\n *\n * @note The transform can be thought of as the top row of a 2x2 matrix, where the bottom row is the identity:\n * \x09\x09\x09| TimeScale\x09Offset\x09|\n *\x09\x09\x09| 0\x09\x09\x09""1\x09\x09|\n *\n * As such, traditional matrix mathematics can be applied to transform between different sequence's time-spaces.\n *\n * Transforms apply time scale first, and then offset.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTimeTransform.h" },
		{ "ToolTip", "Movie scene sequence transform class that transforms from one time-space to another.\n\n@note The transform can be thought of as the top row of a 2x2 matrix, where the bottom row is the identity:\n                    | TimeScale     Offset  |\n                    | 0                     1               |\n\nAs such, traditional matrix mathematics can be applied to transform between different sequence's time-spaces.\n\nTransforms apply time scale first, and then offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
		{ "Comment", "/** The sequence's time scale (or play rate) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTimeTransform.h" },
		{ "ToolTip", "The sequence's time scale (or play rate)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Comment", "/** Scalar frame offset applied after the scale */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTimeTransform.h" },
		{ "ToolTip", "Scalar frame offset applied after the scale" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTimeTransform, TimeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeScale_MetaData), NewProp_TimeScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneTimeTransform, Offset), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneTimeTransform",
	Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers),
	sizeof(FMovieSceneTimeTransform),
	alignof(FMovieSceneTimeTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.InnerSingleton;
}
// End ScriptStruct FMovieSceneTimeTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneTimeTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewStructOps, TEXT("MovieSceneTimeTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeTransform), 3098440038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeTransform_h_1534063152(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
