// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerScripting/Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h"
#include "SequencerScripting/Public/SequencerScriptingRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerScriptingRangeExtensions() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_USequencerScriptingRangeExtensions();
SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_USequencerScriptingRangeExtensions_NoRegister();
SEQUENCERSCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerScriptingRange();
UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References

// Begin Class USequencerScriptingRangeExtensions Function GetEndFrame
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics
{
	struct SequencerScriptingRangeExtensions_eventGetEndFrame_Parms
	{
		FSequencerScriptingRange Range;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the ending frame for the specified range, if it has one. Defined as the first subsequent frame that is outside of the range.\n\x09 *\n\x09 * @param Range       The range to get the end from\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the ending frame for the specified range, if it has one. Defined as the first subsequent frame that is outside of the range.\n\n@param Range       The range to get the end from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventGetEndFrame_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 572197110
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventGetEndFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "GetEndFrame", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::SequencerScriptingRangeExtensions_eventGetEndFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::SequencerScriptingRangeExtensions_eventGetEndFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execGetEndFrame)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USequencerScriptingRangeExtensions::GetEndFrame(Z_Param_Out_Range);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function GetEndFrame

// Begin Class USequencerScriptingRangeExtensions Function GetEndSeconds
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics
{
	struct SequencerScriptingRangeExtensions_eventGetEndSeconds_Parms
	{
		FSequencerScriptingRange Range;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the ending time for the specified range in seconds, if it has one. Defined as the first time that is outside of the range.\n\x09 *\n\x09 * @param Range       The range to get the end from\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the ending time for the specified range in seconds, if it has one. Defined as the first time that is outside of the range.\n\n@param Range       The range to get the end from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventGetEndSeconds_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 572197110
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventGetEndSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "GetEndSeconds", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::SequencerScriptingRangeExtensions_eventGetEndSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::SequencerScriptingRangeExtensions_eventGetEndSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execGetEndSeconds)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USequencerScriptingRangeExtensions::GetEndSeconds(Z_Param_Out_Range);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function GetEndSeconds

// Begin Class USequencerScriptingRangeExtensions Function GetStartFrame
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics
{
	struct SequencerScriptingRangeExtensions_eventGetStartFrame_Parms
	{
		FSequencerScriptingRange Range;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the starting frame for the specified range, if it has one. Defined as the first valid frame that is inside the range.\n\x09 *\n\x09 * @param Range       The range to get the start from\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the starting frame for the specified range, if it has one. Defined as the first valid frame that is inside the range.\n\n@param Range       The range to get the start from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventGetStartFrame_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 572197110
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventGetStartFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "GetStartFrame", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::SequencerScriptingRangeExtensions_eventGetStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::SequencerScriptingRangeExtensions_eventGetStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execGetStartFrame)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USequencerScriptingRangeExtensions::GetStartFrame(Z_Param_Out_Range);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function GetStartFrame

// Begin Class USequencerScriptingRangeExtensions Function GetStartSeconds
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics
{
	struct SequencerScriptingRangeExtensions_eventGetStartSeconds_Parms
	{
		FSequencerScriptingRange Range;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Get the starting time for the specified range in seconds, if it has one. Defined as the first valid time that is inside the range.\n\x09 *\n\x09 * @param Range       The range to get the start from\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the starting time for the specified range in seconds, if it has one. Defined as the first valid time that is inside the range.\n\n@param Range       The range to get the start from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventGetStartSeconds_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 572197110
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventGetStartSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "GetStartSeconds", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::SequencerScriptingRangeExtensions_eventGetStartSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::SequencerScriptingRangeExtensions_eventGetStartSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execGetStartSeconds)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USequencerScriptingRangeExtensions::GetStartSeconds(Z_Param_Out_Range);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function GetStartSeconds

// Begin Class USequencerScriptingRangeExtensions Function HasEnd
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics
{
	struct SequencerScriptingRangeExtensions_eventHasEnd_Parms
	{
		FSequencerScriptingRange Range;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Check whether this range has an end\n\x09 *\n\x09 * @param Range       The range to check\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check whether this range has an end\n\n@param Range       The range to check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventHasEnd_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 572197110
void Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SequencerScriptingRangeExtensions_eventHasEnd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SequencerScriptingRangeExtensions_eventHasEnd_Parms), &Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "HasEnd", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::SequencerScriptingRangeExtensions_eventHasEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::SequencerScriptingRangeExtensions_eventHasEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execHasEnd)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USequencerScriptingRangeExtensions::HasEnd(Z_Param_Out_Range);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function HasEnd

// Begin Class USequencerScriptingRangeExtensions Function HasStart
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics
{
	struct SequencerScriptingRangeExtensions_eventHasStart_Parms
	{
		FSequencerScriptingRange Range;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Check whether this range has a start\n\x09 *\n\x09 * @param Range       The range to check\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Check whether this range has a start\n\n@param Range       The range to check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventHasStart_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) }; // 572197110
void Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SequencerScriptingRangeExtensions_eventHasStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SequencerScriptingRangeExtensions_eventHasStart_Parms), &Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "HasStart", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::SequencerScriptingRangeExtensions_eventHasStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::SequencerScriptingRangeExtensions_eventHasStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execHasStart)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USequencerScriptingRangeExtensions::HasStart(Z_Param_Out_Range);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function HasStart

// Begin Class USequencerScriptingRangeExtensions Function RemoveEnd
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics
{
	struct SequencerScriptingRangeExtensions_eventRemoveEnd_Parms
	{
		FSequencerScriptingRange Range;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Remove the end from this range, making it infinite\n\x09 *\n\x09 * @param Range       The range to remove the end from\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove the end from this range, making it infinite\n\n@param Range       The range to remove the end from" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventRemoveEnd_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "RemoveEnd", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::SequencerScriptingRangeExtensions_eventRemoveEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::SequencerScriptingRangeExtensions_eventRemoveEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execRemoveEnd)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	USequencerScriptingRangeExtensions::RemoveEnd(Z_Param_Out_Range);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function RemoveEnd

// Begin Class USequencerScriptingRangeExtensions Function RemoveStart
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics
{
	struct SequencerScriptingRangeExtensions_eventRemoveStart_Parms
	{
		FSequencerScriptingRange Range;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Remove the start from this range, making it infinite\n\x09 *\n\x09 * @param Range       The range to remove the start from\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Remove the start from this range, making it infinite\n\n@param Range       The range to remove the start from" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventRemoveStart_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "RemoveStart", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::SequencerScriptingRangeExtensions_eventRemoveStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::SequencerScriptingRangeExtensions_eventRemoveStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execRemoveStart)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_FINISH;
	P_NATIVE_BEGIN;
	USequencerScriptingRangeExtensions::RemoveStart(Z_Param_Out_Range);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function RemoveStart

// Begin Class USequencerScriptingRangeExtensions Function SetEndFrame
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics
{
	struct SequencerScriptingRangeExtensions_eventSetEndFrame_Parms
	{
		FSequencerScriptingRange Range;
		int32 End;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the ending frame for the specified range. Interpreted as the first subsequent frame that is outside of the range.\n\x09 *\n\x09 * @param Range       The range to set the end on\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the ending frame for the specified range. Interpreted as the first subsequent frame that is outside of the range.\n\n@param Range       The range to set the end on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FIntPropertyParams NewProp_End;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventSetEndFrame_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventSetEndFrame_Parms, End), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::NewProp_End,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "SetEndFrame", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::SequencerScriptingRangeExtensions_eventSetEndFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::SequencerScriptingRangeExtensions_eventSetEndFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execSetEndFrame)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_GET_PROPERTY(FIntProperty,Z_Param_End);
	P_FINISH;
	P_NATIVE_BEGIN;
	USequencerScriptingRangeExtensions::SetEndFrame(Z_Param_Out_Range,Z_Param_End);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function SetEndFrame

// Begin Class USequencerScriptingRangeExtensions Function SetEndSeconds
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics
{
	struct SequencerScriptingRangeExtensions_eventSetEndSeconds_Parms
	{
		FSequencerScriptingRange Range;
		float End;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the ending time for the specified range in seconds. Interpreted as the first time that is outside of the range.\n\x09 *\n\x09 * @param Range       The range to set the end on\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the ending time for the specified range in seconds. Interpreted as the first time that is outside of the range.\n\n@param Range       The range to set the end on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_End;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventSetEndSeconds_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventSetEndSeconds_Parms, End), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::NewProp_End,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "SetEndSeconds", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::SequencerScriptingRangeExtensions_eventSetEndSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::SequencerScriptingRangeExtensions_eventSetEndSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execSetEndSeconds)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_GET_PROPERTY(FFloatProperty,Z_Param_End);
	P_FINISH;
	P_NATIVE_BEGIN;
	USequencerScriptingRangeExtensions::SetEndSeconds(Z_Param_Out_Range,Z_Param_End);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function SetEndSeconds

// Begin Class USequencerScriptingRangeExtensions Function SetStartFrame
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics
{
	struct SequencerScriptingRangeExtensions_eventSetStartFrame_Parms
	{
		FSequencerScriptingRange Range;
		int32 Start;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the starting frame for the specified range. Interpreted as the first valid frame that is inside the range.\n\x09 *\n\x09 * @param Range       The range to set the start on\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the starting frame for the specified range. Interpreted as the first valid frame that is inside the range.\n\n@param Range       The range to set the start on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventSetStartFrame_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventSetStartFrame_Parms, Start), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "SetStartFrame", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::SequencerScriptingRangeExtensions_eventSetStartFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::SequencerScriptingRangeExtensions_eventSetStartFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execSetStartFrame)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_GET_PROPERTY(FIntProperty,Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	USequencerScriptingRangeExtensions::SetStartFrame(Z_Param_Out_Range,Z_Param_Start);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function SetStartFrame

// Begin Class USequencerScriptingRangeExtensions Function SetStartSeconds
struct Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics
{
	struct SequencerScriptingRangeExtensions_eventSetStartSeconds_Parms
	{
		FSequencerScriptingRange Range;
		float Start;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Sequence" },
		{ "Comment", "/**\n\x09 * Set the starting time for the specified range in seconds. Interpreted as the first valid time that is inside the range.\n\x09 *\n\x09 * @param Range       The range to set the start on\n\x09 */" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Set the starting time for the specified range in seconds. Interpreted as the first valid time that is inside the range.\n\n@param Range       The range to set the start on" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Range;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventSetStartSeconds_Parms, Range), Z_Construct_UScriptStruct_FSequencerScriptingRange, METADATA_PARAMS(0, nullptr) }; // 572197110
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SequencerScriptingRangeExtensions_eventSetStartSeconds_Parms, Start), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::NewProp_Range,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerScriptingRangeExtensions, nullptr, "SetStartSeconds", nullptr, nullptr, Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::SequencerScriptingRangeExtensions_eventSetStartSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::SequencerScriptingRangeExtensions_eventSetStartSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USequencerScriptingRangeExtensions::execSetStartSeconds)
{
	P_GET_STRUCT_REF(FSequencerScriptingRange,Z_Param_Out_Range);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	USequencerScriptingRangeExtensions::SetStartSeconds(Z_Param_Out_Range,Z_Param_Start);
	P_NATIVE_END;
}
// End Class USequencerScriptingRangeExtensions Function SetStartSeconds

// Begin Class USequencerScriptingRangeExtensions
void USequencerScriptingRangeExtensions::StaticRegisterNativesUSequencerScriptingRangeExtensions()
{
	UClass* Class = USequencerScriptingRangeExtensions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEndFrame", &USequencerScriptingRangeExtensions::execGetEndFrame },
		{ "GetEndSeconds", &USequencerScriptingRangeExtensions::execGetEndSeconds },
		{ "GetStartFrame", &USequencerScriptingRangeExtensions::execGetStartFrame },
		{ "GetStartSeconds", &USequencerScriptingRangeExtensions::execGetStartSeconds },
		{ "HasEnd", &USequencerScriptingRangeExtensions::execHasEnd },
		{ "HasStart", &USequencerScriptingRangeExtensions::execHasStart },
		{ "RemoveEnd", &USequencerScriptingRangeExtensions::execRemoveEnd },
		{ "RemoveStart", &USequencerScriptingRangeExtensions::execRemoveStart },
		{ "SetEndFrame", &USequencerScriptingRangeExtensions::execSetEndFrame },
		{ "SetEndSeconds", &USequencerScriptingRangeExtensions::execSetEndSeconds },
		{ "SetStartFrame", &USequencerScriptingRangeExtensions::execSetStartFrame },
		{ "SetStartSeconds", &USequencerScriptingRangeExtensions::execSetStartSeconds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerScriptingRangeExtensions);
UClass* Z_Construct_UClass_USequencerScriptingRangeExtensions_NoRegister()
{
	return USequencerScriptingRangeExtensions::StaticClass();
}
struct Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto FSequencerScriptingRanges\n */" },
		{ "IncludePath", "ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ModuleRelativePath", "Public/ExtensionLibraries/SequencerScriptingRangeExtensions.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto FSequencerScriptingRanges" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndFrame, "GetEndFrame" }, // 2306425363
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetEndSeconds, "GetEndSeconds" }, // 3242422524
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartFrame, "GetStartFrame" }, // 4054069893
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_GetStartSeconds, "GetStartSeconds" }, // 2238017601
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasEnd, "HasEnd" }, // 661324362
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_HasStart, "HasStart" }, // 3562943753
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveEnd, "RemoveEnd" }, // 523442277
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_RemoveStart, "RemoveStart" }, // 280360161
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndFrame, "SetEndFrame" }, // 1953942465
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetEndSeconds, "SetEndSeconds" }, // 845557345
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartFrame, "SetStartFrame" }, // 2934587213
		{ &Z_Construct_UFunction_USequencerScriptingRangeExtensions_SetStartSeconds, "SetStartSeconds" }, // 411646083
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerScriptingRangeExtensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics::ClassParams = {
	&USequencerScriptingRangeExtensions::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics::Class_MetaDataParams), Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USequencerScriptingRangeExtensions()
{
	if (!Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.OuterSingleton, Z_Construct_UClass_USequencerScriptingRangeExtensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USequencerScriptingRangeExtensions.OuterSingleton;
}
template<> SEQUENCERSCRIPTING_API UClass* StaticClass<USequencerScriptingRangeExtensions>()
{
	return USequencerScriptingRangeExtensions::StaticClass();
}
USequencerScriptingRangeExtensions::USequencerScriptingRangeExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerScriptingRangeExtensions);
USequencerScriptingRangeExtensions::~USequencerScriptingRangeExtensions() {}
// End Class USequencerScriptingRangeExtensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USequencerScriptingRangeExtensions, USequencerScriptingRangeExtensions::StaticClass, TEXT("USequencerScriptingRangeExtensions"), &Z_Registration_Info_UClass_USequencerScriptingRangeExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerScriptingRangeExtensions), 1757524574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_3169910643(TEXT("/Script/SequencerScripting"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_SequencerScriptingRangeExtensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
