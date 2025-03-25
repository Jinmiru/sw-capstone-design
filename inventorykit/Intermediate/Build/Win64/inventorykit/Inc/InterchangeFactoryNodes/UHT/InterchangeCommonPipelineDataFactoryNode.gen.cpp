// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeCommonPipelineDataFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeCommonPipelineDataFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeCommonPipelineDataFactoryNode Function GetBakeMeshes
struct Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics
{
	struct InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Common Pipeline Data" },
		{ "Comment", "/** Return the value of the Bake Meshes setting set by the pipelines. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "Return the value of the Bake Meshes setting set by the pipelines." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, nullptr, "GetBakeMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeCommonPipelineDataFactoryNode::execGetBakeMeshes)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBakeMeshes(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeCommonPipelineDataFactoryNode Function GetBakeMeshes

// Begin Class UInterchangeCommonPipelineDataFactoryNode Function GetCustomGlobalOffsetTransform
struct Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics
{
	struct InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms
	{
		FTransform AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Common Pipeline Data" },
		{ "Comment", "/** Return the global offset transform set by the pipelines. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "Return the global offset transform set by the pipelines." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, nullptr, "GetCustomGlobalOffsetTransform", nullptr, nullptr, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeCommonPipelineDataFactoryNode::execGetCustomGlobalOffsetTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomGlobalOffsetTransform(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeCommonPipelineDataFactoryNode Function GetCustomGlobalOffsetTransform

// Begin Class UInterchangeCommonPipelineDataFactoryNode Function SetBakeMeshes
struct Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics
{
	struct InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms
	{
		const UInterchangeBaseNodeContainer* NodeContainer;
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Common Pipeline Data" },
		{ "Comment", "/** Pipelines can set this Bake Meshes setting. Factories use this to identify whether they should apply global transforms to static meshes and skeletal meshes. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "Pipelines can set this Bake Meshes setting. Factories use this to identify whether they should apply global transforms to static meshes and skeletal meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeContainer;
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_NodeContainer = { "NodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms, NodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeContainer_MetaData), NewProp_NodeContainer_MetaData) };
void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_NodeContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, nullptr, "SetBakeMeshes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeCommonPipelineDataFactoryNode::execSetBakeMeshes)
{
	P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_NodeContainer);
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBakeMeshes(Z_Param_NodeContainer,Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeCommonPipelineDataFactoryNode Function SetBakeMeshes

// Begin Class UInterchangeCommonPipelineDataFactoryNode Function SetCustomGlobalOffsetTransform
struct Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics
{
	struct InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms
	{
		const UInterchangeBaseNodeContainer* NodeContainer;
		FTransform AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Common Pipeline Data" },
		{ "Comment", "/** Pipelines can set a global transform. Factories will use this global offset when importing assets. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "Pipelines can set a global transform. Factories will use this global offset when importing assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeContainer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_NodeContainer = { "NodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms, NodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeContainer_MetaData), NewProp_NodeContainer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_NodeContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, nullptr, "SetCustomGlobalOffsetTransform", nullptr, nullptr, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeCommonPipelineDataFactoryNode::execSetCustomGlobalOffsetTransform)
{
	P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_NodeContainer);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomGlobalOffsetTransform(Z_Param_NodeContainer,Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeCommonPipelineDataFactoryNode Function SetCustomGlobalOffsetTransform

// Begin Class UInterchangeCommonPipelineDataFactoryNode
void UInterchangeCommonPipelineDataFactoryNode::StaticRegisterNativesUInterchangeCommonPipelineDataFactoryNode()
{
	UClass* Class = UInterchangeCommonPipelineDataFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBakeMeshes", &UInterchangeCommonPipelineDataFactoryNode::execGetBakeMeshes },
		{ "GetCustomGlobalOffsetTransform", &UInterchangeCommonPipelineDataFactoryNode::execGetCustomGlobalOffsetTransform },
		{ "SetBakeMeshes", &UInterchangeCommonPipelineDataFactoryNode::execSetBakeMeshes },
		{ "SetCustomGlobalOffsetTransform", &UInterchangeCommonPipelineDataFactoryNode::execSetCustomGlobalOffsetTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeCommonPipelineDataFactoryNode);
UClass* Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_NoRegister()
{
	return UInterchangeCommonPipelineDataFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* This factory node is where pipelines can set global data that can be used by factories. */" },
		{ "IncludePath", "InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "This factory node is where pipelines can set global data that can be used by factories." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes, "GetBakeMeshes" }, // 547170919
		{ &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform, "GetCustomGlobalOffsetTransform" }, // 639473367
		{ &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes, "SetBakeMeshes" }, // 2858747786
		{ &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform, "SetCustomGlobalOffsetTransform" }, // 3105017409
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeCommonPipelineDataFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::ClassParams = {
	&UInterchangeCommonPipelineDataFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeCommonPipelineDataFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeCommonPipelineDataFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeCommonPipelineDataFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeCommonPipelineDataFactoryNode>()
{
	return UInterchangeCommonPipelineDataFactoryNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeCommonPipelineDataFactoryNode);
UInterchangeCommonPipelineDataFactoryNode::~UInterchangeCommonPipelineDataFactoryNode() {}
// End Class UInterchangeCommonPipelineDataFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, UInterchangeCommonPipelineDataFactoryNode::StaticClass, TEXT("UInterchangeCommonPipelineDataFactoryNode"), &Z_Registration_Info_UClass_UInterchangeCommonPipelineDataFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeCommonPipelineDataFactoryNode), 3917789312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_3569532308(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
