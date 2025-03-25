// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneComponentMaterialParameterSection.h"
#include "Runtime/Engine/Public/MaterialTypes.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComponentMaterialParameterSection() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection();
MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve();
UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

// Begin ScriptStruct FScalarMaterialParameterInfoAndCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScalarMaterialParameterInfoAndCurve;
class UScriptStruct* FScalarMaterialParameterInfoAndCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarMaterialParameterInfoAndCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScalarMaterialParameterInfoAndCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ScalarMaterialParameterInfoAndCurve"));
	}
	return Z_Registration_Info_UScriptStruct_ScalarMaterialParameterInfoAndCurve.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FScalarMaterialParameterInfoAndCurve>()
{
	return FScalarMaterialParameterInfoAndCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure representing an animated scalar parameter and it's associated animation curve.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Structure representing an animated scalar parameter and it's associated animation curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "Comment", "/** The material parameter info of the scalar parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "The material parameter info of the scalar parameter which is being animated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the scalar parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the scalar parameter." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterLayerName_MetaData[] = {
		{ "Comment", "/** Editor-only name of parameter layer, if applicable */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Editor-only name of parameter layer, if applicable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterAssetName_MetaData[] = {
		{ "Comment", "/** Editor-only name of parameter asset, if applicable */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Editor-only name of parameter asset, if applicable" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterLayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterAssetName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarMaterialParameterInfoAndCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarMaterialParameterInfoAndCurve, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarMaterialParameterInfoAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterCurve_MetaData), NewProp_ParameterCurve_MetaData) }; // 139010471
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::NewProp_ParameterLayerName = { "ParameterLayerName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarMaterialParameterInfoAndCurve, ParameterLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterLayerName_MetaData), NewProp_ParameterLayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::NewProp_ParameterAssetName = { "ParameterAssetName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarMaterialParameterInfoAndCurve, ParameterAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterAssetName_MetaData), NewProp_ParameterAssetName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::NewProp_ParameterCurve,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::NewProp_ParameterLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::NewProp_ParameterAssetName,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"ScalarMaterialParameterInfoAndCurve",
	Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::PropPointers),
	sizeof(FScalarMaterialParameterInfoAndCurve),
	alignof(FScalarMaterialParameterInfoAndCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarMaterialParameterInfoAndCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScalarMaterialParameterInfoAndCurve.InnerSingleton, Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScalarMaterialParameterInfoAndCurve.InnerSingleton;
}
// End ScriptStruct FScalarMaterialParameterInfoAndCurve

