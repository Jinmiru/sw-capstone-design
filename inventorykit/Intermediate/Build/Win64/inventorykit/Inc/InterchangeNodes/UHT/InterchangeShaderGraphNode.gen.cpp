// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/Public/InterchangeShaderGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeShaderGraphNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeFunctionCallShaderNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderGraphNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderGraphNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderNode();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderNode_NoRegister();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderPortsAPI();
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderPortsAPI_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References

// Begin Class UInterchangeShaderPortsAPI Function ConnectDefaultOuputToInput
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics
{
	struct InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms
	{
		UInterchangeBaseNode* InterchangeNode;
		FString InputName;
		FString ExpressionUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Adds an input connection attribute.\n\x09 * @param InterchangeNode\x09The node to create the input on.\n\x09 * @param InputName\x09\x09\x09The name to give to the input.\n\x09 * @param ExpressionUid\x09\x09The unique ID of the node to connect to the input.\n\x09 * @return\x09\x09\x09\x09\x09True if the input connection was successfully added to the node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Adds an input connection attribute.\n@param InterchangeNode       The node to create the input on.\n@param InputName                     The name to give to the input.\n@param ExpressionUid         The unique ID of the node to connect to the input.\n@return                                      True if the input connection was successfully added to the node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ExpressionUid = { "ExpressionUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms, ExpressionUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionUid_MetaData), NewProp_ExpressionUid_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ExpressionUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "ConnectDefaultOuputToInput", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execConnectDefaultOuputToInput)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput(Z_Param_InterchangeNode,Z_Param_InputName,Z_Param_ExpressionUid);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function ConnectDefaultOuputToInput

// Begin Class UInterchangeShaderPortsAPI Function ConnectOuputToInputByIndex
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics
{
	struct InterchangeShaderPortsAPI_eventConnectOuputToInputByIndex_Parms
	{
		UInterchangeBaseNode* InterchangeNode;
		FString InputName;
		FString ExpressionUid;
		int32 OutputIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Adds an input connection attribute.\n\x09 * @param InterchangeNode\x09The node to create the input on.\n\x09 * @param InputName\x09\x09\x09The name to give to the input.\n\x09 * @param ExpressionUid\x09\x09The unique ID of the node to connect to the input.\n\x09 * @param OutputIndex\x09\x09The index of the output from ExpressionUid to connect to the input.\n\x09 * @return\x09\x09\x09\x09\x09True if the input connection was successfully added to the node.\n\x09 * OutputIndex is encoded in a string in the following pattern: ExpressionUid:OutputByIndex:FString::FromInt(OutputIndex)\n\x09 * The index should be retrieved using UInterchangeShaderPortsAPI::GetOutputIndexFromName().\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Adds an input connection attribute.\n@param InterchangeNode       The node to create the input on.\n@param InputName                     The name to give to the input.\n@param ExpressionUid         The unique ID of the node to connect to the input.\n@param OutputIndex           The index of the output from ExpressionUid to connect to the input.\n@return                                      True if the input connection was successfully added to the node.\nOutputIndex is encoded in a string in the following pattern: ExpressionUid:OutputByIndex:FString::FromInt(OutputIndex)\nThe index should be retrieved using UInterchangeShaderPortsAPI::GetOutputIndexFromName()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionUid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInputByIndex_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInputByIndex_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_ExpressionUid = { "ExpressionUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInputByIndex_Parms, ExpressionUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionUid_MetaData), NewProp_ExpressionUid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInputByIndex_Parms, OutputIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderPortsAPI_eventConnectOuputToInputByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventConnectOuputToInputByIndex_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_ExpressionUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_OutputIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "ConnectOuputToInputByIndex", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::InterchangeShaderPortsAPI_eventConnectOuputToInputByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::InterchangeShaderPortsAPI_eventConnectOuputToInputByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execConnectOuputToInputByIndex)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionUid);
	P_GET_PROPERTY(FIntProperty,Z_Param_OutputIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::ConnectOuputToInputByIndex(Z_Param_InterchangeNode,Z_Param_InputName,Z_Param_ExpressionUid,Z_Param_OutputIndex);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function ConnectOuputToInputByIndex

// Begin Class UInterchangeShaderPortsAPI Function ConnectOuputToInputByName
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics
{
	struct InterchangeShaderPortsAPI_eventConnectOuputToInputByName_Parms
	{
		UInterchangeBaseNode* InterchangeNode;
		FString InputName;
		FString ExpressionUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Adds an input connection attribute.\n\x09 * @param InterchangeNode\x09The node to create the input on.\n\x09 * @param InputName\x09\x09\x09The name to give to the input.\n\x09 * @param ExpressionUid\x09\x09The unique ID of the node to connect to the input.\n\x09 * @param OutputName\x09\x09The name of the output from ExpressionUid to connect to the input.\n\x09 * @return\x09\x09\x09\x09\x09True if the input connection was successfully added to the node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Adds an input connection attribute.\n@param InterchangeNode       The node to create the input on.\n@param InputName                     The name to give to the input.\n@param ExpressionUid         The unique ID of the node to connect to the input.\n@param OutputName            The name of the output from ExpressionUid to connect to the input.\n@return                                      True if the input connection was successfully added to the node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionUid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInputByName_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInputByName_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_ExpressionUid = { "ExpressionUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInputByName_Parms, ExpressionUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionUid_MetaData), NewProp_ExpressionUid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInputByName_Parms, OutputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputName_MetaData), NewProp_OutputName_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderPortsAPI_eventConnectOuputToInputByName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventConnectOuputToInputByName_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_ExpressionUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "ConnectOuputToInputByName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::InterchangeShaderPortsAPI_eventConnectOuputToInputByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::InterchangeShaderPortsAPI_eventConnectOuputToInputByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execConnectOuputToInputByName)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionUid);
	P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::ConnectOuputToInputByName(Z_Param_InterchangeNode,Z_Param_InputName,Z_Param_ExpressionUid,Z_Param_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function ConnectOuputToInputByName

// Begin Class UInterchangeShaderPortsAPI Function GatherInputs
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics
{
	struct InterchangeShaderPortsAPI_eventGatherInputs_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		TArray<FString> OutInputNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Retrieves the names of all the inputs for a given node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Retrieves the names of all the inputs for a given node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutInputNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGatherInputs_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_OutInputNames_Inner = { "OutInputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_OutInputNames = { "OutInputNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGatherInputs_Parms, OutInputNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_OutInputNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_OutInputNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "GatherInputs", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::InterchangeShaderPortsAPI_eventGatherInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::InterchangeShaderPortsAPI_eventGatherInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execGatherInputs)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutInputNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	UInterchangeShaderPortsAPI::GatherInputs(Z_Param_InterchangeNode,Z_Param_Out_OutInputNames);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function GatherInputs

// Begin Class UInterchangeShaderPortsAPI Function GetInputConnection
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics
{
	struct InterchangeShaderPortsAPI_eventGetInputConnection_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		FString InputName;
		FString OutExpressionUid;
		FString OutputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Retrieves the node unique id and the output name connected to a given input, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Retrieves the node unique id and the output name connected to a given input, if any." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutExpressionUid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGetInputConnection_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGetInputConnection_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_OutExpressionUid = { "OutExpressionUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGetInputConnection_Parms, OutExpressionUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGetInputConnection_Parms, OutputName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderPortsAPI_eventGetInputConnection_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventGetInputConnection_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_OutExpressionUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_OutputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "GetInputConnection", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::InterchangeShaderPortsAPI_eventGetInputConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::InterchangeShaderPortsAPI_eventGetInputConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execGetInputConnection)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutExpressionUid);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::GetInputConnection(Z_Param_InterchangeNode,Z_Param_InputName,Z_Param_Out_OutExpressionUid,Z_Param_Out_OutputName);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function GetInputConnection

// Begin Class UInterchangeShaderPortsAPI Function HasInput
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics
{
	struct InterchangeShaderPortsAPI_eventHasInput_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		FName InInputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Checks whether a particular input exists on a given node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Checks whether a particular input exists on a given node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventHasInput_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventHasInput_Parms, InInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputName_MetaData), NewProp_InInputName_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderPortsAPI_eventHasInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventHasInput_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "HasInput", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::InterchangeShaderPortsAPI_eventHasInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::InterchangeShaderPortsAPI_eventHasInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execHasInput)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InInputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::HasInput(Z_Param_InterchangeNode,Z_Param_Out_InInputName);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function HasInput

// Begin Class UInterchangeShaderPortsAPI Function HasParameter
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics
{
	struct InterchangeShaderPortsAPI_eventHasParameter_Parms
	{
		const UInterchangeBaseNode* InterchangeNode;
		FName InInputName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Checks whether a particular input exists as a parameter on a given node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Checks whether a particular input exists as a parameter on a given node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventHasParameter_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterchangeNode_MetaData), NewProp_InterchangeNode_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventHasParameter_Parms, InInputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputName_MetaData), NewProp_InInputName_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderPortsAPI_eventHasParameter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventHasParameter_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::NewProp_InterchangeNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::NewProp_InInputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "HasParameter", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::InterchangeShaderPortsAPI_eventHasParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::InterchangeShaderPortsAPI_eventHasParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execHasParameter)
{
	P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InInputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::HasParameter(Z_Param_InterchangeNode,Z_Param_Out_InInputName);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function HasParameter

// Begin Class UInterchangeShaderPortsAPI Function IsAnInput
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics
{
	struct InterchangeShaderPortsAPI_eventIsAnInput_Parms
	{
		FString AttributeKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Returns true if the attribute key is associated with an input (starts with \"Inputs:\").\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Returns true if the attribute key is associated with an input (starts with \"Inputs:\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_AttributeKey = { "AttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventIsAnInput_Parms, AttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeKey_MetaData), NewProp_AttributeKey_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderPortsAPI_eventIsAnInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventIsAnInput_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_AttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "IsAnInput", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::InterchangeShaderPortsAPI_eventIsAnInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::InterchangeShaderPortsAPI_eventIsAnInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execIsAnInput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::IsAnInput(Z_Param_AttributeKey);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function IsAnInput

// Begin Class UInterchangeShaderPortsAPI Function IsAParameter
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics
{
	struct InterchangeShaderPortsAPI_eventIsAParameter_Parms
	{
		FString AttributeKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Returns true if the attribute key is an input that represents parameters (ends with \":Parameter\").\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Returns true if the attribute key is an input that represents parameters (ends with \":Parameter\")." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::NewProp_AttributeKey = { "AttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventIsAParameter_Parms, AttributeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeKey_MetaData), NewProp_AttributeKey_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderPortsAPI_eventIsAParameter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventIsAParameter_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::NewProp_AttributeKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "IsAParameter", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::InterchangeShaderPortsAPI_eventIsAParameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::InterchangeShaderPortsAPI_eventIsAParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execIsAParameter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::IsAParameter(Z_Param_AttributeKey);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function IsAParameter

// Begin Class UInterchangeShaderPortsAPI Function MakeInputConnectionKey
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics
{
	struct InterchangeShaderPortsAPI_eventMakeInputConnectionKey_Parms
	{
		FString InputName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Makes an attribute key to represent a node being connected to an input (that is, Inputs:InputName:Connect).\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Makes an attribute key to represent a node being connected to an input (that is, Inputs:InputName:Connect)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputConnectionKey_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputConnectionKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "MakeInputConnectionKey", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::InterchangeShaderPortsAPI_eventMakeInputConnectionKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::InterchangeShaderPortsAPI_eventMakeInputConnectionKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execMakeInputConnectionKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInterchangeShaderPortsAPI::MakeInputConnectionKey(Z_Param_InputName);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function MakeInputConnectionKey

// Begin Class UInterchangeShaderPortsAPI Function MakeInputName
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics
{
	struct InterchangeShaderPortsAPI_eventMakeInputName_Parms
	{
		FString InputKey;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * From an attribute key associated with an input (that is, Inputs:InputName:Value), retrieves the input name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "From an attribute key associated with an input (that is, Inputs:InputName:Value), retrieves the input name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputName_Parms, InputKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputKey_MetaData), NewProp_InputKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "MakeInputName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::InterchangeShaderPortsAPI_eventMakeInputName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::InterchangeShaderPortsAPI_eventMakeInputName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execMakeInputName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInterchangeShaderPortsAPI::MakeInputName(Z_Param_InputKey);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function MakeInputName

// Begin Class UInterchangeShaderPortsAPI Function MakeInputParameterKey
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics
{
	struct InterchangeShaderPortsAPI_eventMakeInputParameterKey_Parms
	{
		FString InputName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Makes an attribute key to represent a parameter being given to an input (that is, Inputs:InputName:Parameter).\n\x09 * This is more relevant to Materials, but could be used to differentiate between constant values and parameters.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Makes an attribute key to represent a parameter being given to an input (that is, Inputs:InputName:Parameter).\nThis is more relevant to Materials, but could be used to differentiate between constant values and parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputParameterKey_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputParameterKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "MakeInputParameterKey", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::InterchangeShaderPortsAPI_eventMakeInputParameterKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::InterchangeShaderPortsAPI_eventMakeInputParameterKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execMakeInputParameterKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInterchangeShaderPortsAPI::MakeInputParameterKey(Z_Param_InputName);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function MakeInputParameterKey

// Begin Class UInterchangeShaderPortsAPI Function MakeInputValueKey
struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics
{
	struct InterchangeShaderPortsAPI_eventMakeInputValueKey_Parms
	{
		FString InputName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Makes an attribute key to represent a value being given to an input (that is, Inputs:InputName:Value).\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Makes an attribute key to represent a value being given to an input (that is, Inputs:InputName:Value)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputValueKey_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputValueKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "MakeInputValueKey", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::InterchangeShaderPortsAPI_eventMakeInputValueKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::InterchangeShaderPortsAPI_eventMakeInputValueKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execMakeInputValueKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UInterchangeShaderPortsAPI::MakeInputValueKey(Z_Param_InputName);
	P_NATIVE_END;
}
// End Class UInterchangeShaderPortsAPI Function MakeInputValueKey

// Begin Class UInterchangeShaderPortsAPI
void UInterchangeShaderPortsAPI::StaticRegisterNativesUInterchangeShaderPortsAPI()
{
	UClass* Class = UInterchangeShaderPortsAPI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectDefaultOuputToInput", &UInterchangeShaderPortsAPI::execConnectDefaultOuputToInput },
		{ "ConnectOuputToInputByIndex", &UInterchangeShaderPortsAPI::execConnectOuputToInputByIndex },
		{ "ConnectOuputToInputByName", &UInterchangeShaderPortsAPI::execConnectOuputToInputByName },
		{ "GatherInputs", &UInterchangeShaderPortsAPI::execGatherInputs },
		{ "GetInputConnection", &UInterchangeShaderPortsAPI::execGetInputConnection },
		{ "HasInput", &UInterchangeShaderPortsAPI::execHasInput },
		{ "HasParameter", &UInterchangeShaderPortsAPI::execHasParameter },
		{ "IsAnInput", &UInterchangeShaderPortsAPI::execIsAnInput },
		{ "IsAParameter", &UInterchangeShaderPortsAPI::execIsAParameter },
		{ "MakeInputConnectionKey", &UInterchangeShaderPortsAPI::execMakeInputConnectionKey },
		{ "MakeInputName", &UInterchangeShaderPortsAPI::execMakeInputName },
		{ "MakeInputParameterKey", &UInterchangeShaderPortsAPI::execMakeInputParameterKey },
		{ "MakeInputValueKey", &UInterchangeShaderPortsAPI::execMakeInputValueKey },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeShaderPortsAPI);
UClass* Z_Construct_UClass_UInterchangeShaderPortsAPI_NoRegister()
{
	return UInterchangeShaderPortsAPI::StaticClass();
}
struct Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Shader Ports API manages a set of inputs and outputs attributes.\n * This API can be used over any InterchangeBaseNode that wants to support shader ports as attributes.\n */" },
		{ "IncludePath", "InterchangeShaderGraphNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "The Shader Ports API manages a set of inputs and outputs attributes.\nThis API can be used over any InterchangeBaseNode that wants to support shader ports as attributes." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput, "ConnectDefaultOuputToInput" }, // 690954300
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByIndex, "ConnectOuputToInputByIndex" }, // 231713133
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInputByName, "ConnectOuputToInputByName" }, // 372211986
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs, "GatherInputs" }, // 1863675710
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection, "GetInputConnection" }, // 2953559591
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput, "HasInput" }, // 1374235793
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasParameter, "HasParameter" }, // 3019028692
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput, "IsAnInput" }, // 153002940
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAParameter, "IsAParameter" }, // 1828142458
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey, "MakeInputConnectionKey" }, // 1715445634
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName, "MakeInputName" }, // 521480213
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputParameterKey, "MakeInputParameterKey" }, // 1441635207
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey, "MakeInputValueKey" }, // 2609665047
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeShaderPortsAPI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::ClassParams = {
	&UInterchangeShaderPortsAPI::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeShaderPortsAPI()
{
	if (!Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.OuterSingleton, Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeShaderPortsAPI>()
{
	return UInterchangeShaderPortsAPI::StaticClass();
}
UInterchangeShaderPortsAPI::UInterchangeShaderPortsAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeShaderPortsAPI);
UInterchangeShaderPortsAPI::~UInterchangeShaderPortsAPI() {}
// End Class UInterchangeShaderPortsAPI

// Begin Class UInterchangeShaderNode Function AddFloatInput
struct Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics
{
	struct InterchangeShaderNode_eventAddFloatInput_Parms
	{
		FString InputName;
		float AttributeValue;
		bool bIsAParameter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Set the Float Attribute on the Shader Node. If bIsAParameter is set to true, it would be treated as a ScalarParameter\n\x09 * when the Material Pipeline creates the materials. Otherwise it would be a constant expression in the shader graph.\n\x09 * Note: It is assumed that the input name would be the parameter name when bIsAParameter is true.\n\x09 */" },
		{ "CPP_Default_bIsAParameter", "false" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Set the Float Attribute on the Shader Node. If bIsAParameter is set to true, it would be treated as a ScalarParameter\nwhen the Material Pipeline creates the materials. Otherwise it would be a constant expression in the shader graph.\nNote: It is assumed that the input name would be the parameter name when bIsAParameter is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bIsAParameter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAParameter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderNode_eventAddFloatInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderNode_eventAddFloatInput_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_bIsAParameter_SetBit(void* Obj)
{
	((InterchangeShaderNode_eventAddFloatInput_Parms*)Obj)->bIsAParameter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_bIsAParameter = { "bIsAParameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderNode_eventAddFloatInput_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_bIsAParameter_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderNode_eventAddFloatInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderNode_eventAddFloatInput_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_bIsAParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderNode, nullptr, "AddFloatInput", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::InterchangeShaderNode_eventAddFloatInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::InterchangeShaderNode_eventAddFloatInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderNode::execAddFloatInput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bIsAParameter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddFloatInput(Z_Param_InputName,Z_Param_Out_AttributeValue,Z_Param_bIsAParameter);
	P_NATIVE_END;
}
// End Class UInterchangeShaderNode Function AddFloatInput

// Begin Class UInterchangeShaderNode Function AddLinearColorInput
struct Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics
{
	struct InterchangeShaderNode_eventAddLinearColorInput_Parms
	{
		FString InputName;
		FLinearColor AttributeValue;
		bool bIsAParameter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Set the Linear Color Attribute on the Shader Node. If bIsAParameter is set to true, it would be treated as a VectorParameter\n\x09 * when the Material Pipeline creates the materials. Otherwise it would be a constant 3 vector expression in the shader graph.\n\x09 * Note: It is assumed that the input name would be the parameter name when bIsAParameter is true.\n\x09 */" },
		{ "CPP_Default_bIsAParameter", "false" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Set the Linear Color Attribute on the Shader Node. If bIsAParameter is set to true, it would be treated as a VectorParameter\nwhen the Material Pipeline creates the materials. Otherwise it would be a constant 3 vector expression in the shader graph.\nNote: It is assumed that the input name would be the parameter name when bIsAParameter is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_bIsAParameter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAParameter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderNode_eventAddLinearColorInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderNode_eventAddLinearColorInput_Parms, AttributeValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_bIsAParameter_SetBit(void* Obj)
{
	((InterchangeShaderNode_eventAddLinearColorInput_Parms*)Obj)->bIsAParameter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_bIsAParameter = { "bIsAParameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderNode_eventAddLinearColorInput_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_bIsAParameter_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderNode_eventAddLinearColorInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderNode_eventAddLinearColorInput_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_bIsAParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderNode, nullptr, "AddLinearColorInput", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::InterchangeShaderNode_eventAddLinearColorInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::InterchangeShaderNode_eventAddLinearColorInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderNode::execAddLinearColorInput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bIsAParameter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddLinearColorInput(Z_Param_InputName,Z_Param_Out_AttributeValue,Z_Param_bIsAParameter);
	P_NATIVE_END;
}
// End Class UInterchangeShaderNode Function AddLinearColorInput

// Begin Class UInterchangeShaderNode Function AddStringInput
struct Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics
{
	struct InterchangeShaderNode_eventAddStringInput_Parms
	{
		FString InputName;
		FString AttributeValue;
		bool bIsAParameter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Set the String Attribute on the Shader Node. If bIsAParameter is set to true, it would be treated as a overridable Texture\n\x09 * or else it should be treated as a LUT Texture.\n\x09 * Note: It is assumed that the input name would be the parameter name when bIsAParameter is true.\n\x09 */" },
		{ "CPP_Default_bIsAParameter", "false" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Set the String Attribute on the Shader Node. If bIsAParameter is set to true, it would be treated as a overridable Texture\nor else it should be treated as a LUT Texture.\nNote: It is assumed that the input name would be the parameter name when bIsAParameter is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_bIsAParameter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAParameter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderNode_eventAddStringInput_Parms, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderNode_eventAddStringInput_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_bIsAParameter_SetBit(void* Obj)
{
	((InterchangeShaderNode_eventAddStringInput_Parms*)Obj)->bIsAParameter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_bIsAParameter = { "bIsAParameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderNode_eventAddStringInput_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_bIsAParameter_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderNode_eventAddStringInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderNode_eventAddStringInput_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_bIsAParameter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderNode, nullptr, "AddStringInput", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::InterchangeShaderNode_eventAddStringInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::InterchangeShaderNode_eventAddStringInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderNode::execAddStringInput)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bIsAParameter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddStringInput(Z_Param_InputName,Z_Param_AttributeValue,Z_Param_bIsAParameter);
	P_NATIVE_END;
}
// End Class UInterchangeShaderNode Function AddStringInput

// Begin Class UInterchangeShaderNode Function GetCustomShaderType
struct Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics
{
	struct InterchangeShaderNode_eventGetCustomShaderType_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderNode_eventGetCustomShaderType_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderNode_eventGetCustomShaderType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderNode_eventGetCustomShaderType_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderNode, nullptr, "GetCustomShaderType", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::InterchangeShaderNode_eventGetCustomShaderType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::InterchangeShaderNode_eventGetCustomShaderType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderNode::execGetCustomShaderType)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomShaderType(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderNode Function GetCustomShaderType

// Begin Class UInterchangeShaderNode Function SetCustomShaderType
struct Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics
{
	struct InterchangeShaderNode_eventSetCustomShaderType_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Sets which type of shader this nodes represents. Can be arbitrary or one of the predefined shader types.\n\x09 * The material pipeline handling the shader node should be aware of the shader type that is being set here.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Sets which type of shader this nodes represents. Can be arbitrary or one of the predefined shader types.\nThe material pipeline handling the shader node should be aware of the shader type that is being set here." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderNode_eventSetCustomShaderType_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderNode_eventSetCustomShaderType_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderNode_eventSetCustomShaderType_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderNode, nullptr, "SetCustomShaderType", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::InterchangeShaderNode_eventSetCustomShaderType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::InterchangeShaderNode_eventSetCustomShaderType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderNode::execSetCustomShaderType)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomShaderType(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderNode Function SetCustomShaderType

// Begin Class UInterchangeShaderNode
void UInterchangeShaderNode::StaticRegisterNativesUInterchangeShaderNode()
{
	UClass* Class = UInterchangeShaderNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFloatInput", &UInterchangeShaderNode::execAddFloatInput },
		{ "AddLinearColorInput", &UInterchangeShaderNode::execAddLinearColorInput },
		{ "AddStringInput", &UInterchangeShaderNode::execAddStringInput },
		{ "GetCustomShaderType", &UInterchangeShaderNode::execGetCustomShaderType },
		{ "SetCustomShaderType", &UInterchangeShaderNode::execSetCustomShaderType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeShaderNode);
UClass* Z_Construct_UClass_UInterchangeShaderNode_NoRegister()
{
	return UInterchangeShaderNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeShaderNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A shader node is a named set of inputs and outputs. It can be connected to other shader nodes and finally to a shader graph input.\n */" },
		{ "IncludePath", "InterchangeShaderGraphNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "A shader node is a named set of inputs and outputs. It can be connected to other shader nodes and finally to a shader graph input." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeShaderNode_AddFloatInput, "AddFloatInput" }, // 2311746161
		{ &Z_Construct_UFunction_UInterchangeShaderNode_AddLinearColorInput, "AddLinearColorInput" }, // 2331481320
		{ &Z_Construct_UFunction_UInterchangeShaderNode_AddStringInput, "AddStringInput" }, // 3083012
		{ &Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType, "GetCustomShaderType" }, // 158172860
		{ &Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType, "SetCustomShaderType" }, // 4119866620
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeShaderNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeShaderNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeShaderNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeShaderNode_Statics::ClassParams = {
	&UInterchangeShaderNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeShaderNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeShaderNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeShaderNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeShaderNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeShaderNode.OuterSingleton, Z_Construct_UClass_UInterchangeShaderNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeShaderNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeShaderNode>()
{
	return UInterchangeShaderNode::StaticClass();
}
UInterchangeShaderNode::UInterchangeShaderNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeShaderNode);
UInterchangeShaderNode::~UInterchangeShaderNode() {}
// End Class UInterchangeShaderNode

// Begin Class UInterchangeFunctionCallShaderNode Function GetCustomMaterialFunction
struct Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics
{
	struct InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms), &Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFunctionCallShaderNode, nullptr, "GetCustomMaterialFunction", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFunctionCallShaderNode::execGetCustomMaterialFunction)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomMaterialFunction(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeFunctionCallShaderNode Function GetCustomMaterialFunction

// Begin Class UInterchangeFunctionCallShaderNode Function SetCustomMaterialFunction
struct Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics
{
	struct InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Set the unique id of the material function referenced by the function call expression.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Set the unique id of the material function referenced by the function call expression." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms), &Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFunctionCallShaderNode, nullptr, "SetCustomMaterialFunction", nullptr, nullptr, Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeFunctionCallShaderNode::execSetCustomMaterialFunction)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomMaterialFunction(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeFunctionCallShaderNode Function SetCustomMaterialFunction

// Begin Class UInterchangeFunctionCallShaderNode
void UInterchangeFunctionCallShaderNode::StaticRegisterNativesUInterchangeFunctionCallShaderNode()
{
	UClass* Class = UInterchangeFunctionCallShaderNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomMaterialFunction", &UInterchangeFunctionCallShaderNode::execGetCustomMaterialFunction },
		{ "SetCustomMaterialFunction", &UInterchangeFunctionCallShaderNode::execSetCustomMaterialFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFunctionCallShaderNode);
UClass* Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister()
{
	return UInterchangeFunctionCallShaderNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A function call shader node has a named set of inputs and outputs which corresponds to the inputs and outputs of the shader function it instances.\n */" },
		{ "IncludePath", "InterchangeShaderGraphNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "A function call shader node has a named set of inputs and outputs which corresponds to the inputs and outputs of the shader function it instances." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction, "GetCustomMaterialFunction" }, // 1360285254
		{ &Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction, "SetCustomMaterialFunction" }, // 996195939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFunctionCallShaderNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeShaderNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::ClassParams = {
	&UInterchangeFunctionCallShaderNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeFunctionCallShaderNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeFunctionCallShaderNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFunctionCallShaderNode.OuterSingleton, Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeFunctionCallShaderNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeFunctionCallShaderNode>()
{
	return UInterchangeFunctionCallShaderNode::StaticClass();
}
UInterchangeFunctionCallShaderNode::UInterchangeFunctionCallShaderNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFunctionCallShaderNode);
UInterchangeFunctionCallShaderNode::~UInterchangeFunctionCallShaderNode() {}
// End Class UInterchangeFunctionCallShaderNode

// Begin Class UInterchangeShaderGraphNode Function GetCustomBlendMode
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics
{
	struct InterchangeShaderGraphNode_eventGetCustomBlendMode_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Set the Blend Mode using EBlendMode to avoid a dependency on the Engine.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Set the Blend Mode using EBlendMode to avoid a dependency on the Engine." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderGraphNode_eventGetCustomBlendMode_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomBlendMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomBlendMode_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "GetCustomBlendMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::InterchangeShaderGraphNode_eventGetCustomBlendMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::InterchangeShaderGraphNode_eventGetCustomBlendMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execGetCustomBlendMode)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomBlendMode(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function GetCustomBlendMode

// Begin Class UInterchangeShaderGraphNode Function GetCustomIsAShaderFunction
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics
{
	struct InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "GetCustomIsAShaderFunction", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execGetCustomIsAShaderFunction)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomIsAShaderFunction(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function GetCustomIsAShaderFunction

// Begin Class UInterchangeShaderGraphNode Function GetCustomOpacityMaskClipValue
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics
{
	struct InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "GetCustomOpacityMaskClipValue", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execGetCustomOpacityMaskClipValue)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomOpacityMaskClipValue(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function GetCustomOpacityMaskClipValue

// Begin Class UInterchangeShaderGraphNode Function GetCustomScreenSpaceReflections
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics
{
	struct InterchangeShaderGraphNode_eventGetCustomScreenSpaceReflections_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomScreenSpaceReflections_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomScreenSpaceReflections_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomScreenSpaceReflections_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomScreenSpaceReflections_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "GetCustomScreenSpaceReflections", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::InterchangeShaderGraphNode_eventGetCustomScreenSpaceReflections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::InterchangeShaderGraphNode_eventGetCustomScreenSpaceReflections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execGetCustomScreenSpaceReflections)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScreenSpaceReflections(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function GetCustomScreenSpaceReflections

// Begin Class UInterchangeShaderGraphNode Function GetCustomTwoSided
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics
{
	struct InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "GetCustomTwoSided", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execGetCustomTwoSided)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTwoSided(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function GetCustomTwoSided

// Begin Class UInterchangeShaderGraphNode Function GetCustomTwoSidedTransmission
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics
{
	struct InterchangeShaderGraphNode_eventGetCustomTwoSidedTransmission_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09* Forces two-sided even for Transmission materials.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Forces two-sided even for Transmission materials." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomTwoSidedTransmission_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomTwoSidedTransmission_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventGetCustomTwoSidedTransmission_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomTwoSidedTransmission_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "GetCustomTwoSidedTransmission", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::InterchangeShaderGraphNode_eventGetCustomTwoSidedTransmission_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::InterchangeShaderGraphNode_eventGetCustomTwoSidedTransmission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execGetCustomTwoSidedTransmission)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomTwoSidedTransmission(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function GetCustomTwoSidedTransmission

// Begin Class UInterchangeShaderGraphNode Function SetCustomBlendMode
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics
{
	struct InterchangeShaderGraphNode_eventSetCustomBlendMode_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderGraphNode_eventSetCustomBlendMode_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomBlendMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomBlendMode_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "SetCustomBlendMode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::InterchangeShaderGraphNode_eventSetCustomBlendMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::InterchangeShaderGraphNode_eventSetCustomBlendMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execSetCustomBlendMode)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomBlendMode(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function SetCustomBlendMode

// Begin Class UInterchangeShaderGraphNode Function SetCustomIsAShaderFunction
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics
{
	struct InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Set whether this shader graph should be considered as a material (false), or a material function (true).\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Set whether this shader graph should be considered as a material (false), or a material function (true)." },
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
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "SetCustomIsAShaderFunction", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execSetCustomIsAShaderFunction)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomIsAShaderFunction(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function SetCustomIsAShaderFunction

// Begin Class UInterchangeShaderGraphNode Function SetCustomOpacityMaskClipValue
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics
{
	struct InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * The shader is transparent if its alpha value is lower than the clip value, or opaque if it is higher.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "The shader is transparent if its alpha value is lower than the clip value, or opaque if it is higher." },
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "SetCustomOpacityMaskClipValue", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execSetCustomOpacityMaskClipValue)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomOpacityMaskClipValue(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function SetCustomOpacityMaskClipValue

// Begin Class UInterchangeShaderGraphNode Function SetCustomScreenSpaceReflections
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics
{
	struct InterchangeShaderGraphNode_eventSetCustomScreenSpaceReflections_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
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
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomScreenSpaceReflections_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomScreenSpaceReflections_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomScreenSpaceReflections_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomScreenSpaceReflections_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "SetCustomScreenSpaceReflections", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::InterchangeShaderGraphNode_eventSetCustomScreenSpaceReflections_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::InterchangeShaderGraphNode_eventSetCustomScreenSpaceReflections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execSetCustomScreenSpaceReflections)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScreenSpaceReflections(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function SetCustomScreenSpaceReflections

// Begin Class UInterchangeShaderGraphNode Function SetCustomTwoSided
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics
{
	struct InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Set if this shader graph should be rendered two-sided or not. Defaults to off.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Set if this shader graph should be rendered two-sided or not. Defaults to off." },
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
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "SetCustomTwoSided", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execSetCustomTwoSided)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTwoSided(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function SetCustomTwoSided

// Begin Class UInterchangeShaderGraphNode Function SetCustomTwoSidedTransmission
struct Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics
{
	struct InterchangeShaderGraphNode_eventSetCustomTwoSidedTransmission_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
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
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomTwoSidedTransmission_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomTwoSidedTransmission_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeShaderGraphNode_eventSetCustomTwoSidedTransmission_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomTwoSidedTransmission_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "SetCustomTwoSidedTransmission", nullptr, nullptr, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::InterchangeShaderGraphNode_eventSetCustomTwoSidedTransmission_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::InterchangeShaderGraphNode_eventSetCustomTwoSidedTransmission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeShaderGraphNode::execSetCustomTwoSidedTransmission)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomTwoSidedTransmission(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeShaderGraphNode Function SetCustomTwoSidedTransmission

// Begin Class UInterchangeShaderGraphNode
void UInterchangeShaderGraphNode::StaticRegisterNativesUInterchangeShaderGraphNode()
{
	UClass* Class = UInterchangeShaderGraphNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomBlendMode", &UInterchangeShaderGraphNode::execGetCustomBlendMode },
		{ "GetCustomIsAShaderFunction", &UInterchangeShaderGraphNode::execGetCustomIsAShaderFunction },
		{ "GetCustomOpacityMaskClipValue", &UInterchangeShaderGraphNode::execGetCustomOpacityMaskClipValue },
		{ "GetCustomScreenSpaceReflections", &UInterchangeShaderGraphNode::execGetCustomScreenSpaceReflections },
		{ "GetCustomTwoSided", &UInterchangeShaderGraphNode::execGetCustomTwoSided },
		{ "GetCustomTwoSidedTransmission", &UInterchangeShaderGraphNode::execGetCustomTwoSidedTransmission },
		{ "SetCustomBlendMode", &UInterchangeShaderGraphNode::execSetCustomBlendMode },
		{ "SetCustomIsAShaderFunction", &UInterchangeShaderGraphNode::execSetCustomIsAShaderFunction },
		{ "SetCustomOpacityMaskClipValue", &UInterchangeShaderGraphNode::execSetCustomOpacityMaskClipValue },
		{ "SetCustomScreenSpaceReflections", &UInterchangeShaderGraphNode::execSetCustomScreenSpaceReflections },
		{ "SetCustomTwoSided", &UInterchangeShaderGraphNode::execSetCustomTwoSided },
		{ "SetCustomTwoSidedTransmission", &UInterchangeShaderGraphNode::execSetCustomTwoSidedTransmission },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeShaderGraphNode);
UClass* Z_Construct_UClass_UInterchangeShaderGraphNode_NoRegister()
{
	return UInterchangeShaderGraphNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeShaderGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A shader graph has its own set of inputs on which shader nodes can be connected to.\n */" },
		{ "IncludePath", "InterchangeShaderGraphNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "A shader graph has its own set of inputs on which shader nodes can be connected to." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomBlendMode, "GetCustomBlendMode" }, // 2652809483
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction, "GetCustomIsAShaderFunction" }, // 662332160
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue, "GetCustomOpacityMaskClipValue" }, // 4251113530
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomScreenSpaceReflections, "GetCustomScreenSpaceReflections" }, // 2550121238
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided, "GetCustomTwoSided" }, // 462106734
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSidedTransmission, "GetCustomTwoSidedTransmission" }, // 1867782834
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomBlendMode, "SetCustomBlendMode" }, // 1676343235
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction, "SetCustomIsAShaderFunction" }, // 2543152105
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue, "SetCustomOpacityMaskClipValue" }, // 1631022542
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomScreenSpaceReflections, "SetCustomScreenSpaceReflections" }, // 2356668110
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided, "SetCustomTwoSided" }, // 3288624959
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSidedTransmission, "SetCustomTwoSidedTransmission" }, // 3946532414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeShaderGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeShaderNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::ClassParams = {
	&UInterchangeShaderGraphNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeShaderGraphNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeShaderGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeShaderGraphNode.OuterSingleton, Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeShaderGraphNode.OuterSingleton;
}
template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeShaderGraphNode>()
{
	return UInterchangeShaderGraphNode::StaticClass();
}
UInterchangeShaderGraphNode::UInterchangeShaderGraphNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeShaderGraphNode);
UInterchangeShaderGraphNode::~UInterchangeShaderGraphNode() {}
// End Class UInterchangeShaderGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeShaderPortsAPI, UInterchangeShaderPortsAPI::StaticClass, TEXT("UInterchangeShaderPortsAPI"), &Z_Registration_Info_UClass_UInterchangeShaderPortsAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeShaderPortsAPI), 669603U) },
		{ Z_Construct_UClass_UInterchangeShaderNode, UInterchangeShaderNode::StaticClass, TEXT("UInterchangeShaderNode"), &Z_Registration_Info_UClass_UInterchangeShaderNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeShaderNode), 2701041301U) },
		{ Z_Construct_UClass_UInterchangeFunctionCallShaderNode, UInterchangeFunctionCallShaderNode::StaticClass, TEXT("UInterchangeFunctionCallShaderNode"), &Z_Registration_Info_UClass_UInterchangeFunctionCallShaderNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFunctionCallShaderNode), 176763952U) },
		{ Z_Construct_UClass_UInterchangeShaderGraphNode, UInterchangeShaderGraphNode::StaticClass, TEXT("UInterchangeShaderGraphNode"), &Z_Registration_Info_UClass_UInterchangeShaderGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeShaderGraphNode), 1180485663U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_1286195625(TEXT("/Script/InterchangeNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
