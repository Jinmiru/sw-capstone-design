// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeSkeletalMeshLodDataNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletalMeshLodDataNode() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeSkeletalMeshLodDataNode Function AddMeshUid
struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics
{
	struct InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Add a mesh geometry used to create this LOD geometry. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Add a mesh geometry used to create this LOD geometry. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "AddMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::InterchangeSkeletalMeshLodDataNode_eventAddMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execAddMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshLodDataNode Function AddMeshUid

// Begin Class UInterchangeSkeletalMeshLodDataNode Function GetCustomSkeletonUid
struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics
{
	struct InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/** Query the LOD skeletal mesh factory skeleton reference. Return false if the attribute was not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Query the LOD skeletal mesh factory skeleton reference. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "GetCustomSkeletonUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::InterchangeSkeletalMeshLodDataNode_eventGetCustomSkeletonUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execGetCustomSkeletonUid)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletonUid(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshLodDataNode Function GetCustomSkeletonUid

// Begin Class UInterchangeSkeletalMeshLodDataNode Function GetMeshUids
struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics
{
	struct InterchangeSkeletalMeshLodDataNode_eventGetMeshUids_Parms
	{
		TArray<FString> OutMeshNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Query all mesh geometry this LOD will be made from. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Query all mesh geometry this LOD will be made from. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMeshNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMeshNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames_Inner = { "OutMeshNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames = { "OutMeshNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventGetMeshUids_Parms, OutMeshNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::NewProp_OutMeshNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "GetMeshUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::InterchangeSkeletalMeshLodDataNode_eventGetMeshUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::InterchangeSkeletalMeshLodDataNode_eventGetMeshUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execGetMeshUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutMeshNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMeshUids(Z_Param_Out_OutMeshNames);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshLodDataNode Function GetMeshUids

// Begin Class UInterchangeSkeletalMeshLodDataNode Function GetMeshUidsCount
struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics
{
	struct InterchangeSkeletalMeshLodDataNode_eventGetMeshUidsCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Return the number of mesh geometries this LOD will be made from. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Return the number of mesh geometries this LOD will be made from. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventGetMeshUidsCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "GetMeshUidsCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::InterchangeSkeletalMeshLodDataNode_eventGetMeshUidsCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::InterchangeSkeletalMeshLodDataNode_eventGetMeshUidsCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execGetMeshUidsCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMeshUidsCount();
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshLodDataNode Function GetMeshUidsCount

// Begin Class UInterchangeSkeletalMeshLodDataNode Function RemoveAllMeshes
struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics
{
	struct InterchangeSkeletalMeshLodDataNode_eventRemoveAllMeshes_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Remove all mesh geometry used to create this LOD geometry. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Remove all mesh geometry used to create this LOD geometry. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshLodDataNode_eventRemoveAllMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventRemoveAllMeshes_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "RemoveAllMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::InterchangeSkeletalMeshLodDataNode_eventRemoveAllMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::InterchangeSkeletalMeshLodDataNode_eventRemoveAllMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execRemoveAllMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllMeshes();
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshLodDataNode Function RemoveAllMeshes

// Begin Class UInterchangeSkeletalMeshLodDataNode Function RemoveMeshUid
struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics
{
	struct InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms
	{
		FString MeshName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/* Remove a mesh geometry used to create this LOD geometry. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Remove a mesh geometry used to create this LOD geometry. A mesh UID can represent either a scene node or a mesh node. If it is a scene node, the mesh factory bakes the geometry payload with the global transform of the scene node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms, MeshName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshName_MetaData), NewProp_MeshName_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_MeshName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "RemoveMeshUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::InterchangeSkeletalMeshLodDataNode_eventRemoveMeshUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execRemoveMeshUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MeshName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveMeshUid(Z_Param_MeshName);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshLodDataNode Function RemoveMeshUid

// Begin Class UInterchangeSkeletalMeshLodDataNode Function SetCustomSkeletonUid
struct Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics
{
	struct InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalMeshLodData" },
		{ "Comment", "/** Set the LOD skeletal mesh factory skeleton reference. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "Set the LOD skeletal mesh factory skeleton reference. Return false if the attribute could not be set." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms), &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, nullptr, "SetCustomSkeletonUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::InterchangeSkeletalMeshLodDataNode_eventSetCustomSkeletonUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSkeletalMeshLodDataNode::execSetCustomSkeletonUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletonUid(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSkeletalMeshLodDataNode Function SetCustomSkeletonUid

// Begin Class UInterchangeSkeletalMeshLodDataNode
void UInterchangeSkeletalMeshLodDataNode::StaticRegisterNativesUInterchangeSkeletalMeshLodDataNode()
{
	UClass* Class = UInterchangeSkeletalMeshLodDataNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMeshUid", &UInterchangeSkeletalMeshLodDataNode::execAddMeshUid },
		{ "GetCustomSkeletonUid", &UInterchangeSkeletalMeshLodDataNode::execGetCustomSkeletonUid },
		{ "GetMeshUids", &UInterchangeSkeletalMeshLodDataNode::execGetMeshUids },
		{ "GetMeshUidsCount", &UInterchangeSkeletalMeshLodDataNode::execGetMeshUidsCount },
		{ "RemoveAllMeshes", &UInterchangeSkeletalMeshLodDataNode::execRemoveAllMeshes },
		{ "RemoveMeshUid", &UInterchangeSkeletalMeshLodDataNode::execRemoveMeshUid },
		{ "SetCustomSkeletonUid", &UInterchangeSkeletalMeshLodDataNode::execSetCustomSkeletonUid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletalMeshLodDataNode);
UClass* Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_NoRegister()
{
	return UInterchangeSkeletalMeshLodDataNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//ns UE\n" },
		{ "IncludePath", "InterchangeSkeletalMeshLodDataNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeSkeletalMeshLodDataNode.h" },
		{ "ToolTip", "ns UE" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_AddMeshUid, "AddMeshUid" }, // 1624785600
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetCustomSkeletonUid, "GetCustomSkeletonUid" }, // 3545496379
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUids, "GetMeshUids" }, // 1440411994
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_GetMeshUidsCount, "GetMeshUidsCount" }, // 697276684
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveAllMeshes, "RemoveAllMeshes" }, // 67188021
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_RemoveMeshUid, "RemoveMeshUid" }, // 1289636082
		{ &Z_Construct_UFunction_UInterchangeSkeletalMeshLodDataNode_SetCustomSkeletonUid, "SetCustomSkeletonUid" }, // 2670635132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletalMeshLodDataNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::ClassParams = {
	&UInterchangeSkeletalMeshLodDataNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeSkeletalMeshLodDataNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletalMeshLodDataNode.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSkeletalMeshLodDataNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeSkeletalMeshLodDataNode>()
{
	return UInterchangeSkeletalMeshLodDataNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletalMeshLodDataNode);
UInterchangeSkeletalMeshLodDataNode::~UInterchangeSkeletalMeshLodDataNode() {}
// End Class UInterchangeSkeletalMeshLodDataNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletalMeshLodDataNode, UInterchangeSkeletalMeshLodDataNode::StaticClass, TEXT("UInterchangeSkeletalMeshLodDataNode"), &Z_Registration_Info_UClass_UInterchangeSkeletalMeshLodDataNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletalMeshLodDataNode), 2746287301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_1401791605(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshLodDataNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
