// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeVariantSetNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeVariantSetNode() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVariantSetNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVariantSetNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Class UInterchangeVariantSetNode Function AddCustomDependencyUid
struct Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics
{
	struct InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Add the specified translated node's unique ID to this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Add the specified translated node's unique ID to this VariantSet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "AddCustomDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeVariantSetNode::execAddCustomDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddCustomDependencyUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeVariantSetNode Function AddCustomDependencyUid

// Begin Class UInterchangeVariantSetNode Function GetCustomDependencyUid
struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics
{
	struct InterchangeVariantSetNode_eventGetCustomDependencyUid_Parms
	{
		int32 Index;
		FString OutDependencyUid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Retrieve the specified translated node's unique ID for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Retrieve the specified translated node's unique ID for this VariantSet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencyUid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDependencyUid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_OutDependencyUid = { "OutDependencyUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDependencyUid_Parms, OutDependencyUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_OutDependencyUid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::InterchangeVariantSetNode_eventGetCustomDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::InterchangeVariantSetNode_eventGetCustomDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomDependencyUid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomDependencyUid(Z_Param_Index,Z_Param_Out_OutDependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeVariantSetNode Function GetCustomDependencyUid

// Begin Class UInterchangeVariantSetNode Function GetCustomDependencyUidCount
struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics
{
	struct InterchangeVariantSetNode_eventGetCustomDependencyUidCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Retrieve the number of translated node's unique IDs for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Retrieve the number of translated node's unique IDs for this VariantSet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDependencyUidCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomDependencyUidCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::InterchangeVariantSetNode_eventGetCustomDependencyUidCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::InterchangeVariantSetNode_eventGetCustomDependencyUidCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomDependencyUidCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCustomDependencyUidCount();
	P_NATIVE_END;
}
// End Class UInterchangeVariantSetNode Function GetCustomDependencyUidCount

// Begin Class UInterchangeVariantSetNode Function GetCustomDependencyUids
struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics
{
	struct InterchangeVariantSetNode_eventGetCustomDependencyUids_Parms
	{
		TArray<FString> OutDependencyUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Retrieve all the translated node's unique IDs for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Retrieve all the translated node's unique IDs for this VariantSet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencyUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencyUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::NewProp_OutDependencyUids_Inner = { "OutDependencyUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::NewProp_OutDependencyUids = { "OutDependencyUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDependencyUids_Parms, OutDependencyUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::NewProp_OutDependencyUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::NewProp_OutDependencyUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomDependencyUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::InterchangeVariantSetNode_eventGetCustomDependencyUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::InterchangeVariantSetNode_eventGetCustomDependencyUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomDependencyUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencyUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomDependencyUids(Z_Param_Out_OutDependencyUids);
	P_NATIVE_END;
}
// End Class UInterchangeVariantSetNode Function GetCustomDependencyUids

// Begin Class UInterchangeVariantSetNode Function GetCustomDisplayText
struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics
{
	struct InterchangeVariantSetNode_eventGetCustomDisplayText_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | VariantSet" },
		{ "Comment", "/**\n\x09 * Retrieve the text that is displayed in the UI for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Retrieve the text that is displayed in the UI for this VariantSet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDisplayText_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeVariantSetNode_eventGetCustomDisplayText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeVariantSetNode_eventGetCustomDisplayText_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomDisplayText", nullptr, nullptr, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::InterchangeVariantSetNode_eventGetCustomDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::InterchangeVariantSetNode_eventGetCustomDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomDisplayText)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDisplayText(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeVariantSetNode Function GetCustomDisplayText

// Begin Class UInterchangeVariantSetNode Function GetCustomVariantsPayloadKey
struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics
{
	struct InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms
	{
		FString PayloadKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | VariantSet" },
		{ "Comment", "/**\n\x09 * Get the payload key needed to retrieve the variants for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Get the payload key needed to retrieve the variants for this VariantSet." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms, PayloadKey), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomVariantsPayloadKey", nullptr, nullptr, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomVariantsPayloadKey)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PayloadKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomVariantsPayloadKey(Z_Param_Out_PayloadKey);
	P_NATIVE_END;
}
// End Class UInterchangeVariantSetNode Function GetCustomVariantsPayloadKey

// Begin Class UInterchangeVariantSetNode Function RemoveCustomDependencyUid
struct Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics
{
	struct InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms
	{
		FString DependencyUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Remove the specified translated node's unique ID from this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Remove the specified translated node's unique ID from this VariantSet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms, DependencyUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependencyUid_MetaData), NewProp_DependencyUid_MetaData) };
void Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_DependencyUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "RemoveCustomDependencyUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeVariantSetNode::execRemoveCustomDependencyUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCustomDependencyUid(Z_Param_DependencyUid);
	P_NATIVE_END;
}
// End Class UInterchangeVariantSetNode Function RemoveCustomDependencyUid

// Begin Class UInterchangeVariantSetNode Function SetCustomDisplayText
struct Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics
{
	struct InterchangeVariantSetNode_eventSetCustomDisplayText_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | VariantSet" },
		{ "Comment", "/**\n\x09 * Set the text to be displayed in the UI for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Set the text to be displayed in the UI for this VariantSet." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventSetCustomDisplayText_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeVariantSetNode_eventSetCustomDisplayText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeVariantSetNode_eventSetCustomDisplayText_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "SetCustomDisplayText", nullptr, nullptr, Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::InterchangeVariantSetNode_eventSetCustomDisplayText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::InterchangeVariantSetNode_eventSetCustomDisplayText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeVariantSetNode::execSetCustomDisplayText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDisplayText(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeVariantSetNode Function SetCustomDisplayText

// Begin Class UInterchangeVariantSetNode Function SetCustomVariantsPayloadKey
struct Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics
{
	struct InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms
	{
		FString PayloadKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | VariantSet" },
		{ "Comment", "/**\n\x09 * Set the payload key needed to retrieve the variants for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Set the payload key needed to retrieve the variants for this VariantSet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms, PayloadKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PayloadKey_MetaData), NewProp_PayloadKey_MetaData) };
void Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "SetCustomVariantsPayloadKey", nullptr, nullptr, Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeVariantSetNode::execSetCustomVariantsPayloadKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomVariantsPayloadKey(Z_Param_PayloadKey);
	P_NATIVE_END;
}
// End Class UInterchangeVariantSetNode Function SetCustomVariantsPayloadKey

// Begin Class UInterchangeVariantSetNode
void UInterchangeVariantSetNode::StaticRegisterNativesUInterchangeVariantSetNode()
{
	UClass* Class = UInterchangeVariantSetNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCustomDependencyUid", &UInterchangeVariantSetNode::execAddCustomDependencyUid },
		{ "GetCustomDependencyUid", &UInterchangeVariantSetNode::execGetCustomDependencyUid },
		{ "GetCustomDependencyUidCount", &UInterchangeVariantSetNode::execGetCustomDependencyUidCount },
		{ "GetCustomDependencyUids", &UInterchangeVariantSetNode::execGetCustomDependencyUids },
		{ "GetCustomDisplayText", &UInterchangeVariantSetNode::execGetCustomDisplayText },
		{ "GetCustomVariantsPayloadKey", &UInterchangeVariantSetNode::execGetCustomVariantsPayloadKey },
		{ "RemoveCustomDependencyUid", &UInterchangeVariantSetNode::execRemoveCustomDependencyUid },
		{ "SetCustomDisplayText", &UInterchangeVariantSetNode::execSetCustomDisplayText },
		{ "SetCustomVariantsPayloadKey", &UInterchangeVariantSetNode::execSetCustomVariantsPayloadKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeVariantSetNode);
UClass* Z_Construct_UClass_UInterchangeVariantSetNode_NoRegister()
{
	return UInterchangeVariantSetNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeVariantSetNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to represent a set of variants.\n */" },
		{ "IncludePath", "InterchangeVariantSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Class to represent a set of variants." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid, "AddCustomDependencyUid" }, // 2621583968
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid, "GetCustomDependencyUid" }, // 632098335
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount, "GetCustomDependencyUidCount" }, // 2733916637
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids, "GetCustomDependencyUids" }, // 726488801
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText, "GetCustomDisplayText" }, // 78131871
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey, "GetCustomVariantsPayloadKey" }, // 2092041232
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid, "RemoveCustomDependencyUid" }, // 1287008265
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText, "SetCustomDisplayText" }, // 1984414669
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey, "SetCustomVariantsPayloadKey" }, // 2346849581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeVariantSetNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeVariantSetNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVariantSetNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeVariantSetNode_Statics::ClassParams = {
	&UInterchangeVariantSetNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVariantSetNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeVariantSetNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeVariantSetNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeVariantSetNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeVariantSetNode.OuterSingleton, Z_Construct_UClass_UInterchangeVariantSetNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeVariantSetNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeVariantSetNode>()
{
	return UInterchangeVariantSetNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeVariantSetNode);
UInterchangeVariantSetNode::~UInterchangeVariantSetNode() {}
// End Class UInterchangeVariantSetNode

// Begin Class UInterchangeSceneVariantSetsNode Function AddCustomVariantSetUid
struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics
{
	struct InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms
	{
		FString VariantUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Add the specified VariantSet's unique id to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Add the specified VariantSet's unique id to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariantUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariantUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid = { "VariantUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms, VariantUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariantUid_MetaData), NewProp_VariantUid_MetaData) };
void Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms), &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "AddCustomVariantSetUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execAddCustomVariantSetUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_VariantUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddCustomVariantSetUid(Z_Param_VariantUid);
	P_NATIVE_END;
}
// End Class UInterchangeSceneVariantSetsNode Function AddCustomVariantSetUid

// Begin Class UInterchangeSceneVariantSetsNode Function GetCustomVariantSetUid
struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics
{
	struct InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUid_Parms
	{
		int32 Index;
		FString OutVariantUid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Retrieve the specified VariantSet's unique id for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Retrieve the specified VariantSet's unique id for this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutVariantUid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_OutVariantUid = { "OutVariantUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUid_Parms, OutVariantUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_OutVariantUid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "GetCustomVariantSetUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutVariantUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomVariantSetUid(Z_Param_Index,Z_Param_Out_OutVariantUid);
	P_NATIVE_END;
}
// End Class UInterchangeSceneVariantSetsNode Function GetCustomVariantSetUid

// Begin Class UInterchangeSceneVariantSetsNode Function GetCustomVariantSetUidCount
struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics
{
	struct InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUidCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Retrieve the number of VariantSets for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Retrieve the number of VariantSets for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUidCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "GetCustomVariantSetUidCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUidCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUidCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUidCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCustomVariantSetUidCount();
	P_NATIVE_END;
}
// End Class UInterchangeSceneVariantSetsNode Function GetCustomVariantSetUidCount

// Begin Class UInterchangeSceneVariantSetsNode Function GetCustomVariantSetUids
struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics
{
	struct InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUids_Parms
	{
		TArray<FString> OutVariantUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Retrieve all the VariantSets' unique ids for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Retrieve all the VariantSets' unique ids for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutVariantUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVariantUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids_Inner = { "OutVariantUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids = { "OutVariantUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUids_Parms, OutVariantUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "GetCustomVariantSetUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutVariantUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomVariantSetUids(Z_Param_Out_OutVariantUids);
	P_NATIVE_END;
}
// End Class UInterchangeSceneVariantSetsNode Function GetCustomVariantSetUids

// Begin Class UInterchangeSceneVariantSetsNode Function RemoveCustomVariantSetUid
struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics
{
	struct InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms
	{
		FString VariantUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Remove the specified VariantSet's unique id from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Remove the specified VariantSet's unique id from this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariantUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_VariantUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid = { "VariantUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms, VariantUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariantUid_MetaData), NewProp_VariantUid_MetaData) };
void Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms), &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "RemoveCustomVariantSetUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execRemoveCustomVariantSetUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_VariantUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCustomVariantSetUid(Z_Param_VariantUid);
	P_NATIVE_END;
}
// End Class UInterchangeSceneVariantSetsNode Function RemoveCustomVariantSetUid

// Begin Class UInterchangeSceneVariantSetsNode
void UInterchangeSceneVariantSetsNode::StaticRegisterNativesUInterchangeSceneVariantSetsNode()
{
	UClass* Class = UInterchangeSceneVariantSetsNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCustomVariantSetUid", &UInterchangeSceneVariantSetsNode::execAddCustomVariantSetUid },
		{ "GetCustomVariantSetUid", &UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUid },
		{ "GetCustomVariantSetUidCount", &UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUidCount },
		{ "GetCustomVariantSetUids", &UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUids },
		{ "RemoveCustomVariantSetUid", &UInterchangeSceneVariantSetsNode::execRemoveCustomVariantSetUid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSceneVariantSetsNode);
UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsNode_NoRegister()
{
	return UInterchangeSceneVariantSetsNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to represent a set of VariantSet nodes\n */" },
		{ "IncludePath", "InterchangeVariantSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Class to represent a set of VariantSet nodes" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid, "AddCustomVariantSetUid" }, // 3219496157
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid, "GetCustomVariantSetUid" }, // 1343695742
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount, "GetCustomVariantSetUidCount" }, // 1178429278
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids, "GetCustomVariantSetUids" }, // 1120177412
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid, "RemoveCustomVariantSetUid" }, // 2062033589
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSceneVariantSetsNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::ClassParams = {
	&UInterchangeSceneVariantSetsNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.OuterSingleton, Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeSceneVariantSetsNode>()
{
	return UInterchangeSceneVariantSetsNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSceneVariantSetsNode);
UInterchangeSceneVariantSetsNode::~UInterchangeSceneVariantSetsNode() {}
// End Class UInterchangeSceneVariantSetsNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeVariantSetNode, UInterchangeVariantSetNode::StaticClass, TEXT("UInterchangeVariantSetNode"), &Z_Registration_Info_UClass_UInterchangeVariantSetNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeVariantSetNode), 3178724346U) },
		{ Z_Construct_UClass_UInterchangeSceneVariantSetsNode, UInterchangeSceneVariantSetsNode::StaticClass, TEXT("UInterchangeSceneVariantSetsNode"), &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSceneVariantSetsNode), 2163440696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_1260550420(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
