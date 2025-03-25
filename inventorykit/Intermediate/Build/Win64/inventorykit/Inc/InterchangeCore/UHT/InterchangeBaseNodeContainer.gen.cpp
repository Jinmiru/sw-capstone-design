// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/Nodes/InterchangeBaseNodeContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeBaseNodeContainer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Class UInterchangeBaseNodeContainer Function AddNode
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics
{
	struct InterchangeBaseNodeContainer_eventAddNode_Parms
	{
		UInterchangeBaseNode* Node;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/**\n\x09 * Add a node to the container. The node is added into a TMap.\n\x09 *\n\x09 * @param Node - a pointer on the node you want to add\n\x09 * @return: return the node unique ID of the added item. If the node already exist it will return the existing ID. Return InvalidNodeUid if the node cannot be added.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Add a node to the container. The node is added into a TMap.\n\n@param Node - a pointer on the node you want to add\n@return: return the node unique ID of the added item. If the node already exist it will return the existing ID. Return InvalidNodeUid if the node cannot be added." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventAddNode_Parms, Node), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventAddNode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "AddNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::InterchangeBaseNodeContainer_eventAddNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::InterchangeBaseNodeContainer_eventAddNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execAddNode)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->AddNode(Z_Param_Node);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function AddNode

// Begin Class UInterchangeBaseNodeContainer Function ComputeChildrenCache
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/* Fill the cache of children UIDs to optimize the GetNodeChildrenUids call. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Fill the cache of children UIDs to optimize the GetNodeChildrenUids call." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "ComputeChildrenCache", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execComputeChildrenCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputeChildrenCache();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function ComputeChildrenCache

// Begin Class UInterchangeBaseNodeContainer Function GetFactoryNode
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics
{
	struct InterchangeBaseNodeContainer_eventGetFactoryNode_Parms
	{
		FString NodeUniqueID;
		UInterchangeFactoryBaseNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get a factory node pointer. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get a factory node pointer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetFactoryNode_Parms, NodeUniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUniqueID_MetaData), NewProp_NodeUniqueID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetFactoryNode_Parms, ReturnValue), Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_NodeUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetFactoryNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::InterchangeBaseNodeContainer_eventGetFactoryNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::InterchangeBaseNodeContainer_eventGetFactoryNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetFactoryNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInterchangeFactoryBaseNode**)Z_Param__Result=P_THIS->GetFactoryNode(Z_Param_NodeUniqueID);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function GetFactoryNode

// Begin Class UInterchangeBaseNodeContainer Function GetNode
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics
{
	struct InterchangeBaseNodeContainer_eventGetNode_Parms
	{
		FString NodeUniqueID;
		const UInterchangeBaseNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get a node pointer. Once added to the container, nodes are considered const. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get a node pointer. Once added to the container, nodes are considered const." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNode_Parms, NodeUniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUniqueID_MetaData), NewProp_NodeUniqueID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNode_Parms, ReturnValue), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_NodeUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::InterchangeBaseNodeContainer_eventGetNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::InterchangeBaseNodeContainer_eventGetNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInterchangeBaseNode**)Z_Param__Result=P_THIS->GetNode(Z_Param_NodeUniqueID);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function GetNode

// Begin Class UInterchangeBaseNodeContainer Function GetNodeChildren
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics
{
	struct InterchangeBaseNodeContainer_eventGetNodeChildren_Parms
	{
		FString NodeUniqueID;
		int32 ChildIndex;
		UInterchangeBaseNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get the nth const child of the node */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get the nth const child of the node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChildIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildren_Parms, NodeUniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUniqueID_MetaData), NewProp_NodeUniqueID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_ChildIndex = { "ChildIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildren_Parms, ChildIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildren_Parms, ReturnValue), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_NodeUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_ChildIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNodeChildren", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::InterchangeBaseNodeContainer_eventGetNodeChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::InterchangeBaseNodeContainer_eventGetNodeChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNodeChildren)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
	P_GET_PROPERTY(FIntProperty,Z_Param_ChildIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInterchangeBaseNode**)Z_Param__Result=P_THIS->GetNodeChildren(Z_Param_NodeUniqueID,Z_Param_ChildIndex);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function GetNodeChildren

// Begin Class UInterchangeBaseNodeContainer Function GetNodeChildrenCount
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics
{
	struct InterchangeBaseNodeContainer_eventGetNodeChildrenCount_Parms
	{
		FString NodeUniqueID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get the number of children the node has. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get the number of children the node has." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildrenCount_Parms, NodeUniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUniqueID_MetaData), NewProp_NodeUniqueID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildrenCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_NodeUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNodeChildrenCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::InterchangeBaseNodeContainer_eventGetNodeChildrenCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::InterchangeBaseNodeContainer_eventGetNodeChildrenCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNodeChildrenCount)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNodeChildrenCount(Z_Param_NodeUniqueID);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function GetNodeChildrenCount

// Begin Class UInterchangeBaseNodeContainer Function GetNodeChildrenUids
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics
{
	struct InterchangeBaseNodeContainer_eventGetNodeChildrenUids_Parms
	{
		FString NodeUniqueID;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Get the UIDs of all the node's children. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Get the UIDs of all the node's children." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildrenUids_Parms, NodeUniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUniqueID_MetaData), NewProp_NodeUniqueID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodeChildrenUids_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_NodeUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNodeChildrenUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::InterchangeBaseNodeContainer_eventGetNodeChildrenUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::InterchangeBaseNodeContainer_eventGetNodeChildrenUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNodeChildrenUids)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetNodeChildrenUids(Z_Param_NodeUniqueID);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function GetNodeChildrenUids

// Begin Class UInterchangeBaseNodeContainer Function GetNodes
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics
{
	struct InterchangeBaseNodeContainer_eventGetNodes_Parms
	{
		const UClass* ClassNode;
		TArray<FString> OutNodes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Return all nodes that are of the ClassNode type. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Return all nodes that are of the ClassNode type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_ClassNode = { "ClassNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodes_Parms, ClassNode), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassNode_MetaData), NewProp_ClassNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_OutNodes_Inner = { "OutNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_OutNodes = { "OutNodes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetNodes_Parms, OutNodes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_ClassNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_OutNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::NewProp_OutNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetNodes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::InterchangeBaseNodeContainer_eventGetNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::InterchangeBaseNodeContainer_eventGetNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetNodes)
{
	P_GET_OBJECT(UClass,Z_Param_ClassNode);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutNodes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNodes(Z_Param_ClassNode,Z_Param_Out_OutNodes);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function GetNodes

// Begin Class UInterchangeBaseNodeContainer Function GetRoots
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics
{
	struct InterchangeBaseNodeContainer_eventGetRoots_Parms
	{
		TArray<FString> RootNodes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Return all nodes that do not have any parent. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Return all nodes that do not have any parent." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RootNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventGetRoots_Parms, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::NewProp_RootNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::NewProp_RootNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "GetRoots", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::InterchangeBaseNodeContainer_eventGetRoots_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::InterchangeBaseNodeContainer_eventGetRoots_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execGetRoots)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_RootNodes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRoots(Z_Param_Out_RootNodes);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function GetRoots

// Begin Class UInterchangeBaseNodeContainer Function IsNodeUidValid
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics
{
	struct InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms
	{
		FString NodeUniqueID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Return true if the node unique ID exists in the container. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Return true if the node unique ID exists in the container." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms, NodeUniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUniqueID_MetaData), NewProp_NodeUniqueID_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms), &Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_NodeUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "IsNodeUidValid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::InterchangeBaseNodeContainer_eventIsNodeUidValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execIsNodeUidValid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsNodeUidValid(Z_Param_NodeUniqueID);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function IsNodeUidValid

// Begin Class UInterchangeBaseNodeContainer Function LoadFromFile
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics
{
	struct InterchangeBaseNodeContainer_eventLoadFromFile_Parms
	{
		FString Filename;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/* Serialize the node container from the specified file. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Serialize the node container from the specified file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventLoadFromFile_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::NewProp_Filename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "LoadFromFile", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::InterchangeBaseNodeContainer_eventLoadFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::InterchangeBaseNodeContainer_eventLoadFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execLoadFromFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadFromFile(Z_Param_Filename);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function LoadFromFile

// Begin Class UInterchangeBaseNodeContainer Function ReplaceNode
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics
{
	struct InterchangeBaseNodeContainer_eventReplaceNode_Parms
	{
		FString NodeUniqueID;
		UInterchangeFactoryBaseNode* NewNode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventReplaceNode_Parms, NodeUniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUniqueID_MetaData), NewProp_NodeUniqueID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::NewProp_NewNode = { "NewNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventReplaceNode_Parms, NewNode), Z_Construct_UClass_UInterchangeFactoryBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::NewProp_NodeUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::NewProp_NewNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "ReplaceNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::InterchangeBaseNodeContainer_eventReplaceNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::InterchangeBaseNodeContainer_eventReplaceNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execReplaceNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
	P_GET_OBJECT(UInterchangeFactoryBaseNode,Z_Param_NewNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReplaceNode(Z_Param_NodeUniqueID,Z_Param_NewNode);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function ReplaceNode

// Begin Class UInterchangeBaseNodeContainer Function Reset
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_Reset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/**\n\x09 * Empty the container.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Empty the container." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "Reset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_Reset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function Reset

// Begin Class UInterchangeBaseNodeContainer Function ResetChildrenCache
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/* Reset the cache of children UIDs. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Reset the cache of children UIDs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "ResetChildrenCache", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execResetChildrenCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetChildrenCache();
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function ResetChildrenCache

// Begin Class UInterchangeBaseNodeContainer Function SaveToFile
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics
{
	struct InterchangeBaseNodeContainer_eventSaveToFile_Parms
	{
		FString Filename;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/* Serialize the node container into the specified file. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Serialize the node container into the specified file." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventSaveToFile_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::NewProp_Filename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "SaveToFile", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::InterchangeBaseNodeContainer_eventSaveToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::InterchangeBaseNodeContainer_eventSaveToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execSaveToFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveToFile(Z_Param_Filename);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function SaveToFile

// Begin Class UInterchangeBaseNodeContainer Function SetNodeParentUid
struct Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics
{
	struct InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms
	{
		FString NodeUniqueID;
		FString NewParentNodeUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Set the ParentUid of the node. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Set the ParentUid of the node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParentNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeUniqueID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewParentNodeUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NodeUniqueID = { "NodeUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms, NodeUniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeUniqueID_MetaData), NewProp_NodeUniqueID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NewParentNodeUid = { "NewParentNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms, NewParentNodeUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParentNodeUid_MetaData), NewProp_NewParentNodeUid_MetaData) };
void Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms), &Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NodeUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_NewParentNodeUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeBaseNodeContainer, nullptr, "SetNodeParentUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::InterchangeBaseNodeContainer_eventSetNodeParentUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeBaseNodeContainer::execSetNodeParentUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NodeUniqueID);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewParentNodeUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetNodeParentUid(Z_Param_NodeUniqueID,Z_Param_NewParentNodeUid);
	P_NATIVE_END;
}
// End Class UInterchangeBaseNodeContainer Function SetNodeParentUid

// Begin Class UInterchangeBaseNodeContainer
void UInterchangeBaseNodeContainer::StaticRegisterNativesUInterchangeBaseNodeContainer()
{
	UClass* Class = UInterchangeBaseNodeContainer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNode", &UInterchangeBaseNodeContainer::execAddNode },
		{ "ComputeChildrenCache", &UInterchangeBaseNodeContainer::execComputeChildrenCache },
		{ "GetFactoryNode", &UInterchangeBaseNodeContainer::execGetFactoryNode },
		{ "GetNode", &UInterchangeBaseNodeContainer::execGetNode },
		{ "GetNodeChildren", &UInterchangeBaseNodeContainer::execGetNodeChildren },
		{ "GetNodeChildrenCount", &UInterchangeBaseNodeContainer::execGetNodeChildrenCount },
		{ "GetNodeChildrenUids", &UInterchangeBaseNodeContainer::execGetNodeChildrenUids },
		{ "GetNodes", &UInterchangeBaseNodeContainer::execGetNodes },
		{ "GetRoots", &UInterchangeBaseNodeContainer::execGetRoots },
		{ "IsNodeUidValid", &UInterchangeBaseNodeContainer::execIsNodeUidValid },
		{ "LoadFromFile", &UInterchangeBaseNodeContainer::execLoadFromFile },
		{ "ReplaceNode", &UInterchangeBaseNodeContainer::execReplaceNode },
		{ "Reset", &UInterchangeBaseNodeContainer::execReset },
		{ "ResetChildrenCache", &UInterchangeBaseNodeContainer::execResetChildrenCache },
		{ "SaveToFile", &UInterchangeBaseNodeContainer::execSaveToFile },
		{ "SetNodeParentUid", &UInterchangeBaseNodeContainer::execSetNodeParentUid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeBaseNodeContainer);
UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister()
{
	return UInterchangeBaseNodeContainer::StaticClass();
}
struct Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Interchange UInterchangeBaseNode graph is a format used to feed factories and writers when they import, reimport, and\n * export an asset or scene.\n * \n * This container holds a flat list of all nodes that have been translated from the source data.\n * Translators fill this container, and the import/export managers read it to execute the import/export process.\n */" },
		{ "IncludePath", "Nodes/InterchangeBaseNodeContainer.h" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "The Interchange UInterchangeBaseNode graph is a format used to feed factories and writers when they import, reimport, and\nexport an asset or scene.\n\nThis container holds a flat list of all nodes that have been translated from the source data.\nTranslators fill this container, and the import/export managers read it to execute the import/export process." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Category", "Interchange | Node Container" },
		{ "Comment", "/** Flat List of the nodes. Since the nodes are variable size, we store a pointer. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeBaseNodeContainer.h" },
		{ "ToolTip", "Flat List of the nodes. Since the nodes are variable size, we store a pointer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Nodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_AddNode, "AddNode" }, // 2900386138
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_ComputeChildrenCache, "ComputeChildrenCache" }, // 1103989459
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetFactoryNode, "GetFactoryNode" }, // 1094269524
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNode, "GetNode" }, // 2222982103
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildren, "GetNodeChildren" }, // 1594610206
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenCount, "GetNodeChildrenCount" }, // 621299679
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodeChildrenUids, "GetNodeChildrenUids" }, // 2971420185
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetNodes, "GetNodes" }, // 3311788862
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_GetRoots, "GetRoots" }, // 163407717
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_IsNodeUidValid, "IsNodeUidValid" }, // 3533669057
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_LoadFromFile, "LoadFromFile" }, // 2992352859
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_ReplaceNode, "ReplaceNode" }, // 2776075016
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_Reset, "Reset" }, // 3343273802
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_ResetChildrenCache, "ResetChildrenCache" }, // 2027672788
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_SaveToFile, "SaveToFile" }, // 822097821
		{ &Z_Construct_UFunction_UInterchangeBaseNodeContainer_SetNodeParentUid, "SetNodeParentUid" }, // 3858446688
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeBaseNodeContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_ValueProp = { "Nodes", nullptr, (EPropertyFlags)0x0104000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_Key_KeyProp = { "Nodes_Key", nullptr, (EPropertyFlags)0x0100000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0144000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterchangeBaseNodeContainer, Nodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::NewProp_Nodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::ClassParams = {
	&UInterchangeBaseNodeContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer()
{
	if (!Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.OuterSingleton, Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeBaseNodeContainer.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeBaseNodeContainer>()
{
	return UInterchangeBaseNodeContainer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeBaseNodeContainer);
UInterchangeBaseNodeContainer::~UInterchangeBaseNodeContainer() {}
// End Class UInterchangeBaseNodeContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeBaseNodeContainer, UInterchangeBaseNodeContainer::StaticClass, TEXT("UInterchangeBaseNodeContainer"), &Z_Registration_Info_UClass_UInterchangeBaseNodeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeBaseNodeContainer), 841817879U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_3548089389(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
