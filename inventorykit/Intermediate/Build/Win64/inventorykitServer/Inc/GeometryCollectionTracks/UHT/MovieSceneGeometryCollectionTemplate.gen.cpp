// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionTracks/Public/MovieSceneGeometryCollectionTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCollectionTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams();
GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate();
GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneGeometryCollectionSectionTemplateParameters
static_assert(std::is_polymorphic<FMovieSceneGeometryCollectionSectionTemplateParameters>() == std::is_polymorphic<FMovieSceneGeometryCollectionParams>(), "USTRUCT FMovieSceneGeometryCollectionSectionTemplateParameters cannot be polymorphic unless super FMovieSceneGeometryCollectionParams is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplateParameters;
class UScriptStruct* FMovieSceneGeometryCollectionSectionTemplateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionTracks(), TEXT("MovieSceneGeometryCollectionSectionTemplateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplateParameters.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCollectionSectionTemplateParameters>()
{
	return FMovieSceneGeometryCollectionSectionTemplateParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionSectionTemplateParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionStartTime_MetaData), NewProp_SectionStartTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionEndTime_MetaData), NewProp_SectionEndTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewProp_SectionEndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
	Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams,
	&NewStructOps,
	"MovieSceneGeometryCollectionSectionTemplateParameters",
	Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::PropPointers),
	sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters),
	alignof(FMovieSceneGeometryCollectionSectionTemplateParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplateParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplateParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplateParameters.InnerSingleton;
}
// End ScriptStruct FMovieSceneGeometryCollectionSectionTemplateParameters

// Begin ScriptStruct FMovieSceneGeometryCollectionSectionTemplate
static_assert(std::is_polymorphic<FMovieSceneGeometryCollectionSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneGeometryCollectionSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplate;
class UScriptStruct* FMovieSceneGeometryCollectionSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionTracks(), TEXT("MovieSceneGeometryCollectionSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplate.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCollectionSectionTemplate>()
{
	return FMovieSceneGeometryCollectionSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCollectionSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 1967486742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneGeometryCollectionSectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneGeometryCollectionSectionTemplate),
	alignof(FMovieSceneGeometryCollectionSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneGeometryCollectionSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneGeometryCollectionSectionTemplateParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplateParameters_Statics::NewStructOps, TEXT("MovieSceneGeometryCollectionSectionTemplateParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGeometryCollectionSectionTemplateParameters), 1967486742U) },
		{ FMovieSceneGeometryCollectionSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneGeometryCollectionSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGeometryCollectionSectionTemplate), 3983745442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTemplate_h_237792131(TEXT("/Script/GeometryCollectionTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
