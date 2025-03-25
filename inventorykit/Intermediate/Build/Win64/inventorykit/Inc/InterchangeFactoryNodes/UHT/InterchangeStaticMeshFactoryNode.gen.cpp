// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeStaticMeshFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeStaticMeshFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStaticMeshFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeStaticMeshFactoryNode Function AddSocketUid
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms
	{
		FString SocketUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SocketUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_SocketUid = { "SocketUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms, SocketUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketUid_MetaData), NewProp_SocketUid_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_SocketUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "AddSocketUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::InterchangeStaticMeshFactoryNode_eventAddSocketUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execAddSocketUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SocketUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddSocketUid(Z_Param_SocketUid);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function AddSocketUid

// Begin Class UInterchangeStaticMeshFactoryNode Function AddSocketUids
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms
	{
		TArray<FString> InSocketUids;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSocketUids_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSocketUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSocketUids;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids_Inner = { "InSocketUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids = { "InSocketUids", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms, InSocketUids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSocketUids_MetaData), NewProp_InSocketUids_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_InSocketUids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "AddSocketUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::InterchangeStaticMeshFactoryNode_eventAddSocketUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execAddSocketUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InSocketUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddSocketUids(Z_Param_Out_InSocketUids);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function AddSocketUids

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomBuildNanite
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get whether the static mesh factory should set the Nanite build setting. Return false if the attribute was not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get whether the static mesh factory should set the Nanite build setting. Return false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomBuildNanite", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomBuildNanite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomBuildNanite)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomBuildNanite(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomBuildNanite

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomBuildReversedIndexBuffer
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get whether the static mesh should build a reversed index buffer. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get whether the static mesh should build a reversed index buffer." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomBuildReversedIndexBuffer", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomBuildReversedIndexBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomBuildReversedIndexBuffer)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomBuildReversedIndexBuffer(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomBuildReversedIndexBuffer

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomBuildScale3D
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms
	{
		FVector AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the local scale that is applied when building the static mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the local scale that is applied when building the static mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomBuildScale3D", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomBuildScale3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomBuildScale3D)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomBuildScale3D(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomBuildScale3D

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomDistanceFieldReplacementMesh
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms
	{
		FSoftObjectPath AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the static mesh asset whose distance field will be used as the distance field for the imported mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the static mesh asset whose distance field will be used as the distance field for the imported mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomDistanceFieldReplacementMesh", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldReplacementMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldReplacementMesh)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDistanceFieldReplacementMesh(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomDistanceFieldReplacementMesh

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomDistanceFieldResolutionScale
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Get the scale to apply to the mesh when allocating the distance field volume texture.\n\x09 * The default scale is 1, which assumes that the mesh will be placed unscaled in the world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the scale to apply to the mesh when allocating the distance field volume texture.\nThe default scale is 1, which assumes that the mesh will be placed unscaled in the world." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomDistanceFieldResolutionScale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomDistanceFieldResolutionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldResolutionScale)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDistanceFieldResolutionScale(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomDistanceFieldResolutionScale

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomDstLightmapIndex
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the index of the UV that is used to store generated lightmaps for the static mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the index of the UV that is used to store generated lightmaps for the static mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomDstLightmapIndex", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomDstLightmapIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomDstLightmapIndex)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDstLightmapIndex(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomDstLightmapIndex

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomGenerateDistanceFieldAsIfTwoSided
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Get whether to generate the distance field by treating every triangle hit as a front face.  \n\x09 * This prevents the distance field from being discarded due to the mesh being open, but also lowers distance field ambient occlusion quality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get whether to generate the distance field by treating every triangle hit as a front face.\nThis prevents the distance field from being discarded due to the mesh being open, but also lowers distance field ambient occlusion quality." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomGenerateDistanceFieldAsIfTwoSided", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomGenerateDistanceFieldAsIfTwoSided_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomGenerateDistanceFieldAsIfTwoSided)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomGenerateDistanceFieldAsIfTwoSided(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomGenerateDistanceFieldAsIfTwoSided

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomGenerateLightmapUVs
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get whether the static mesh should generate lightmap UVs. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get whether the static mesh should generate lightmap UVs." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomGenerateLightmapUVs", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomGenerateLightmapUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomGenerateLightmapUVs)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomGenerateLightmapUVs(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomGenerateLightmapUVs

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomMaxLumenMeshCards
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Get the maximum number of Lumen mesh cards to generate for this mesh.\n\x09 * More cards means that the surface will have better coverage, but will result in increased runtime overhead.\n\x09 * Set this to 0 to disable mesh card generation for this mesh.\n\x09 * The default is 12.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the maximum number of Lumen mesh cards to generate for this mesh.\nMore cards means that the surface will have better coverage, but will result in increased runtime overhead.\nSet this to 0 to disable mesh card generation for this mesh.\nThe default is 12." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomMaxLumenMeshCards", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomMaxLumenMeshCards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomMaxLumenMeshCards)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomMaxLumenMeshCards(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomMaxLumenMeshCards

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomMinLightmapResolution
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the amount of padding used to pack UVs for the static mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the amount of padding used to pack UVs for the static mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomMinLightmapResolution", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomMinLightmapResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomMinLightmapResolution)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomMinLightmapResolution(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomMinLightmapResolution

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomSrcLightmapIndex
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the index of the UV that is used as the source for generating lightmaps for the static mesh.  */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the index of the UV that is used as the source for generating lightmaps for the static mesh." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomSrcLightmapIndex", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomSrcLightmapIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomSrcLightmapIndex)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSrcLightmapIndex(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomSrcLightmapIndex

// Begin Class UInterchangeStaticMeshFactoryNode Function GetCustomSupportFaceRemap
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get whether the static mesh is set up for use with physical material masks. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get whether the static mesh is set up for use with physical material masks." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetCustomSupportFaceRemap", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::InterchangeStaticMeshFactoryNode_eventGetCustomSupportFaceRemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetCustomSupportFaceRemap)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSupportFaceRemap(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetCustomSupportFaceRemap

// Begin Class UInterchangeStaticMeshFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Get the class this node creates. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Get the class this node creates." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::InterchangeStaticMeshFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::InterchangeStaticMeshFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetObjectClass

// Begin Class UInterchangeStaticMeshFactoryNode Function GetSocketUidCount
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetSocketUidCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Return the number of socket UIDs this static mesh has. */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Return the number of socket UIDs this static mesh has." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetSocketUidCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetSocketUidCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::InterchangeStaticMeshFactoryNode_eventGetSocketUidCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::InterchangeStaticMeshFactoryNode_eventGetSocketUidCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetSocketUidCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSocketUidCount();
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetSocketUidCount

// Begin Class UInterchangeStaticMeshFactoryNode Function GetSocketUids
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventGetSocketUids_Parms
	{
		TArray<FString> OutSocketUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutSocketUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSocketUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::NewProp_OutSocketUids_Inner = { "OutSocketUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::NewProp_OutSocketUids = { "OutSocketUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventGetSocketUids_Parms, OutSocketUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::NewProp_OutSocketUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::NewProp_OutSocketUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "GetSocketUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::InterchangeStaticMeshFactoryNode_eventGetSocketUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::InterchangeStaticMeshFactoryNode_eventGetSocketUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execGetSocketUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutSocketUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSocketUids(Z_Param_Out_OutSocketUids);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function GetSocketUids

// Begin Class UInterchangeStaticMeshFactoryNode Function InitializeStaticMeshNode
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms
	{
		FString UniqueID;
		FString DisplayLabel;
		FString InAssetClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Initialize node data.\n\x09 * @param UniqueID - The unique ID for this node.\n\x09 * @param DisplayLabel - The name of the node.\n\x09 * @param InAssetClass - The class the StaticMesh factory will create for this node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Initialize node data.\n@param UniqueID - The unique ID for this node.\n@param DisplayLabel - The name of the node.\n@param InAssetClass - The class the StaticMesh factory will create for this node." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms, UniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueID_MetaData), NewProp_UniqueID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms, DisplayLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayLabel_MetaData), NewProp_DisplayLabel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_InAssetClass = { "InAssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms, InAssetClass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssetClass_MetaData), NewProp_InAssetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_UniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_DisplayLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::NewProp_InAssetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "InitializeStaticMeshNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::InterchangeStaticMeshFactoryNode_eventInitializeStaticMeshNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execInitializeStaticMeshNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
	P_GET_PROPERTY(FStrProperty,Z_Param_InAssetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeStaticMeshNode(Z_Param_UniqueID,Z_Param_DisplayLabel,Z_Param_InAssetClass);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function InitializeStaticMeshNode

// Begin Class UInterchangeStaticMeshFactoryNode Function RemoveSocketUd
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms
	{
		FString SocketUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SocketUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_SocketUid = { "SocketUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms, SocketUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketUid_MetaData), NewProp_SocketUid_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_SocketUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "RemoveSocketUd", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::InterchangeStaticMeshFactoryNode_eventRemoveSocketUd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execRemoveSocketUd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SocketUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSocketUd(Z_Param_SocketUid);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function RemoveSocketUd

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomBuildNanite
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set whether the static mesh factory should set the Nanite build setting. Return false if the attribute was not set. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the static mesh factory should set the Nanite build setting. Return false if the attribute was not set." },
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
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomBuildNanite", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomBuildNanite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomBuildNanite)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomBuildNanite(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomBuildNanite

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomBuildReversedIndexBuffer
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set whether the static mesh should build a reversed index buffer. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the static mesh should build a reversed index buffer." },
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
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomBuildReversedIndexBuffer", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomBuildReversedIndexBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomBuildReversedIndexBuffer)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomBuildReversedIndexBuffer(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomBuildReversedIndexBuffer

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomBuildScale3D
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms
	{
		FVector AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set the local scale that is applied when building the static mesh. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the local scale that is applied when building the static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomBuildScale3D", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomBuildScale3D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomBuildScale3D)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomBuildScale3D(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomBuildScale3D

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomDistanceFieldReplacementMesh
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms
	{
		FSoftObjectPath AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set the static mesh asset whose distance field will be used as the distance field for the imported mesh. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the static mesh asset whose distance field will be used as the distance field for the imported mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomDistanceFieldReplacementMesh", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldReplacementMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldReplacementMesh)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDistanceFieldReplacementMesh(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomDistanceFieldReplacementMesh

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomDistanceFieldResolutionScale
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Set the scale to apply to the mesh when allocating the distance field volume texture.\n\x09 * The default scale is 1, which assumes that the mesh will be placed unscaled in the world.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the scale to apply to the mesh when allocating the distance field volume texture.\nThe default scale is 1, which assumes that the mesh will be placed unscaled in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomDistanceFieldResolutionScale", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomDistanceFieldResolutionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldResolutionScale)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDistanceFieldResolutionScale(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomDistanceFieldResolutionScale

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomDstLightmapIndex
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms
	{
		int32 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set the index of the UV that is used to store generated lightmaps for the static mesh. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the index of the UV that is used to store generated lightmaps for the static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomDstLightmapIndex", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomDstLightmapIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomDstLightmapIndex)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDstLightmapIndex(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomDstLightmapIndex

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomGenerateDistanceFieldAsIfTwoSided
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Set whether to generate the distance field by treating every triangle hit as a front face.\n\x09 * This prevents the distance field from being discarded due to the mesh being open, but also lowers distance field ambient occlusion quality.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set whether to generate the distance field by treating every triangle hit as a front face.\nThis prevents the distance field from being discarded due to the mesh being open, but also lowers distance field ambient occlusion quality." },
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
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomGenerateDistanceFieldAsIfTwoSided", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomGenerateDistanceFieldAsIfTwoSided_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomGenerateDistanceFieldAsIfTwoSided)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomGenerateDistanceFieldAsIfTwoSided(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomGenerateDistanceFieldAsIfTwoSided

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomGenerateLightmapUVs
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set whether the static mesh should generate lightmap UVs. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the static mesh should generate lightmap UVs." },
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
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomGenerateLightmapUVs", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomGenerateLightmapUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomGenerateLightmapUVs)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomGenerateLightmapUVs(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomGenerateLightmapUVs

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomMaxLumenMeshCards
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms
	{
		int32 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Set the maximum number of Lumen mesh cards to generate for this mesh.\n\x09 * More cards means that the surface will have better coverage, but will result in increased runtime overhead.\n\x09 * Set this to 0 to disable mesh card generation for this mesh.\n\x09 * The default is 12.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the maximum number of Lumen mesh cards to generate for this mesh.\nMore cards means that the surface will have better coverage, but will result in increased runtime overhead.\nSet this to 0 to disable mesh card generation for this mesh.\nThe default is 12." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomMaxLumenMeshCards", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomMaxLumenMeshCards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomMaxLumenMeshCards)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomMaxLumenMeshCards(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomMaxLumenMeshCards

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomMinLightmapResolution
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms
	{
		int32 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set the amount of padding used to pack UVs for the static mesh. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the amount of padding used to pack UVs for the static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomMinLightmapResolution", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomMinLightmapResolution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomMinLightmapResolution)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomMinLightmapResolution(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomMinLightmapResolution

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomSrcLightmapIndex
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms
	{
		int32 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set the index of the UV that is used as the source for generating lightmaps for the static mesh. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set the index of the UV that is used as the source for generating lightmaps for the static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomSrcLightmapIndex", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomSrcLightmapIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomSrcLightmapIndex)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSrcLightmapIndex(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomSrcLightmapIndex

// Begin Class UInterchangeStaticMeshFactoryNode Function SetCustomSupportFaceRemap
struct Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics
{
	struct InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/** Set whether the static mesh is set up for use with physical material masks. */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "Set whether the static mesh is set up for use with physical material masks." },
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
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms), &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, nullptr, "SetCustomSupportFaceRemap", nullptr, nullptr, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::InterchangeStaticMeshFactoryNode_eventSetCustomSupportFaceRemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeStaticMeshFactoryNode::execSetCustomSupportFaceRemap)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSupportFaceRemap(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeStaticMeshFactoryNode Function SetCustomSupportFaceRemap

// Begin Class UInterchangeStaticMeshFactoryNode
void UInterchangeStaticMeshFactoryNode::StaticRegisterNativesUInterchangeStaticMeshFactoryNode()
{
	UClass* Class = UInterchangeStaticMeshFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSocketUid", &UInterchangeStaticMeshFactoryNode::execAddSocketUid },
		{ "AddSocketUids", &UInterchangeStaticMeshFactoryNode::execAddSocketUids },
		{ "GetCustomBuildNanite", &UInterchangeStaticMeshFactoryNode::execGetCustomBuildNanite },
		{ "GetCustomBuildReversedIndexBuffer", &UInterchangeStaticMeshFactoryNode::execGetCustomBuildReversedIndexBuffer },
		{ "GetCustomBuildScale3D", &UInterchangeStaticMeshFactoryNode::execGetCustomBuildScale3D },
		{ "GetCustomDistanceFieldReplacementMesh", &UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldReplacementMesh },
		{ "GetCustomDistanceFieldResolutionScale", &UInterchangeStaticMeshFactoryNode::execGetCustomDistanceFieldResolutionScale },
		{ "GetCustomDstLightmapIndex", &UInterchangeStaticMeshFactoryNode::execGetCustomDstLightmapIndex },
		{ "GetCustomGenerateDistanceFieldAsIfTwoSided", &UInterchangeStaticMeshFactoryNode::execGetCustomGenerateDistanceFieldAsIfTwoSided },
		{ "GetCustomGenerateLightmapUVs", &UInterchangeStaticMeshFactoryNode::execGetCustomGenerateLightmapUVs },
		{ "GetCustomMaxLumenMeshCards", &UInterchangeStaticMeshFactoryNode::execGetCustomMaxLumenMeshCards },
		{ "GetCustomMinLightmapResolution", &UInterchangeStaticMeshFactoryNode::execGetCustomMinLightmapResolution },
		{ "GetCustomSrcLightmapIndex", &UInterchangeStaticMeshFactoryNode::execGetCustomSrcLightmapIndex },
		{ "GetCustomSupportFaceRemap", &UInterchangeStaticMeshFactoryNode::execGetCustomSupportFaceRemap },
		{ "GetObjectClass", &UInterchangeStaticMeshFactoryNode::execGetObjectClass },
		{ "GetSocketUidCount", &UInterchangeStaticMeshFactoryNode::execGetSocketUidCount },
		{ "GetSocketUids", &UInterchangeStaticMeshFactoryNode::execGetSocketUids },
		{ "InitializeStaticMeshNode", &UInterchangeStaticMeshFactoryNode::execInitializeStaticMeshNode },
		{ "RemoveSocketUd", &UInterchangeStaticMeshFactoryNode::execRemoveSocketUd },
		{ "SetCustomBuildNanite", &UInterchangeStaticMeshFactoryNode::execSetCustomBuildNanite },
		{ "SetCustomBuildReversedIndexBuffer", &UInterchangeStaticMeshFactoryNode::execSetCustomBuildReversedIndexBuffer },
		{ "SetCustomBuildScale3D", &UInterchangeStaticMeshFactoryNode::execSetCustomBuildScale3D },
		{ "SetCustomDistanceFieldReplacementMesh", &UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldReplacementMesh },
		{ "SetCustomDistanceFieldResolutionScale", &UInterchangeStaticMeshFactoryNode::execSetCustomDistanceFieldResolutionScale },
		{ "SetCustomDstLightmapIndex", &UInterchangeStaticMeshFactoryNode::execSetCustomDstLightmapIndex },
		{ "SetCustomGenerateDistanceFieldAsIfTwoSided", &UInterchangeStaticMeshFactoryNode::execSetCustomGenerateDistanceFieldAsIfTwoSided },
		{ "SetCustomGenerateLightmapUVs", &UInterchangeStaticMeshFactoryNode::execSetCustomGenerateLightmapUVs },
		{ "SetCustomMaxLumenMeshCards", &UInterchangeStaticMeshFactoryNode::execSetCustomMaxLumenMeshCards },
		{ "SetCustomMinLightmapResolution", &UInterchangeStaticMeshFactoryNode::execSetCustomMinLightmapResolution },
		{ "SetCustomSrcLightmapIndex", &UInterchangeStaticMeshFactoryNode::execSetCustomSrcLightmapIndex },
		{ "SetCustomSupportFaceRemap", &UInterchangeStaticMeshFactoryNode::execSetCustomSupportFaceRemap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStaticMeshFactoryNode);
UClass* Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_NoRegister()
{
	return UInterchangeStaticMeshFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "InterchangeStaticMeshFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeStaticMeshFactoryNode.h" },
		{ "ToolTip", "namespace UE" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUid, "AddSocketUid" }, // 3601502064
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_AddSocketUids, "AddSocketUids" }, // 3410201465
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildNanite, "GetCustomBuildNanite" }, // 1870513662
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildReversedIndexBuffer, "GetCustomBuildReversedIndexBuffer" }, // 2176862364
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomBuildScale3D, "GetCustomBuildScale3D" }, // 1399693653
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldReplacementMesh, "GetCustomDistanceFieldReplacementMesh" }, // 3550990154
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDistanceFieldResolutionScale, "GetCustomDistanceFieldResolutionScale" }, // 2973625922
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomDstLightmapIndex, "GetCustomDstLightmapIndex" }, // 1324326000
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateDistanceFieldAsIfTwoSided, "GetCustomGenerateDistanceFieldAsIfTwoSided" }, // 1226917578
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomGenerateLightmapUVs, "GetCustomGenerateLightmapUVs" }, // 2136462799
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMaxLumenMeshCards, "GetCustomMaxLumenMeshCards" }, // 1612586150
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomMinLightmapResolution, "GetCustomMinLightmapResolution" }, // 1338542839
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSrcLightmapIndex, "GetCustomSrcLightmapIndex" }, // 455201783
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetCustomSupportFaceRemap, "GetCustomSupportFaceRemap" }, // 1535722621
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetObjectClass, "GetObjectClass" }, // 3646256745
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUidCount, "GetSocketUidCount" }, // 2105395271
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_GetSocketUids, "GetSocketUids" }, // 1160400062
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_InitializeStaticMeshNode, "InitializeStaticMeshNode" }, // 2728971436
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_RemoveSocketUd, "RemoveSocketUd" }, // 1978523018
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildNanite, "SetCustomBuildNanite" }, // 200012633
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildReversedIndexBuffer, "SetCustomBuildReversedIndexBuffer" }, // 3544329331
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomBuildScale3D, "SetCustomBuildScale3D" }, // 707967915
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldReplacementMesh, "SetCustomDistanceFieldReplacementMesh" }, // 66823492
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDistanceFieldResolutionScale, "SetCustomDistanceFieldResolutionScale" }, // 3505084989
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomDstLightmapIndex, "SetCustomDstLightmapIndex" }, // 1321238884
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateDistanceFieldAsIfTwoSided, "SetCustomGenerateDistanceFieldAsIfTwoSided" }, // 1178715964
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomGenerateLightmapUVs, "SetCustomGenerateLightmapUVs" }, // 3574927498
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMaxLumenMeshCards, "SetCustomMaxLumenMeshCards" }, // 1026020182
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomMinLightmapResolution, "SetCustomMinLightmapResolution" }, // 2382849372
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSrcLightmapIndex, "SetCustomSrcLightmapIndex" }, // 2687648404
		{ &Z_Construct_UFunction_UInterchangeStaticMeshFactoryNode_SetCustomSupportFaceRemap, "SetCustomSupportFaceRemap" }, // 1780082838
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeStaticMeshFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeMeshFactoryNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::ClassParams = {
	&UInterchangeStaticMeshFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeStaticMeshFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeStaticMeshFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeStaticMeshFactoryNode>()
{
	return UInterchangeStaticMeshFactoryNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStaticMeshFactoryNode);
UInterchangeStaticMeshFactoryNode::~UInterchangeStaticMeshFactoryNode() {}
// End Class UInterchangeStaticMeshFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeStaticMeshFactoryNode, UInterchangeStaticMeshFactoryNode::StaticClass, TEXT("UInterchangeStaticMeshFactoryNode"), &Z_Registration_Info_UClass_UInterchangeStaticMeshFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStaticMeshFactoryNode), 3404410933U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_2985310946(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeStaticMeshFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
