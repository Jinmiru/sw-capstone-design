// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Private/Sequencer/ControlRigLayerInstanceProxy.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigLayerInstanceProxy() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FAnimNode_ControlRigInputPose
static_assert(std::is_polymorphic<FAnimNode_ControlRigInputPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ControlRigInputPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose;
class UScriptStruct* FAnimNode_ControlRigInputPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("AnimNode_ControlRigInputPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FAnimNode_ControlRigInputPose>()
{
	return FAnimNode_ControlRigInputPose::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Custom internal Input Pose node that handles any AnimInstance */" },
		{ "ModuleRelativePath", "Private/Sequencer/ControlRigLayerInstanceProxy.h" },
		{ "ToolTip", "Custom internal Input Pose node that handles any AnimInstance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[] = {
		{ "Comment", "/** Input pose, optionally linked dynamically to another graph */" },
		{ "ModuleRelativePath", "Private/Sequencer/ControlRigLayerInstanceProxy.h" },
		{ "ToolTip", "Input pose, optionally linked dynamically to another graph" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ControlRigInputPose>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ControlRigInputPose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPose_MetaData), NewProp_InputPose_MetaData) }; // 1074011079
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewProp_InputPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_ControlRigInputPose",
	Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::PropPointers),
	sizeof(FAnimNode_ControlRigInputPose),
	alignof(FAnimNode_ControlRigInputPose),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose.InnerSingleton;
}
// End ScriptStruct FAnimNode_ControlRigInputPose

// Begin ScriptStruct FControlRigLayerInstanceProxy
static_assert(std::is_polymorphic<FControlRigLayerInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FControlRigLayerInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy;
class UScriptStruct* FControlRigLayerInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigLayerInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigLayerInstanceProxy>()
{
	return FControlRigLayerInstanceProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Private/Sequencer/ControlRigLayerInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigLayerInstanceProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FAnimInstanceProxy,
	&NewStructOps,
	"ControlRigLayerInstanceProxy",
	nullptr,
	0,
	sizeof(FControlRigLayerInstanceProxy),
	alignof(FControlRigLayerInstanceProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy.InnerSingleton;
}
// End ScriptStruct FControlRigLayerInstanceProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Sequencer_ControlRigLayerInstanceProxy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_ControlRigInputPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ControlRigInputPose_Statics::NewStructOps, TEXT("AnimNode_ControlRigInputPose"), &Z_Registration_Info_UScriptStruct_AnimNode_ControlRigInputPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ControlRigInputPose), 2904930553U) },
		{ FControlRigLayerInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FControlRigLayerInstanceProxy_Statics::NewStructOps, TEXT("ControlRigLayerInstanceProxy"), &Z_Registration_Info_UScriptStruct_ControlRigLayerInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigLayerInstanceProxy), 1385179195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Sequencer_ControlRigLayerInstanceProxy_h_25037108(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Sequencer_ControlRigLayerInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Sequencer_ControlRigLayerInstanceProxy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
