// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationPlayCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationPlayCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_EUMGSequencePlayMode();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FWidgetAnimationResult
struct Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "WidgetAnimationResult__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FWidgetAnimationResult_DelegateWrapper(const FMulticastScriptDelegate& WidgetAnimationResult)
{
	WidgetAnimationResult.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FWidgetAnimationResult

// Begin Class UWidgetAnimationPlayCallbackProxy Function CreatePlayAnimationProxyObject
struct Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics
{
	struct WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms
	{
		UUMGSequencePlayer* Result;
		UUserWidget* Widget;
		UWidgetAnimation* InAnimation;
		float StartAtTime;
		int32 NumLoopsToPlay;
		TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
		float PlaybackSpeed;
		UWidgetAnimationPlayCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "User Interface|Animation" },
		{ "CPP_Default_NumLoopsToPlay", "1" },
		{ "CPP_Default_PlaybackSpeed", "1.000000" },
		{ "CPP_Default_PlayMode", "Forward" },
		{ "CPP_Default_StartAtTime", "0.000000" },
		{ "DisplayName", "Play Animation with Finished event" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
		{ "ShortToolTip", "Play Animation and trigger event on Finished" },
		{ "ToolTip", "Play Animation on widget and trigger Finish event when the animation is done." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAtTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoopsToPlay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, Result), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_StartAtTime = { "StartAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, StartAtTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_NumLoopsToPlay = { "NumLoopsToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, NumLoopsToPlay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_PlayMode = { "PlayMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, PlayMode), Z_Construct_UEnum_UMG_EUMGSequencePlayMode, METADATA_PARAMS(0, nullptr) }; // 795349823
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, PlaybackSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms, ReturnValue), Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_InAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_StartAtTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_NumLoopsToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_PlayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_PlaybackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy, nullptr, "CreatePlayAnimationProxyObject", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationProxyObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationProxyObject)
{
	P_GET_OBJECT_REF(UUMGSequencePlayer,Z_Param_Out_Result);
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartAtTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumLoopsToPlay);
	P_GET_PROPERTY(FByteProperty,Z_Param_PlayMode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidgetAnimationPlayCallbackProxy**)Z_Param__Result=UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(P_ARG_GC_BARRIER(Z_Param_Out_Result),Z_Param_Widget,Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed);
	P_NATIVE_END;
}
// End Class UWidgetAnimationPlayCallbackProxy Function CreatePlayAnimationProxyObject

// Begin Class UWidgetAnimationPlayCallbackProxy Function CreatePlayAnimationTimeRangeProxyObject
struct Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics
{
	struct WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms
	{
		UUMGSequencePlayer* Result;
		UUserWidget* Widget;
		UWidgetAnimation* InAnimation;
		float StartAtTime;
		float EndAtTime;
		int32 NumLoopsToPlay;
		TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
		float PlaybackSpeed;
		UWidgetAnimationPlayCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "User Interface|Animation" },
		{ "CPP_Default_EndAtTime", "0.000000" },
		{ "CPP_Default_NumLoopsToPlay", "1" },
		{ "CPP_Default_PlaybackSpeed", "1.000000" },
		{ "CPP_Default_PlayMode", "Forward" },
		{ "CPP_Default_StartAtTime", "0.000000" },
		{ "DisplayName", "Play Animation Time Range with Finished event" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
		{ "ShortToolTip", "Play Animation Time Range and trigger event on Finished" },
		{ "ToolTip", "Play Animation Time Range on widget and trigger Finish event when the animation is done." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAtTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAtTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoopsToPlay;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, Result), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_StartAtTime = { "StartAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, StartAtTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_EndAtTime = { "EndAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, EndAtTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_NumLoopsToPlay = { "NumLoopsToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, NumLoopsToPlay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_PlayMode = { "PlayMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, PlayMode), Z_Construct_UEnum_UMG_EUMGSequencePlayMode, METADATA_PARAMS(0, nullptr) }; // 795349823
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, PlaybackSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms, ReturnValue), Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_InAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_StartAtTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_EndAtTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_NumLoopsToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_PlayMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_PlaybackSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy, nullptr, "CreatePlayAnimationTimeRangeProxyObject", nullptr, nullptr, Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::WidgetAnimationPlayCallbackProxy_eventCreatePlayAnimationTimeRangeProxyObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationTimeRangeProxyObject)
{
	P_GET_OBJECT_REF(UUMGSequencePlayer,Z_Param_Out_Result);
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartAtTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EndAtTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumLoopsToPlay);
	P_GET_PROPERTY(FByteProperty,Z_Param_PlayMode);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidgetAnimationPlayCallbackProxy**)Z_Param__Result=UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(P_ARG_GC_BARRIER(Z_Param_Out_Result),Z_Param_Widget,Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_EndAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed);
	P_NATIVE_END;
}
// End Class UWidgetAnimationPlayCallbackProxy Function CreatePlayAnimationTimeRangeProxyObject

// Begin Class UWidgetAnimationPlayCallbackProxy
void UWidgetAnimationPlayCallbackProxy::StaticRegisterNativesUWidgetAnimationPlayCallbackProxy()
{
	UClass* Class = UWidgetAnimationPlayCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreatePlayAnimationProxyObject", &UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationProxyObject },
		{ "CreatePlayAnimationTimeRangeProxyObject", &UWidgetAnimationPlayCallbackProxy::execCreatePlayAnimationTimeRangeProxyObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetAnimationPlayCallbackProxy);
UClass* Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_NoRegister()
{
	return UWidgetAnimationPlayCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/WidgetAnimationPlayCallbackProxy.h" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[] = {
		{ "Comment", "// Called when animation has been completed\n" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationPlayCallbackProxy.h" },
		{ "ToolTip", "Called when animation has been completed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Finished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject, "CreatePlayAnimationProxyObject" }, // 2536558229
		{ &Z_Construct_UFunction_UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject, "CreatePlayAnimationTimeRangeProxyObject" }, // 3844689970
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetAnimationPlayCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetAnimationPlayCallbackProxy, Finished), Z_Construct_UDelegateFunction_UMG_WidgetAnimationResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finished_MetaData), NewProp_Finished_MetaData) }; // 335122177
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::NewProp_Finished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::ClassParams = {
	&UWidgetAnimationPlayCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.OuterSingleton, Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetAnimationPlayCallbackProxy>()
{
	return UWidgetAnimationPlayCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetAnimationPlayCallbackProxy);
UWidgetAnimationPlayCallbackProxy::~UWidgetAnimationPlayCallbackProxy() {}
// End Class UWidgetAnimationPlayCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy, UWidgetAnimationPlayCallbackProxy::StaticClass, TEXT("UWidgetAnimationPlayCallbackProxy"), &Z_Registration_Info_UClass_UWidgetAnimationPlayCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetAnimationPlayCallbackProxy), 2067867728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_1588166976(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
