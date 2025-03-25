// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeAnimSequenceFactoryNode.h"
#include "Nodes/Public/InterchangeAnimationTrackSetNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimSequenceFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister();
INTERCHANGENODES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeCurveName
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveName_Parms
	{
		int32 Index;
		FString OutAttributeCurveName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the animated attribute curve name at the specified index. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the animated attribute curve name at the specified index." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutAttributeCurveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveName_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_OutAttributeCurveName = { "OutAttributeCurveName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveName_Parms, OutAttributeCurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_OutAttributeCurveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeCurveName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAttributeCurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAnimatedAttributeCurveName(Z_Param_Index,Z_Param_Out_OutAttributeCurveName);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeCurveName

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeCurveNames
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNames_Parms
	{
		TArray<FString> OutAttributeCurveNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get all animated attribute curve names. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get all animated attribute curve names." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutAttributeCurveNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttributeCurveNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::NewProp_OutAttributeCurveNames_Inner = { "OutAttributeCurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::NewProp_OutAttributeCurveNames = { "OutAttributeCurveNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNames_Parms, OutAttributeCurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::NewProp_OutAttributeCurveNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::NewProp_OutAttributeCurveNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeCurveNames", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNames)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutAttributeCurveNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAnimatedAttributeCurveNames(Z_Param_Out_OutAttributeCurveNames);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeCurveNames

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeCurveNamesCount
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNamesCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Return the number of animated attribute curve names this anim sequence drives. Curves are FRichCurve of type float. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Return the number of animated attribute curve names this anim sequence drives. Curves are FRichCurve of type float." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNamesCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeCurveNamesCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNamesCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNamesCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNamesCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAnimatedAttributeCurveNamesCount();
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeCurveNamesCount

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeStepCurveName
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveName_Parms
	{
		int32 Index;
		FString OutAttributeStepCurveName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the animated attribute step curve name at the specified index. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the animated attribute step curve name at the specified index." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutAttributeStepCurveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveName_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_OutAttributeStepCurveName = { "OutAttributeStepCurveName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveName_Parms, OutAttributeStepCurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_OutAttributeStepCurveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeStepCurveName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAttributeStepCurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAnimatedAttributeStepCurveName(Z_Param_Index,Z_Param_Out_OutAttributeStepCurveName);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeStepCurveName

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeStepCurveNames
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNames_Parms
	{
		TArray<FString> OutAttributeStepCurveNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get all animated attribute step curve names. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get all animated attribute step curve names." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutAttributeStepCurveNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttributeStepCurveNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::NewProp_OutAttributeStepCurveNames_Inner = { "OutAttributeStepCurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::NewProp_OutAttributeStepCurveNames = { "OutAttributeStepCurveNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNames_Parms, OutAttributeStepCurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::NewProp_OutAttributeStepCurveNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::NewProp_OutAttributeStepCurveNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeStepCurveNames", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNames)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutAttributeStepCurveNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAnimatedAttributeStepCurveNames(Z_Param_Out_OutAttributeStepCurveNames);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeStepCurveNames

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeStepCurveNamesCount
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNamesCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Return the number of animated attribute step curve names this anim sequence drives. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Return the number of animated attribute step curve names this anim sequence drives." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNamesCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeStepCurveNamesCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNamesCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNamesCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNamesCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAnimatedAttributeStepCurveNamesCount();
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedAttributeStepCurveNamesCount

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedMaterialCurveSuffixe
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixe_Parms
	{
		int32 Index;
		FString OutMaterialCurveSuffixe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the animated material curve suffix with the specified index. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the animated material curve suffix with the specified index." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialCurveSuffixe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixe_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_OutMaterialCurveSuffixe = { "OutMaterialCurveSuffixe", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixe_Parms, OutMaterialCurveSuffixe), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_OutMaterialCurveSuffixe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedMaterialCurveSuffixe", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixe)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMaterialCurveSuffixe);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAnimatedMaterialCurveSuffixe(Z_Param_Index,Z_Param_Out_OutMaterialCurveSuffixe);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedMaterialCurveSuffixe

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedMaterialCurveSuffixes
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixes_Parms
	{
		TArray<FString> OutMaterialCurveSuffixes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get all animated material curve suffixes. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get all animated material curve suffixes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialCurveSuffixes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMaterialCurveSuffixes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::NewProp_OutMaterialCurveSuffixes_Inner = { "OutMaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::NewProp_OutMaterialCurveSuffixes = { "OutMaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixes_Parms, OutMaterialCurveSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::NewProp_OutMaterialCurveSuffixes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::NewProp_OutMaterialCurveSuffixes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedMaterialCurveSuffixes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixes)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutMaterialCurveSuffixes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAnimatedMaterialCurveSuffixes(Z_Param_Out_OutMaterialCurveSuffixes);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedMaterialCurveSuffixes

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedMaterialCurveSuffixesCount
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixesCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Return the number of animated material curve suffixes this anim sequence drives. Curves are FRichCurve of type float. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Return the number of animated material curve suffixes this anim sequence drives. Curves are FRichCurve of type float." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixesCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedMaterialCurveSuffixesCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixesCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixesCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixesCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAnimatedMaterialCurveSuffixesCount();
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetAnimatedMaterialCurveSuffixesCount

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomAddCurveMetadataToSkeleton
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomAddCurveMetadataToSkeleton_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute AddCurveMetadataToSkeleton. Return false if the attribute is not set.\n\x09 * \n\x09 * Note - If this setting is disabled, curve metadata will be added to skeletal meshes for morph targets, but no metadata entry will be created for general curves.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute AddCurveMetadataToSkeleton. Return false if the attribute is not set.\n\nNote - If this setting is disabled, curve metadata will be added to skeletal meshes for morph targets, but no metadata entry will be created for general curves." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomAddCurveMetadataToSkeleton_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomAddCurveMetadataToSkeleton_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomAddCurveMetadataToSkeleton_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomAddCurveMetadataToSkeleton_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomAddCurveMetadataToSkeleton", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomAddCurveMetadataToSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomAddCurveMetadataToSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomAddCurveMetadataToSkeleton)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAddCurveMetadataToSkeleton(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomAddCurveMetadataToSkeleton

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomDeleteExistingCustomAttributeCurves
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute DeleteExistingCustomAttributeCurves. Return false if the attribute is not set.\n\x09 * \n\x09 * Note - If true, all previous custom attribute curves are deleted if you reimport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute DeleteExistingCustomAttributeCurves. Return false if the attribute is not set.\n\nNote - If true, all previous custom attribute curves are deleted if you reimport." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomDeleteExistingCustomAttributeCurves", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingCustomAttributeCurves)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDeleteExistingCustomAttributeCurves(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomDeleteExistingCustomAttributeCurves

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomDeleteExistingMorphTargetCurves
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute DeleteExistingMorphTargetCurves. Return false if the attribute is not set.\n\x09 * \n\x09 * Note: If true, all previous morph target curves are deleted if you reimport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute DeleteExistingMorphTargetCurves. Return false if the attribute is not set.\n\nNote: If true, all previous morph target curves are deleted if you reimport." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomDeleteExistingMorphTargetCurves", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingMorphTargetCurves)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDeleteExistingMorphTargetCurves(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomDeleteExistingMorphTargetCurves

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomDeleteExistingNonCurveCustomAttributes
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute DeleteExistingNonCurveCustomAttributes. Return false if the attribute is not set.\n\x09 * \n\x09 * Note - If true, all previous non-curve custom attributes are deleted if you reimport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute DeleteExistingNonCurveCustomAttributes. Return false if the attribute is not set.\n\nNote - If true, all previous non-curve custom attributes are deleted if you reimport." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomDeleteExistingNonCurveCustomAttributes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingNonCurveCustomAttributes)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDeleteExistingNonCurveCustomAttributes(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomDeleteExistingNonCurveCustomAttributes

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomDoNotImportCurveWithZero
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute DoNotImportCurveWithZero. Return false if the attribute is not set.\n\x09 * \n\x09 * Note - If this attribute is enabled, only curves that have a value other than zero will be imported. This is to avoid adding extra curves to evaluate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute DoNotImportCurveWithZero. Return false if the attribute is not set.\n\nNote - If this attribute is enabled, only curves that have a value other than zero will be imported. This is to avoid adding extra curves to evaluate." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomDoNotImportCurveWithZero", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomDoNotImportCurveWithZero)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomDoNotImportCurveWithZero(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomDoNotImportCurveWithZero

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportAttributeCurves
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09  * Get the import attribute curves state. If true, all user custom attributes on nodes are imported.\n\x09  * \n\x09  * Return false if the attribute is not set.\n\x09  */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import attribute curves state. If true, all user custom attributes on nodes are imported.\n\nReturn false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportAttributeCurves", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportAttributeCurves)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomImportAttributeCurves(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportAttributeCurves

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportBoneTracks
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the import bone tracks state. If the attribute is true, bone tracks are imported. If the attribute \n\x09 * is false, bone tracks are not imported.\n\x09 * \n\x09 * Return false if the attribute is not set. Return true if the attribute exists and can be queried.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import bone tracks state. If the attribute is true, bone tracks are imported. If the attribute\nis false, bone tracks are not imported.\n\nReturn false if the attribute is not set. Return true if the attribute exists and can be queried." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportBoneTracks", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracks)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomImportBoneTracks(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportBoneTracks

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportBoneTracksRangeStart
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the import bone tracks start time in seconds. Return false if the attribute is not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import bone tracks start time in seconds. Return false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportBoneTracksRangeStart", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStart)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomImportBoneTracksRangeStart(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportBoneTracksRangeStart

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportBoneTracksRangeStop
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the import bone tracks end time in seconds. Return false if the attribute is not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import bone tracks end time in seconds. Return false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportBoneTracksRangeStop", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStop)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomImportBoneTracksRangeStop(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportBoneTracksRangeStop

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportBoneTracksSampleRate
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the import bone tracks sample rate. Return false if the attribute is not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import bone tracks sample rate. Return false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportBoneTracksSampleRate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksSampleRate)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomImportBoneTracksSampleRate(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomImportBoneTracksSampleRate

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomMaterialDriveParameterOnCustomAttribute
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute MaterialDriveParameterOnCustomAttribute. Return false if the attribute is not set.\n\x09 *\n\x09 * Note: If true, sets Material Curve Type for all custom attributes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute MaterialDriveParameterOnCustomAttribute. Return false if the attribute is not set.\n\nNote: If true, sets Material Curve Type for all custom attributes." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomMaterialDriveParameterOnCustomAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomMaterialDriveParameterOnCustomAttribute)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomMaterialDriveParameterOnCustomAttribute(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomMaterialDriveParameterOnCustomAttribute

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomRemoveCurveRedundantKeys
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute RemoveCurveRedundantKeys. Return false if the attribute is not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute RemoveCurveRedundantKeys. Return false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomRemoveCurveRedundantKeys", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomRemoveCurveRedundantKeys)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRemoveCurveRedundantKeys(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomRemoveCurveRedundantKeys

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomSkeletonFactoryNodeUid
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the unique ID of the skeleton factory node. Return false if the attribute is not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the unique ID of the skeleton factory node. Return false if the attribute is not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomSkeletonFactoryNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonFactoryNodeUid)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletonFactoryNodeUid(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomSkeletonFactoryNodeUid

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetCustomSkeletonSoftObjectPath
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms
	{
		FSoftObjectPath AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Query the optional existing USkeleton this animation must use. If this attribute is set and the skeleton is valid, \n\x09 * the AnimSequence factory uses this skeleton instead of the one imported from GetCustomSkeletonFactoryNodeUid.\n\x09 * Pipelines set this attribute when the user wants to specify an existing skeleton.\n\x09 * Return false if the attribute was not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Query the optional existing USkeleton this animation must use. If this attribute is set and the skeleton is valid,\nthe AnimSequence factory uses this skeleton instead of the one imported from GetCustomSkeletonFactoryNodeUid.\nPipelines set this attribute when the user wants to specify an existing skeleton.\nReturn false if the attribute was not set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomSkeletonSoftObjectPath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonSoftObjectPath)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletonSoftObjectPath(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetCustomSkeletonSoftObjectPath

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetMorphTargetNodeAnimationPayloadKeys
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms
	{
		TMap<FString,FInterchangeAnimationPayLoadKey> OutMorphTargetNodeAnimationPayloads;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMorphTargetNodeAnimationPayloads_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutMorphTargetNodeAnimationPayloads_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutMorphTargetNodeAnimationPayloads;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads_ValueProp = { "OutMorphTargetNodeAnimationPayloads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey, METADATA_PARAMS(0, nullptr) }; // 3507421743
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads_Key_KeyProp = { "OutMorphTargetNodeAnimationPayloads_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads = { "OutMorphTargetNodeAnimationPayloads", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms, OutMorphTargetNodeAnimationPayloads), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3507421743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetMorphTargetNodeAnimationPayloadKeys", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::InterchangeAnimSequenceFactoryNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::InterchangeAnimSequenceFactoryNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetMorphTargetNodeAnimationPayloadKeys)
{
	P_GET_TMAP_REF(FString,FInterchangeAnimationPayLoadKey,Z_Param_Out_OutMorphTargetNodeAnimationPayloads);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetMorphTargetNodeAnimationPayloadKeys(Z_Param_Out_OutMorphTargetNodeAnimationPayloads);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetMorphTargetNodeAnimationPayloadKeys

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the class this node creates. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the class this node creates." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::InterchangeAnimSequenceFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::InterchangeAnimSequenceFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetObjectClass

// Begin Class UInterchangeAnimSequenceFactoryNode Function GetSceneNodeAnimationPayloadKeys
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventGetSceneNodeAnimationPayloadKeys_Parms
	{
		TMap<FString,FInterchangeAnimationPayLoadKey> OutSceneNodeAnimationPayloadKeys;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSceneNodeAnimationPayloadKeys_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutSceneNodeAnimationPayloadKeys_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutSceneNodeAnimationPayloadKeys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeys_ValueProp = { "OutSceneNodeAnimationPayloadKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey, METADATA_PARAMS(0, nullptr) }; // 3507421743
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeys_Key_KeyProp = { "OutSceneNodeAnimationPayloadKeys_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeys = { "OutSceneNodeAnimationPayloadKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetSceneNodeAnimationPayloadKeys_Parms, OutSceneNodeAnimationPayloadKeys), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3507421743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeys_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeys_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloadKeys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetSceneNodeAnimationPayloadKeys", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::InterchangeAnimSequenceFactoryNode_eventGetSceneNodeAnimationPayloadKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::InterchangeAnimSequenceFactoryNode_eventGetSceneNodeAnimationPayloadKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetSceneNodeAnimationPayloadKeys)
{
	P_GET_TMAP_REF(FString,FInterchangeAnimationPayLoadKey,Z_Param_Out_OutSceneNodeAnimationPayloadKeys);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSceneNodeAnimationPayloadKeys(Z_Param_Out_OutSceneNodeAnimationPayloadKeys);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function GetSceneNodeAnimationPayloadKeys

// Begin Class UInterchangeAnimSequenceFactoryNode Function InitializeAnimSequenceNode
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventInitializeAnimSequenceNode_Parms
	{
		FString UniqueID;
		FString DisplayLabel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Initialize node data.\n\x09 * @param UniqueID - The unique ID for this node.\n\x09 * @param DisplayLabel - The name of the node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Initialize node data.\n@param UniqueID - The unique ID for this node.\n@param DisplayLabel - The name of the node." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventInitializeAnimSequenceNode_Parms, UniqueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueID_MetaData), NewProp_UniqueID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventInitializeAnimSequenceNode_Parms, DisplayLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayLabel_MetaData), NewProp_DisplayLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_UniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_DisplayLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "InitializeAnimSequenceNode", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::InterchangeAnimSequenceFactoryNode_eventInitializeAnimSequenceNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::InterchangeAnimSequenceFactoryNode_eventInitializeAnimSequenceNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execInitializeAnimSequenceNode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
	P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAnimSequenceNode(Z_Param_UniqueID,Z_Param_DisplayLabel);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function InitializeAnimSequenceNode

// Begin Class UInterchangeAnimSequenceFactoryNode Function RemoveAnimatedAttributeCurveName
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms
	{
		FString AttributeCurveName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Remove the specified animated attribute curve name. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Remove the specified animated attribute curve name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeCurveName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName = { "AttributeCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms, AttributeCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeCurveName_MetaData), NewProp_AttributeCurveName_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "RemoveAnimatedAttributeCurveName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeCurveName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeCurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAnimatedAttributeCurveName(Z_Param_AttributeCurveName);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function RemoveAnimatedAttributeCurveName

// Begin Class UInterchangeAnimSequenceFactoryNode Function RemoveAnimatedAttributeStepCurveName
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms
	{
		FString AttributeStepCurveName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Remove the specified animated attribute step curve name. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Remove the specified animated attribute step curve name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeStepCurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeStepCurveName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName = { "AttributeStepCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms, AttributeStepCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeStepCurveName_MetaData), NewProp_AttributeStepCurveName_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "RemoveAnimatedAttributeStepCurveName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeStepCurveName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeStepCurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAnimatedAttributeStepCurveName(Z_Param_AttributeStepCurveName);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function RemoveAnimatedAttributeStepCurveName

// Begin Class UInterchangeAnimSequenceFactoryNode Function RemoveAnimatedMaterialCurveSuffixe
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms
	{
		FString MaterialCurveSuffixe;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Remove the specified animated material curve suffix. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Remove the specified animated material curve suffix." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCurveSuffixe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialCurveSuffixe;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe = { "MaterialCurveSuffixe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms, MaterialCurveSuffixe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCurveSuffixe_MetaData), NewProp_MaterialCurveSuffixe_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "RemoveAnimatedMaterialCurveSuffixe", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedMaterialCurveSuffixe)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MaterialCurveSuffixe);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAnimatedMaterialCurveSuffixe(Z_Param_MaterialCurveSuffixe);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function RemoveAnimatedMaterialCurveSuffixe

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetAnimatedAttributeCurveName
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms
	{
		FString AttributeCurveName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Add an animated attribute curve name. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Add an animated attribute curve name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeCurveName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName = { "AttributeCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms, AttributeCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeCurveName_MetaData), NewProp_AttributeCurveName_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimatedAttributeCurveName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeCurveName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeCurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAnimatedAttributeCurveName(Z_Param_AttributeCurveName);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetAnimatedAttributeCurveName

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetAnimatedAttributeStepCurveName
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms
	{
		FString AttributeStepCurveName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Add an animated attribute step curve name. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Add an animated attribute step curve name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeStepCurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeStepCurveName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName = { "AttributeStepCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms, AttributeStepCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeStepCurveName_MetaData), NewProp_AttributeStepCurveName_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimatedAttributeStepCurveName", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeStepCurveName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeStepCurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAnimatedAttributeStepCurveName(Z_Param_AttributeStepCurveName);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetAnimatedAttributeStepCurveName

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetAnimatedMaterialCurveSuffixe
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms
	{
		FString MaterialCurveSuffixe;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Add an animated material curve suffix. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Add an animated material curve suffix." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCurveSuffixe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialCurveSuffixe;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe = { "MaterialCurveSuffixe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms, MaterialCurveSuffixe), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialCurveSuffixe_MetaData), NewProp_MaterialCurveSuffixe_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimatedMaterialCurveSuffixe", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimatedMaterialCurveSuffixe)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MaterialCurveSuffixe);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAnimatedMaterialCurveSuffixe(Z_Param_MaterialCurveSuffixe);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetAnimatedMaterialCurveSuffixe

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetAnimationPayloadKeysForMorphTargetNodeUids
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForMorphTargetNodeUids_Parms
	{
		TMap<FString,FString> MorphTargetAnimationPayloadKeyUids;
		TMap<FString,uint8> MorphTargetAnimationPayloadKeyTypes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetAnimationPayloadKeyUids_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetAnimationPayloadKeyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetAnimationPayloadKeyUids_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetAnimationPayloadKeyUids_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MorphTargetAnimationPayloadKeyUids;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MorphTargetAnimationPayloadKeyTypes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetAnimationPayloadKeyTypes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MorphTargetAnimationPayloadKeyTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyUids_ValueProp = { "MorphTargetAnimationPayloadKeyUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyUids_Key_KeyProp = { "MorphTargetAnimationPayloadKeyUids_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyUids = { "MorphTargetAnimationPayloadKeyUids", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForMorphTargetNodeUids_Parms, MorphTargetAnimationPayloadKeyUids), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetAnimationPayloadKeyUids_MetaData), NewProp_MorphTargetAnimationPayloadKeyUids_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyTypes_ValueProp = { "MorphTargetAnimationPayloadKeyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyTypes_Key_KeyProp = { "MorphTargetAnimationPayloadKeyTypes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyTypes = { "MorphTargetAnimationPayloadKeyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForMorphTargetNodeUids_Parms, MorphTargetAnimationPayloadKeyTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetAnimationPayloadKeyTypes_MetaData), NewProp_MorphTargetAnimationPayloadKeyTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyUids_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyUids_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyUids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyTypes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyTypes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::NewProp_MorphTargetAnimationPayloadKeyTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimationPayloadKeysForMorphTargetNodeUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForMorphTargetNodeUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForMorphTargetNodeUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeysForMorphTargetNodeUids)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_MorphTargetAnimationPayloadKeyUids);
	P_GET_TMAP_REF(FString,uint8,Z_Param_Out_MorphTargetAnimationPayloadKeyTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimationPayloadKeysForMorphTargetNodeUids(Z_Param_Out_MorphTargetAnimationPayloadKeyUids,Z_Param_Out_MorphTargetAnimationPayloadKeyTypes);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetAnimationPayloadKeysForMorphTargetNodeUids

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetAnimationPayloadKeysForSceneNodeUids
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForSceneNodeUids_Parms
	{
		TMap<FString,FString> SceneNodeAnimationPayloadKeyUids;
		TMap<FString,uint8> SceneNodeAnimationPayloadKeyTypes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodeAnimationPayloadKeyUids_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodeAnimationPayloadKeyTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SceneNodeAnimationPayloadKeyUids_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SceneNodeAnimationPayloadKeyUids_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SceneNodeAnimationPayloadKeyUids;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SceneNodeAnimationPayloadKeyTypes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SceneNodeAnimationPayloadKeyTypes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SceneNodeAnimationPayloadKeyTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyUids_ValueProp = { "SceneNodeAnimationPayloadKeyUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyUids_Key_KeyProp = { "SceneNodeAnimationPayloadKeyUids_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyUids = { "SceneNodeAnimationPayloadKeyUids", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForSceneNodeUids_Parms, SceneNodeAnimationPayloadKeyUids), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneNodeAnimationPayloadKeyUids_MetaData), NewProp_SceneNodeAnimationPayloadKeyUids_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyTypes_ValueProp = { "SceneNodeAnimationPayloadKeyTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyTypes_Key_KeyProp = { "SceneNodeAnimationPayloadKeyTypes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyTypes = { "SceneNodeAnimationPayloadKeyTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForSceneNodeUids_Parms, SceneNodeAnimationPayloadKeyTypes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneNodeAnimationPayloadKeyTypes_MetaData), NewProp_SceneNodeAnimationPayloadKeyTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyUids_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyUids_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyUids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyTypes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyTypes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::NewProp_SceneNodeAnimationPayloadKeyTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimationPayloadKeysForSceneNodeUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForSceneNodeUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeysForSceneNodeUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeysForSceneNodeUids)
{
	P_GET_TMAP_REF(FString,FString,Z_Param_Out_SceneNodeAnimationPayloadKeyUids);
	P_GET_TMAP_REF(FString,uint8,Z_Param_Out_SceneNodeAnimationPayloadKeyTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAnimationPayloadKeysForSceneNodeUids(Z_Param_Out_SceneNodeAnimationPayloadKeyUids,Z_Param_Out_SceneNodeAnimationPayloadKeyTypes);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetAnimationPayloadKeysForSceneNodeUids

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomAddCurveMetadataToSkeleton
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomAddCurveMetadataToSkeleton_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute AddCurveMetadataToSkeleton. Return false if the attribute could not be set.\n\x09 * \n\x09 * Note - If this setting is disabled, curve metadata will be added to skeletal meshes for morph targets, but no metadata entry will be created for general curves.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute AddCurveMetadataToSkeleton. Return false if the attribute could not be set.\n\nNote - If this setting is disabled, curve metadata will be added to skeletal meshes for morph targets, but no metadata entry will be created for general curves." },
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
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomAddCurveMetadataToSkeleton_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomAddCurveMetadataToSkeleton_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomAddCurveMetadataToSkeleton_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomAddCurveMetadataToSkeleton_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomAddCurveMetadataToSkeleton", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomAddCurveMetadataToSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomAddCurveMetadataToSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomAddCurveMetadataToSkeleton)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAddCurveMetadataToSkeleton(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomAddCurveMetadataToSkeleton

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomDeleteExistingCustomAttributeCurves
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute DeleteExistingCustomAttributeCurves. Return false if the attribute could not be set.\n\x09 * \n\x09 * Note - If true, all previous custom attribute curves are deleted if you reimport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute DeleteExistingCustomAttributeCurves. Return false if the attribute could not be set.\n\nNote - If true, all previous custom attribute curves are deleted if you reimport." },
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
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomDeleteExistingCustomAttributeCurves", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingCustomAttributeCurves)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDeleteExistingCustomAttributeCurves(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomDeleteExistingCustomAttributeCurves

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomDeleteExistingMorphTargetCurves
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute DeleteExistingMorphTargetCurves. Return false if the attribute could not be set.\n\x09 * \n\x09 * Note: If true, all previous morph target curves are deleted if you reimport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute DeleteExistingMorphTargetCurves. Return false if the attribute could not be set.\n\nNote: If true, all previous morph target curves are deleted if you reimport." },
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
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomDeleteExistingMorphTargetCurves", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingMorphTargetCurves)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDeleteExistingMorphTargetCurves(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomDeleteExistingMorphTargetCurves

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomDeleteExistingNonCurveCustomAttributes
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute DeleteExistingNonCurveCustomAttributes. Return false if the attribute could not be set.\n\x09 * \n\x09 * Note - If true, all previous non-curve custom attributes are deleted if you reimport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute DeleteExistingNonCurveCustomAttributes. Return false if the attribute could not be set.\n\nNote - If true, all previous non-curve custom attributes are deleted if you reimport." },
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
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomDeleteExistingNonCurveCustomAttributes", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingNonCurveCustomAttributes)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDeleteExistingNonCurveCustomAttributes(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomDeleteExistingNonCurveCustomAttributes

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomDoNotImportCurveWithZero
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute DoNotImportCurveWithZero. Return false if the attribute could not be set.\n\x09 * \n\x09 * Note - If this attribute is enabled, only curves that have a value other than zero will be imported. This is to avoid adding extra curves to evaluate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute DoNotImportCurveWithZero. Return false if the attribute could not be set.\n\nNote - If this attribute is enabled, only curves that have a value other than zero will be imported. This is to avoid adding extra curves to evaluate." },
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
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomDoNotImportCurveWithZero", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomDoNotImportCurveWithZero)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomDoNotImportCurveWithZero(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomDoNotImportCurveWithZero

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportAttributeCurves
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import attribute curves state. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import attribute curves state. Return false if the attribute could not be set." },
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
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportAttributeCurves", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportAttributeCurves)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomImportAttributeCurves(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportAttributeCurves

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportBoneTracks
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import bone tracks state. Pass true to import bone tracks, or false to not import bone tracks. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import bone tracks state. Pass true to import bone tracks, or false to not import bone tracks." },
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
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportBoneTracks", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracks)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomImportBoneTracks(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportBoneTracks

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportBoneTracksRangeStart
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import bone tracks start time in seconds. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import bone tracks start time in seconds. Return false if the attribute could not be set." },
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
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportBoneTracksRangeStart", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStart)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomImportBoneTracksRangeStart(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportBoneTracksRangeStart

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportBoneTracksRangeStop
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import bone tracks end time in seconds. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import bone tracks end time in seconds. Return false if the attribute could not be set." },
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
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportBoneTracksRangeStop", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStop)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomImportBoneTracksRangeStop(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportBoneTracksRangeStop

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportBoneTracksSampleRate
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms
	{
		double AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import bone tracks sample rate. Return false if the attribute could not be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import bone tracks sample rate. Return false if the attribute could not be set." },
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
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportBoneTracksSampleRate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksSampleRate)
{
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomImportBoneTracksSampleRate(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomImportBoneTracksSampleRate

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomMaterialDriveParameterOnCustomAttribute
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute MaterialDriveParameterOnCustomAttribute. Return false if the attribute could not be set.\n\x09 *\n\x09 * Note: If true, sets Material Curve Type for all custom attributes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute MaterialDriveParameterOnCustomAttribute. Return false if the attribute could not be set.\n\nNote: If true, sets Material Curve Type for all custom attributes." },
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
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomMaterialDriveParameterOnCustomAttribute", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomMaterialDriveParameterOnCustomAttribute)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomMaterialDriveParameterOnCustomAttribute(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomMaterialDriveParameterOnCustomAttribute

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomRemoveCurveRedundantKeys
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute RemoveCurveRedundantKeys. Return false if the attribute could not be set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute RemoveCurveRedundantKeys. Return false if the attribute could not be set." },
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
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomRemoveCurveRedundantKeys", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomRemoveCurveRedundantKeys)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRemoveCurveRedundantKeys(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomRemoveCurveRedundantKeys

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomSkeletonFactoryNodeUid
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics
{
	struct InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the unique ID of the skeleton factory node. Return false if the attribute cannot be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the unique ID of the skeleton factory node. Return false if the attribute cannot be set." },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomSkeletonFactoryNodeUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonFactoryNodeUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletonFactoryNodeUid(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomSkeletonFactoryNodeUid

// Begin Class UInterchangeAnimSequenceFactoryNode Function SetCustomSkeletonSoftObjectPath
struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms
	{
		FSoftObjectPath AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the optional existing USkeleton this animation must use. If this attribute is set and the skeleton is valid, \n\x09 * the AnimSequence factory uses this skeleton instead of the one imported from GetCustomSkeletonFactoryNodeUid.\n\x09 * Pipelines set this attribute when the user wants to specify an existing skeleton.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the optional existing USkeleton this animation must use. If this attribute is set and the skeleton is valid,\nthe AnimSequence factory uses this skeleton instead of the one imported from GetCustomSkeletonFactoryNodeUid.\nPipelines set this attribute when the user wants to specify an existing skeleton." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomSkeletonSoftObjectPath", nullptr, nullptr, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonSoftObjectPath)
{
	P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletonSoftObjectPath(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeAnimSequenceFactoryNode Function SetCustomSkeletonSoftObjectPath

// Begin Class UInterchangeAnimSequenceFactoryNode
void UInterchangeAnimSequenceFactoryNode::StaticRegisterNativesUInterchangeAnimSequenceFactoryNode()
{
	UClass* Class = UInterchangeAnimSequenceFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAnimatedAttributeCurveName", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveName },
		{ "GetAnimatedAttributeCurveNames", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNames },
		{ "GetAnimatedAttributeCurveNamesCount", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNamesCount },
		{ "GetAnimatedAttributeStepCurveName", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveName },
		{ "GetAnimatedAttributeStepCurveNames", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNames },
		{ "GetAnimatedAttributeStepCurveNamesCount", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNamesCount },
		{ "GetAnimatedMaterialCurveSuffixe", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixe },
		{ "GetAnimatedMaterialCurveSuffixes", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixes },
		{ "GetAnimatedMaterialCurveSuffixesCount", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixesCount },
		{ "GetCustomAddCurveMetadataToSkeleton", &UInterchangeAnimSequenceFactoryNode::execGetCustomAddCurveMetadataToSkeleton },
		{ "GetCustomDeleteExistingCustomAttributeCurves", &UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingCustomAttributeCurves },
		{ "GetCustomDeleteExistingMorphTargetCurves", &UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingMorphTargetCurves },
		{ "GetCustomDeleteExistingNonCurveCustomAttributes", &UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingNonCurveCustomAttributes },
		{ "GetCustomDoNotImportCurveWithZero", &UInterchangeAnimSequenceFactoryNode::execGetCustomDoNotImportCurveWithZero },
		{ "GetCustomImportAttributeCurves", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportAttributeCurves },
		{ "GetCustomImportBoneTracks", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracks },
		{ "GetCustomImportBoneTracksRangeStart", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStart },
		{ "GetCustomImportBoneTracksRangeStop", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStop },
		{ "GetCustomImportBoneTracksSampleRate", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksSampleRate },
		{ "GetCustomMaterialDriveParameterOnCustomAttribute", &UInterchangeAnimSequenceFactoryNode::execGetCustomMaterialDriveParameterOnCustomAttribute },
		{ "GetCustomRemoveCurveRedundantKeys", &UInterchangeAnimSequenceFactoryNode::execGetCustomRemoveCurveRedundantKeys },
		{ "GetCustomSkeletonFactoryNodeUid", &UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonFactoryNodeUid },
		{ "GetCustomSkeletonSoftObjectPath", &UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonSoftObjectPath },
		{ "GetMorphTargetNodeAnimationPayloadKeys", &UInterchangeAnimSequenceFactoryNode::execGetMorphTargetNodeAnimationPayloadKeys },
		{ "GetObjectClass", &UInterchangeAnimSequenceFactoryNode::execGetObjectClass },
		{ "GetSceneNodeAnimationPayloadKeys", &UInterchangeAnimSequenceFactoryNode::execGetSceneNodeAnimationPayloadKeys },
		{ "InitializeAnimSequenceNode", &UInterchangeAnimSequenceFactoryNode::execInitializeAnimSequenceNode },
		{ "RemoveAnimatedAttributeCurveName", &UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeCurveName },
		{ "RemoveAnimatedAttributeStepCurveName", &UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeStepCurveName },
		{ "RemoveAnimatedMaterialCurveSuffixe", &UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedMaterialCurveSuffixe },
		{ "SetAnimatedAttributeCurveName", &UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeCurveName },
		{ "SetAnimatedAttributeStepCurveName", &UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeStepCurveName },
		{ "SetAnimatedMaterialCurveSuffixe", &UInterchangeAnimSequenceFactoryNode::execSetAnimatedMaterialCurveSuffixe },
		{ "SetAnimationPayloadKeysForMorphTargetNodeUids", &UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeysForMorphTargetNodeUids },
		{ "SetAnimationPayloadKeysForSceneNodeUids", &UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeysForSceneNodeUids },
		{ "SetCustomAddCurveMetadataToSkeleton", &UInterchangeAnimSequenceFactoryNode::execSetCustomAddCurveMetadataToSkeleton },
		{ "SetCustomDeleteExistingCustomAttributeCurves", &UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingCustomAttributeCurves },
		{ "SetCustomDeleteExistingMorphTargetCurves", &UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingMorphTargetCurves },
		{ "SetCustomDeleteExistingNonCurveCustomAttributes", &UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingNonCurveCustomAttributes },
		{ "SetCustomDoNotImportCurveWithZero", &UInterchangeAnimSequenceFactoryNode::execSetCustomDoNotImportCurveWithZero },
		{ "SetCustomImportAttributeCurves", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportAttributeCurves },
		{ "SetCustomImportBoneTracks", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracks },
		{ "SetCustomImportBoneTracksRangeStart", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStart },
		{ "SetCustomImportBoneTracksRangeStop", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStop },
		{ "SetCustomImportBoneTracksSampleRate", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksSampleRate },
		{ "SetCustomMaterialDriveParameterOnCustomAttribute", &UInterchangeAnimSequenceFactoryNode::execSetCustomMaterialDriveParameterOnCustomAttribute },
		{ "SetCustomRemoveCurveRedundantKeys", &UInterchangeAnimSequenceFactoryNode::execSetCustomRemoveCurveRedundantKeys },
		{ "SetCustomSkeletonFactoryNodeUid", &UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonFactoryNodeUid },
		{ "SetCustomSkeletonSoftObjectPath", &UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonSoftObjectPath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimSequenceFactoryNode);
UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister()
{
	return UInterchangeAnimSequenceFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeAnimSequenceFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName, "GetAnimatedAttributeCurveName" }, // 4149174193
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames, "GetAnimatedAttributeCurveNames" }, // 3088354822
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount, "GetAnimatedAttributeCurveNamesCount" }, // 2569661180
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName, "GetAnimatedAttributeStepCurveName" }, // 1943126403
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames, "GetAnimatedAttributeStepCurveNames" }, // 2197138133
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount, "GetAnimatedAttributeStepCurveNamesCount" }, // 3564900755
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe, "GetAnimatedMaterialCurveSuffixe" }, // 2222771628
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes, "GetAnimatedMaterialCurveSuffixes" }, // 2271418680
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount, "GetAnimatedMaterialCurveSuffixesCount" }, // 2787833520
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomAddCurveMetadataToSkeleton, "GetCustomAddCurveMetadataToSkeleton" }, // 1448006848
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves, "GetCustomDeleteExistingCustomAttributeCurves" }, // 3263932263
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves, "GetCustomDeleteExistingMorphTargetCurves" }, // 2267047133
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes, "GetCustomDeleteExistingNonCurveCustomAttributes" }, // 3401811808
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero, "GetCustomDoNotImportCurveWithZero" }, // 2381533267
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves, "GetCustomImportAttributeCurves" }, // 249850087
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks, "GetCustomImportBoneTracks" }, // 1483447568
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart, "GetCustomImportBoneTracksRangeStart" }, // 3672643749
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop, "GetCustomImportBoneTracksRangeStop" }, // 3461106419
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate, "GetCustomImportBoneTracksSampleRate" }, // 139259938
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute, "GetCustomMaterialDriveParameterOnCustomAttribute" }, // 941266486
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys, "GetCustomRemoveCurveRedundantKeys" }, // 450573988
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid, "GetCustomSkeletonFactoryNodeUid" }, // 2649664194
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath, "GetCustomSkeletonSoftObjectPath" }, // 3269063392
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys, "GetMorphTargetNodeAnimationPayloadKeys" }, // 447390749
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass, "GetObjectClass" }, // 3270387936
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys, "GetSceneNodeAnimationPayloadKeys" }, // 1665500655
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode, "InitializeAnimSequenceNode" }, // 1590252327
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName, "RemoveAnimatedAttributeCurveName" }, // 1744304303
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName, "RemoveAnimatedAttributeStepCurveName" }, // 1372367759
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe, "RemoveAnimatedMaterialCurveSuffixe" }, // 1422680669
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName, "SetAnimatedAttributeCurveName" }, // 3652971335
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName, "SetAnimatedAttributeStepCurveName" }, // 3911143726
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe, "SetAnimatedMaterialCurveSuffixe" }, // 3018447953
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForMorphTargetNodeUids, "SetAnimationPayloadKeysForMorphTargetNodeUids" }, // 3415314567
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeysForSceneNodeUids, "SetAnimationPayloadKeysForSceneNodeUids" }, // 3861801071
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomAddCurveMetadataToSkeleton, "SetCustomAddCurveMetadataToSkeleton" }, // 539101867
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves, "SetCustomDeleteExistingCustomAttributeCurves" }, // 3993056024
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves, "SetCustomDeleteExistingMorphTargetCurves" }, // 1672380634
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes, "SetCustomDeleteExistingNonCurveCustomAttributes" }, // 2349808818
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero, "SetCustomDoNotImportCurveWithZero" }, // 2126091207
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves, "SetCustomImportAttributeCurves" }, // 1950967155
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks, "SetCustomImportBoneTracks" }, // 1530885607
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart, "SetCustomImportBoneTracksRangeStart" }, // 3813840154
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop, "SetCustomImportBoneTracksRangeStop" }, // 1735967604
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate, "SetCustomImportBoneTracksSampleRate" }, // 4232928967
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute, "SetCustomMaterialDriveParameterOnCustomAttribute" }, // 3915491468
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys, "SetCustomRemoveCurveRedundantKeys" }, // 1787316985
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid, "SetCustomSkeletonFactoryNodeUid" }, // 2636985394
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath, "SetCustomSkeletonSoftObjectPath" }, // 1982955281
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimSequenceFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::ClassParams = {
	&UInterchangeAnimSequenceFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeAnimSequenceFactoryNode>()
{
	return UInterchangeAnimSequenceFactoryNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimSequenceFactoryNode);
UInterchangeAnimSequenceFactoryNode::~UInterchangeAnimSequenceFactoryNode() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeAnimSequenceFactoryNode)
// End Class UInterchangeAnimSequenceFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, UInterchangeAnimSequenceFactoryNode::StaticClass, TEXT("UInterchangeAnimSequenceFactoryNode"), &Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimSequenceFactoryNode), 2896643435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_56868327(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
