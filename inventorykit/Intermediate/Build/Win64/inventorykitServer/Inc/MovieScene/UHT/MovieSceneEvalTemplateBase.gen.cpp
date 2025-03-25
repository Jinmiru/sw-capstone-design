// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTemplateBase() {}

// Begin Cross Module References
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneEmptyStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct;
class UScriptStruct* FMovieSceneEmptyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEmptyStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEmptyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEmptyStruct>()
{
	return FMovieSceneEmptyStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Empty struct used for serialization */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplateBase.h" },
		{ "ToolTip", "Empty struct used for serialization" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEmptyStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEmptyStruct",
	nullptr,
	0,
	sizeof(FMovieSceneEmptyStruct),
	alignof(FMovieSceneEmptyStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.InnerSingleton;
}
// End ScriptStruct FMovieSceneEmptyStruct

// Begin ScriptStruct FMovieSceneEvalTemplateBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase;
class UScriptStruct* FMovieSceneEvalTemplateBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplateBase"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvalTemplateBase>()
{
	return FMovieSceneEvalTemplateBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base structure used for all movie scene evaluation templates\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplateBase.h" },
		{ "ToolTip", "Base structure used for all movie scene evaluation templates" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplateBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvalTemplateBase",
	nullptr,
	0,
	sizeof(FMovieSceneEvalTemplateBase),
	alignof(FMovieSceneEvalTemplateBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvalTemplateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplateBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEmptyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::NewStructOps, TEXT("MovieSceneEmptyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEmptyStruct), 332116144U) },
		{ FMovieSceneEvalTemplateBase::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::NewStructOps, TEXT("MovieSceneEvalTemplateBase"), &Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvalTemplateBase), 1374276281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplateBase_h_612597370(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplateBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplateBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
