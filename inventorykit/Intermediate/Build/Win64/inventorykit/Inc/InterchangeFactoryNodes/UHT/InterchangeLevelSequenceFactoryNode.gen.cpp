// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FactoryNodes/Public/InterchangeLevelSequenceFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeLevelSequenceFactoryNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode();
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References

// Begin Class UInterchangeLevelSequenceFactoryNode Function AddCustomAnimationTrackUid
struct Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics
{
	struct InterchangeLevelSequenceFactoryNode_eventAddCustomAnimationTrackUid_Parms
	{
		FString AnimationTrackUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelSequenceFactory" },
		{ "Comment", "/**\n\x09 * Add one track dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelSequenceFactoryNode.h" },
		{ "ToolTip", "Add one track dependency to this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationTrackUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid = { "AnimationTrackUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelSequenceFactoryNode_eventAddCustomAnimationTrackUid_Parms, AnimationTrackUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTrackUid_MetaData), NewProp_AnimationTrackUid_MetaData) };
void Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelSequenceFactoryNode_eventAddCustomAnimationTrackUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelSequenceFactoryNode_eventAddCustomAnimationTrackUid_Parms), &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode, nullptr, "AddCustomAnimationTrackUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::InterchangeLevelSequenceFactoryNode_eventAddCustomAnimationTrackUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::InterchangeLevelSequenceFactoryNode_eventAddCustomAnimationTrackUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelSequenceFactoryNode::execAddCustomAnimationTrackUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AnimationTrackUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddCustomAnimationTrackUid(Z_Param_AnimationTrackUid);
	P_NATIVE_END;
}
// End Class UInterchangeLevelSequenceFactoryNode Function AddCustomAnimationTrackUid

