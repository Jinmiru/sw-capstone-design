// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystemGraphs() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode();
MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes();
UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

// Begin ScriptStruct FMovieSceneEntitySystemGraphNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode;
class UScriptStruct* FMovieSceneEntitySystemGraphNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntitySystemGraphNode"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntitySystemGraphNode>()
{
	return FMovieSceneEntitySystemGraphNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
		{ "ToolTip", "namespace UE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_System;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraphNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEntitySystemGraphNode, System), Z_Construct_UClass_UMovieSceneEntitySystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_System_MetaData), NewProp_System_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewProp_System,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEntitySystemGraphNode",
	Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::PropPointers),
	sizeof(FMovieSceneEntitySystemGraphNode),
	alignof(FMovieSceneEntitySystemGraphNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode.InnerSingleton;
}
// End ScriptStruct FMovieSceneEntitySystemGraphNode

// Begin ScriptStruct FMovieSceneEntitySystemGraphNodes
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes;
class UScriptStruct* FMovieSceneEntitySystemGraphNodes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntitySystemGraphNodes"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntitySystemGraphNodes>()
{
	return FMovieSceneEntitySystemGraphNodes::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraphNodes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEntitySystemGraphNodes",
	nullptr,
	0,
	sizeof(FMovieSceneEntitySystemGraphNodes),
	alignof(FMovieSceneEntitySystemGraphNodes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes.InnerSingleton;
}
// End ScriptStruct FMovieSceneEntitySystemGraphNodes

// Begin ScriptStruct FMovieSceneEntitySystemGraph
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph;
class UScriptStruct* FMovieSceneEntitySystemGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEntitySystemGraph"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEntitySystemGraph>()
{
	return FMovieSceneEntitySystemGraph::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemGraphs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEntitySystemGraph>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovieSceneEntitySystemGraph, Nodes), Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 741867583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewProp_Nodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	nullptr,
	&NewStructOps,
	"MovieSceneEntitySystemGraph",
	Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::PropPointers),
	sizeof(FMovieSceneEntitySystemGraph),
	alignof(FMovieSceneEntitySystemGraph),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph.InnerSingleton;
}
// End ScriptStruct FMovieSceneEntitySystemGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMovieSceneEntitySystemGraphNode::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNode_Statics::NewStructOps, TEXT("MovieSceneEntitySystemGraphNode"), &Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEntitySystemGraphNode), 1008809879U) },
		{ FMovieSceneEntitySystemGraphNodes::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraphNodes_Statics::NewStructOps, TEXT("MovieSceneEntitySystemGraphNodes"), &Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraphNodes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEntitySystemGraphNodes), 741867583U) },
		{ FMovieSceneEntitySystemGraph::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph_Statics::NewStructOps, TEXT("MovieSceneEntitySystemGraph"), &Z_Registration_Info_UScriptStruct_MovieSceneEntitySystemGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEntitySystemGraph), 2672344876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h_421347749(TEXT("/Script/MovieScene"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemGraphs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
