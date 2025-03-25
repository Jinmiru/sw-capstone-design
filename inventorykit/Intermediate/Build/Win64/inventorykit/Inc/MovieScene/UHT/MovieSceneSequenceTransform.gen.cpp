// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTransform() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarping();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWarpCounter();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneWarpCounter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter;
class UScriptStruct* FMovieSceneWarpCounter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWarpCounter, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneWarpCounter"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneWarpCounter>()
{
	return FMovieSceneWarpCounter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct that tracks warp counts in a way that works with the FMovieSceneTimeWarping struct.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Struct that tracks warp counts in a way that works with the FMovieSceneTimeWarping struct." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarpCounts_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_WarpCounts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpCounts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWarpCounter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_Inner = { "WarpCounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts = { "WarpCounts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneWarpCounter, WarpCounts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarpCounts_MetaData), NewProp_WarpCounts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneWarpCounter",
	Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers),
	sizeof(FMovieSceneWarpCounter),
	alignof(FMovieSceneWarpCounter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWarpCounter()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.InnerSingleton;
}
// End ScriptStruct FMovieSceneWarpCounter

// Begin ScriptStruct FMovieSceneNestedSequenceTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform;
class UScriptStruct* FMovieSceneNestedSequenceTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneNestedSequenceTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneNestedSequenceTransform>()
{
	return FMovieSceneNestedSequenceTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Time transform information for a nested sequence.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Time transform information for a nested sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * Linear time transform for this sub-sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Linear time transform for this sub-sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Warping_MetaData[] = {
		{ "Comment", "/**\n\x09 * Time warping information for this sub-sequence used for looping.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Time warping information for this sub-sequence used for looping." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Warping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNestedSequenceTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform = { "LinearTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNestedSequenceTransform, LinearTransform), Z_Construct_UScriptStruct_FMovieSceneTimeTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearTransform_MetaData), NewProp_LinearTransform_MetaData) }; // 3098440038
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping = { "Warping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNestedSequenceTransform, Warping), Z_Construct_UScriptStruct_FMovieSceneTimeWarping, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Warping_MetaData), NewProp_Warping_MetaData) }; // 3421538288
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneNestedSequenceTransform",
	Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers),
	sizeof(FMovieSceneNestedSequenceTransform),
	alignof(FMovieSceneNestedSequenceTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.InnerSingleton;
}
// End ScriptStruct FMovieSceneNestedSequenceTransform

// Begin ScriptStruct FMovieSceneSequenceTransform
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform;
class UScriptStruct* FMovieSceneSequenceTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceTransform>()
{
	return FMovieSceneSequenceTransform::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene sequence transform class that transforms from one time-space to another.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Movie scene sequence transform class that transforms from one time-space to another." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NestedTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NestedTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NestedTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceTransform>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform = { "LinearTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceTransform, LinearTransform), Z_Construct_UScriptStruct_FMovieSceneTimeTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearTransform_MetaData), NewProp_LinearTransform_MetaData) }; // 3098440038
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_Inner = { "NestedTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform, METADATA_PARAMS(0, nullptr) }; // 3832775353
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms = { "NestedTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneSequenceTransform, NestedTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NestedTransforms_MetaData), NewProp_NestedTransforms_MetaData) }; // 3832775353
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneSequenceTransform",
	Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers),
	sizeof(FMovieSceneSequenceTransform),
	alignof(FMovieSceneSequenceTransform),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.InnerSingleton;
}
// End ScriptStruct FMovieSceneSequenceTransform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneWarpCounter::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewStructOps, TEXT("MovieSceneWarpCounter"), &Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneWarpCounter), 2801982449U) },
		{ FMovieSceneNestedSequenceTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewStructOps, TEXT("MovieSceneNestedSequenceTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNestedSequenceTransform), 3832775353U) },
		{ FMovieSceneSequenceTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewStructOps, TEXT("MovieSceneSequenceTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceTransform), 3142838919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_1872994269(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