// Begin Class UInterchangeLevelSequenceFactoryNode Function GetCustomAnimationTrackUid
struct Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics
{
	struct InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUid_Parms
	{
		int32 Index;
		FString OutAnimationTrackUid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelSequenceFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve one track dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelSequenceFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve one track dependency for this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutAnimationTrackUid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUid_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_OutAnimationTrackUid = { "OutAnimationTrackUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUid_Parms, OutAnimationTrackUid), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_OutAnimationTrackUid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode, nullptr, "GetCustomAnimationTrackUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelSequenceFactoryNode::execGetCustomAnimationTrackUid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAnimationTrackUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomAnimationTrackUid(Z_Param_Index,Z_Param_Out_OutAnimationTrackUid);
	P_NATIVE_END;
}
// End Class UInterchangeLevelSequenceFactoryNode Function GetCustomAnimationTrackUid

// Begin Class UInterchangeLevelSequenceFactoryNode Function GetCustomAnimationTrackUidCount
struct Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics
{
	struct InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUidCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelSequenceFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of track dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelSequenceFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of track dependencies for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUidCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode, nullptr, "GetCustomAnimationTrackUidCount", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUidCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUidCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelSequenceFactoryNode::execGetCustomAnimationTrackUidCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCustomAnimationTrackUidCount();
	P_NATIVE_END;
}
// End Class UInterchangeLevelSequenceFactoryNode Function GetCustomAnimationTrackUidCount

// Begin Class UInterchangeLevelSequenceFactoryNode Function GetCustomAnimationTrackUids
struct Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics
{
	struct InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUids_Parms
	{
		TArray<FString> OutAnimationTrackUids;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelSequenceFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the track dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelSequenceFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve the track dependency for this object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutAnimationTrackUids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnimationTrackUids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids_Inner = { "OutAnimationTrackUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids = { "OutAnimationTrackUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUids_Parms, OutAnimationTrackUids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode, nullptr, "GetCustomAnimationTrackUids", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::InterchangeLevelSequenceFactoryNode_eventGetCustomAnimationTrackUids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelSequenceFactoryNode::execGetCustomAnimationTrackUids)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutAnimationTrackUids);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCustomAnimationTrackUids(Z_Param_Out_OutAnimationTrackUids);
	P_NATIVE_END;
}
// End Class UInterchangeLevelSequenceFactoryNode Function GetCustomAnimationTrackUids

// Begin Class UInterchangeLevelSequenceFactoryNode Function GetCustomFrameRate
struct Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics
{
	struct InterchangeLevelSequenceFactoryNode_eventGetCustomFrameRate_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelSequenceFactory" },
		{ "Comment", "/**\n\x09 * Get the frame rate for the animations in the level sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelSequenceFactoryNode.h" },
		{ "ToolTip", "Get the frame rate for the animations in the level sequence." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelSequenceFactoryNode_eventGetCustomFrameRate_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelSequenceFactoryNode_eventGetCustomFrameRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelSequenceFactoryNode_eventGetCustomFrameRate_Parms), &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode, nullptr, "GetCustomFrameRate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::InterchangeLevelSequenceFactoryNode_eventGetCustomFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::InterchangeLevelSequenceFactoryNode_eventGetCustomFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelSequenceFactoryNode::execGetCustomFrameRate)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomFrameRate(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelSequenceFactoryNode Function GetCustomFrameRate

// Begin Class UInterchangeLevelSequenceFactoryNode Function GetObjectClass
struct Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics
{
	struct InterchangeLevelSequenceFactoryNode_eventGetObjectClass_Parms
	{
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelSequenceFactory" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelSequenceFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelSequenceFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::InterchangeLevelSequenceFactoryNode_eventGetObjectClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::InterchangeLevelSequenceFactoryNode_eventGetObjectClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelSequenceFactoryNode::execGetObjectClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
	P_NATIVE_END;
}
// End Class UInterchangeLevelSequenceFactoryNode Function GetObjectClass

// Begin Class UInterchangeLevelSequenceFactoryNode Function RemoveCustomAnimationTrackUid
struct Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics
{
	struct InterchangeLevelSequenceFactoryNode_eventRemoveCustomAnimationTrackUid_Parms
	{
		FString AnimationTrackUid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelSequenceFactory" },
		{ "Comment", "/**\n\x09 * Remove one track dependency from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelSequenceFactoryNode.h" },
		{ "ToolTip", "Remove one track dependency from this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationTrackUid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid = { "AnimationTrackUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelSequenceFactoryNode_eventRemoveCustomAnimationTrackUid_Parms, AnimationTrackUid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationTrackUid_MetaData), NewProp_AnimationTrackUid_MetaData) };
void Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelSequenceFactoryNode_eventRemoveCustomAnimationTrackUid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelSequenceFactoryNode_eventRemoveCustomAnimationTrackUid_Parms), &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode, nullptr, "RemoveCustomAnimationTrackUid", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::InterchangeLevelSequenceFactoryNode_eventRemoveCustomAnimationTrackUid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::InterchangeLevelSequenceFactoryNode_eventRemoveCustomAnimationTrackUid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelSequenceFactoryNode::execRemoveCustomAnimationTrackUid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AnimationTrackUid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCustomAnimationTrackUid(Z_Param_AnimationTrackUid);
	P_NATIVE_END;
}
// End Class UInterchangeLevelSequenceFactoryNode Function RemoveCustomAnimationTrackUid

// Begin Class UInterchangeLevelSequenceFactoryNode Function SetCustomFrameRate
struct Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics
{
	struct InterchangeLevelSequenceFactoryNode_eventSetCustomFrameRate_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | LevelSequenceFactory" },
		{ "Comment", "/**\n\x09 * Set the frame rate for the animations in the level sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeLevelSequenceFactoryNode.h" },
		{ "ToolTip", "Set the frame rate for the animations in the level sequence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterchangeLevelSequenceFactoryNode_eventSetCustomFrameRate_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InterchangeLevelSequenceFactoryNode_eventSetCustomFrameRate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterchangeLevelSequenceFactoryNode_eventSetCustomFrameRate_Parms), &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode, nullptr, "SetCustomFrameRate", nullptr, nullptr, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::InterchangeLevelSequenceFactoryNode_eventSetCustomFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::InterchangeLevelSequenceFactoryNode_eventSetCustomFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterchangeLevelSequenceFactoryNode::execSetCustomFrameRate)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomFrameRate(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// End Class UInterchangeLevelSequenceFactoryNode Function SetCustomFrameRate

// Begin Class UInterchangeLevelSequenceFactoryNode
void UInterchangeLevelSequenceFactoryNode::StaticRegisterNativesUInterchangeLevelSequenceFactoryNode()
{
	UClass* Class = UInterchangeLevelSequenceFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCustomAnimationTrackUid", &UInterchangeLevelSequenceFactoryNode::execAddCustomAnimationTrackUid },
		{ "GetCustomAnimationTrackUid", &UInterchangeLevelSequenceFactoryNode::execGetCustomAnimationTrackUid },
		{ "GetCustomAnimationTrackUidCount", &UInterchangeLevelSequenceFactoryNode::execGetCustomAnimationTrackUidCount },
		{ "GetCustomAnimationTrackUids", &UInterchangeLevelSequenceFactoryNode::execGetCustomAnimationTrackUids },
		{ "GetCustomFrameRate", &UInterchangeLevelSequenceFactoryNode::execGetCustomFrameRate },
		{ "GetObjectClass", &UInterchangeLevelSequenceFactoryNode::execGetObjectClass },
		{ "RemoveCustomAnimationTrackUid", &UInterchangeLevelSequenceFactoryNode::execRemoveCustomAnimationTrackUid },
		{ "SetCustomFrameRate", &UInterchangeLevelSequenceFactoryNode::execSetCustomFrameRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeLevelSequenceFactoryNode);
UClass* Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_NoRegister()
{
	return UInterchangeLevelSequenceFactoryNode::StaticClass();
}
struct Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeLevelSequenceFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeLevelSequenceFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_AddCustomAnimationTrackUid, "AddCustomAnimationTrackUid" }, // 2646070287
		{ &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUid, "GetCustomAnimationTrackUid" }, // 1469962730
		{ &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUidCount, "GetCustomAnimationTrackUidCount" }, // 1251798854
		{ &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomAnimationTrackUids, "GetCustomAnimationTrackUids" }, // 1214423448
		{ &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetCustomFrameRate, "GetCustomFrameRate" }, // 2750840934
		{ &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_GetObjectClass, "GetObjectClass" }, // 2083653674
		{ &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_RemoveCustomAnimationTrackUid, "RemoveCustomAnimationTrackUid" }, // 1796899562
		{ &Z_Construct_UFunction_UInterchangeLevelSequenceFactoryNode_SetCustomFrameRate, "SetCustomFrameRate" }, // 2354979869
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeLevelSequenceFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics::ClassParams = {
	&UInterchangeLevelSequenceFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode()
{
	if (!Z_Registration_Info_UClass_UInterchangeLevelSequenceFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeLevelSequenceFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeLevelSequenceFactoryNode.OuterSingleton;
}
template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeLevelSequenceFactoryNode>()
{
	return UInterchangeLevelSequenceFactoryNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeLevelSequenceFactoryNode);
UInterchangeLevelSequenceFactoryNode::~UInterchangeLevelSequenceFactoryNode() {}
// End Class UInterchangeLevelSequenceFactoryNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode, UInterchangeLevelSequenceFactoryNode::StaticClass, TEXT("UInterchangeLevelSequenceFactoryNode"), &Z_Registration_Info_UClass_UInterchangeLevelSequenceFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeLevelSequenceFactoryNode), 210823892U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_2914394973(TEXT("/Script/InterchangeFactoryNodes"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
