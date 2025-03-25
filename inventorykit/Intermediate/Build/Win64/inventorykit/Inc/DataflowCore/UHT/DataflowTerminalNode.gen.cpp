// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowTerminalNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowTerminalNode() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTerminalNode();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowTerminalNode
static_assert(std::is_polymorphic<FDataflowTerminalNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowTerminalNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowTerminalNode;
class UScriptStruct* FDataflowTerminalNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowTerminalNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowTerminalNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTerminalNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowTerminalNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowTerminalNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowTerminalNode>()
{
	return FDataflowTerminalNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FDataflowTerminalNode\n*\x09\x09""Base class for terminal nodes within the Dataflow graph. \n* \n*\x09\x09Terminal Nodes allow for non-const access to UObjects as\n*       edges in the graph. They are used to push data out to\n*       asset or the world from the calling client. Terminals\n*       may not have outputs, they are only leaf nodes in the \n*       evaluation graph. \n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowTerminalNode.h" },
		{ "ToolTip", "FDataflowTerminalNode\n             Base class for terminal nodes within the Dataflow graph.\n\n             Terminal Nodes allow for non-const access to UObjects as\n      edges in the graph. They are used to push data out to\n      asset or the world from the calling client. Terminals\n      may not have outputs, they are only leaf nodes in the\n      evaluation graph." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowTerminalNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowTerminalNode",
	nullptr,
	0,
	sizeof(FDataflowTerminalNode),
	alignof(FDataflowTerminalNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowTerminalNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowTerminalNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowTerminalNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowTerminalNode.InnerSingleton;
}
// End ScriptStruct FDataflowTerminalNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowTerminalNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowTerminalNode_Statics::NewStructOps, TEXT("DataflowTerminalNode"), &Z_Registration_Info_UScriptStruct_DataflowTerminalNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowTerminalNode), 3024260593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h_2171618995(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowTerminalNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
