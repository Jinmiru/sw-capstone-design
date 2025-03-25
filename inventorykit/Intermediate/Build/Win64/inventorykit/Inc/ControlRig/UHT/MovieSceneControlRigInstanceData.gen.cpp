// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Sequencer/MovieSceneControlRigInstanceData.h"
#include "Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
#include "Runtime/MovieScene/Public/Channels/MovieSceneFloatChannel.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationOperand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigInstanceData() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FMovieSceneControlRigInstanceData
static_assert(std::is_polymorphic<FMovieSceneControlRigInstanceData>() == std::is_polymorphic<FMovieSceneSequenceInstanceData>(), "USTRUCT FMovieSceneControlRigInstanceData cannot be polymorphic unless super FMovieSceneSequenceInstanceData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData;
class UScriptStruct* FMovieSceneControlRigInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("MovieSceneControlRigInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMovieSceneControlRigInstanceData>()
{
	return FMovieSceneControlRigInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdditive_MetaData[] = {
		{ "Comment", "/** Blend this track in additively (using the reference pose as a base) */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "Blend this track in additively (using the reference pose as a base)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyBoneFilter_MetaData[] = {
		{ "Comment", "/** Only apply bones that are in the filter */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "Only apply bones that are in the filter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneFilter_MetaData[] = {
		{ "Comment", "/** Per-bone filter to apply to our animation */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "Per-bone filter to apply to our animation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Comment", "/** The weight curve for this animation controller section */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "The weight curve for this animation controller section" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operand_MetaData[] = {
		{ "Comment", "/** The operand the control rig instance should operate on */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigInstanceData.h" },
		{ "ToolTip", "The operand the control rig instance should operate on" },
	};
#endif // WITH_METADATA
	static void NewProp_bAdditive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
	static void NewProp_bApplyBoneFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyBoneFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Operand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneControlRigInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive_SetBit(void* Obj)
{
	((FMovieSceneControlRigInstanceData*)Obj)->bAdditive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneControlRigInstanceData), &Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdditive_MetaData), NewProp_bAdditive_MetaData) };
void Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter_SetBit(void* Obj)
{
	((FMovieSceneControlRigInstanceData*)Obj)->bApplyBoneFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter = { "bApplyBoneFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMovieSceneControlRigInstanceData), &Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyBoneFilter_MetaData), NewProp_bApplyBoneFilter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_BoneFilter = { "BoneFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneControlRigInstanceData, BoneFilter), Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneFilter_MetaData), NewProp_BoneFilter_MetaData) }; // 235181659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneControlRigInstanceData, Weight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) }; // 139010471
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Operand = { "Operand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneControlRigInstanceData, Operand), Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operand_MetaData), NewProp_Operand_MetaData) }; // 1698504703
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bAdditive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_bApplyBoneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_BoneFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Weight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewProp_Operand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData,
	&NewStructOps,
	"MovieSceneControlRigInstanceData",
	Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::PropPointers),
	sizeof(FMovieSceneControlRigInstanceData),
	alignof(FMovieSceneControlRigInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData.InnerSingleton;
}
// End ScriptStruct FMovieSceneControlRigInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneControlRigInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneControlRigInstanceData_Statics::NewStructOps, TEXT("MovieSceneControlRigInstanceData"), &Z_Registration_Info_UScriptStruct_MovieSceneControlRigInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneControlRigInstanceData), 3632102328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h_3894963725(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigInstanceData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