// Begin ScriptStruct FColorMaterialParameterInfoAndCurves
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ColorMaterialParameterInfoAndCurves;
class UScriptStruct* FColorMaterialParameterInfoAndCurves::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ColorMaterialParameterInfoAndCurves.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ColorMaterialParameterInfoAndCurves.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ColorMaterialParameterInfoAndCurves"));
	}
	return Z_Registration_Info_UScriptStruct_ColorMaterialParameterInfoAndCurves.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FColorMaterialParameterInfoAndCurves>()
{
	return FColorMaterialParameterInfoAndCurves::StaticStruct();
}
struct Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Structure representing an animated color parameter and it's associated animation curve.\n*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Structure representing an animated color parameter and it's associated animation curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "Comment", "/** The name of the color parameter which is being animated. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "The name of the color parameter which is being animated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the red component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the red component of the color parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GreenCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the green component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the green component of the color parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the blue component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the blue component of the color parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurve_MetaData[] = {
		{ "Comment", "/** The curve which contains the animation data for the alpha component of the color parameter. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "The curve which contains the animation data for the alpha component of the color parameter." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterLayerName_MetaData[] = {
		{ "Comment", "/** Name of parameter layer, if applicable */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Name of parameter layer, if applicable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterAssetName_MetaData[] = {
		{ "Comment", "/** Name of parameter asset, if applicable */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Name of parameter asset, if applicable" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RedCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GreenCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCurve;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterLayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterAssetName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorMaterialParameterInfoAndCurves>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorMaterialParameterInfoAndCurves, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_RedCurve = { "RedCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorMaterialParameterInfoAndCurves, RedCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedCurve_MetaData), NewProp_RedCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_GreenCurve = { "GreenCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorMaterialParameterInfoAndCurves, GreenCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GreenCurve_MetaData), NewProp_GreenCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_BlueCurve = { "BlueCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorMaterialParameterInfoAndCurves, BlueCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueCurve_MetaData), NewProp_BlueCurve_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_AlphaCurve = { "AlphaCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorMaterialParameterInfoAndCurves, AlphaCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCurve_MetaData), NewProp_AlphaCurve_MetaData) }; // 139010471
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_ParameterLayerName = { "ParameterLayerName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorMaterialParameterInfoAndCurves, ParameterLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterLayerName_MetaData), NewProp_ParameterLayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_ParameterAssetName = { "ParameterAssetName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorMaterialParameterInfoAndCurves, ParameterAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterAssetName_MetaData), NewProp_ParameterAssetName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_RedCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_GreenCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_BlueCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_AlphaCurve,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_ParameterLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewProp_ParameterAssetName,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	nullptr,
	&NewStructOps,
	"ColorMaterialParameterInfoAndCurves",
	Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::PropPointers),
	sizeof(FColorMaterialParameterInfoAndCurves),
	alignof(FColorMaterialParameterInfoAndCurves),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves()
{
	if (!Z_Registration_Info_UScriptStruct_ColorMaterialParameterInfoAndCurves.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ColorMaterialParameterInfoAndCurves.InnerSingleton, Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ColorMaterialParameterInfoAndCurves.InnerSingleton;
}
// End ScriptStruct FColorMaterialParameterInfoAndCurves

// Begin Class UMovieSceneComponentMaterialParameterSection Function AddColorParameterKey
struct Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics
{
	struct MovieSceneComponentMaterialParameterSection_eventAddColorParameterKey_Parms
	{
		FMaterialParameterInfo InParameterInfo;
		FFrameNumber InTime;
		FLinearColor InValue;
		FString InLayerName;
		FString InAssetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Adds a a key for a specific color parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific color parameter at the specified time with the specified value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameterInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InLayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InParameterInfo = { "InParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddColorParameterKey_Parms, InParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterInfo_MetaData), NewProp_InParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddColorParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddColorParameterKey_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InLayerName = { "InLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddColorParameterKey_Parms, InLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLayerName_MetaData), NewProp_InLayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InAssetName = { "InAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddColorParameterKey_Parms, InAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetName_MetaData), NewProp_InAssetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::NewProp_InAssetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection, nullptr, "AddColorParameterKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::MovieSceneComponentMaterialParameterSection_eventAddColorParameterKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::MovieSceneComponentMaterialParameterSection_eventAddColorParameterKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneComponentMaterialParameterSection::execAddColorParameterKey)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_InParameterInfo);
	P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
	P_GET_STRUCT(FLinearColor,Z_Param_InValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_InLayerName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InAssetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddColorParameterKey(Z_Param_Out_InParameterInfo,Z_Param_InTime,Z_Param_InValue,Z_Param_InLayerName,Z_Param_InAssetName);
	P_NATIVE_END;
}
// End Class UMovieSceneComponentMaterialParameterSection Function AddColorParameterKey

// Begin Class UMovieSceneComponentMaterialParameterSection Function AddScalarParameterKey
struct Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics
{
	struct MovieSceneComponentMaterialParameterSection_eventAddScalarParameterKey_Parms
	{
		FMaterialParameterInfo InParameterInfo;
		FFrameNumber InTime;
		float InValue;
		FString InLayerName;
		FString InAssetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Adds a a key for a specific scalar parameter at the specified time with the specified value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Adds a a key for a specific scalar parameter at the specified time with the specified value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameterInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InLayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InParameterInfo = { "InParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddScalarParameterKey_Parms, InParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterInfo_MetaData), NewProp_InParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddScalarParameterKey_Parms, InTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddScalarParameterKey_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InLayerName = { "InLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddScalarParameterKey_Parms, InLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLayerName_MetaData), NewProp_InLayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InAssetName = { "InAssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventAddScalarParameterKey_Parms, InAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetName_MetaData), NewProp_InAssetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::NewProp_InAssetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection, nullptr, "AddScalarParameterKey", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::MovieSceneComponentMaterialParameterSection_eventAddScalarParameterKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::MovieSceneComponentMaterialParameterSection_eventAddScalarParameterKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneComponentMaterialParameterSection::execAddScalarParameterKey)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_InParameterInfo);
	P_GET_STRUCT(FFrameNumber,Z_Param_InTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_GET_PROPERTY(FStrProperty,Z_Param_InLayerName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InAssetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddScalarParameterKey(Z_Param_Out_InParameterInfo,Z_Param_InTime,Z_Param_InValue,Z_Param_InLayerName,Z_Param_InAssetName);
	P_NATIVE_END;
}
// End Class UMovieSceneComponentMaterialParameterSection Function AddScalarParameterKey

// Begin Class UMovieSceneComponentMaterialParameterSection Function RemoveColorParameter
struct Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics
{
	struct MovieSceneComponentMaterialParameterSection_eventRemoveColorParameter_Parms
	{
		FMaterialParameterInfo InParameterInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Removes a color parameter from this section.\n\x09 *\n\x09 * @param InParameterInfo The material parameter info of the color parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Removes a color parameter from this section.\n\n@param InParameterInfo The material parameter info of the color parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameterInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::NewProp_InParameterInfo = { "InParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventRemoveColorParameter_Parms, InParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterInfo_MetaData), NewProp_InParameterInfo_MetaData) }; // 682741679
void Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneComponentMaterialParameterSection_eventRemoveColorParameter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneComponentMaterialParameterSection_eventRemoveColorParameter_Parms), &Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::NewProp_InParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection, nullptr, "RemoveColorParameter", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::MovieSceneComponentMaterialParameterSection_eventRemoveColorParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::MovieSceneComponentMaterialParameterSection_eventRemoveColorParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneComponentMaterialParameterSection::execRemoveColorParameter)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_InParameterInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveColorParameter(Z_Param_Out_InParameterInfo);
	P_NATIVE_END;
}
// End Class UMovieSceneComponentMaterialParameterSection Function RemoveColorParameter

// Begin Class UMovieSceneComponentMaterialParameterSection Function RemoveScalarParameter
struct Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics
{
	struct MovieSceneComponentMaterialParameterSection_eventRemoveScalarParameter_Parms
	{
		FMaterialParameterInfo InParameterInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** \n\x09 * Removes a scalar parameter from this section. \n\x09 * \n\x09 * @param InParameterInfo The material parameter info of the scalar parameter to remove.\n\x09 * @returns True if a parameter with that name was found and removed, otherwise false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "Removes a scalar parameter from this section.\n\n@param InParameterInfo The material parameter info of the scalar parameter to remove.\n@returns True if a parameter with that name was found and removed, otherwise false." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameterInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::NewProp_InParameterInfo = { "InParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovieSceneComponentMaterialParameterSection_eventRemoveScalarParameter_Parms, InParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameterInfo_MetaData), NewProp_InParameterInfo_MetaData) }; // 682741679
void Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MovieSceneComponentMaterialParameterSection_eventRemoveScalarParameter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MovieSceneComponentMaterialParameterSection_eventRemoveScalarParameter_Parms), &Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::NewProp_InParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection, nullptr, "RemoveScalarParameter", nullptr, nullptr, Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::MovieSceneComponentMaterialParameterSection_eventRemoveScalarParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::MovieSceneComponentMaterialParameterSection_eventRemoveScalarParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMovieSceneComponentMaterialParameterSection::execRemoveScalarParameter)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_InParameterInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveScalarParameter(Z_Param_Out_InParameterInfo);
	P_NATIVE_END;
}
// End Class UMovieSceneComponentMaterialParameterSection Function RemoveScalarParameter

// Begin Class UMovieSceneComponentMaterialParameterSection
void UMovieSceneComponentMaterialParameterSection::StaticRegisterNativesUMovieSceneComponentMaterialParameterSection()
{
	UClass* Class = UMovieSceneComponentMaterialParameterSection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddColorParameterKey", &UMovieSceneComponentMaterialParameterSection::execAddColorParameterKey },
		{ "AddScalarParameterKey", &UMovieSceneComponentMaterialParameterSection::execAddScalarParameterKey },
		{ "RemoveColorParameter", &UMovieSceneComponentMaterialParameterSection::execRemoveColorParameter },
		{ "RemoveScalarParameter", &UMovieSceneComponentMaterialParameterSection::execRemoveScalarParameter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComponentMaterialParameterSection);
UClass* Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_NoRegister()
{
	return UMovieSceneComponentMaterialParameterSection::StaticClass();
}
struct Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A movie scene section containing data for material parameters.\n */" },
		{ "IncludePath", "Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "A movie scene section containing data for material parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterInfosAndCurves_MetaData[] = {
		{ "Comment", "/** The scalar parameter infos and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "The scalar parameter infos and their associated curves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorParameterInfosAndCurves_MetaData[] = {
		{ "Comment", "/** The color parameter infos and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneComponentMaterialParameterSection.h" },
		{ "ToolTip", "The color parameter infos and their associated curves." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameterInfosAndCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterInfosAndCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorParameterInfosAndCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorParameterInfosAndCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddColorParameterKey, "AddColorParameterKey" }, // 3779793203
		{ &Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_AddScalarParameterKey, "AddScalarParameterKey" }, // 386842444
		{ &Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveColorParameter, "RemoveColorParameter" }, // 2046904627
		{ &Z_Construct_UFunction_UMovieSceneComponentMaterialParameterSection_RemoveScalarParameter, "RemoveScalarParameter" }, // 1184087165
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentMaterialParameterSection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::NewProp_ScalarParameterInfosAndCurves_Inner = { "ScalarParameterInfosAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve, METADATA_PARAMS(0, nullptr) }; // 4212533857
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::NewProp_ScalarParameterInfosAndCurves = { "ScalarParameterInfosAndCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneComponentMaterialParameterSection, ScalarParameterInfosAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarParameterInfosAndCurves_MetaData), NewProp_ScalarParameterInfosAndCurves_MetaData) }; // 4212533857
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::NewProp_ColorParameterInfosAndCurves_Inner = { "ColorParameterInfosAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves, METADATA_PARAMS(0, nullptr) }; // 2738755131
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::NewProp_ColorParameterInfosAndCurves = { "ColorParameterInfosAndCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMovieSceneComponentMaterialParameterSection, ColorParameterInfosAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorParameterInfosAndCurves_MetaData), NewProp_ColorParameterInfosAndCurves_MetaData) }; // 2738755131
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::NewProp_ScalarParameterInfosAndCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::NewProp_ScalarParameterInfosAndCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::NewProp_ColorParameterInfosAndCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::NewProp_ColorParameterInfosAndCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneComponentMaterialParameterSection, IMovieSceneEntityProvider), false },  // 1280352339
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::ClassParams = {
	&UMovieSceneComponentMaterialParameterSection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x002800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::Class_MetaDataParams), Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection()
{
	if (!Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection.OuterSingleton, Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentMaterialParameterSection>()
{
	return UMovieSceneComponentMaterialParameterSection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentMaterialParameterSection);
UMovieSceneComponentMaterialParameterSection::~UMovieSceneComponentMaterialParameterSection() {}
// End Class UMovieSceneComponentMaterialParameterSection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScalarMaterialParameterInfoAndCurve::StaticStruct, Z_Construct_UScriptStruct_FScalarMaterialParameterInfoAndCurve_Statics::NewStructOps, TEXT("ScalarMaterialParameterInfoAndCurve"), &Z_Registration_Info_UScriptStruct_ScalarMaterialParameterInfoAndCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalarMaterialParameterInfoAndCurve), 4212533857U) },
		{ FColorMaterialParameterInfoAndCurves::StaticStruct, Z_Construct_UScriptStruct_FColorMaterialParameterInfoAndCurves_Statics::NewStructOps, TEXT("ColorMaterialParameterInfoAndCurves"), &Z_Registration_Info_UScriptStruct_ColorMaterialParameterInfoAndCurves, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColorMaterialParameterInfoAndCurves), 2738755131U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComponentMaterialParameterSection, UMovieSceneComponentMaterialParameterSection::StaticClass, TEXT("UMovieSceneComponentMaterialParameterSection"), &Z_Registration_Info_UClass_UMovieSceneComponentMaterialParameterSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComponentMaterialParameterSection), 3760813507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_571751990(TEXT("/Script/MovieSceneTracks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneComponentMaterialParameterSection_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
