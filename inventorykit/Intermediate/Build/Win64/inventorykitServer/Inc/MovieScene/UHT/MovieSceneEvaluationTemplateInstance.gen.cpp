// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationTemplateInstance() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneRootEvaluationTemplateInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance;
class UScriptStruct* FMovieSceneRootEvaluationTemplateInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneRootEvaluationTemplateInstance"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneRootEvaluationTemplateInstance>()
{
	return FMovieSceneRootEvaluationTemplateInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Root evaluation template instance used to play back any sequence\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
		{ "ToolTip", "Root evaluation template instance used to play back any sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitySystemLinker_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationTemplateInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntitySystemLinker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneRootEvaluationTemplateInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker = { "EntitySystemLinker", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneRootEvaluationTemplateInstance, EntitySystemLinker), Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitySystemLinker_MetaData), NewProp_EntitySystemLinker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewProp_EntitySystemLinker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneRootEvaluationTemplateInstance",
	Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::PropPointers),
	sizeof(FMovieSceneRootEvaluationTemplateInstance),
	alignof(FMovieSceneRootEvaluationTemplateInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance.InnerSingleton;
}
// End ScriptStruct FMovieSceneRootEvaluationTemplateInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneRootEvaluationTemplateInstance::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance_Statics::NewStructOps, TEXT("MovieSceneRootEvaluationTemplateInstance"), &Z_Registration_Info_UScriptStruct_MovieSceneRootEvaluationTemplateInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneRootEvaluationTemplateInstance), 3481942416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h_425225858(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTemplateInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
