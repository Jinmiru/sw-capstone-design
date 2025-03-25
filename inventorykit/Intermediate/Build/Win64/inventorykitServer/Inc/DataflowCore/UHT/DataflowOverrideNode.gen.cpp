// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Dataflow/Core/Public/Dataflow/DataflowOverrideNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowOverrideNode() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowOverrideNode();
UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References

// Begin ScriptStruct FDataflowOverrideNode
static_assert(std::is_polymorphic<FDataflowOverrideNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FDataflowOverrideNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowOverrideNode;
class UScriptStruct* FDataflowOverrideNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowOverrideNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowOverrideNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowOverrideNode, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowOverrideNode"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowOverrideNode.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowOverrideNode>()
{
	return FDataflowOverrideNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FDataflowOverrideNode\n*\x09\x09""Base class for override nodes within the Dataflow graph. \n* \n*\x09\x09Override Nodes allow to access to Override property on\n*\x09\x09the asset. They can read the values by the key.\n*/" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowOverrideNode.h" },
		{ "ToolTip", "FDataflowOverrideNode\n             Base class for override nodes within the Dataflow graph.\n\n             Override Nodes allow to access to Override property on\n             the asset. They can read the values by the key." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Overrides" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowOverrideNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "Overrides" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowOverrideNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsOverriden_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowOverrideNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Default;
	static void NewProp_IsOverriden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsOverriden;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowOverrideNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowOverrideNode, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDataflowOverrideNode, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
void Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewProp_IsOverriden_SetBit(void* Obj)
{
	((FDataflowOverrideNode*)Obj)->IsOverriden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewProp_IsOverriden = { "IsOverriden", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDataflowOverrideNode), &Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewProp_IsOverriden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsOverriden_MetaData), NewProp_IsOverriden_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewProp_IsOverriden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"DataflowOverrideNode",
	Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::PropPointers),
	sizeof(FDataflowOverrideNode),
	alignof(FDataflowOverrideNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDataflowOverrideNode()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowOverrideNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowOverrideNode.InnerSingleton, Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DataflowOverrideNode.InnerSingleton;
}
// End ScriptStruct FDataflowOverrideNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowOverrideNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDataflowOverrideNode::StaticStruct, Z_Construct_UScriptStruct_FDataflowOverrideNode_Statics::NewStructOps, TEXT("DataflowOverrideNode"), &Z_Registration_Info_UScriptStruct_DataflowOverrideNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowOverrideNode), 2765986793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowOverrideNode_h_565255973(TEXT("/Script/DataflowCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowOverrideNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowOverrideNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
