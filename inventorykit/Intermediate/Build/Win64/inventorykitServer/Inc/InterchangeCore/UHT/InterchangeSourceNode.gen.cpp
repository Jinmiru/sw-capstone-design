// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Interchange/Core/Public/Nodes/InterchangeSourceNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSourceNode() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceNode();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeCore();
// End Cross Module References

// Begin Class UInterchangeSourceNode Function GetCustomAnimatedTimeEnd
struct Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics
{
	struct InterchangeSourceNode_eventGetCustomAnimatedTimeEnd_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Query the end of the source animated time. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Query the end of the source animated time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventGetCustomAnimatedTimeEnd_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventGetCustomAnimatedTimeEnd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventGetCustomAnimatedTimeEnd_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "GetCustomAnimatedTimeEnd", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::InterchangeSourceNode_eventGetCustomAnimatedTimeEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::InterchangeSourceNode_eventGetCustomAnimatedTimeEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execGetCustomAnimatedTimeEnd)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAnimatedTimeEnd(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function GetCustomAnimatedTimeEnd

// Begin Class UInterchangeSourceNode Function GetCustomAnimatedTimeStart
struct Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics
{
	struct InterchangeSourceNode_eventGetCustomAnimatedTimeStart_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Query the start of the source animated time. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Query the start of the source animated time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventGetCustomAnimatedTimeStart_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventGetCustomAnimatedTimeStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventGetCustomAnimatedTimeStart_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "GetCustomAnimatedTimeStart", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::InterchangeSourceNode_eventGetCustomAnimatedTimeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::InterchangeSourceNode_eventGetCustomAnimatedTimeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execGetCustomAnimatedTimeStart)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAnimatedTimeStart(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function GetCustomAnimatedTimeStart

// Begin Class UInterchangeSourceNode Function GetCustomImportUnusedMaterial
struct Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics
{
	struct InterchangeSourceNode_eventGetCustomImportUnusedMaterial_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Query whether to import materials that aren't used. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Query whether to import materials that aren't used." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventGetCustomImportUnusedMaterial_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventGetCustomImportUnusedMaterial_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventGetCustomImportUnusedMaterial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventGetCustomImportUnusedMaterial_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "GetCustomImportUnusedMaterial", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::InterchangeSourceNode_eventGetCustomImportUnusedMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::InterchangeSourceNode_eventGetCustomImportUnusedMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execGetCustomImportUnusedMaterial)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomImportUnusedMaterial(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function GetCustomImportUnusedMaterial

// Begin Class UInterchangeSourceNode Function GetCustomSourceFrameRateDenominator
struct Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics
{
	struct InterchangeSourceNode_eventGetCustomSourceFrameRateDenominator_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Query the source frame rate denominator. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Query the source frame rate denominator." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventGetCustomSourceFrameRateDenominator_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventGetCustomSourceFrameRateDenominator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventGetCustomSourceFrameRateDenominator_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "GetCustomSourceFrameRateDenominator", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::InterchangeSourceNode_eventGetCustomSourceFrameRateDenominator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::InterchangeSourceNode_eventGetCustomSourceFrameRateDenominator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execGetCustomSourceFrameRateDenominator)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSourceFrameRateDenominator(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function GetCustomSourceFrameRateDenominator

// Begin Class UInterchangeSourceNode Function GetCustomSourceFrameRateNumerator
struct Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics
{
	struct InterchangeSourceNode_eventGetCustomSourceFrameRateNumerator_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Query the source frame rate numerator. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Query the source frame rate numerator." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventGetCustomSourceFrameRateNumerator_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventGetCustomSourceFrameRateNumerator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventGetCustomSourceFrameRateNumerator_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "GetCustomSourceFrameRateNumerator", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::InterchangeSourceNode_eventGetCustomSourceFrameRateNumerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::InterchangeSourceNode_eventGetCustomSourceFrameRateNumerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execGetCustomSourceFrameRateNumerator)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSourceFrameRateNumerator(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function GetCustomSourceFrameRateNumerator

// Begin Class UInterchangeSourceNode Function GetCustomSourceTimelineEnd
struct Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics
{
	struct InterchangeSourceNode_eventGetCustomSourceTimelineEnd_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Query the end of the source timeline. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Query the end of the source timeline." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventGetCustomSourceTimelineEnd_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventGetCustomSourceTimelineEnd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventGetCustomSourceTimelineEnd_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "GetCustomSourceTimelineEnd", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::InterchangeSourceNode_eventGetCustomSourceTimelineEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::InterchangeSourceNode_eventGetCustomSourceTimelineEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execGetCustomSourceTimelineEnd)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSourceTimelineEnd(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function GetCustomSourceTimelineEnd

// Begin Class UInterchangeSourceNode Function GetCustomSourceTimelineStart
struct Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics
{
	struct InterchangeSourceNode_eventGetCustomSourceTimelineStart_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Query the start of the source timeline. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Query the start of the source timeline." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventGetCustomSourceTimelineStart_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventGetCustomSourceTimelineStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventGetCustomSourceTimelineStart_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "GetCustomSourceTimelineStart", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::InterchangeSourceNode_eventGetCustomSourceTimelineStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::InterchangeSourceNode_eventGetCustomSourceTimelineStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execGetCustomSourceTimelineStart)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSourceTimelineStart(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function GetCustomSourceTimelineStart

// Begin Class UInterchangeSourceNode Function InitializeSourceNode
struct Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics
{
	struct InterchangeSourceNode_eventInitializeSourceNode_Parms
	{
		FString UniqueID;
		FString DisplayLabel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | source" },
		{ "Comment", "/**\n\x09 * Initialize the base data of the node.\n\x09 * @param UniqueID - The unique ID for this node.\n\x09 * @param DisplayLabel - The name of the node.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Initialize the base data of the node.\n@param UniqueID - The unique ID for this node.\n@param DisplayLabel - The name of the node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventInitializeSourceNode_Parms, UniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueID_MetaData), NewProp_UniqueID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventInitializeSourceNode_Parms, DisplayLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayLabel_MetaData), NewProp_DisplayLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::NewProp_UniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::NewProp_DisplayLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "InitializeSourceNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::InterchangeSourceNode_eventInitializeSourceNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::InterchangeSourceNode_eventInitializeSourceNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execInitializeSourceNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeSourceNode(Z_Param_UniqueID,Z_Param_DisplayLabel);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function InitializeSourceNode

// Begin Class UInterchangeSourceNode Function SetCustomAnimatedTimeEnd
struct Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics
{
	struct InterchangeSourceNode_eventSetCustomAnimatedTimeEnd_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Set the end of the source animated time. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Set the end of the source animated time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventSetCustomAnimatedTimeEnd_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventSetCustomAnimatedTimeEnd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventSetCustomAnimatedTimeEnd_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "SetCustomAnimatedTimeEnd", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::InterchangeSourceNode_eventSetCustomAnimatedTimeEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::InterchangeSourceNode_eventSetCustomAnimatedTimeEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execSetCustomAnimatedTimeEnd)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAnimatedTimeEnd(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function SetCustomAnimatedTimeEnd

// Begin Class UInterchangeSourceNode Function SetCustomAnimatedTimeStart
struct Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics
{
	struct InterchangeSourceNode_eventSetCustomAnimatedTimeStart_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Set the start of the source animated time. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Set the start of the source animated time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventSetCustomAnimatedTimeStart_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventSetCustomAnimatedTimeStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventSetCustomAnimatedTimeStart_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "SetCustomAnimatedTimeStart", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::InterchangeSourceNode_eventSetCustomAnimatedTimeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::InterchangeSourceNode_eventSetCustomAnimatedTimeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execSetCustomAnimatedTimeStart)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAnimatedTimeStart(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function SetCustomAnimatedTimeStart

// Begin Class UInterchangeSourceNode Function SetCustomImportUnusedMaterial
struct Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics
{
	struct InterchangeSourceNode_eventSetCustomImportUnusedMaterial_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Set whether to import materials that aren't used. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Set whether to import materials that aren't used." },
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
void Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventSetCustomImportUnusedMaterial_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventSetCustomImportUnusedMaterial_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventSetCustomImportUnusedMaterial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventSetCustomImportUnusedMaterial_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "SetCustomImportUnusedMaterial", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::InterchangeSourceNode_eventSetCustomImportUnusedMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::InterchangeSourceNode_eventSetCustomImportUnusedMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execSetCustomImportUnusedMaterial)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomImportUnusedMaterial(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function SetCustomImportUnusedMaterial

// Begin Class UInterchangeSourceNode Function SetCustomSourceFrameRateDenominator
struct Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics
{
	struct InterchangeSourceNode_eventSetCustomSourceFrameRateDenominator_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Set the source frame rate denominator. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Set the source frame rate denominator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventSetCustomSourceFrameRateDenominator_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventSetCustomSourceFrameRateDenominator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventSetCustomSourceFrameRateDenominator_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "SetCustomSourceFrameRateDenominator", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::InterchangeSourceNode_eventSetCustomSourceFrameRateDenominator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::InterchangeSourceNode_eventSetCustomSourceFrameRateDenominator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execSetCustomSourceFrameRateDenominator)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSourceFrameRateDenominator(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function SetCustomSourceFrameRateDenominator

// Begin Class UInterchangeSourceNode Function SetCustomSourceFrameRateNumerator
struct Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics
{
	struct InterchangeSourceNode_eventSetCustomSourceFrameRateNumerator_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Set the source frame rate numerator. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Set the source frame rate numerator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventSetCustomSourceFrameRateNumerator_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventSetCustomSourceFrameRateNumerator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventSetCustomSourceFrameRateNumerator_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "SetCustomSourceFrameRateNumerator", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::InterchangeSourceNode_eventSetCustomSourceFrameRateNumerator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::InterchangeSourceNode_eventSetCustomSourceFrameRateNumerator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execSetCustomSourceFrameRateNumerator)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSourceFrameRateNumerator(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function SetCustomSourceFrameRateNumerator

// Begin Class UInterchangeSourceNode Function SetCustomSourceTimelineEnd
struct Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics
{
	struct InterchangeSourceNode_eventSetCustomSourceTimelineEnd_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Set the end of the source timeline. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Set the end of the source timeline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventSetCustomSourceTimelineEnd_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventSetCustomSourceTimelineEnd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventSetCustomSourceTimelineEnd_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "SetCustomSourceTimelineEnd", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::InterchangeSourceNode_eventSetCustomSourceTimelineEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::InterchangeSourceNode_eventSetCustomSourceTimelineEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execSetCustomSourceTimelineEnd)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSourceTimelineEnd(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function SetCustomSourceTimelineEnd

// Begin Class UInterchangeSourceNode Function SetCustomSourceTimelineStart
struct Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics
{
	struct InterchangeSourceNode_eventSetCustomSourceTimelineStart_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Source" },
		{ "Comment", "/** Set the start of the source timeline. */" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "Set the start of the source timeline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeSourceNode_eventSetCustomSourceTimelineStart_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeSourceNode_eventSetCustomSourceTimelineStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeSourceNode_eventSetCustomSourceTimelineStart_Parms), &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSourceNode, nullptr, "SetCustomSourceTimelineStart", nullptr, nullptr, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::InterchangeSourceNode_eventSetCustomSourceTimelineStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::InterchangeSourceNode_eventSetCustomSourceTimelineStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeSourceNode::execSetCustomSourceTimelineStart)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSourceTimelineStart(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeSourceNode Function SetCustomSourceTimelineStart

// Begin Class UInterchangeSourceNode
void UInterchangeSourceNode::StaticRegisterNativesUInterchangeSourceNode()
{
	UClass* Class = UInterchangeSourceNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomAnimatedTimeEnd", &UInterchangeSourceNode::execGetCustomAnimatedTimeEnd },
		{ "GetCustomAnimatedTimeStart", &UInterchangeSourceNode::execGetCustomAnimatedTimeStart },
		{ "GetCustomImportUnusedMaterial", &UInterchangeSourceNode::execGetCustomImportUnusedMaterial },
		{ "GetCustomSourceFrameRateDenominator", &UInterchangeSourceNode::execGetCustomSourceFrameRateDenominator },
		{ "GetCustomSourceFrameRateNumerator", &UInterchangeSourceNode::execGetCustomSourceFrameRateNumerator },
		{ "GetCustomSourceTimelineEnd", &UInterchangeSourceNode::execGetCustomSourceTimelineEnd },
		{ "GetCustomSourceTimelineStart", &UInterchangeSourceNode::execGetCustomSourceTimelineStart },
		{ "InitializeSourceNode", &UInterchangeSourceNode::execInitializeSourceNode },
		{ "SetCustomAnimatedTimeEnd", &UInterchangeSourceNode::execSetCustomAnimatedTimeEnd },
		{ "SetCustomAnimatedTimeStart", &UInterchangeSourceNode::execSetCustomAnimatedTimeStart },
		{ "SetCustomImportUnusedMaterial", &UInterchangeSourceNode::execSetCustomImportUnusedMaterial },
		{ "SetCustomSourceFrameRateDenominator", &UInterchangeSourceNode::execSetCustomSourceFrameRateDenominator },
		{ "SetCustomSourceFrameRateNumerator", &UInterchangeSourceNode::execSetCustomSourceFrameRateNumerator },
		{ "SetCustomSourceTimelineEnd", &UInterchangeSourceNode::execSetCustomSourceTimelineEnd },
		{ "SetCustomSourceTimelineStart", &UInterchangeSourceNode::execSetCustomSourceTimelineStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSourceNode);
UClass* Z_Construct_UClass_UInterchangeSourceNode_NoRegister()
{
	return UInterchangeSourceNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeSourceNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class allows a translator to add general source data that describes the whole source. Pipelines can use this information.\n */" },
		{ "IncludePath", "Nodes/InterchangeSourceNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/InterchangeSourceNode.h" },
		{ "ToolTip", "This class allows a translator to add general source data that describes the whole source. Pipelines can use this information." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeEnd, "GetCustomAnimatedTimeEnd" }, // 873004144
		{ &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomAnimatedTimeStart, "GetCustomAnimatedTimeStart" }, // 2136061349
		{ &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomImportUnusedMaterial, "GetCustomImportUnusedMaterial" }, // 3113633813
		{ &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateDenominator, "GetCustomSourceFrameRateDenominator" }, // 1530386709
		{ &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceFrameRateNumerator, "GetCustomSourceFrameRateNumerator" }, // 1690158954
		{ &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineEnd, "GetCustomSourceTimelineEnd" }, // 613480705
		{ &Z_Construct_UFunction_UInterchangeSourceNode_GetCustomSourceTimelineStart, "GetCustomSourceTimelineStart" }, // 1158630782
		{ &Z_Construct_UFunction_UInterchangeSourceNode_InitializeSourceNode, "InitializeSourceNode" }, // 4182429567
		{ &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeEnd, "SetCustomAnimatedTimeEnd" }, // 2180525357
		{ &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomAnimatedTimeStart, "SetCustomAnimatedTimeStart" }, // 1260355632
		{ &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomImportUnusedMaterial, "SetCustomImportUnusedMaterial" }, // 412779691
		{ &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateDenominator, "SetCustomSourceFrameRateDenominator" }, // 3523327929
		{ &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceFrameRateNumerator, "SetCustomSourceFrameRateNumerator" }, // 1840451587
		{ &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineEnd, "SetCustomSourceTimelineEnd" }, // 2383013692
		{ &Z_Construct_UFunction_UInterchangeSourceNode_SetCustomSourceTimelineStart, "SetCustomSourceTimelineStart" }, // 2092340729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSourceNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeSourceNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSourceNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSourceNode_Statics::ClassParams = {
	&UInterchangeSourceNode::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSourceNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeSourceNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeSourceNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeSourceNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSourceNode.OuterSingleton, Z_Construct_UClass_UInterchangeSourceNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeSourceNode.OuterSingleton;
}
template<> INTERCHANGECORE_API UClass* StaticClass<UInterchangeSourceNode>()
{
	return UInterchangeSourceNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSourceNode);
UInterchangeSourceNode::~UInterchangeSourceNode() {}
// End Class UInterchangeSourceNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSourceNode, UInterchangeSourceNode::StaticClass, TEXT("UInterchangeSourceNode"), &Z_Registration_Info_UClass_UInterchangeSourceNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSourceNode), 799239005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_270843313(TEXT("/Script/InterchangeCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeSourceNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
