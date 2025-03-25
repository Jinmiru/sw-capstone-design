// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimSlotEvaluationPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSlotEvaluationPose() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSlotEvaluationPose();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSlotEvaluationPose
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlotEvaluationPose;
class UScriptStruct* FSlotEvaluationPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotEvaluationPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlotEvaluationPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotEvaluationPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SlotEvaluationPose"));
	}
	return Z_Registration_Info_UScriptStruct_SlotEvaluationPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSlotEvaluationPose>()
{
	return FSlotEvaluationPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper struct for Slot node pose evaluation. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSlotEvaluationPose.h" },
		{ "ToolTip", "Helper struct for Slot node pose evaluation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveType_MetaData[] = {
		{ "Comment", "/** Type of additive for pose */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSlotEvaluationPose.h" },
		{ "ToolTip", "Type of additive for pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[] = {
		{ "Comment", "/** Weight of pose */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSlotEvaluationPose.h" },
		{ "ToolTip", "Weight of pose" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AdditiveType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotEvaluationPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_AdditiveType = { "AdditiveType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotEvaluationPose, AdditiveType), Z_Construct_UEnum_Engine_EAdditiveAnimationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditiveType_MetaData), NewProp_AdditiveType_MetaData) }; // 1982879751
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotEvaluationPose, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weight_MetaData), NewProp_Weight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_AdditiveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewProp_Weight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SlotEvaluationPose",
	Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::PropPointers),
	sizeof(FSlotEvaluationPose),
	alignof(FSlotEvaluationPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlotEvaluationPose()
{
	if (!Z_Registration_Info_UScriptStruct_SlotEvaluationPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlotEvaluationPose.InnerSingleton, Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlotEvaluationPose.InnerSingleton;
}
// End ScriptStruct FSlotEvaluationPose

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSlotEvaluationPose_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlotEvaluationPose::StaticStruct, Z_Construct_UScriptStruct_FSlotEvaluationPose_Statics::NewStructOps, TEXT("SlotEvaluationPose"), &Z_Registration_Info_UScriptStruct_SlotEvaluationPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotEvaluationPose), 2727344656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSlotEvaluationPose_h_2695005335(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSlotEvaluationPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSlotEvaluationPose_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
