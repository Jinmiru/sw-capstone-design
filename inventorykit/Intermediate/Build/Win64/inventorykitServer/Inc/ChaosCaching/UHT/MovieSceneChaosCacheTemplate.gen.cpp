// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCaching/Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h"
#include "ChaosCaching/Public/Chaos/Sequencer/MovieSceneChaosCacheSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChaosCacheTemplate() {}

// Begin Cross Module References
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate();
CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters();
UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

// Begin ScriptStruct FMovieSceneChaosCacheSectionTemplateParameters
static_assert(std::is_polymorphic<FMovieSceneChaosCacheSectionTemplateParameters>() == std::is_polymorphic<FMovieSceneBaseCacheSectionTemplateParameters>(), "USTRUCT FMovieSceneChaosCacheSectionTemplateParameters cannot be polymorphic unless super FMovieSceneBaseCacheSectionTemplateParameters is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters;
class UScriptStruct* FMovieSceneChaosCacheSectionTemplateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("MovieSceneChaosCacheSectionTemplateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FMovieSceneChaosCacheSectionTemplateParameters>()
{
	return FMovieSceneChaosCacheSectionTemplateParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaosCacheParams_MetaData[] = {
		{ "ModuleRelativePath", "Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChaosCacheParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneChaosCacheSectionTemplateParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewProp_ChaosCacheParams = { "ChaosCacheParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneChaosCacheSectionTemplateParameters, ChaosCacheParams), Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaosCacheParams_MetaData), NewProp_ChaosCacheParams_MetaData) }; // 340462098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewProp_ChaosCacheParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters,
	&NewStructOps,
	"MovieSceneChaosCacheSectionTemplateParameters",
	Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::PropPointers),
	sizeof(FMovieSceneChaosCacheSectionTemplateParameters),
	alignof(FMovieSceneChaosCacheSectionTemplateParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.InnerSingleton;
}
// End ScriptStruct FMovieSceneChaosCacheSectionTemplateParameters

// Begin ScriptStruct FMovieSceneChaosCacheSectionTemplate
static_assert(std::is_polymorphic<FMovieSceneChaosCacheSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneChaosCacheSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate;
class UScriptStruct* FMovieSceneChaosCacheSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("MovieSceneChaosCacheSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FMovieSceneChaosCacheSectionTemplate>()
{
	return FMovieSceneChaosCacheSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneChaosCacheSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneChaosCacheSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 3612499797
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
	&NewStructOps,
	"MovieSceneChaosCacheSectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneChaosCacheSectionTemplate),
	alignof(FMovieSceneChaosCacheSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneChaosCacheSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Private_Chaos_Sequencer_MovieSceneChaosCacheTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneChaosCacheSectionTemplateParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewStructOps, TEXT("MovieSceneChaosCacheSectionTemplateParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneChaosCacheSectionTemplateParameters), 3612499797U) },
		{ FMovieSceneChaosCacheSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneChaosCacheSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneChaosCacheSectionTemplate), 4074424852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Private_Chaos_Sequencer_MovieSceneChaosCacheTemplate_h_1780819900(TEXT("/Script/ChaosCaching"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Private_Chaos_Sequencer_MovieSceneChaosCacheTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Private_Chaos_Sequencer_MovieSceneChaosCacheTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
