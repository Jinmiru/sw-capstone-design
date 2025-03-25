// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataflowNodes/Public/Dataflow/DataflowStaticMeshNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowStaticMeshNodes() {}

// Begin Cross Module References
DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
DATAFLOWNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_DataflowNodes();
// End Cross Module References

// Begin ScriptStruct FGetStaticMeshDataflowNode
static_assert(std::is_polymorphic<FGetStaticMeshDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetStaticMeshDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetStaticMeshDataflowNode;
class UScriptStruct* FGetStaticMeshDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetStaticMeshDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetStaticMeshDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode, (UObject*)Z_Construct_UPackage__Script_DataflowNodes(), TEXT("GetStaticMeshDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetStaticMeshDataflowNode.OuterSingleton;
}
template<> DATAFLOWNODES_API UScriptStruct* StaticStruct<FGetStaticMeshDataflowNode>()
{
	return FGetStaticMeshDataflowNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowStaticMeshNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DataflowOutput", "" },
		{ "DisplayName", "StaticMesh" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowStaticMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Overrides" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowStaticMeshNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetStaticMeshDataflowNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetStaticMeshDataflowNode, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGetStaticMeshDataflowNode, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::NewProp_PropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DataflowNodes,
	Z_Construct_UScriptStruct_FDataflowNode,
	&NewStructOps,
	"GetStaticMeshDataflowNode",
	Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::PropPointers),
	sizeof(FGetStaticMeshDataflowNode),
	alignof(FGetStaticMeshDataflowNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode()
{
	if (!Z_Registration_Info_UScriptStruct_GetStaticMeshDataflowNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetStaticMeshDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GetStaticMeshDataflowNode.InnerSingleton;
}
// End ScriptStruct FGetStaticMeshDataflowNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowStaticMeshNodes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGetStaticMeshDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetStaticMeshDataflowNode_Statics::NewStructOps, TEXT("GetStaticMeshDataflowNode"), &Z_Registration_Info_UScriptStruct_GetStaticMeshDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetStaticMeshDataflowNode), 2057404198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowStaticMeshNodes_h_2355214063(TEXT("/Script/DataflowNodes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowStaticMeshNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowNodes_Public_Dataflow_DataflowStaticMeshNodes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
