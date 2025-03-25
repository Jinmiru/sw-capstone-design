// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowNodes/Public/Dataflow/DataflowContextOverridesNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowContextOverridesNodes() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatOverrideDataflowNode();
UPackage* Z_Construct_UPackage__Script_DataflowNodes();
// End Cross Module References

// Begin ScriptStruct FFloatOverrideDataflowNode
static_assert(std::is_polymorphic<FFloatOverrideDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FFloatOverrideDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode;
class UScriptStruct* FFloatOverrideDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("FloatOverrideDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FFloatOverrideDataflowNode>()
{
	return FFloatOverrideDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextOverridesNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextOverridesNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextOverridesNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Float" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowContextOverridesNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatOverrideDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatOverrideDataflowNode, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatOverrideDataflowNode, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_ValueOut = { "ValueOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFloatOverrideDataflowNode, ValueOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueOut_MetaData), NewProp_ValueOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewProp_ValueOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"FloatOverrideDataflowNode",
	Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::PropPointers),
	sizeof(FFloatOverrideDataflowNode),
	alignof(FFloatOverrideDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFloatOverrideDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode.InnerSingleton;
}
// End ScriptStruct FFloatOverrideDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowContextOverridesNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFloatOverrideDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFloatOverrideDataflowNode_Statics::NewStructOps, TEXT("FloatOverrideDataflowNode"), &Z_Registration_Info_UScriptStruct_FloatOverrideDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatOverrideDataflowNode), 1159975519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowContextOverridesNodes_h_3920869647(TEXT("/Script/DataflowNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowContextOverridesNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowContextOverridesNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
