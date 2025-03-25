// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeMeshFactoryNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMeshFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeMeshFactoryNode Function AddLodDataUniqueId
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics
{
	struct InterchangeMeshFactoryNode_eventAddLodDataUniqueId_Parms
	{
		FString LodDataUniqueId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodDataUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LodDataUniqueId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::NewProp_LodDataUniqueId = { "LodDataUniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventAddLodDataUniqueId_Parms, LodDataUniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodDataUniqueId_MetaData), NewProp_LodDataUniqueId_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventAddLodDataUniqueId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventAddLodDataUniqueId_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::NewProp_LodDataUniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "AddLodDataUniqueId", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::InterchangeMeshFactoryNode_eventAddLodDataUniqueId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::InterchangeMeshFactoryNode_eventAddLodDataUniqueId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execAddLodDataUniqueId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LodDataUniqueId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddLodDataUniqueId(Z_Param_LodDataUniqueId);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function AddLodDataUniqueId

// Begin Class UInterchangeMeshFactoryNode Function GetCustomComputeWeightedNormals
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomComputeWeightedNormals_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether normals are recomputed by weighting the surface area and the corner angle of the triangle as a ratio. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether normals are recomputed by weighting the surface area and the corner angle of the triangle as a ratio." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomComputeWeightedNormals_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomComputeWeightedNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomComputeWeightedNormals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomComputeWeightedNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomComputeWeightedNormals", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::InterchangeMeshFactoryNode_eventGetCustomComputeWeightedNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::InterchangeMeshFactoryNode_eventGetCustomComputeWeightedNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomComputeWeightedNormals)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomComputeWeightedNormals(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomComputeWeightedNormals

// Begin Class UInterchangeMeshFactoryNode Function GetCustomKeepSectionsSeparate
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomKeepSectionsSeparate_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether sections with matching materials are kept separate and will not get combined. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether sections with matching materials are kept separate and will not get combined." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomKeepSectionsSeparate_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomKeepSectionsSeparate_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomKeepSectionsSeparate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomKeepSectionsSeparate_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomKeepSectionsSeparate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::InterchangeMeshFactoryNode_eventGetCustomKeepSectionsSeparate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::InterchangeMeshFactoryNode_eventGetCustomKeepSectionsSeparate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomKeepSectionsSeparate)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomKeepSectionsSeparate(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomKeepSectionsSeparate

// Begin Class UInterchangeMeshFactoryNode Function GetCustomLODGroup
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomLODGroup_Parms
	{
		FName AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether a custom LOD group is set for the mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether a custom LOD group is set for the mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventGetCustomLODGroup_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomLODGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomLODGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomLODGroup", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::InterchangeMeshFactoryNode_eventGetCustomLODGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::InterchangeMeshFactoryNode_eventGetCustomLODGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomLODGroup)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomLODGroup(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomLODGroup

// Begin Class UInterchangeMeshFactoryNode Function GetCustomRecomputeNormals
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomRecomputeNormals_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether normals in the imported mesh are ignored and recomputed. When normals are recomputed, the tangents are also recomputed. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether normals in the imported mesh are ignored and recomputed. When normals are recomputed, the tangents are also recomputed." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomRecomputeNormals_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomRecomputeNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomRecomputeNormals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomRecomputeNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomRecomputeNormals", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::InterchangeMeshFactoryNode_eventGetCustomRecomputeNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::InterchangeMeshFactoryNode_eventGetCustomRecomputeNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomRecomputeNormals)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRecomputeNormals(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomRecomputeNormals

// Begin Class UInterchangeMeshFactoryNode Function GetCustomRecomputeTangents
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomRecomputeTangents_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether tangents in the imported mesh are ignored and recomputed. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether tangents in the imported mesh are ignored and recomputed." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomRecomputeTangents_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomRecomputeTangents_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomRecomputeTangents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomRecomputeTangents_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomRecomputeTangents", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::InterchangeMeshFactoryNode_eventGetCustomRecomputeTangents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::InterchangeMeshFactoryNode_eventGetCustomRecomputeTangents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomRecomputeTangents)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRecomputeTangents(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomRecomputeTangents

// Begin Class UInterchangeMeshFactoryNode Function GetCustomRemoveDegenerates
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomRemoveDegenerates_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether degenerate triangles are removed. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether degenerate triangles are removed." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomRemoveDegenerates_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomRemoveDegenerates_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomRemoveDegenerates_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomRemoveDegenerates_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomRemoveDegenerates", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::InterchangeMeshFactoryNode_eventGetCustomRemoveDegenerates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::InterchangeMeshFactoryNode_eventGetCustomRemoveDegenerates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomRemoveDegenerates)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRemoveDegenerates(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomRemoveDegenerates

// Begin Class UInterchangeMeshFactoryNode Function GetCustomUseBackwardsCompatibleF16TruncUVs
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomUseBackwardsCompatibleF16TruncUVs_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether UVs are converted to 16-bit by a legacy truncation process instead of the default rounding process. This may avoid differences when reimporting older content. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether UVs are converted to 16-bit by a legacy truncation process instead of the default rounding process. This may avoid differences when reimporting older content." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomUseBackwardsCompatibleF16TruncUVs_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomUseBackwardsCompatibleF16TruncUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomUseBackwardsCompatibleF16TruncUVs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomUseBackwardsCompatibleF16TruncUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomUseBackwardsCompatibleF16TruncUVs", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::InterchangeMeshFactoryNode_eventGetCustomUseBackwardsCompatibleF16TruncUVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::InterchangeMeshFactoryNode_eventGetCustomUseBackwardsCompatibleF16TruncUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomUseBackwardsCompatibleF16TruncUVs)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseBackwardsCompatibleF16TruncUVs(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomUseBackwardsCompatibleF16TruncUVs

// Begin Class UInterchangeMeshFactoryNode Function GetCustomUseFullPrecisionUVs
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomUseFullPrecisionUVs_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether UVs are stored at full floating point precision. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether UVs are stored at full floating point precision." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomUseFullPrecisionUVs_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomUseFullPrecisionUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomUseFullPrecisionUVs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomUseFullPrecisionUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomUseFullPrecisionUVs", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::InterchangeMeshFactoryNode_eventGetCustomUseFullPrecisionUVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::InterchangeMeshFactoryNode_eventGetCustomUseFullPrecisionUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomUseFullPrecisionUVs)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseFullPrecisionUVs(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomUseFullPrecisionUVs

// Begin Class UInterchangeMeshFactoryNode Function GetCustomUseHighPrecisionTangentBasis
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomUseHighPrecisionTangentBasis_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether tangents are stored at 16-bit precision instead of the default 8-bit precision. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether tangents are stored at 16-bit precision instead of the default 8-bit precision." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomUseHighPrecisionTangentBasis_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomUseHighPrecisionTangentBasis_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomUseHighPrecisionTangentBasis_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomUseHighPrecisionTangentBasis_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomUseHighPrecisionTangentBasis", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::InterchangeMeshFactoryNode_eventGetCustomUseHighPrecisionTangentBasis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::InterchangeMeshFactoryNode_eventGetCustomUseHighPrecisionTangentBasis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomUseHighPrecisionTangentBasis)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseHighPrecisionTangentBasis(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomUseHighPrecisionTangentBasis

// Begin Class UInterchangeMeshFactoryNode Function GetCustomUseMikkTSpace
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomUseMikkTSpace_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether tangents are recomputed using MikkTSpace when they need to be recomputed. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether tangents are recomputed using MikkTSpace when they need to be recomputed." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomUseMikkTSpace_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomUseMikkTSpace_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomUseMikkTSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomUseMikkTSpace_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomUseMikkTSpace", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::InterchangeMeshFactoryNode_eventGetCustomUseMikkTSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::InterchangeMeshFactoryNode_eventGetCustomUseMikkTSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomUseMikkTSpace)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomUseMikkTSpace(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomUseMikkTSpace

// Begin Class UInterchangeMeshFactoryNode Function GetCustomVertexColorIgnore
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomVertexColorIgnore_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether the static mesh factory should ignore the vertex color. Return false if the attribute was not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether the static mesh factory should ignore the vertex color. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomVertexColorIgnore_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomVertexColorIgnore_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomVertexColorIgnore_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomVertexColorIgnore_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomVertexColorIgnore", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::InterchangeMeshFactoryNode_eventGetCustomVertexColorIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::InterchangeMeshFactoryNode_eventGetCustomVertexColorIgnore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomVertexColorIgnore)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomVertexColorIgnore(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomVertexColorIgnore

// Begin Class UInterchangeMeshFactoryNode Function GetCustomVertexColorOverride
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomVertexColorOverride_Parms
	{
		FColor AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether the static mesh factory should override the vertex color. Return false if the attribute was not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether the static mesh factory should override the vertex color. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventGetCustomVertexColorOverride_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomVertexColorOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomVertexColorOverride_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomVertexColorOverride", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::InterchangeMeshFactoryNode_eventGetCustomVertexColorOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::InterchangeMeshFactoryNode_eventGetCustomVertexColorOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomVertexColorOverride)
{
	P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomVertexColorOverride(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomVertexColorOverride

// Begin Class UInterchangeMeshFactoryNode Function GetCustomVertexColorReplace
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics
{
	struct InterchangeMeshFactoryNode_eventGetCustomVertexColorReplace_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Query whether the static mesh factory should replace the vertex color. Return false if the attribute was not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Query whether the static mesh factory should replace the vertex color. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomVertexColorReplace_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomVertexColorReplace_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetCustomVertexColorReplace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetCustomVertexColorReplace_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetCustomVertexColorReplace", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::InterchangeMeshFactoryNode_eventGetCustomVertexColorReplace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::InterchangeMeshFactoryNode_eventGetCustomVertexColorReplace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetCustomVertexColorReplace)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomVertexColorReplace(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetCustomVertexColorReplace

// Begin Class UInterchangeMeshFactoryNode Function GetLodDataCount
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics
{
	struct InterchangeMeshFactoryNode_eventGetLodDataCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Return the number of LODs this static mesh has.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Return the number of LODs this static mesh has." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventGetLodDataCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetLodDataCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::InterchangeMeshFactoryNode_eventGetLodDataCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::InterchangeMeshFactoryNode_eventGetLodDataCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetLodDataCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLodDataCount();
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetLodDataCount

// Begin Class UInterchangeMeshFactoryNode Function GetLodDataUniqueIds
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics
{
	struct InterchangeMeshFactoryNode_eventGetLodDataUniqueIds_Parms
	{
		TArray<FString> OutLodDataUniqueIds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutLodDataUniqueIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutLodDataUniqueIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::NewProp_OutLodDataUniqueIds_Inner = { "OutLodDataUniqueIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::NewProp_OutLodDataUniqueIds = { "OutLodDataUniqueIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventGetLodDataUniqueIds_Parms, OutLodDataUniqueIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::NewProp_OutLodDataUniqueIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::NewProp_OutLodDataUniqueIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetLodDataUniqueIds", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::InterchangeMeshFactoryNode_eventGetLodDataUniqueIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::InterchangeMeshFactoryNode_eventGetLodDataUniqueIds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetLodDataUniqueIds)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutLodDataUniqueIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetLodDataUniqueIds(Z_Param_Out_OutLodDataUniqueIds);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetLodDataUniqueIds

// Begin Class UInterchangeMeshFactoryNode Function GetSlotMaterialDependencies
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics
{
	struct InterchangeMeshFactoryNode_eventGetSlotMaterialDependencies_Parms
	{
		TMap<FString,FString> OutMaterialDependencies;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Retrieve the correspondence table between slot names and assigned materials for this object. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Retrieve the correspondence table between slot names and assigned materials for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependencies_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependencies_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMaterialDependencies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp = { "OutMaterialDependencies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventGetSlotMaterialDependencies_Parms, OutMaterialDependencies), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetSlotMaterialDependencies", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::InterchangeMeshFactoryNode_eventGetSlotMaterialDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::InterchangeMeshFactoryNode_eventGetSlotMaterialDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetSlotMaterialDependencies)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMaterialDependencies);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSlotMaterialDependencies(Z_Param_Out_OutMaterialDependencies);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetSlotMaterialDependencies

// Begin Class UInterchangeMeshFactoryNode Function GetSlotMaterialDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics
{
	struct InterchangeMeshFactoryNode_eventGetSlotMaterialDependencyUid_Parms
	{
		FString SlotName;
		FString OutMaterialDependency;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Retrieve the Material dependency for the specified slot of this object. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Retrieve the Material dependency for the specified slot of this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependency;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventGetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency = { "OutMaterialDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventGetSlotMaterialDependencyUid_Parms, OutMaterialDependency), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventGetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventGetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "GetSlotMaterialDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::InterchangeMeshFactoryNode_eventGetSlotMaterialDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::InterchangeMeshFactoryNode_eventGetSlotMaterialDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execGetSlotMaterialDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMaterialDependency);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_Out_OutMaterialDependency);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function GetSlotMaterialDependencyUid

// Begin Class UInterchangeMeshFactoryNode Function RemoveLodDataUniqueId
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics
{
	struct InterchangeMeshFactoryNode_eventRemoveLodDataUniqueId_Parms
	{
		FString LodDataUniqueId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LodDataUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LodDataUniqueId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::NewProp_LodDataUniqueId = { "LodDataUniqueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventRemoveLodDataUniqueId_Parms, LodDataUniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LodDataUniqueId_MetaData), NewProp_LodDataUniqueId_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventRemoveLodDataUniqueId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventRemoveLodDataUniqueId_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::NewProp_LodDataUniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "RemoveLodDataUniqueId", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::InterchangeMeshFactoryNode_eventRemoveLodDataUniqueId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::InterchangeMeshFactoryNode_eventRemoveLodDataUniqueId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execRemoveLodDataUniqueId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LodDataUniqueId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveLodDataUniqueId(Z_Param_LodDataUniqueId);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function RemoveLodDataUniqueId

// Begin Class UInterchangeMeshFactoryNode Function RemoveSlotMaterialDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics
{
	struct InterchangeMeshFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms
	{
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Remove the Material dependency associated with the specfied slot name of this object. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Remove the Material dependency associated with the specfied slot name of this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "RemoveSlotMaterialDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::InterchangeMeshFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::InterchangeMeshFactoryNode_eventRemoveSlotMaterialDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execRemoveSlotMaterialDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSlotMaterialDependencyUid(Z_Param_SlotName);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function RemoveSlotMaterialDependencyUid

// Begin Class UInterchangeMeshFactoryNode Function ResetSlotMaterialDependencies
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics
{
	struct InterchangeMeshFactoryNode_eventResetSlotMaterialDependencies_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Reset all the material dependencies. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Reset all the material dependencies." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventResetSlotMaterialDependencies_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventResetSlotMaterialDependencies_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "ResetSlotMaterialDependencies", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::InterchangeMeshFactoryNode_eventResetSlotMaterialDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::InterchangeMeshFactoryNode_eventResetSlotMaterialDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execResetSlotMaterialDependencies)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ResetSlotMaterialDependencies();
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function ResetSlotMaterialDependencies

// Begin Class UInterchangeMeshFactoryNode Function SetCustomComputeWeightedNormals
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomComputeWeightedNormals_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether normals are recomputed by weighting the surface area and the corner angle of the triangle as a ratio. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether normals are recomputed by weighting the surface area and the corner angle of the triangle as a ratio." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomComputeWeightedNormals_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomComputeWeightedNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomComputeWeightedNormals_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomComputeWeightedNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomComputeWeightedNormals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomComputeWeightedNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomComputeWeightedNormals", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::InterchangeMeshFactoryNode_eventSetCustomComputeWeightedNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::InterchangeMeshFactoryNode_eventSetCustomComputeWeightedNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomComputeWeightedNormals)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomComputeWeightedNormals(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomComputeWeightedNormals

// Begin Class UInterchangeMeshFactoryNode Function SetCustomKeepSectionsSeparate
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomKeepSectionsSeparate_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether sections with matching materials are kept separate and will not get combined. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether sections with matching materials are kept separate and will not get combined." },
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
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomKeepSectionsSeparate_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomKeepSectionsSeparate_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomKeepSectionsSeparate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomKeepSectionsSeparate_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomKeepSectionsSeparate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::InterchangeMeshFactoryNode_eventSetCustomKeepSectionsSeparate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::InterchangeMeshFactoryNode_eventSetCustomKeepSectionsSeparate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomKeepSectionsSeparate)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomKeepSectionsSeparate(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomKeepSectionsSeparate

// Begin Class UInterchangeMeshFactoryNode Function SetCustomLODGroup
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomLODGroup_Parms
	{
		FName AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set a custom LOD group for the mesh. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set a custom LOD group for the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventSetCustomLODGroup_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomLODGroup_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomLODGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomLODGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomLODGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomLODGroup", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::InterchangeMeshFactoryNode_eventSetCustomLODGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::InterchangeMeshFactoryNode_eventSetCustomLODGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomLODGroup)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomLODGroup(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomLODGroup

// Begin Class UInterchangeMeshFactoryNode Function SetCustomRecomputeNormals
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomRecomputeNormals_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether normals in the imported mesh are ignored and recomputed. When normals are recomputed, the tangents are also recomputed. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether normals in the imported mesh are ignored and recomputed. When normals are recomputed, the tangents are also recomputed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomRecomputeNormals_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomRecomputeNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomRecomputeNormals_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomRecomputeNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomRecomputeNormals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomRecomputeNormals_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomRecomputeNormals", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::InterchangeMeshFactoryNode_eventSetCustomRecomputeNormals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::InterchangeMeshFactoryNode_eventSetCustomRecomputeNormals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomRecomputeNormals)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRecomputeNormals(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomRecomputeNormals

// Begin Class UInterchangeMeshFactoryNode Function SetCustomRecomputeTangents
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomRecomputeTangents_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether tangents in the imported mesh are ignored and recomputed. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether tangents in the imported mesh are ignored and recomputed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomRecomputeTangents_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomRecomputeTangents_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomRecomputeTangents_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomRecomputeTangents_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomRecomputeTangents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomRecomputeTangents_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomRecomputeTangents", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::InterchangeMeshFactoryNode_eventSetCustomRecomputeTangents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::InterchangeMeshFactoryNode_eventSetCustomRecomputeTangents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomRecomputeTangents)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRecomputeTangents(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomRecomputeTangents

// Begin Class UInterchangeMeshFactoryNode Function SetCustomRemoveDegenerates
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomRemoveDegenerates_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether degenerate triangles are removed. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether degenerate triangles are removed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomRemoveDegenerates_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomRemoveDegenerates_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomRemoveDegenerates_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomRemoveDegenerates_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomRemoveDegenerates_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomRemoveDegenerates_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomRemoveDegenerates", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::InterchangeMeshFactoryNode_eventSetCustomRemoveDegenerates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::InterchangeMeshFactoryNode_eventSetCustomRemoveDegenerates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomRemoveDegenerates)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRemoveDegenerates(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomRemoveDegenerates

// Begin Class UInterchangeMeshFactoryNode Function SetCustomUseBackwardsCompatibleF16TruncUVs
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomUseBackwardsCompatibleF16TruncUVs_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether UVs are converted to 16-bit by a legacy truncation process instead of the default rounding process. This may avoid differences when reimporting older content. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether UVs are converted to 16-bit by a legacy truncation process instead of the default rounding process. This may avoid differences when reimporting older content." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseBackwardsCompatibleF16TruncUVs_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseBackwardsCompatibleF16TruncUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseBackwardsCompatibleF16TruncUVs_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseBackwardsCompatibleF16TruncUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseBackwardsCompatibleF16TruncUVs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseBackwardsCompatibleF16TruncUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomUseBackwardsCompatibleF16TruncUVs", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::InterchangeMeshFactoryNode_eventSetCustomUseBackwardsCompatibleF16TruncUVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::InterchangeMeshFactoryNode_eventSetCustomUseBackwardsCompatibleF16TruncUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomUseBackwardsCompatibleF16TruncUVs)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseBackwardsCompatibleF16TruncUVs(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomUseBackwardsCompatibleF16TruncUVs

// Begin Class UInterchangeMeshFactoryNode Function SetCustomUseFullPrecisionUVs
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomUseFullPrecisionUVs_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether UVs are stored at full floating point precision. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether UVs are stored at full floating point precision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseFullPrecisionUVs_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseFullPrecisionUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseFullPrecisionUVs_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseFullPrecisionUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseFullPrecisionUVs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseFullPrecisionUVs_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomUseFullPrecisionUVs", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::InterchangeMeshFactoryNode_eventSetCustomUseFullPrecisionUVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::InterchangeMeshFactoryNode_eventSetCustomUseFullPrecisionUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomUseFullPrecisionUVs)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseFullPrecisionUVs(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomUseFullPrecisionUVs

// Begin Class UInterchangeMeshFactoryNode Function SetCustomUseHighPrecisionTangentBasis
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomUseHighPrecisionTangentBasis_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether tangents are stored at 16-bit precision instead of the default 8-bit precision. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether tangents are stored at 16-bit precision instead of the default 8-bit precision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseHighPrecisionTangentBasis_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseHighPrecisionTangentBasis_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseHighPrecisionTangentBasis_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseHighPrecisionTangentBasis_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseHighPrecisionTangentBasis_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseHighPrecisionTangentBasis_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomUseHighPrecisionTangentBasis", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::InterchangeMeshFactoryNode_eventSetCustomUseHighPrecisionTangentBasis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::InterchangeMeshFactoryNode_eventSetCustomUseHighPrecisionTangentBasis_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomUseHighPrecisionTangentBasis)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseHighPrecisionTangentBasis(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomUseHighPrecisionTangentBasis

// Begin Class UInterchangeMeshFactoryNode Function SetCustomUseMikkTSpace
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomUseMikkTSpace_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether tangents are recomputed using MikkTSpace when they need to be recomputed. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether tangents are recomputed using MikkTSpace when they need to be recomputed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseMikkTSpace_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseMikkTSpace_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseMikkTSpace_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseMikkTSpace_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomUseMikkTSpace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomUseMikkTSpace_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomUseMikkTSpace", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::InterchangeMeshFactoryNode_eventSetCustomUseMikkTSpace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::InterchangeMeshFactoryNode_eventSetCustomUseMikkTSpace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomUseMikkTSpace)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomUseMikkTSpace(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomUseMikkTSpace

// Begin Class UInterchangeMeshFactoryNode Function SetCustomVertexColorIgnore
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomVertexColorIgnore_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether the static mesh factory should ignore the vertex color. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the static mesh factory should ignore the vertex color. Return false if the attribute could not be set." },
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
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomVertexColorIgnore_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomVertexColorIgnore_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomVertexColorIgnore_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomVertexColorIgnore_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomVertexColorIgnore", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::InterchangeMeshFactoryNode_eventSetCustomVertexColorIgnore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::InterchangeMeshFactoryNode_eventSetCustomVertexColorIgnore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomVertexColorIgnore)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomVertexColorIgnore(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomVertexColorIgnore

// Begin Class UInterchangeMeshFactoryNode Function SetCustomVertexColorOverride
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomVertexColorOverride_Parms
	{
		FColor AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether the static mesh factory should override the vertex color. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the static mesh factory should override the vertex color. Return false if the attribute could not be set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventSetCustomVertexColorOverride_Parms, AttributeValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomVertexColorOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomVertexColorOverride_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomVertexColorOverride", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::InterchangeMeshFactoryNode_eventSetCustomVertexColorOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::InterchangeMeshFactoryNode_eventSetCustomVertexColorOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomVertexColorOverride)
{
	P_GET_STRUCT_REF(FColor,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomVertexColorOverride(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomVertexColorOverride

// Begin Class UInterchangeMeshFactoryNode Function SetCustomVertexColorReplace
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics
{
	struct InterchangeMeshFactoryNode_eventSetCustomVertexColorReplace_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Set whether the static mesh factory should replace the vertex color. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the static mesh factory should replace the vertex color. Return false if the attribute could not be set." },
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
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomVertexColorReplace_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomVertexColorReplace_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetCustomVertexColorReplace_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetCustomVertexColorReplace_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetCustomVertexColorReplace", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::InterchangeMeshFactoryNode_eventSetCustomVertexColorReplace_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::InterchangeMeshFactoryNode_eventSetCustomVertexColorReplace_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetCustomVertexColorReplace)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomVertexColorReplace(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetCustomVertexColorReplace

// Begin Class UInterchangeMeshFactoryNode Function SetSlotMaterialDependencyUid
struct Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics
{
	struct InterchangeMeshFactoryNode_eventSetSlotMaterialDependencyUid_Parms
	{
		FString SlotName;
		FString MaterialDependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | FactoryNode | Mesh" },
		{ "Comment", "/** Add a Material dependency to the specified slot of this object. */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "Add a Material dependency to the specified slot of this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialDependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventSetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid = { "MaterialDependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeMeshFactoryNode_eventSetSlotMaterialDependencyUid_Parms, MaterialDependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDependencyUid_MetaData), NewProp_MaterialDependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeMeshFactoryNode_eventSetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeMeshFactoryNode_eventSetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshFactoryNode, nullptr, "SetSlotMaterialDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::InterchangeMeshFactoryNode_eventSetSlotMaterialDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::InterchangeMeshFactoryNode_eventSetSlotMaterialDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeMeshFactoryNode::execSetSlotMaterialDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FStrProperty,Z_Param_MaterialDependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_MaterialDependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeMeshFactoryNode Function SetSlotMaterialDependencyUid

// Begin Class UInterchangeMeshFactoryNode
void UInterchangeMeshFactoryNode::StaticRegisterNativesUInterchangeMeshFactoryNode()
{
	UClass* Class = UInterchangeMeshFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLodDataUniqueId", &UInterchangeMeshFactoryNode::execAddLodDataUniqueId },
		{ "GetCustomComputeWeightedNormals", &UInterchangeMeshFactoryNode::execGetCustomComputeWeightedNormals },
		{ "GetCustomKeepSectionsSeparate", &UInterchangeMeshFactoryNode::execGetCustomKeepSectionsSeparate },
		{ "GetCustomLODGroup", &UInterchangeMeshFactoryNode::execGetCustomLODGroup },
		{ "GetCustomRecomputeNormals", &UInterchangeMeshFactoryNode::execGetCustomRecomputeNormals },
		{ "GetCustomRecomputeTangents", &UInterchangeMeshFactoryNode::execGetCustomRecomputeTangents },
		{ "GetCustomRemoveDegenerates", &UInterchangeMeshFactoryNode::execGetCustomRemoveDegenerates },
		{ "GetCustomUseBackwardsCompatibleF16TruncUVs", &UInterchangeMeshFactoryNode::execGetCustomUseBackwardsCompatibleF16TruncUVs },
		{ "GetCustomUseFullPrecisionUVs", &UInterchangeMeshFactoryNode::execGetCustomUseFullPrecisionUVs },
		{ "GetCustomUseHighPrecisionTangentBasis", &UInterchangeMeshFactoryNode::execGetCustomUseHighPrecisionTangentBasis },
		{ "GetCustomUseMikkTSpace", &UInterchangeMeshFactoryNode::execGetCustomUseMikkTSpace },
		{ "GetCustomVertexColorIgnore", &UInterchangeMeshFactoryNode::execGetCustomVertexColorIgnore },
		{ "GetCustomVertexColorOverride", &UInterchangeMeshFactoryNode::execGetCustomVertexColorOverride },
		{ "GetCustomVertexColorReplace", &UInterchangeMeshFactoryNode::execGetCustomVertexColorReplace },
		{ "GetLodDataCount", &UInterchangeMeshFactoryNode::execGetLodDataCount },
		{ "GetLodDataUniqueIds", &UInterchangeMeshFactoryNode::execGetLodDataUniqueIds },
		{ "GetSlotMaterialDependencies", &UInterchangeMeshFactoryNode::execGetSlotMaterialDependencies },
		{ "GetSlotMaterialDependencyUid", &UInterchangeMeshFactoryNode::execGetSlotMaterialDependencyUid },
		{ "RemoveLodDataUniqueId", &UInterchangeMeshFactoryNode::execRemoveLodDataUniqueId },
		{ "RemoveSlotMaterialDependencyUid", &UInterchangeMeshFactoryNode::execRemoveSlotMaterialDependencyUid },
		{ "ResetSlotMaterialDependencies", &UInterchangeMeshFactoryNode::execResetSlotMaterialDependencies },
		{ "SetCustomComputeWeightedNormals", &UInterchangeMeshFactoryNode::execSetCustomComputeWeightedNormals },
		{ "SetCustomKeepSectionsSeparate", &UInterchangeMeshFactoryNode::execSetCustomKeepSectionsSeparate },
		{ "SetCustomLODGroup", &UInterchangeMeshFactoryNode::execSetCustomLODGroup },
		{ "SetCustomRecomputeNormals", &UInterchangeMeshFactoryNode::execSetCustomRecomputeNormals },
		{ "SetCustomRecomputeTangents", &UInterchangeMeshFactoryNode::execSetCustomRecomputeTangents },
		{ "SetCustomRemoveDegenerates", &UInterchangeMeshFactoryNode::execSetCustomRemoveDegenerates },
		{ "SetCustomUseBackwardsCompatibleF16TruncUVs", &UInterchangeMeshFactoryNode::execSetCustomUseBackwardsCompatibleF16TruncUVs },
		{ "SetCustomUseFullPrecisionUVs", &UInterchangeMeshFactoryNode::execSetCustomUseFullPrecisionUVs },
		{ "SetCustomUseHighPrecisionTangentBasis", &UInterchangeMeshFactoryNode::execSetCustomUseHighPrecisionTangentBasis },
		{ "SetCustomUseMikkTSpace", &UInterchangeMeshFactoryNode::execSetCustomUseMikkTSpace },
		{ "SetCustomVertexColorIgnore", &UInterchangeMeshFactoryNode::execSetCustomVertexColorIgnore },
		{ "SetCustomVertexColorOverride", &UInterchangeMeshFactoryNode::execSetCustomVertexColorOverride },
		{ "SetCustomVertexColorReplace", &UInterchangeMeshFactoryNode::execSetCustomVertexColorReplace },
		{ "SetSlotMaterialDependencyUid", &UInterchangeMeshFactoryNode::execSetSlotMaterialDependencyUid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMeshFactoryNode);
UClass* Z_Construct_UClass_UInterchangeMeshFactoryNode_NoRegister()
{
	return UInterchangeMeshFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace Interchange\n" },
		{ "IncludePath", "InterchangeMeshFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMeshFactoryNode.h" },
		{ "ToolTip", "namespace Interchange" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_AddLodDataUniqueId, "AddLodDataUniqueId" }, // 705417064
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomComputeWeightedNormals, "GetCustomComputeWeightedNormals" }, // 1436364668
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomKeepSectionsSeparate, "GetCustomKeepSectionsSeparate" }, // 3611071694
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomLODGroup, "GetCustomLODGroup" }, // 2175544997
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeNormals, "GetCustomRecomputeNormals" }, // 1782851754
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRecomputeTangents, "GetCustomRecomputeTangents" }, // 873607621
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomRemoveDegenerates, "GetCustomRemoveDegenerates" }, // 1378416991
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseBackwardsCompatibleF16TruncUVs, "GetCustomUseBackwardsCompatibleF16TruncUVs" }, // 2574713057
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseFullPrecisionUVs, "GetCustomUseFullPrecisionUVs" }, // 2269607072
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseHighPrecisionTangentBasis, "GetCustomUseHighPrecisionTangentBasis" }, // 3535838723
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomUseMikkTSpace, "GetCustomUseMikkTSpace" }, // 822522866
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorIgnore, "GetCustomVertexColorIgnore" }, // 3010879683
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorOverride, "GetCustomVertexColorOverride" }, // 485076141
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetCustomVertexColorReplace, "GetCustomVertexColorReplace" }, // 140741500
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataCount, "GetLodDataCount" }, // 2090573669
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetLodDataUniqueIds, "GetLodDataUniqueIds" }, // 826812215
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencies, "GetSlotMaterialDependencies" }, // 3160970026
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_GetSlotMaterialDependencyUid, "GetSlotMaterialDependencyUid" }, // 3971476837
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveLodDataUniqueId, "RemoveLodDataUniqueId" }, // 3411925718
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_RemoveSlotMaterialDependencyUid, "RemoveSlotMaterialDependencyUid" }, // 4159996719
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_ResetSlotMaterialDependencies, "ResetSlotMaterialDependencies" }, // 2933545291
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomComputeWeightedNormals, "SetCustomComputeWeightedNormals" }, // 2799997422
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomKeepSectionsSeparate, "SetCustomKeepSectionsSeparate" }, // 2092580168
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomLODGroup, "SetCustomLODGroup" }, // 4153487730
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeNormals, "SetCustomRecomputeNormals" }, // 278008239
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRecomputeTangents, "SetCustomRecomputeTangents" }, // 2652355906
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomRemoveDegenerates, "SetCustomRemoveDegenerates" }, // 993254789
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseBackwardsCompatibleF16TruncUVs, "SetCustomUseBackwardsCompatibleF16TruncUVs" }, // 332176096
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseFullPrecisionUVs, "SetCustomUseFullPrecisionUVs" }, // 2249952800
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseHighPrecisionTangentBasis, "SetCustomUseHighPrecisionTangentBasis" }, // 462634436
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomUseMikkTSpace, "SetCustomUseMikkTSpace" }, // 730343944
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorIgnore, "SetCustomVertexColorIgnore" }, // 3780022292
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorOverride, "SetCustomVertexColorOverride" }, // 4161260936
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetCustomVertexColorReplace, "SetCustomVertexColorReplace" }, // 882027065
		{ &Z_Construct_UFunction_UInterchangeMeshFactoryNode_SetSlotMaterialDependencyUid, "SetSlotMaterialDependencyUid" }, // 1415925720
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMeshFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics::ClassParams = {
	&UInterchangeMeshFactoryNode::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMeshFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeMeshFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMeshFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMeshFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeMeshFactoryNode>()
{
	return UInterchangeMeshFactoryNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMeshFactoryNode);
UInterchangeMeshFactoryNode::~UInterchangeMeshFactoryNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeMeshFactoryNode)
// End Class UInterchangeMeshFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMeshFactoryNode, UInterchangeMeshFactoryNode::StaticClass, TEXT("UInterchangeMeshFactoryNode"), &Z_Registration_Info_UClass_UInterchangeMeshFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMeshFactoryNode), 2332346423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_2177641476(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
