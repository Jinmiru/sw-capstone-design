// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimation() {}

// Begin Cross Module References
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UWidgetAnimation Function BindToAnimationFinished
struct Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics
{
	struct WidgetAnimation_eventBindToAnimationFinished_Parms
	{
		UUserWidget* Widget;
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventBindToAnimationFinished_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventBindToAnimationFinished_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1151302680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "BindToAnimationFinished", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::WidgetAnimation_eventBindToAnimationFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::WidgetAnimation_eventBindToAnimationFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimation::execBindToAnimationFinished)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToAnimationFinished(Z_Param_Widget,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
	P_NATIVE_END;
}
// End Class UWidgetAnimation Function BindToAnimationFinished

// Begin Class UWidgetAnimation Function BindToAnimationStarted
struct Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics
{
	struct WidgetAnimation_eventBindToAnimationStarted_Parms
	{
		UUserWidget* Widget;
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "Comment", "// These animation binding functions were added so that we could cleanly upgrade assets\n// from before animation sharing, they don't actually modify the animation, they just pipe\n// through to the UUserWidget.  If we didn't put the functions here, it would be much more\n// difficult to upgrade users who were taking advantage of the Many-To-1, blueprint having\n// many animations binding to the same delegate.\n" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "These animation binding functions were added so that we could cleanly upgrade assets\nfrom before animation sharing, they don't actually modify the animation, they just pipe\nthrough to the UUserWidget.  If we didn't put the functions here, it would be much more\ndifficult to upgrade users who were taking advantage of the Many-To-1, blueprint having\nmany animations binding to the same delegate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventBindToAnimationStarted_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventBindToAnimationStarted_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1151302680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "BindToAnimationStarted", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::WidgetAnimation_eventBindToAnimationStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::WidgetAnimation_eventBindToAnimationStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimation::execBindToAnimationStarted)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToAnimationStarted(Z_Param_Widget,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
	P_NATIVE_END;
}
// End Class UWidgetAnimation Function BindToAnimationStarted

// Begin Class UWidgetAnimation Function GetEndTime
struct Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics
{
	struct WidgetAnimation_eventGetEndTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Get the end time of this animation.\n\x09 *\n\x09 * @return End time in seconds.\n\x09 * @see GetStartTime\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Get the end time of this animation.\n\n@return End time in seconds.\n@see GetStartTime" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventGetEndTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "GetEndTime", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::WidgetAnimation_eventGetEndTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::WidgetAnimation_eventGetEndTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimation_GetEndTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_GetEndTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimation::execGetEndTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEndTime();
	P_NATIVE_END;
}
// End Class UWidgetAnimation Function GetEndTime

// Begin Class UWidgetAnimation Function GetStartTime
struct Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics
{
	struct WidgetAnimation_eventGetStartTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Get the start time of this animation.\n\x09 *\n\x09 * @return Start time in seconds.\n\x09 * @see GetEndTime\n\x09 */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Get the start time of this animation.\n\n@return Start time in seconds.\n@see GetEndTime" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventGetStartTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "GetStartTime", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::WidgetAnimation_eventGetStartTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::WidgetAnimation_eventGetStartTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimation_GetStartTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_GetStartTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimation::execGetStartTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStartTime();
	P_NATIVE_END;
}
// End Class UWidgetAnimation Function GetStartTime

// Begin Class UWidgetAnimation Function UnbindAllFromAnimationFinished
struct Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics
{
	struct WidgetAnimation_eventUnbindAllFromAnimationFinished_Parms
	{
		UUserWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventUnbindAllFromAnimationFinished_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "UnbindAllFromAnimationFinished", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::WidgetAnimation_eventUnbindAllFromAnimationFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::WidgetAnimation_eventUnbindAllFromAnimationFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimation::execUnbindAllFromAnimationFinished)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindAllFromAnimationFinished(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UWidgetAnimation Function UnbindAllFromAnimationFinished

// Begin Class UWidgetAnimation Function UnbindAllFromAnimationStarted
struct Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics
{
	struct WidgetAnimation_eventUnbindAllFromAnimationStarted_Parms
	{
		UUserWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventUnbindAllFromAnimationStarted_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "UnbindAllFromAnimationStarted", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::WidgetAnimation_eventUnbindAllFromAnimationStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::WidgetAnimation_eventUnbindAllFromAnimationStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimation::execUnbindAllFromAnimationStarted)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindAllFromAnimationStarted(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UWidgetAnimation Function UnbindAllFromAnimationStarted

// Begin Class UWidgetAnimation Function UnbindFromAnimationFinished
struct Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics
{
	struct WidgetAnimation_eventUnbindFromAnimationFinished_Parms
	{
		UUserWidget* Widget;
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventUnbindFromAnimationFinished_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventUnbindFromAnimationFinished_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1151302680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "UnbindFromAnimationFinished", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::WidgetAnimation_eventUnbindFromAnimationFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::WidgetAnimation_eventUnbindFromAnimationFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimation::execUnbindFromAnimationFinished)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromAnimationFinished(Z_Param_Widget,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
	P_NATIVE_END;
}
// End Class UWidgetAnimation Function UnbindFromAnimationFinished

// Begin Class UWidgetAnimation Function UnbindFromAnimationStarted
struct Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics
{
	struct WidgetAnimation_eventUnbindFromAnimationStarted_Parms
	{
		UUserWidget* Widget;
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventUnbindFromAnimationStarted_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimation_eventUnbindFromAnimationStarted_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1151302680
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimation, nullptr, "UnbindFromAnimationStarted", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::WidgetAnimation_eventUnbindFromAnimationStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::WidgetAnimation_eventUnbindFromAnimationStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimation::execUnbindFromAnimationStarted)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnbindFromAnimationStarted(Z_Param_Widget,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
	P_NATIVE_END;
}
// End Class UWidgetAnimation Function UnbindFromAnimationStarted

// Begin Class UWidgetAnimation
void UWidgetAnimation::StaticRegisterNativesUWidgetAnimation()
{
	UClass* Class = UWidgetAnimation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToAnimationFinished", &UWidgetAnimation::execBindToAnimationFinished },
		{ "BindToAnimationStarted", &UWidgetAnimation::execBindToAnimationStarted },
		{ "GetEndTime", &UWidgetAnimation::execGetEndTime },
		{ "GetStartTime", &UWidgetAnimation::execGetStartTime },
		{ "UnbindAllFromAnimationFinished", &UWidgetAnimation::execUnbindAllFromAnimationFinished },
		{ "UnbindAllFromAnimationStarted", &UWidgetAnimation::execUnbindAllFromAnimationStarted },
		{ "UnbindFromAnimationFinished", &UWidgetAnimation::execUnbindFromAnimationFinished },
		{ "UnbindFromAnimationStarted", &UWidgetAnimation::execUnbindFromAnimationStarted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetAnimation);
UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister()
{
	return UWidgetAnimation::StaticClass();
}
struct Z_Construct_UClass_UWidgetAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Animation/WidgetAnimation.h" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** Pointer to the movie scene that controls this animation. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationBindings_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLegacyFinishOnStop_MetaData[] = {
		{ "Comment", "/** Whether to finish evaluation on stop. This legacy value is to preserve existing asset behavior to NOT finish on stop since content was created with this bug. If this is removed, evaluation should always finish on stop. */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "Whether to finish evaluation on stop. This legacy value is to preserve existing asset behavior to NOT finish on stop since content was created with this bug. If this is removed, evaluation should always finish on stop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[] = {
		{ "Comment", "/** The friendly name for this animation displayed in the designer. */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimation.h" },
		{ "ToolTip", "The friendly name for this animation displayed in the designer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationBindings;
	static void NewProp_bLegacyFinishOnStop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLegacyFinishOnStop;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetAnimation_BindToAnimationFinished, "BindToAnimationFinished" }, // 364378091
		{ &Z_Construct_UFunction_UWidgetAnimation_BindToAnimationStarted, "BindToAnimationStarted" }, // 1362779246
		{ &Z_Construct_UFunction_UWidgetAnimation_GetEndTime, "GetEndTime" }, // 1565530890
		{ &Z_Construct_UFunction_UWidgetAnimation_GetStartTime, "GetStartTime" }, // 3292871666
		{ &Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationFinished, "UnbindAllFromAnimationFinished" }, // 512861813
		{ &Z_Construct_UFunction_UWidgetAnimation_UnbindAllFromAnimationStarted, "UnbindAllFromAnimationStarted" }, // 193206344
		{ &Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationFinished, "UnbindFromAnimationFinished" }, // 2161393389
		{ &Z_Construct_UFunction_UWidgetAnimation_UnbindFromAnimationStarted, "UnbindFromAnimationStarted" }, // 1165292035
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetAnimation, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovieScene_MetaData), NewProp_MovieScene_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_Inner = { "AnimationBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWidgetAnimationBinding, METADATA_PARAMS(0, nullptr) }; // 1740454856
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings = { "AnimationBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetAnimation, AnimationBindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationBindings_MetaData), NewProp_AnimationBindings_MetaData) }; // 1740454856
void Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_SetBit(void* Obj)
{
	((UWidgetAnimation*)Obj)->bLegacyFinishOnStop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop = { "bLegacyFinishOnStop", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWidgetAnimation), &Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLegacyFinishOnStop_MetaData), NewProp_bLegacyFinishOnStop_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetAnimation, DisplayLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayLabel_MetaData), NewProp_DisplayLabel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_MovieScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_AnimationBindings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_bLegacyFinishOnStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimation_Statics::NewProp_DisplayLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetAnimation_Statics::ClassParams = {
	&UWidgetAnimation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetAnimation()
{
	if (!Z_Registration_Info_UClass_UWidgetAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetAnimation.OuterSingleton, Z_Construct_UClass_UWidgetAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetAnimation.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetAnimation>()
{
	return UWidgetAnimation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetAnimation);
UWidgetAnimation::~UWidgetAnimation() {}
// End Class UWidgetAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetAnimation, UWidgetAnimation::StaticClass, TEXT("UWidgetAnimation"), &Z_Registration_Info_UClass_UWidgetAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetAnimation), 777031590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_1928605978(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
