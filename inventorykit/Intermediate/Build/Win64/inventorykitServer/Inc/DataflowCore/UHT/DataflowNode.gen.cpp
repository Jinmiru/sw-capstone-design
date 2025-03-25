// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowNode() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowNode
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowNode;
class UScriptStruct* FDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowNode>()
{
	return FDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FNode\n*\x09\x09""Base class for node based evaluation within the Dataflow graph. \n* \n* Note : Do NOT create mutable variables in the classes derived from FDataflowNode. The state\n*        is stored on the FContext. The Evaluate is const to allow support for multithreaded\n*        evaluation. \n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowNode.h" },
		{ "ToolTip", "FNode\n             Base class for node based evaluation within the Dataflow graph.\n\nNote : Do NOT create mutable variables in the classes derived from FDataflowNode. The state\n       is stored on the FContext. The Evaluate is const to allow support for multithreaded\n       evaluation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDataflowNode_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FDataflowNode*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataflowNode_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataflowNode), &Z_Construct_UScriptStruct_FDataflowNode_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowNode_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	nullptr,
	&NewStructOps,
	"DataflowNode",
	Z_Construct_UScriptStruct_FDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowNode_Statics::PropPointers),
	sizeof(FDataflowNode),
	alignof(FDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowNode.InnerSingleton;
}
// End ScriptStruct FDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowNode_Statics::NewStructOps, TEXT("DataflowNode"), &Z_Registration_Info_UScriptStruct_DataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowNode), 2903731198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowNode_h_2139735310(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
