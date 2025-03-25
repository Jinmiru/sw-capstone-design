// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeSkeletonFactoryNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletonFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletonFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeSkeletonFactoryNode Function GetCustomRootJointUid
struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics
{
	struct InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** Return false if the attribute was not set previously. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "Return false if the attribute was not set previously." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "GetCustomRootJointUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::InterchangeSkeletonFactoryNode_eventGetCustomRootJointUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execGetCustomRootJointUid)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRootJointUid(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletonFactoryNode Function GetCustomRootJointUid

// Begin Class UInterchangeSkeletonFactoryNode Function GetCustomSkeletalMeshFactoryNodeUid
struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics
{
	struct InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "GetCustomSkeletalMeshFactoryNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::InterchangeSkeletonFactoryNode_eventGetCustomSkeletalMeshFactoryNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execGetCustomSkeletalMeshFactoryNodeUid)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletalMeshFactoryNodeUid(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletonFactoryNode Function GetCustomSkeletalMeshFactoryNodeUid

// Begin Class UInterchangeSkeletonFactoryNode Function GetCustomUseTimeZeroForBindPose
struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics
{
	struct InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** Query whether this skeleton should replace joint transforms with time-zero evaluation instead of bind pose. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "Query whether this skeleton should replace joint transforms with time-zero evaluation instead of bind pose." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "GetCustomUseTimeZeroForBindPose", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::InterchangeSkeletonFactoryNode_eventGetCustomUseTimeZeroForBindPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execGetCustomUseTimeZeroForBindPose)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseTimeZeroForBindPose(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletonFactoryNode Function GetCustomUseTimeZeroForBindPose

// Begin Class UInterchangeSkeletonFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics
{
	struct InterchangeSkeletonFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** Get the class this node creates. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "Get the class this node creates." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::InterchangeSkeletonFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::InterchangeSkeletonFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeSkeletonFactoryNode Function GetObjectClass

// Begin Class UInterchangeSkeletonFactoryNode Function InitializeSkeletonNode
struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics
{
	struct InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms
	{
		FString UniqueID;
		FString DisplayLabel;
		FString InAssetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/**\n\x09 * Initialize node data.\n\x09 * @param: UniqueID - The unique ID for this node.\n\x09 * @param DisplayLabel - The name of the node.\n\x09 * @param InAssetClass - The class the Skeleton factory will create for this node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "Initialize node data.\n@param: UniqueID - The unique ID for this node.\n@param DisplayLabel - The name of the node.\n@param InAssetClass - The class the Skeleton factory will create for this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssetClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InAssetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms, UniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueID_MetaData), NewProp_UniqueID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms, DisplayLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayLabel_MetaData), NewProp_DisplayLabel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_InAssetClass = { "InAssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms, InAssetClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetClass_MetaData), NewProp_InAssetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_UniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_DisplayLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::NewProp_InAssetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "InitializeSkeletonNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::InterchangeSkeletonFactoryNode_eventInitializeSkeletonNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execInitializeSkeletonNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
	P_GET_PROPERTY(FStrProperty,Z_Param_InAssetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeSkeletonNode(Z_Param_UniqueID,Z_Param_DisplayLabel,Z_Param_InAssetClass);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletonFactoryNode Function InitializeSkeletonNode

// Begin Class UInterchangeSkeletonFactoryNode Function SetCustomRootJointUid
struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics
{
	struct InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "SetCustomRootJointUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::InterchangeSkeletonFactoryNode_eventSetCustomRootJointUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execSetCustomRootJointUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRootJointUid(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletonFactoryNode Function SetCustomRootJointUid

// Begin Class UInterchangeSkeletonFactoryNode Function SetCustomSkeletalMeshFactoryNodeUid
struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics
{
	struct InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "SetCustomSkeletalMeshFactoryNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::InterchangeSkeletonFactoryNode_eventSetCustomSkeletalMeshFactoryNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execSetCustomSkeletalMeshFactoryNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletalMeshFactoryNodeUid(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletonFactoryNode Function SetCustomSkeletalMeshFactoryNodeUid

// Begin Class UInterchangeSkeletonFactoryNode Function SetCustomUseTimeZeroForBindPose
struct Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics
{
	struct InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Skeleton" },
		{ "Comment", "/** If AttributeValue is true, force this skeleton to use time-zero evaluation instead of its bind pose. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
		{ "ToolTip", "If AttributeValue is true, force this skeleton to use time-zero evaluation instead of its bind pose." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms), &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletonFactoryNode, nullptr, "SetCustomUseTimeZeroForBindPose", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::InterchangeSkeletonFactoryNode_eventSetCustomUseTimeZeroForBindPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletonFactoryNode::execSetCustomUseTimeZeroForBindPose)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseTimeZeroForBindPose(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletonFactoryNode Function SetCustomUseTimeZeroForBindPose

// Begin Class UInterchangeSkeletonFactoryNode
void UInterchangeSkeletonFactoryNode::StaticRegisterNativesUInterchangeSkeletonFactoryNode()
{
	UClass* Class = UInterchangeSkeletonFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomRootJointUid", &UInterchangeSkeletonFactoryNode::execGetCustomRootJointUid },
		{ "GetCustomSkeletalMeshFactoryNodeUid", &UInterchangeSkeletonFactoryNode::execGetCustomSkeletalMeshFactoryNodeUid },
		{ "GetCustomUseTimeZeroForBindPose", &UInterchangeSkeletonFactoryNode::execGetCustomUseTimeZeroForBindPose },
		{ "GetObjectClass", &UInterchangeSkeletonFactoryNode::execGetObjectClass },
		{ "InitializeSkeletonNode", &UInterchangeSkeletonFactoryNode::execInitializeSkeletonNode },
		{ "SetCustomRootJointUid", &UInterchangeSkeletonFactoryNode::execSetCustomRootJointUid },
		{ "SetCustomSkeletalMeshFactoryNodeUid", &UInterchangeSkeletonFactoryNode::execSetCustomSkeletalMeshFactoryNodeUid },
		{ "SetCustomUseTimeZeroForBindPose", &UInterchangeSkeletonFactoryNode::execSetCustomUseTimeZeroForBindPose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletonFactoryNode);
UClass* Z_Construct_UClass_UInterchangeSkeletonFactoryNode_NoRegister()
{
	return UInterchangeSkeletonFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeSkeletonFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletonFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomRootJointUid, "GetCustomRootJointUid" }, // 4032653555
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomSkeletalMeshFactoryNodeUid, "GetCustomSkeletalMeshFactoryNodeUid" }, // 1877205789
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetCustomUseTimeZeroForBindPose, "GetCustomUseTimeZeroForBindPose" }, // 2206606172
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_GetObjectClass, "GetObjectClass" }, // 3123171540
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_InitializeSkeletonNode, "InitializeSkeletonNode" }, // 1411417015
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomRootJointUid, "SetCustomRootJointUid" }, // 2345243309
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomSkeletalMeshFactoryNodeUid, "SetCustomSkeletalMeshFactoryNodeUid" }, // 2953191724
		{ &Z_Construct_UFunction_UInterchangeSkeletonFactoryNode_SetCustomUseTimeZeroForBindPose, "SetCustomUseTimeZeroForBindPose" }, // 2068349090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletonFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::ClassParams = {
	&UInterchangeSkeletonFactoryNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSkeletonFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletonFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSkeletonFactoryNode>()
{
	return UInterchangeSkeletonFactoryNode::StaticClass();
}
UInterchangeSkeletonFactoryNode::UInterchangeSkeletonFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletonFactoryNode);
UInterchangeSkeletonFactoryNode::~UInterchangeSkeletonFactoryNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSkeletonFactoryNode)
// End Class UInterchangeSkeletonFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletonFactoryNode, UInterchangeSkeletonFactoryNode::StaticClass, TEXT("UInterchangeSkeletonFactoryNode"), &Z_Registration_Info_UClass_UInterchangeSkeletonFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletonFactoryNode), 1366407243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_3388610595(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletonFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
