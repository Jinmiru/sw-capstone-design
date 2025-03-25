// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpaceEvaluator() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_BlendSpaceEvaluator
static_assert(std::is_polymorphic<FAnimNode_BlendSpaceEvaluator>() == std::is_polymorphic<FAnimNode_BlendSpacePlayer>(), "USTRUCT FAnimNode_BlendSpaceEvaluator cannot be polymorphic unless super FAnimNode_BlendSpacePlayer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator;
class UScriptStruct* FAnimNode_BlendSpaceEvaluator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpaceEvaluator"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpaceEvaluator>()
{
	return FAnimNode_BlendSpaceEvaluator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Evaluates a BlendSpace at a specific using a specific time input rather than advancing time\n// internally. Typically the playback position of the animation for this node will represent\n// something other than time, like jump height. Note that events output from the sequences playing\n// and being blended together should not be used. In addition, synchronization of animations\n// will potentially be discontinuous if the blend weights are updated, as the leader/follower changes.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h" },
		{ "ToolTip", "Evaluates a BlendSpace at a specific using a specific time input rather than advancing time\ninternally. Typically the playback position of the animation for this node will represent\nsomething other than time, like jump height. Note that events output from the sequences playing\nand being blended together should not be used. In addition, synchronization of animations\nwill potentially be discontinuous if the blend weights are updated, as the leader/follower changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Normalized time between [0,1]. The actual length of a blendspace is dynamic based on the coordinate, \n\x09 * so it is exposed as a normalized value. Note that treating this as a \"time\" value that increases (and wraps)\n\x09 * will not result in the same output as you would get from using a BlendSpace player. The output events\n\x09 * may not be as expected, and synchronization will sometimes be discontinuous if the leader/follower \n\x09 * animations change as a result of changing the blend weights (even if that is done smoothly).\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Normalized time between [0,1]. The actual length of a blendspace is dynamic based on the coordinate,\nso it is exposed as a normalized value. Note that treating this as a \"time\" value that increases (and wraps)\nwill not result in the same output as you would get from using a BlendSpace player. The output events\nmay not be as expected, and synchronization will sometimes be discontinuous if the leader/follower\nanimations change as a result of changing the blend weights (even if that is done smoothly)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportToNormalizedTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09 * If true, teleport to normalized time, does NOT advance time (does not trigger notifies, does not \n\x09 * extract Root Motion, etc.). If false, will advance time (will trigger notifies, extract root motion \n\x09 * if applicable, etc). \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, teleport to normalized time, does NOT advance time (does not trigger notifies, does not\nextract Root Motion, etc.). If false, will advance time (will trigger notifies, extract root motion\nif applicable, etc)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedTime;
	static void NewProp_bTeleportToNormalizedTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportToNormalizedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpaceEvaluator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_NormalizedTime = { "NormalizedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_BlendSpaceEvaluator, NormalizedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedTime_MetaData), NewProp_NormalizedTime_MetaData) };
void Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime_SetBit(void* Obj)
{
	((FAnimNode_BlendSpaceEvaluator*)Obj)->bTeleportToNormalizedTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime = { "bTeleportToNormalizedTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_BlendSpaceEvaluator), &Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTeleportToNormalizedTime_MetaData), NewProp_bTeleportToNormalizedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_NormalizedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,
	&NewStructOps,
	"AnimNode_BlendSpaceEvaluator",
	Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::PropPointers),
	sizeof(FAnimNode_BlendSpaceEvaluator),
	alignof(FAnimNode_BlendSpaceEvaluator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.InnerSingleton;
}
// End ScriptStruct FAnimNode_BlendSpaceEvaluator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceEvaluator_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_BlendSpaceEvaluator::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewStructOps, TEXT("AnimNode_BlendSpaceEvaluator"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpaceEvaluator), 3267885944U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceEvaluator_h_2533885531(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceEvaluator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceEvaluator_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
