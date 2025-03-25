// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowNodes/Public/Dataflow/DataflowSelectionNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSelectionNodes() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSelectionSetDataflowNode();
UPackage* Z_Construct_UPackage__Script_DataflowNodes();
// End Cross Module References

// Begin ScriptStruct FSelectionSetDataflowNode
static_assert(std::is_polymorphic<FSelectionSetDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSelectionSetDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SelectionSetDataflowNode;
class UScriptStruct* FSelectionSetDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SelectionSetDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SelectionSetDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectionSetDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("SelectionSetDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SelectionSetDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FSelectionSetDataflowNode>()
{
	return FSelectionSetDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelectionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelectionNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndicesOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "SelectionSet" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelectionNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndicesOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IndicesOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectionSetDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectionSetDataflowNode, Indices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::NewProp_IndicesOut_Inner = { "IndicesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::NewProp_IndicesOut = { "IndicesOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSelectionSetDataflowNode, IndicesOut), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndicesOut_MetaData), NewProp_IndicesOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::NewProp_IndicesOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::NewProp_IndicesOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"SelectionSetDataflowNode",
	Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::PropPointers),
	sizeof(FSelectionSetDataflowNode),
	alignof(FSelectionSetDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSelectionSetDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_SelectionSetDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SelectionSetDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SelectionSetDataflowNode.InnerSingleton;
}
// End ScriptStruct FSelectionSetDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSelectionNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSelectionSetDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSelectionSetDataflowNode_Statics::NewStructOps, TEXT("SelectionSetDataflowNode"), &Z_Registration_Info_UScriptStruct_SelectionSetDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSelectionSetDataflowNode), 2290769756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSelectionNodes_h_2192419667(TEXT("/Script/DataflowNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSelectionNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowSelectionNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
