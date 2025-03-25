// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowNodes/Public/Dataflow/DataflowCollectionAddScalarVertexPropertyNode.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowCollectionAddScalarVertexPropertyNode() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode();
UPackage* Z_Construct_UPackage__Script_DataflowNodes();
// End Cross Module References

// Begin ScriptStruct FDataflowCollectionAddScalarVertexPropertyNode
static_assert(std::is_polymorphic<FDataflowCollectionAddScalarVertexPropertyNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowCollectionAddScalarVertexPropertyNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowCollectionAddScalarVertexPropertyNode;
class UScriptStruct* FDataflowCollectionAddScalarVertexPropertyNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowCollectionAddScalarVertexPropertyNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowCollectionAddScalarVertexPropertyNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("DataflowCollectionAddScalarVertexPropertyNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowCollectionAddScalarVertexPropertyNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FDataflowCollectionAddScalarVertexPropertyNode>()
{
	return FDataflowCollectionAddScalarVertexPropertyNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Scalar vertex properties. */" },
		{ "DataflowCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAddScalarVertexPropertyNode.h" },
		{ "ToolTip", "Scalar vertex properties." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "Dataflowinput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAddScalarVertexPropertyNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Vertex Attribute" },
		{ "Comment", "/** The name to be set as a weight map attribute. */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAddScalarVertexPropertyNode.h" },
		{ "ToolTip", "The name to be set as a weight map attribute." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowCollectionAddScalarVertexPropertyNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexWeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexWeights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowCollectionAddScalarVertexPropertyNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowCollectionAddScalarVertexPropertyNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowCollectionAddScalarVertexPropertyNode, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::NewProp_VertexWeights_Inner = { "VertexWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::NewProp_VertexWeights = { "VertexWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowCollectionAddScalarVertexPropertyNode, VertexWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexWeights_MetaData), NewProp_VertexWeights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::NewProp_Collection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::NewProp_VertexWeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::NewProp_VertexWeights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowCollectionAddScalarVertexPropertyNode",
	Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::PropPointers),
	sizeof(FDataflowCollectionAddScalarVertexPropertyNode),
	alignof(FDataflowCollectionAddScalarVertexPropertyNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowCollectionAddScalarVertexPropertyNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowCollectionAddScalarVertexPropertyNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowCollectionAddScalarVertexPropertyNode.InnerSingleton;
}
// End ScriptStruct FDataflowCollectionAddScalarVertexPropertyNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAddScalarVertexPropertyNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowCollectionAddScalarVertexPropertyNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowCollectionAddScalarVertexPropertyNode_Statics::NewStructOps, TEXT("DataflowCollectionAddScalarVertexPropertyNode"), &Z_Registration_Info_UScriptStruct_DataflowCollectionAddScalarVertexPropertyNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowCollectionAddScalarVertexPropertyNode), 1679401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAddScalarVertexPropertyNode_h_490444945(TEXT("/Script/DataflowNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAddScalarVertexPropertyNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowCollectionAddScalarVertexPropertyNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
