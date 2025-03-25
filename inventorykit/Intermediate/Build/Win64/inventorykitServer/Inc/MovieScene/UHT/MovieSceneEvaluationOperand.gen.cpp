// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationOperand.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationOperand() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneEvaluationOperand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand;
class UScriptStruct* FMovieSceneEvaluationOperand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationOperand"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationOperand>()
{
	return FMovieSceneEvaluationOperand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that describes an object that is to be animated. Used as an abstraction of the actual objects bound to object bindings.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationOperand.h" },
		{ "ToolTip", "Structure that describes an object that is to be animated. Used as an abstraction of the actual objects bound to object bindings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[] = {
		{ "Comment", "/** A GUID relating to either a posessable, or a spawnable binding */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationOperand.h" },
		{ "ToolTip", "A GUID relating to either a posessable, or a spawnable binding" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[] = {
		{ "Comment", "/** The ID of the sequence within which the object binding resides */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationOperand.h" },
		{ "ToolTip", "The ID of the sequence within which the object binding resides" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationOperand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationOperand, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectBindingID_MetaData), NewProp_ObjectBindingID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEvaluationOperand, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceID_MetaData), NewProp_SequenceID_MetaData) }; // 3318969255
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEvaluationOperand",
	Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers),
	sizeof(FMovieSceneEvaluationOperand),
	alignof(FMovieSceneEvaluationOperand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.InnerSingleton;
}
// End ScriptStruct FMovieSceneEvaluationOperand

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationOperand_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEvaluationOperand::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewStructOps, TEXT("MovieSceneEvaluationOperand"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationOperand), 1698504703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationOperand_h_3436813514(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationOperand_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationOperand_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
