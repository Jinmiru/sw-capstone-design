// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpaceGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpaceGraph() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin ScriptStruct FAnimNode_BlendSpaceGraph
static_assert(std::is_polymorphic<FAnimNode_BlendSpaceGraph>() == std::is_polymorphic<FAnimNode_BlendSpaceGraphBase>(), "USTRUCT FAnimNode_BlendSpaceGraph cannot be polymorphic unless super FAnimNode_BlendSpaceGraphBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph;
class UScriptStruct* FAnimNode_BlendSpaceGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpaceGraph"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpaceGraph>()
{
	return FAnimNode_BlendSpaceGraph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Allows multiple animations to be blended between based on input parameters\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraph.h" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpaceGraph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase,
	&NewStructOps,
	"AnimNode_BlendSpaceGraph",
	nullptr,
	0,
	sizeof(FAnimNode_BlendSpaceGraph),
	alignof(FAnimNode_BlendSpaceGraph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph.InnerSingleton;
}
// End ScriptStruct FAnimNode_BlendSpaceGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraph_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_BlendSpaceGraph::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph_Statics::NewStructOps, TEXT("AnimNode_BlendSpaceGraph"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpaceGraph), 181659934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraph_h_1369536320(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraph_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
