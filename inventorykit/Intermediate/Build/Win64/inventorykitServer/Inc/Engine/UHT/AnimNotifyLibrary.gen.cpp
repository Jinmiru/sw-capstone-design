// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyLibrary.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyLibrary();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimNotifyLibrary Function GetCurrentAnimationNotifyStateTime
struct Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics
{
	struct AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTime_Parms
	{
		FAnimNotifyEventReference EventReference;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/**\n\x09 * Gets the current time in seconds relative to the start of the notify state, clamped to the range of the notify\n\x09 * state\n\x09 *\n\x09 * @param EventReference\x09\x09The event to inspect\n\x09 * @return  the current time in seconds relative to the start of the notify state, clamped to the range of the\n\x09 *\x09\x09\x09notify state\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets the current time in seconds relative to the start of the notify state, clamped to the range of the notify\nstate\n\n@param EventReference                The event to inspect\n@return  the current time in seconds relative to the start of the notify state, clamped to the range of the\n                     notify state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTime_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyLibrary, nullptr, "GetCurrentAnimationNotifyStateTime", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyLibrary::execGetCurrentAnimationNotifyStateTime)
{
	P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAnimNotifyLibrary::GetCurrentAnimationNotifyStateTime(Z_Param_Out_EventReference);
	P_NATIVE_END;
}
// End Class UAnimNotifyLibrary Function GetCurrentAnimationNotifyStateTime

// Begin Class UAnimNotifyLibrary Function GetCurrentAnimationNotifyStateTimeRatio
struct Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics
{
	struct AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTimeRatio_Parms
	{
		FAnimNotifyEventReference EventReference;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/**\n\x09 * Gets the current time as a ratio (0 -> 1) relative to the start of the notify state\n\x09 *\n\x09 * @param EventReference\x09\x09The event to inspect\n\x09 * @return  the current time as a ratio (0 -> 1) relative to the start of the notify state\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Gets the current time as a ratio (0 -> 1) relative to the start of the notify state\n\n@param EventReference                The event to inspect\n@return  the current time as a ratio (0 -> 1) relative to the start of the notify state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTimeRatio_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTimeRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyLibrary, nullptr, "GetCurrentAnimationNotifyStateTimeRatio", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTimeRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::AnimNotifyLibrary_eventGetCurrentAnimationNotifyStateTimeRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyLibrary::execGetCurrentAnimationNotifyStateTimeRatio)
{
	P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAnimNotifyLibrary::GetCurrentAnimationNotifyStateTimeRatio(Z_Param_Out_EventReference);
	P_NATIVE_END;
}
// End Class UAnimNotifyLibrary Function GetCurrentAnimationNotifyStateTimeRatio

// Begin Class UAnimNotifyLibrary Function GetCurrentAnimationTime
struct Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics
{
	struct AnimNotifyLibrary_eventGetCurrentAnimationTime_Parms
	{
		FAnimNotifyEventReference EventReference;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/**\n\x09 * Get the current anim notify time in seconds for when this notify was fired\n\x09 *\n\x09 * @param EventReference\x09\x09The event to inspect\n\x09 * @return the time in seconds through the current animation for when this notify was fired\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the current anim notify time in seconds for when this notify was fired\n\n@param EventReference                The event to inspect\n@return the time in seconds through the current animation for when this notify was fired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyLibrary_eventGetCurrentAnimationTime_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyLibrary_eventGetCurrentAnimationTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyLibrary, nullptr, "GetCurrentAnimationTime", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::AnimNotifyLibrary_eventGetCurrentAnimationTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::AnimNotifyLibrary_eventGetCurrentAnimationTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyLibrary::execGetCurrentAnimationTime)
{
	P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAnimNotifyLibrary::GetCurrentAnimationTime(Z_Param_Out_EventReference);
	P_NATIVE_END;
}
// End Class UAnimNotifyLibrary Function GetCurrentAnimationTime

// Begin Class UAnimNotifyLibrary Function GetCurrentAnimationTimeRatio
struct Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics
{
	struct AnimNotifyLibrary_eventGetCurrentAnimationTimeRatio_Parms
	{
		FAnimNotifyEventReference EventReference;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/**\n\x09 * Get the current anim notify time as a ratio (0 -> 1) through the animation for when this notify was fired\n\x09 *\n\x09 * @param EventReference\x09\x09The event to inspect\n\x09 * @return the time as a ratio (0 -> 1) through the animation for when this notify was fired\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get the current anim notify time as a ratio (0 -> 1) through the animation for when this notify was fired\n\n@param EventReference                The event to inspect\n@return the time as a ratio (0 -> 1) through the animation for when this notify was fired" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyLibrary_eventGetCurrentAnimationTimeRatio_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyLibrary_eventGetCurrentAnimationTimeRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyLibrary, nullptr, "GetCurrentAnimationTimeRatio", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::AnimNotifyLibrary_eventGetCurrentAnimationTimeRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::AnimNotifyLibrary_eventGetCurrentAnimationTimeRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyLibrary::execGetCurrentAnimationTimeRatio)
{
	P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UAnimNotifyLibrary::GetCurrentAnimationTimeRatio(Z_Param_Out_EventReference);
	P_NATIVE_END;
}
// End Class UAnimNotifyLibrary Function GetCurrentAnimationTimeRatio

// Begin Class UAnimNotifyLibrary Function NotifyStateReachedEnd
struct Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics
{
	struct AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms
	{
		FAnimNotifyEventReference EventReference;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/** Get whether the notify state reached the end (was not cancelled)\n\x09*\n\x09* @param EventReference\x09\x09The event to inspect\n\x09*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get whether the notify state reached the end (was not cancelled)\n\n@param EventReference         The event to inspect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
void Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms), &Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyLibrary, nullptr, "NotifyStateReachedEnd", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyLibrary::execNotifyStateReachedEnd)
{
	P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAnimNotifyLibrary::NotifyStateReachedEnd(Z_Param_Out_EventReference);
	P_NATIVE_END;
}
// End Class UAnimNotifyLibrary Function NotifyStateReachedEnd

// Begin Class UAnimNotifyLibrary
void UAnimNotifyLibrary::StaticRegisterNativesUAnimNotifyLibrary()
{
	UClass* Class = UAnimNotifyLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentAnimationNotifyStateTime", &UAnimNotifyLibrary::execGetCurrentAnimationNotifyStateTime },
		{ "GetCurrentAnimationNotifyStateTimeRatio", &UAnimNotifyLibrary::execGetCurrentAnimationNotifyStateTimeRatio },
		{ "GetCurrentAnimationTime", &UAnimNotifyLibrary::execGetCurrentAnimationTime },
		{ "GetCurrentAnimationTimeRatio", &UAnimNotifyLibrary::execGetCurrentAnimationTimeRatio },
		{ "NotifyStateReachedEnd", &UAnimNotifyLibrary::execNotifyStateReachedEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyLibrary);
UClass* Z_Construct_UClass_UAnimNotifyLibrary_NoRegister()
{
	return UAnimNotifyLibrary::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""A library of commonly used functionality for Notifies, exposed to blueprint.\n*/" },
		{ "IncludePath", "Animation/AnimNotifyLibrary.h" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyLibrary.h" },
		{ "ScriptName", "UAnimNotifyLibrary" },
		{ "ToolTip", "A library of commonly used functionality for Notifies, exposed to blueprint." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTime, "GetCurrentAnimationNotifyStateTime" }, // 1645505595
		{ &Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationNotifyStateTimeRatio, "GetCurrentAnimationNotifyStateTimeRatio" }, // 3466232720
		{ &Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTime, "GetCurrentAnimationTime" }, // 3805513505
		{ &Z_Construct_UFunction_UAnimNotifyLibrary_GetCurrentAnimationTimeRatio, "GetCurrentAnimationTimeRatio" }, // 2758932534
		{ &Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd, "NotifyStateReachedEnd" }, // 2847491106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyLibrary_Statics::ClassParams = {
	&UAnimNotifyLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyLibrary()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyLibrary.OuterSingleton, Z_Construct_UClass_UAnimNotifyLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimNotifyLibrary>()
{
	return UAnimNotifyLibrary::StaticClass();
}
UAnimNotifyLibrary::UAnimNotifyLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyLibrary);
UAnimNotifyLibrary::~UAnimNotifyLibrary() {}
// End Class UAnimNotifyLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyLibrary, UAnimNotifyLibrary::StaticClass, TEXT("UAnimNotifyLibrary"), &Z_Registration_Info_UClass_UAnimNotifyLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyLibrary), 2445786637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_2830138161(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
