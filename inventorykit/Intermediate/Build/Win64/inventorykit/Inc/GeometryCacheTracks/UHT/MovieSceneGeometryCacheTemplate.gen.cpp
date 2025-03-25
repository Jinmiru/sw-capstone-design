// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheTracks/Private/MovieSceneGeometryCacheTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
GEOMETRYCACHETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams();
GEOMETRYCACHETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate();
GEOMETRYCACHETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
UPackage* Z_Construct_UPackage__Script_GeometryCacheTracks();
// End Cross Module References

// Begin ScriptStruct FMovieSceneGeometryCacheSectionTemplateParameters
static_assert(std::is_polymorphic<FMovieSceneGeometryCacheSectionTemplateParameters>() == std::is_polymorphic<FMovieSceneGeometryCacheParams>(), "USTRUCT FMovieSceneGeometryCacheSectionTemplateParameters cannot be polymorphic unless super FMovieSceneGeometryCacheParams is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplateParameters;
class UScriptStruct* FMovieSceneGeometryCacheSectionTemplateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters, (UObject*)Z_Construct_UPackage__Script_GeometryCacheTracks(), TEXT("MovieSceneGeometryCacheSectionTemplateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplateParameters.OuterSingleton;
}
template<> GEOMETRYCACHETRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCacheSectionTemplateParameters>()
{
	return FMovieSceneGeometryCacheSectionTemplateParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplateParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheSectionTemplateParameters, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionStartTime_MetaData), NewProp_SectionStartTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheSectionTemplateParameters, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionEndTime_MetaData), NewProp_SectionEndTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheTracks,
	Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams,
	&NewStructOps,
	"MovieSceneGeometryCacheSectionTemplateParameters",
	Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::PropPointers),
	sizeof(FMovieSceneGeometryCacheSectionTemplateParameters),
	alignof(FMovieSceneGeometryCacheSectionTemplateParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplateParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplateParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplateParameters.InnerSingleton;
}
// End ScriptStruct FMovieSceneGeometryCacheSectionTemplateParameters

// Begin ScriptStruct FMovieSceneGeometryCacheSectionTemplate
static_assert(std::is_polymorphic<FMovieSceneGeometryCacheSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneGeometryCacheSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplate;
class UScriptStruct* FMovieSceneGeometryCacheSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate, (UObject*)Z_Construct_UPackage__Script_GeometryCacheTracks(), TEXT("MovieSceneGeometryCacheSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplate.OuterSingleton;
}
template<> GEOMETRYCACHETRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCacheSectionTemplate>()
{
	return FMovieSceneGeometryCacheSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGeometryCacheTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneGeometryCacheSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 3560325973
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheTracks,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneGeometryCacheSectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneGeometryCacheSectionTemplate),
	alignof(FMovieSceneGeometryCacheSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneGeometryCacheSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Private_MovieSceneGeometryCacheTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneGeometryCacheSectionTemplateParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplateParameters_Statics::NewStructOps, TEXT("MovieSceneGeometryCacheSectionTemplateParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGeometryCacheSectionTemplateParameters), 3560325973U) },
		{ FMovieSceneGeometryCacheSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCacheSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneGeometryCacheSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGeometryCacheSectionTemplate), 3935472090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Private_MovieSceneGeometryCacheTemplate_h_413648156(TEXT("/Script/GeometryCacheTracks"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Private_MovieSceneGeometryCacheTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Private_MovieSceneGeometryCacheTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
