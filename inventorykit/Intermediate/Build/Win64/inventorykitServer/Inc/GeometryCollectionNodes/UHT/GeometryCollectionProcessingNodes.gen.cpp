// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionNodes/Public/Dataflow/GeometryCollectionProcessingNodes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionProcessingNodes() {}

// Begin Cross Module References
CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode();
UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

// Begin ScriptStruct FCloseGeometryOnCollectionDataflowNode
static_assert(std::is_polymorphic<FCloseGeometryOnCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FCloseGeometryOnCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CloseGeometryOnCollectionDataflowNode;
class UScriptStruct* FCloseGeometryOnCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CloseGeometryOnCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CloseGeometryOnCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("CloseGeometryOnCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_CloseGeometryOnCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FCloseGeometryOnCollectionDataflowNode>()
{
	return FCloseGeometryOnCollectionDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionProcessingNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionProcessingNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCloseGeometryOnCollectionDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCloseGeometryOnCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collection_MetaData), NewProp_Collection_MetaData) }; // 3814783873
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::NewProp_Collection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"CloseGeometryOnCollectionDataflowNode",
	Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::PropPointers),
	sizeof(FCloseGeometryOnCollectionDataflowNode),
	alignof(FCloseGeometryOnCollectionDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_CloseGeometryOnCollectionDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CloseGeometryOnCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CloseGeometryOnCollectionDataflowNode.InnerSingleton;
}
// End ScriptStruct FCloseGeometryOnCollectionDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionProcessingNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCloseGeometryOnCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FCloseGeometryOnCollectionDataflowNode_Statics::NewStructOps, TEXT("CloseGeometryOnCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_CloseGeometryOnCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCloseGeometryOnCollectionDataflowNode), 3859854762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionProcessingNodes_h_3188635315(TEXT("/Script/GeometryCollectionNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionProcessingNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionProcessingNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
