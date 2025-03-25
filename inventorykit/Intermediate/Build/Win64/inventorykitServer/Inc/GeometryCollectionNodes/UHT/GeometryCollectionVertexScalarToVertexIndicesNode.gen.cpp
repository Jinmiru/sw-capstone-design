// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionVertexScalarToVertexIndicesNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionVertexScalarToVertexIndicesNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FGeometryCollectionVertexScalarToVertexIndicesNode
static_assert(std::is_polymorphic<FGeometryCollectionVertexScalarToVertexIndicesNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGeometryCollectionVertexScalarToVertexIndicesNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionVertexScalarToVertexIndicesNode;
class UScriptStruct* FGeometryCollectionVertexScalarToVertexIndicesNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionVertexScalarToVertexIndicesNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionVertexScalarToVertexIndicesNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GeometryCollectionVertexScalarToVertexIndicesNode"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionVertexScalarToVertexIndicesNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGeometryCollectionVertexScalarToVertexIndicesNode>()
{
	return FGeometryCollectionVertexScalarToVertexIndicesNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Convert an vertex float array to a list of indices */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVertexScalarToVertexIndicesNode.h" },
		{ "ToolTip", "Convert an vertex float array to a list of indices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVertexScalarToVertexIndicesNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexAttributeName_MetaData[] = {
		{ "Category", "Selection Filter" },
		{ "Comment", "/** The name of the vertex attribute to generate indices from. */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVertexScalarToVertexIndicesNode.h" },
		{ "ToolTip", "The name of the vertex attribute to generate indices from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionThreshold_MetaData[] = {
		{ "Category", "Selection Filter" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The value threshold for what is included in the vertex list. */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVertexScalarToVertexIndicesNode.h" },
		{ "ToolTip", "The value threshold for what is included in the vertex list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "Comment", "/** Output list of indices */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionVertexScalarToVertexIndicesNode.h" },
		{ "ToolTip", "Output list of indices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VertexAttributeName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionVertexScalarToVertexIndicesNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionVertexScalarToVertexIndicesNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_VertexAttributeName = { "VertexAttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionVertexScalarToVertexIndicesNode, VertexAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexAttributeName_MetaData), NewProp_VertexAttributeName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_SelectionThreshold = { "SelectionThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionVertexScalarToVertexIndicesNode, SelectionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionThreshold_MetaData), NewProp_SelectionThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGeometryCollectionVertexScalarToVertexIndicesNode, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_VertexAttributeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_SelectionThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewProp_Indices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GeometryCollectionVertexScalarToVertexIndicesNode",
	Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::PropPointers),
	sizeof(FGeometryCollectionVertexScalarToVertexIndicesNode),
	alignof(FGeometryCollectionVertexScalarToVertexIndicesNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionVertexScalarToVertexIndicesNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionVertexScalarToVertexIndicesNode.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionVertexScalarToVertexIndicesNode.InnerSingleton;
}
// End ScriptStruct FGeometryCollectionVertexScalarToVertexIndicesNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionVertexScalarToVertexIndicesNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGeometryCollectionVertexScalarToVertexIndicesNode::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionVertexScalarToVertexIndicesNode_Statics::NewStructOps, TEXT("GeometryCollectionVertexScalarToVertexIndicesNode"), &Z_Registration_Info_UScriptStruct_GeometryCollectionVertexScalarToVertexIndicesNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionVertexScalarToVertexIndicesNode), 1830742656U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionVertexScalarToVertexIndicesNode_h_4228366997(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionVertexScalarToVertexIndicesNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionVertexScalarToVertexIndicesNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
