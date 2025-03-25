// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimSingleNodeInstanceProxy.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstanceProxy() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SingleNode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FAnimNode_SingleNode
static_assert(std::is_polymorphic<FAnimNode_SingleNode>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_SingleNode cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SingleNode;
class UScriptStruct* FAnimNode_SingleNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SingleNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SingleNode"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SingleNode>()
{
	return FAnimNode_SingleNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Local anim node for extensible processing. \n * Cant be used outside of this context as it has no graph node counterpart \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
		{ "ToolTip", "Local anim node for extensible processing.\nCant be used outside of this context as it has no graph node counterpart" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SingleNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_SingleNode, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // 1074011079
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_SingleNode",
	Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers),
	sizeof(FAnimNode_SingleNode),
	alignof(FAnimNode_SingleNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SingleNode()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.InnerSingleton;
}
// End ScriptStruct FAnimNode_SingleNode

// Begin ScriptStruct FAnimSingleNodeInstanceProxy
static_assert(std::is_polymorphic<FAnimSingleNodeInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FAnimSingleNodeInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy;
class UScriptStruct* FAnimSingleNodeInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSingleNodeInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSingleNodeInstanceProxy>()
{
	return FAnimSingleNodeInstanceProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSingleNodeInstanceProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FAnimInstanceProxy,
	&NewStructOps,
	"AnimSingleNodeInstanceProxy",
	nullptr,
	0,
	sizeof(FAnimSingleNodeInstanceProxy),
	alignof(FAnimSingleNodeInstanceProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.InnerSingleton;
}
// End ScriptStruct FAnimSingleNodeInstanceProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_SingleNode::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewStructOps, TEXT("AnimNode_SingleNode"), &Z_Registration_Info_UScriptStruct_AnimNode_SingleNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SingleNode), 2141509733U) },
		{ FAnimSingleNodeInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::NewStructOps, TEXT("AnimSingleNodeInstanceProxy"), &Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSingleNodeInstanceProxy), 1387554106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h_1381148578(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
