// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneIntegerChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraIntegerParameterSectionTemplate() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FMovieSceneNiagaraIntegerParameterSectionTemplate
static_assert(std::is_polymorphic<FMovieSceneNiagaraIntegerParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneNiagaraParameterSectionTemplate>(), "USTRUCT FMovieSceneNiagaraIntegerParameterSectionTemplate cannot be polymorphic unless super FMovieSceneNiagaraParameterSectionTemplate is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate;
class UScriptStruct* FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraIntegerParameterSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraIntegerParameterSectionTemplate>()
{
	return FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegerChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntegerChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraIntegerParameterSectionTemplate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel = { "IntegerChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegerChannel_MetaData), NewProp_IntegerChannel_MetaData) }; // 1279923975
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate,
	&NewStructOps,
	"MovieSceneNiagaraIntegerParameterSectionTemplate",
	Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers),
	sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate),
	alignof(FMovieSceneNiagaraIntegerParameterSectionTemplate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.InnerSingleton;
}
// End ScriptStruct FMovieSceneNiagaraIntegerParameterSectionTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterSectionTemplate_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneNiagaraIntegerParameterSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate), 807599357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterSectionTemplate_h_3459854057(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterSectionTemplate_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
