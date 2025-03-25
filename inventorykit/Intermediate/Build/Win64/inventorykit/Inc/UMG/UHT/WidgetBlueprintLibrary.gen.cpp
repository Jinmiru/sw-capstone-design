// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWindowTitleBarMode();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UMG_API UClass* Z_Construct_UClass_UDragDropOperation_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintLibrary();
UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintLibrary_NoRegister();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FPaintContext();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnGameWindowCloseButtonClickedDelegate
struct Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "OnGameWindowCloseButtonClickedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UWidgetBlueprintLibrary::FOnGameWindowCloseButtonClickedDelegate_DelegateWrapper(const FScriptDelegate& OnGameWindowCloseButtonClickedDelegate)
{
	OnGameWindowCloseButtonClickedDelegate.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnGameWindowCloseButtonClickedDelegate

// Begin Class UWidgetBlueprintLibrary Function CancelDragDrop
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Drag and Drop" },
		{ "Comment", "/**\n\x09 * Cancels any current drag drop operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Cancels any current drag drop operation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "CancelDragDrop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execCancelDragDrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::CancelDragDrop();
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function CancelDragDrop

// Begin Class UWidgetBlueprintLibrary Function CaptureJoystick
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics
{
	struct WidgetBlueprintLibrary_eventCaptureJoystick_Parms
	{
		FEventReply Reply;
		UWidget* CapturingWidget;
		bool bInAllJoysticks;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "CPP_Default_bInAllJoysticks", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetUserFocus() instead" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturingWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapturingWidget;
	static void NewProp_bInAllJoysticks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllJoysticks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCaptureJoystick_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_CapturingWidget = { "CapturingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCaptureJoystick_Parms, CapturingWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturingWidget_MetaData), NewProp_CapturingWidget_MetaData) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_bInAllJoysticks_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventCaptureJoystick_Parms*)Obj)->bInAllJoysticks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_bInAllJoysticks = { "bInAllJoysticks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventCaptureJoystick_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_bInAllJoysticks_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCaptureJoystick_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_CapturingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_bInAllJoysticks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "CaptureJoystick", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::WidgetBlueprintLibrary_eventCaptureJoystick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::WidgetBlueprintLibrary_eventCaptureJoystick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execCaptureJoystick)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_GET_OBJECT(UWidget,Z_Param_CapturingWidget);
	P_GET_UBOOL(Z_Param_bInAllJoysticks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureJoystick(Z_Param_Out_Reply,Z_Param_CapturingWidget,Z_Param_bInAllJoysticks);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function CaptureJoystick

// Begin Class UWidgetBlueprintLibrary Function CaptureMouse
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics
{
	struct WidgetBlueprintLibrary_eventCaptureMouse_Parms
	{
		FEventReply Reply;
		UWidget* CapturingWidget;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "Comment", "/**  */" },
		{ "DefaultToSelf", "CapturingWidget" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturingWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapturingWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCaptureMouse_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::NewProp_CapturingWidget = { "CapturingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCaptureMouse_Parms, CapturingWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturingWidget_MetaData), NewProp_CapturingWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCaptureMouse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::NewProp_CapturingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "CaptureMouse", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::WidgetBlueprintLibrary_eventCaptureMouse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::WidgetBlueprintLibrary_eventCaptureMouse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execCaptureMouse)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_GET_OBJECT(UWidget,Z_Param_CapturingWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::CaptureMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function CaptureMouse

// Begin Class UWidgetBlueprintLibrary Function ClearUserFocus
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics
{
	struct WidgetBlueprintLibrary_eventClearUserFocus_Parms
	{
		FEventReply Reply;
		bool bInAllUsers;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "Comment", "/**  */" },
		{ "CPP_Default_bInAllUsers", "false" },
		{ "DefaultToSelf", "CapturingWidget" },
		{ "HidePin", "CapturingWidget" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static void NewProp_bInAllUsers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllUsers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventClearUserFocus_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
void Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::NewProp_bInAllUsers_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventClearUserFocus_Parms*)Obj)->bInAllUsers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::NewProp_bInAllUsers = { "bInAllUsers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventClearUserFocus_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::NewProp_bInAllUsers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventClearUserFocus_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::NewProp_bInAllUsers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "ClearUserFocus", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::WidgetBlueprintLibrary_eventClearUserFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::WidgetBlueprintLibrary_eventClearUserFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execClearUserFocus)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_GET_UBOOL(Z_Param_bInAllUsers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ClearUserFocus(Z_Param_Out_Reply,Z_Param_bInAllUsers);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function ClearUserFocus

// Begin Class UWidgetBlueprintLibrary Function Create
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics
{
	struct WidgetBlueprintLibrary_eventCreate_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UUserWidget> WidgetType;
		APlayerController* OwningPlayer;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Widget" },
		{ "Comment", "/** Creates a widget */" },
		{ "DisplayName", "Create Widget" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Creates a widget" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCreate_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::NewProp_WidgetType = { "WidgetType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCreate_Parms, WidgetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCreate_Parms, OwningPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCreate_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::NewProp_WidgetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "Create", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::WidgetBlueprintLibrary_eventCreate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0402240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::WidgetBlueprintLibrary_eventCreate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_Create()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_Create_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execCreate)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_WidgetType);
	P_GET_OBJECT(APlayerController,Z_Param_OwningPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=UWidgetBlueprintLibrary::Create(Z_Param_WorldContextObject,Z_Param_WidgetType,Z_Param_OwningPlayer);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function Create

// Begin Class UWidgetBlueprintLibrary Function CreateDragDropOperation
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics
{
	struct WidgetBlueprintLibrary_eventCreateDragDropOperation_Parms
	{
		TSubclassOf<UDragDropOperation> OperationClass;
		UDragDropOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Widget|Drag and Drop" },
		{ "Comment", "/**\n\x09 * Creates a new drag and drop operation that can be returned from a drag begin to inform the UI what i\n\x09 * being dragged and dropped and what it looks like.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Creates a new drag and drop operation that can be returned from a drag begin to inform the UI what i\nbeing dragged and dropped and what it looks like." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OperationClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::NewProp_OperationClass = { "OperationClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCreateDragDropOperation_Parms, OperationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventCreateDragDropOperation_Parms, ReturnValue), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::NewProp_OperationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "CreateDragDropOperation", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::WidgetBlueprintLibrary_eventCreateDragDropOperation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::WidgetBlueprintLibrary_eventCreateDragDropOperation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execCreateDragDropOperation)
{
	P_GET_OBJECT(UClass,Z_Param_OperationClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::CreateDragDropOperation(Z_Param_OperationClass);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function CreateDragDropOperation

// Begin Class UWidgetBlueprintLibrary Function DetectDrag
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics
{
	struct WidgetBlueprintLibrary_eventDetectDrag_Parms
	{
		FEventReply Reply;
		UWidget* WidgetDetectingDrag;
		FKey DragKey;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Drag and Drop|Event Reply" },
		{ "Comment", "/**\n\x09 * Ask Slate to detect if a user starts dragging in this widget later.  Slate internally tracks the movement\n\x09 * and if it surpasses the drag threshold, Slate will send an OnDragDetected event to the widget.\n\x09 *\n\x09 * @param WidgetDetectingDrag  Detect dragging in this widget\n\x09 * @param DragKey\x09\x09       This button should be pressed to detect the drag\n\x09 */" },
		{ "DefaultToSelf", "WidgetDetectingDrag" },
		{ "HidePin", "WidgetDetectingDrag" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Ask Slate to detect if a user starts dragging in this widget later.  Slate internally tracks the movement\nand if it surpasses the drag threshold, Slate will send an OnDragDetected event to the widget.\n\n@param WidgetDetectingDrag  Detect dragging in this widget\n@param DragKey                      This button should be pressed to detect the drag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetDetectingDrag_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetDetectingDrag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDetectDrag_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::NewProp_WidgetDetectingDrag = { "WidgetDetectingDrag", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDetectDrag_Parms, WidgetDetectingDrag), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetDetectingDrag_MetaData), NewProp_WidgetDetectingDrag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::NewProp_DragKey = { "DragKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDetectDrag_Parms, DragKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDetectDrag_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::NewProp_WidgetDetectingDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::NewProp_DragKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "DetectDrag", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::WidgetBlueprintLibrary_eventDetectDrag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::WidgetBlueprintLibrary_eventDetectDrag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execDetectDrag)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag);
	P_GET_STRUCT(FKey,Z_Param_DragKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDrag(Z_Param_Out_Reply,Z_Param_WidgetDetectingDrag,Z_Param_DragKey);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function DetectDrag

// Begin Class UWidgetBlueprintLibrary Function DetectDragIfPressed
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics
{
	struct WidgetBlueprintLibrary_eventDetectDragIfPressed_Parms
	{
		FPointerEvent PointerEvent;
		UWidget* WidgetDetectingDrag;
		FKey DragKey;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Drag and Drop|Event Reply" },
		{ "Comment", "/**\n\x09 * Given the pointer event, emit the DetectDrag reply if the provided key was pressed.\n\x09 * If the DragKey is a touch key, that will also automatically work.\n\x09 * @param PointerEvent\x09The pointer device event coming in.\n\x09 * @param WidgetDetectingDrag  Detect dragging in this widget.\n\x09 * @param DragKey\x09\x09       This button should be pressed to detect the drag, won't emit the DetectDrag FEventReply unless this is pressed.\n\x09 */" },
		{ "DefaultToSelf", "WidgetDetectingDrag" },
		{ "HidePin", "WidgetDetectingDrag" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Given the pointer event, emit the DetectDrag reply if the provided key was pressed.\nIf the DragKey is a touch key, that will also automatically work.\n@param PointerEvent  The pointer device event coming in.\n@param WidgetDetectingDrag  Detect dragging in this widget.\n@param DragKey                      This button should be pressed to detect the drag, won't emit the DetectDrag FEventReply unless this is pressed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetDetectingDrag_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetDetectingDrag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDetectDragIfPressed_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 2513801729
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::NewProp_WidgetDetectingDrag = { "WidgetDetectingDrag", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDetectDragIfPressed_Parms, WidgetDetectingDrag), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetDetectingDrag_MetaData), NewProp_WidgetDetectingDrag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::NewProp_DragKey = { "DragKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDetectDragIfPressed_Parms, DragKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDetectDragIfPressed_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::NewProp_PointerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::NewProp_WidgetDetectingDrag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::NewProp_DragKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "DetectDragIfPressed", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::WidgetBlueprintLibrary_eventDetectDragIfPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::WidgetBlueprintLibrary_eventDetectDragIfPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execDetectDragIfPressed)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_PointerEvent);
	P_GET_OBJECT(UWidget,Z_Param_WidgetDetectingDrag);
	P_GET_STRUCT(FKey,Z_Param_DragKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::DetectDragIfPressed(Z_Param_Out_PointerEvent,Z_Param_WidgetDetectingDrag,Z_Param_DragKey);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function DetectDragIfPressed

// Begin Class UWidgetBlueprintLibrary Function DismissAllMenus
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Menu" },
		{ "Comment", "/** Closes any popup menu */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Closes any popup menu" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "DismissAllMenus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0402240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execDismissAllMenus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::DismissAllMenus();
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function DismissAllMenus

// Begin Class UWidgetBlueprintLibrary Function DrawBox
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics
{
	struct WidgetBlueprintLibrary_eventDrawBox_Parms
	{
		FPaintContext Context;
		FVector2D Position;
		FVector2D Size;
		USlateBrushAsset* Brush;
		FLinearColor Tint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Painting" },
		{ "Comment", "/** Draws a box */" },
		{ "CPP_Default_Tint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Draws a box" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawBox_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 587985271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawBox_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawBox_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawBox_Parms, Brush), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawBox_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::NewProp_Tint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "DrawBox", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::WidgetBlueprintLibrary_eventDrawBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::WidgetBlueprintLibrary_eventDrawBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execDrawBox)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_GET_STRUCT(FVector2D,Z_Param_Size);
	P_GET_OBJECT(USlateBrushAsset,Z_Param_Brush);
	P_GET_STRUCT(FLinearColor,Z_Param_Tint);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::DrawBox(Z_Param_Out_Context,Z_Param_Position,Z_Param_Size,Z_Param_Brush,Z_Param_Tint);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function DrawBox

// Begin Class UWidgetBlueprintLibrary Function DrawLine
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics
{
	struct WidgetBlueprintLibrary_eventDrawLine_Parms
	{
		FPaintContext Context;
		FVector2D PositionA;
		FVector2D PositionB;
		FLinearColor Tint;
		bool bAntiAlias;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Painting" },
		{ "Comment", "/**\n\x09 * Draws a line.\n\x09 *\n\x09 * @param PositionA\x09\x09Starting position of the line in local space.\n\x09 * @param PositionB\x09\x09""Ending position of the line in local space.\n\x09 * @param Tint\x09\x09\x09""Color to render the line.\n\x09 * @param bAntialias\x09Whether the line should be antialiased.\n\x09 * @param Thickness\x09\x09How many pixels thick this line should be.\n\x09 */" },
		{ "CPP_Default_bAntiAlias", "true" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "CPP_Default_Tint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Draws a line.\n\n@param PositionA             Starting position of the line in local space.\n@param PositionB             Ending position of the line in local space.\n@param Tint                  Color to render the line.\n@param bAntialias    Whether the line should be antialiased.\n@param Thickness             How many pixels thick this line should be." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static void NewProp_bAntiAlias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiAlias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawLine_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 587985271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_PositionA = { "PositionA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawLine_Parms, PositionA), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_PositionB = { "PositionB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawLine_Parms, PositionB), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawLine_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_bAntiAlias_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventDrawLine_Parms*)Obj)->bAntiAlias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_bAntiAlias = { "bAntiAlias", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventDrawLine_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_bAntiAlias_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawLine_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_PositionA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_PositionB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_bAntiAlias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "DrawLine", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::WidgetBlueprintLibrary_eventDrawLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::WidgetBlueprintLibrary_eventDrawLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execDrawLine)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_STRUCT(FVector2D,Z_Param_PositionA);
	P_GET_STRUCT(FVector2D,Z_Param_PositionB);
	P_GET_STRUCT(FLinearColor,Z_Param_Tint);
	P_GET_UBOOL(Z_Param_bAntiAlias);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::DrawLine(Z_Param_Out_Context,Z_Param_PositionA,Z_Param_PositionB,Z_Param_Tint,Z_Param_bAntiAlias,Z_Param_Thickness);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function DrawLine

// Begin Class UWidgetBlueprintLibrary Function DrawLines
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics
{
	struct WidgetBlueprintLibrary_eventDrawLines_Parms
	{
		FPaintContext Context;
		TArray<FVector2D> Points;
		FLinearColor Tint;
		bool bAntiAlias;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Painting" },
		{ "Comment", "/**\n\x09 * Draws several line segments.\n\x09 *\n\x09 * @param Points\x09\x09Line pairs, each line needs to be 2 separate points in the array.\n\x09 * @param Tint\x09\x09\x09""Color to render the line.\n\x09 * @param bAntialias\x09Whether the line should be antialiased.\n\x09 * @param Thickness\x09\x09How many pixels thick this line should be.\n\x09 */" },
		{ "CPP_Default_bAntiAlias", "true" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "CPP_Default_Tint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Draws several line segments.\n\n@param Points                Line pairs, each line needs to be 2 separate points in the array.\n@param Tint                  Color to render the line.\n@param bAntialias    Whether the line should be antialiased.\n@param Thickness             How many pixels thick this line should be." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static void NewProp_bAntiAlias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiAlias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawLines_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 587985271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawLines_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawLines_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_bAntiAlias_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventDrawLines_Parms*)Obj)->bAntiAlias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_bAntiAlias = { "bAntiAlias", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventDrawLines_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_bAntiAlias_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawLines_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_bAntiAlias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "DrawLines", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::WidgetBlueprintLibrary_eventDrawLines_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::WidgetBlueprintLibrary_eventDrawLines_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execDrawLines)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_STRUCT(FLinearColor,Z_Param_Tint);
	P_GET_UBOOL(Z_Param_bAntiAlias);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::DrawLines(Z_Param_Out_Context,Z_Param_Out_Points,Z_Param_Tint,Z_Param_bAntiAlias,Z_Param_Thickness);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function DrawLines

// Begin Class UWidgetBlueprintLibrary Function DrawSpline
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics
{
	struct WidgetBlueprintLibrary_eventDrawSpline_Parms
	{
		FPaintContext Context;
		FVector2D Start;
		FVector2D StartDir;
		FVector2D End;
		FVector2D EndDir;
		FLinearColor Tint;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Painting" },
		{ "Comment", "/**\n\x09 * Draws a hermite spline.\n\x09 *\n\x09 * @param Start\x09\x09\x09Starting position of the spline in local space.\n\x09 * @param StartDir\x09\x09The direction of the spline from the start point.\n\x09 * @param End\x09\x09\x09""Ending position of the spline in local space.\n\x09 * @param EndDir\x09\x09The direction of the spline to the end point.\n\x09 * @param Tint\x09\x09\x09""Color to render the spline.\n\x09 * @param Thickness\x09\x09How many pixels thick this spline should be.\n\x09 */" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "CPP_Default_Tint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Draws a hermite spline.\n\n@param Start                 Starting position of the spline in local space.\n@param StartDir              The direction of the spline from the start point.\n@param End                   Ending position of the spline in local space.\n@param EndDir                The direction of the spline to the end point.\n@param Tint                  Color to render the spline.\n@param Thickness             How many pixels thick this spline should be." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawSpline_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 587985271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawSpline_Parms, Start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_StartDir = { "StartDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawSpline_Parms, StartDir), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawSpline_Parms, End), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_EndDir = { "EndDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawSpline_Parms, EndDir), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawSpline_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawSpline_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_StartDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_EndDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "DrawSpline", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::WidgetBlueprintLibrary_eventDrawSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::WidgetBlueprintLibrary_eventDrawSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execDrawSpline)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_STRUCT(FVector2D,Z_Param_Start);
	P_GET_STRUCT(FVector2D,Z_Param_StartDir);
	P_GET_STRUCT(FVector2D,Z_Param_End);
	P_GET_STRUCT(FVector2D,Z_Param_EndDir);
	P_GET_STRUCT(FLinearColor,Z_Param_Tint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::DrawSpline(Z_Param_Out_Context,Z_Param_Start,Z_Param_StartDir,Z_Param_End,Z_Param_EndDir,Z_Param_Tint,Z_Param_Thickness);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function DrawSpline

// Begin Class UWidgetBlueprintLibrary Function DrawText
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics
{
	struct WidgetBlueprintLibrary_eventDrawText_Parms
	{
		FPaintContext Context;
		FString InString;
		FVector2D Position;
		FLinearColor Tint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Painting" },
		{ "Comment", "/**\n\x09 * Draws text.\n\x09 *\n\x09 * @param InString\x09\x09The string to draw.\n\x09 * @param Position\x09\x09The starting position where the text is drawn in local space.\n\x09 * @param Tint\x09\x09\x09""Color to render the line.\n\x09 */" },
		{ "CPP_Default_Tint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Draw Text instead" },
		{ "DisplayName", "Draw String" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Draws text.\n\n@param InString              The string to draw.\n@param Position              The starting position where the text is drawn in local space.\n@param Tint                  Color to render the line." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawText_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 587985271
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawText_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawText_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawText_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::NewProp_Tint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "DrawText", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::WidgetBlueprintLibrary_eventDrawText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::WidgetBlueprintLibrary_eventDrawText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execDrawText)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_GET_STRUCT(FLinearColor,Z_Param_Tint);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::DrawText(Z_Param_Out_Context,Z_Param_InString,Z_Param_Position,Z_Param_Tint);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function DrawText

// Begin Class UWidgetBlueprintLibrary Function DrawTextFormatted
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics
{
	struct WidgetBlueprintLibrary_eventDrawTextFormatted_Parms
	{
		FPaintContext Context;
		FText Text;
		FVector2D Position;
		UFont* Font;
		float FontSize;
		FName FontTypeFace;
		FLinearColor Tint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Painting" },
		{ "Comment", "/**\n\x09 * Draws text.\n\x09 *\n\x09 * @param Text\x09\x09\x09The string to draw.\n\x09 * @param Position\x09\x09The starting position where the text is drawn in local space.\n\x09 * @param Tint\x09\x09\x09""Color to render the line.\n\x09 */" },
		{ "CPP_Default_FontSize", "16.000000" },
		{ "CPP_Default_FontTypeFace", "Regular" },
		{ "CPP_Default_Tint", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "DisplayName", "Draw Text" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Draws text.\n\n@param Text                  The string to draw.\n@param Position              The starting position where the text is drawn in local space.\n@param Tint                  Color to render the line." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FontSize;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FontTypeFace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawTextFormatted_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(0, nullptr) }; // 587985271
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawTextFormatted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawTextFormatted_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawTextFormatted_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawTextFormatted_Parms, FontSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_FontTypeFace = { "FontTypeFace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawTextFormatted_Parms, FontTypeFace), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventDrawTextFormatted_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_FontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_FontTypeFace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::NewProp_Tint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "DrawTextFormatted", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::WidgetBlueprintLibrary_eventDrawTextFormatted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::WidgetBlueprintLibrary_eventDrawTextFormatted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execDrawTextFormatted)
{
	P_GET_STRUCT_REF(FPaintContext,Z_Param_Out_Context);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_GET_OBJECT(UFont,Z_Param_Font);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FontSize);
	P_GET_PROPERTY(FNameProperty,Z_Param_FontTypeFace);
	P_GET_STRUCT(FLinearColor,Z_Param_Tint);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::DrawTextFormatted(Z_Param_Out_Context,Z_Param_Out_Text,Z_Param_Position,Z_Param_Font,Z_Param_FontSize,Z_Param_FontTypeFace,Z_Param_Tint);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function DrawTextFormatted

// Begin Class UWidgetBlueprintLibrary Function EndDragDrop
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics
{
	struct WidgetBlueprintLibrary_eventEndDragDrop_Parms
	{
		FEventReply Reply;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Drag and Drop|Event Reply" },
		{ "Comment", "/**\n\x09 * An event should return FReply::Handled().EndDragDrop() to request that the current drag/drop operation be terminated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "An event should return FReply::Handled().EndDragDrop() to request that the current drag/drop operation be terminated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventEndDragDrop_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventEndDragDrop_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "EndDragDrop", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::WidgetBlueprintLibrary_eventEndDragDrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::WidgetBlueprintLibrary_eventEndDragDrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execEndDragDrop)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::EndDragDrop(Z_Param_Out_Reply);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function EndDragDrop

// Begin Class UWidgetBlueprintLibrary Function GetAllWidgetsOfClass
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics
{
	struct WidgetBlueprintLibrary_eventGetAllWidgetsOfClass_Parms
	{
		UObject* WorldContextObject;
		TArray<UUserWidget*> FoundWidgets;
		TSubclassOf<UUserWidget> WidgetClass;
		bool TopLevelOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09 * Find all widgets of a certain class.\n\x09 * @param FoundWidgets The widgets that were found matching the filter.\n\x09 * @param WidgetClass The widget class to filter by.\n\x09 * @param TopLevelOnly Only the widgets that are direct children of the viewport will be returned.\n\x09 */" },
		{ "CPP_Default_TopLevelOnly", "true" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "DynamicOutputParam", "FoundWidgets" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Find all widgets of a certain class.\n@param FoundWidgets The widgets that were found matching the filter.\n@param WidgetClass The widget class to filter by.\n@param TopLevelOnly Only the widgets that are direct children of the viewport will be returned." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundWidgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundWidgets;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static void NewProp_TopLevelOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TopLevelOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetAllWidgetsOfClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_FoundWidgets_Inner = { "FoundWidgets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_FoundWidgets = { "FoundWidgets", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetAllWidgetsOfClass_Parms, FoundWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundWidgets_MetaData), NewProp_FoundWidgets_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetAllWidgetsOfClass_Parms, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_TopLevelOnly_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventGetAllWidgetsOfClass_Parms*)Obj)->TopLevelOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_TopLevelOnly = { "TopLevelOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventGetAllWidgetsOfClass_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_TopLevelOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_FoundWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_FoundWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::NewProp_TopLevelOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetAllWidgetsOfClass", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::WidgetBlueprintLibrary_eventGetAllWidgetsOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0442240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::WidgetBlueprintLibrary_eventGetAllWidgetsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetAllWidgetsOfClass)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets);
	P_GET_OBJECT(UClass,Z_Param_WidgetClass);
	P_GET_UBOOL(Z_Param_TopLevelOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(Z_Param_WorldContextObject,Z_Param_Out_FoundWidgets,Z_Param_WidgetClass,Z_Param_TopLevelOnly);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetAllWidgetsOfClass

// Begin Class UWidgetBlueprintLibrary Function GetAllWidgetsWithInterface
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics
{
	struct WidgetBlueprintLibrary_eventGetAllWidgetsWithInterface_Parms
	{
		UObject* WorldContextObject;
		TArray<UUserWidget*> FoundWidgets;
		TSubclassOf<UInterface> Interface;
		bool TopLevelOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**\n\x09* Find all widgets in the world with the specified interface.\n\x09* This is a slow operation, use with caution e.g. do not use every frame.\n\x09* @param Interface The interface to find. Must be specified or result array will be empty.\n\x09* @param FoundWidgets Output array of widgets that implement the specified interface.\n\x09* @param TopLevelOnly Only the widgets that are direct children of the viewport will be returned.\n\x09*/" },
		{ "DeterminesOutputType", "WidgetClass" },
		{ "DynamicOutputParam", "FoundWidgets" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Find all widgets in the world with the specified interface.\nThis is a slow operation, use with caution e.g. do not use every frame.\n@param Interface The interface to find. Must be specified or result array will be empty.\n@param FoundWidgets Output array of widgets that implement the specified interface.\n@param TopLevelOnly Only the widgets that are direct children of the viewport will be returned." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundWidgets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FoundWidgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundWidgets;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Interface;
	static void NewProp_TopLevelOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TopLevelOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetAllWidgetsWithInterface_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_FoundWidgets_Inner = { "FoundWidgets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_FoundWidgets = { "FoundWidgets", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetAllWidgetsWithInterface_Parms, FoundWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundWidgets_MetaData), NewProp_FoundWidgets_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetAllWidgetsWithInterface_Parms, Interface), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_TopLevelOnly_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventGetAllWidgetsWithInterface_Parms*)Obj)->TopLevelOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_TopLevelOnly = { "TopLevelOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventGetAllWidgetsWithInterface_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_TopLevelOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_FoundWidgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_FoundWidgets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_Interface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::NewProp_TopLevelOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetAllWidgetsWithInterface", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::WidgetBlueprintLibrary_eventGetAllWidgetsWithInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0442240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::WidgetBlueprintLibrary_eventGetAllWidgetsWithInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetAllWidgetsWithInterface)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(UUserWidget*,Z_Param_Out_FoundWidgets);
	P_GET_OBJECT(UClass,Z_Param_Interface);
	P_GET_UBOOL(Z_Param_TopLevelOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(Z_Param_WorldContextObject,Z_Param_Out_FoundWidgets,Z_Param_Interface,Z_Param_TopLevelOnly);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetAllWidgetsWithInterface

// Begin Class UWidgetBlueprintLibrary Function GetBrushResource
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics
{
	struct WidgetBlueprintLibrary_eventGetBrushResource_Parms
	{
		FSlateBrush Brush;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/**\n\x09 * Gets the resource object on a brush.  This could be a UTexture2D or a UMaterialInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Gets the resource object on a brush.  This could be a UTexture2D or a UMaterialInterface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetBrushResource_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) }; // 1704263518
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetBrushResource_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetBrushResource", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::WidgetBlueprintLibrary_eventGetBrushResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::WidgetBlueprintLibrary_eventGetBrushResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetBrushResource)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResource(Z_Param_Out_Brush);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetBrushResource

// Begin Class UWidgetBlueprintLibrary Function GetBrushResourceAsMaterial
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics
{
	struct WidgetBlueprintLibrary_eventGetBrushResourceAsMaterial_Parms
	{
		FSlateBrush Brush;
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/**\n\x09 * Gets the brush resource as a material.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Gets the brush resource as a material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetBrushResourceAsMaterial_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) }; // 1704263518
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetBrushResourceAsMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetBrushResourceAsMaterial", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::WidgetBlueprintLibrary_eventGetBrushResourceAsMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::WidgetBlueprintLibrary_eventGetBrushResourceAsMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetBrushResourceAsMaterial)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(Z_Param_Out_Brush);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetBrushResourceAsMaterial

// Begin Class UWidgetBlueprintLibrary Function GetBrushResourceAsTexture2D
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics
{
	struct WidgetBlueprintLibrary_eventGetBrushResourceAsTexture2D_Parms
	{
		FSlateBrush Brush;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/**\n\x09 * Gets the brush resource as a texture 2D.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Gets the brush resource as a texture 2D." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetBrushResourceAsTexture2D_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) }; // 1704263518
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetBrushResourceAsTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetBrushResourceAsTexture2D", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::WidgetBlueprintLibrary_eventGetBrushResourceAsTexture2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::WidgetBlueprintLibrary_eventGetBrushResourceAsTexture2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetBrushResourceAsTexture2D)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(Z_Param_Out_Brush);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetBrushResourceAsTexture2D

// Begin Class UWidgetBlueprintLibrary Function GetDragDroppingContent
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics
{
	struct WidgetBlueprintLibrary_eventGetDragDroppingContent_Parms
	{
		UDragDropOperation* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Drag and Drop" },
		{ "Comment", "/**\n\x09 * Returns the drag and drop operation that is currently occurring if any, otherwise nothing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Returns the drag and drop operation that is currently occurring if any, otherwise nothing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetDragDroppingContent_Parms, ReturnValue), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetDragDroppingContent", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::WidgetBlueprintLibrary_eventGetDragDroppingContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1402240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::WidgetBlueprintLibrary_eventGetDragDroppingContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetDragDroppingContent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDragDropOperation**)Z_Param__Result=UWidgetBlueprintLibrary::GetDragDroppingContent();
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetDragDroppingContent

// Begin Class UWidgetBlueprintLibrary Function GetDynamicMaterial
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics
{
	struct WidgetBlueprintLibrary_eventGetDynamicMaterial_Parms
	{
		FSlateBrush Brush;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/**\n\x09 * Gets the material that allows changes to parameters at runtime.  The brush must already have a material assigned to it, \n\x09 * if it does it will automatically be converted to a MID.\n\x09 *\n\x09 * @return A material that supports dynamic input from the game.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Gets the material that allows changes to parameters at runtime.  The brush must already have a material assigned to it,\nif it does it will automatically be converted to a MID.\n\n@return A material that supports dynamic input from the game." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetDynamicMaterial_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetDynamicMaterial", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::WidgetBlueprintLibrary_eventGetDynamicMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::WidgetBlueprintLibrary_eventGetDynamicMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetDynamicMaterial)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=UWidgetBlueprintLibrary::GetDynamicMaterial(Z_Param_Out_Brush);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetDynamicMaterial

// Begin Class UWidgetBlueprintLibrary Function GetInputEventFromCharacterEvent
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics
{
	struct WidgetBlueprintLibrary_eventGetInputEventFromCharacterEvent_Parms
	{
		FCharacterEvent Event;
		FInputEvent ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Widget" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetInputEventFromCharacterEvent_Parms, Event), Z_Construct_UScriptStruct_FCharacterEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 2862159117
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetInputEventFromCharacterEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(0, nullptr) }; // 586465545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetInputEventFromCharacterEvent", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::WidgetBlueprintLibrary_eventGetInputEventFromCharacterEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::WidgetBlueprintLibrary_eventGetInputEventFromCharacterEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetInputEventFromCharacterEvent)
{
	P_GET_STRUCT_REF(FCharacterEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetInputEventFromCharacterEvent

// Begin Class UWidgetBlueprintLibrary Function GetInputEventFromKeyEvent
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics
{
	struct WidgetBlueprintLibrary_eventGetInputEventFromKeyEvent_Parms
	{
		FKeyEvent Event;
		FInputEvent ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Widget" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetInputEventFromKeyEvent_Parms, Event), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 3930076448
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetInputEventFromKeyEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(0, nullptr) }; // 586465545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetInputEventFromKeyEvent", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::WidgetBlueprintLibrary_eventGetInputEventFromKeyEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::WidgetBlueprintLibrary_eventGetInputEventFromKeyEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetInputEventFromKeyEvent)
{
	P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetInputEventFromKeyEvent

// Begin Class UWidgetBlueprintLibrary Function GetInputEventFromNavigationEvent
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics
{
	struct WidgetBlueprintLibrary_eventGetInputEventFromNavigationEvent_Parms
	{
		FNavigationEvent Event;
		FInputEvent ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Widget" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetInputEventFromNavigationEvent_Parms, Event), Z_Construct_UScriptStruct_FNavigationEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 2082393221
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetInputEventFromNavigationEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(0, nullptr) }; // 586465545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetInputEventFromNavigationEvent", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::WidgetBlueprintLibrary_eventGetInputEventFromNavigationEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::WidgetBlueprintLibrary_eventGetInputEventFromNavigationEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetInputEventFromNavigationEvent)
{
	P_GET_STRUCT_REF(FNavigationEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetInputEventFromNavigationEvent

// Begin Class UWidgetBlueprintLibrary Function GetInputEventFromPointerEvent
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics
{
	struct WidgetBlueprintLibrary_eventGetInputEventFromPointerEvent_Parms
	{
		FPointerEvent Event;
		FInputEvent ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Widget" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetInputEventFromPointerEvent_Parms, Event), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 2513801729
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetInputEventFromPointerEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(0, nullptr) }; // 586465545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetInputEventFromPointerEvent", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::WidgetBlueprintLibrary_eventGetInputEventFromPointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::WidgetBlueprintLibrary_eventGetInputEventFromPointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetInputEventFromPointerEvent)
{
	P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInputEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetInputEventFromPointerEvent

// Begin Class UWidgetBlueprintLibrary Function GetKeyEventFromAnalogInputEvent
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics
{
	struct WidgetBlueprintLibrary_eventGetKeyEventFromAnalogInputEvent_Parms
	{
		FAnalogInputEvent Event;
		FKeyEvent ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Widget" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetKeyEventFromAnalogInputEvent_Parms, Event), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 485268202
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetKeyEventFromAnalogInputEvent_Parms, ReturnValue), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(0, nullptr) }; // 3930076448
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetKeyEventFromAnalogInputEvent", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::WidgetBlueprintLibrary_eventGetKeyEventFromAnalogInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::WidgetBlueprintLibrary_eventGetKeyEventFromAnalogInputEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetKeyEventFromAnalogInputEvent)
{
	P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKeyEvent*)Z_Param__Result=UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(Z_Param_Out_Event);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetKeyEventFromAnalogInputEvent

// Begin Class UWidgetBlueprintLibrary Function GetSafeZonePadding
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics
{
	struct WidgetBlueprintLibrary_eventGetSafeZonePadding_Parms
	{
		UObject* WorldContextObject;
		FVector4 SafePadding;
		FVector2D SafePaddingScale;
		FVector4 SpillOverPadding;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Safe Zone" },
		{ "Comment", "/**\n\x09 * Gets the amount of padding that needs to be added when accounting for the safe zone on TVs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Gets the amount of padding that needs to be added when accounting for the safe zone on TVs." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SafePadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SafePaddingScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpillOverPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetSafeZonePadding_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::NewProp_SafePadding = { "SafePadding", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetSafeZonePadding_Parms, SafePadding), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::NewProp_SafePaddingScale = { "SafePaddingScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetSafeZonePadding_Parms, SafePaddingScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::NewProp_SpillOverPadding = { "SpillOverPadding", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventGetSafeZonePadding_Parms, SpillOverPadding), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::NewProp_SafePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::NewProp_SafePaddingScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::NewProp_SpillOverPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "GetSafeZonePadding", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::WidgetBlueprintLibrary_eventGetSafeZonePadding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::WidgetBlueprintLibrary_eventGetSafeZonePadding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execGetSafeZonePadding)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_SafePadding);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_SafePaddingScale);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_SpillOverPadding);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::GetSafeZonePadding(Z_Param_WorldContextObject,Z_Param_Out_SafePadding,Z_Param_Out_SafePaddingScale,Z_Param_Out_SpillOverPadding);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function GetSafeZonePadding

// Begin Class UWidgetBlueprintLibrary Function Handled
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics
{
	struct WidgetBlueprintLibrary_eventHandled_Parms
	{
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "Comment", "/**\n\x09 * The event reply to use when you choose to handle an event.  This will prevent the event \n\x09 * from continuing to bubble up / down the widget hierarchy.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "The event reply to use when you choose to handle an event.  This will prevent the event\nfrom continuing to bubble up / down the widget hierarchy." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventHandled_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "Handled", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::WidgetBlueprintLibrary_eventHandled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::WidgetBlueprintLibrary_eventHandled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execHandled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Handled();
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function Handled

// Begin Class UWidgetBlueprintLibrary Function IsDragDropping
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics
{
	struct WidgetBlueprintLibrary_eventIsDragDropping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Drag and Drop" },
		{ "Comment", "/**\n\x09 * Returns true if a drag/drop event is occurring that a widget can handle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Returns true if a drag/drop event is occurring that a widget can handle." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventIsDragDropping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventIsDragDropping_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "IsDragDropping", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::WidgetBlueprintLibrary_eventIsDragDropping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1402240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::WidgetBlueprintLibrary_eventIsDragDropping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execIsDragDropping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWidgetBlueprintLibrary::IsDragDropping();
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function IsDragDropping

// Begin Class UWidgetBlueprintLibrary Function LockMouse
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics
{
	struct WidgetBlueprintLibrary_eventLockMouse_Parms
	{
		FEventReply Reply;
		UWidget* CapturingWidget;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "DefaultToSelf", "CapturingWidget" },
		{ "HidePin", "CapturingWidget" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapturingWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapturingWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventLockMouse_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::NewProp_CapturingWidget = { "CapturingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventLockMouse_Parms, CapturingWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapturingWidget_MetaData), NewProp_CapturingWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventLockMouse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::NewProp_CapturingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "LockMouse", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::WidgetBlueprintLibrary_eventLockMouse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::WidgetBlueprintLibrary_eventLockMouse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execLockMouse)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_GET_OBJECT(UWidget,Z_Param_CapturingWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::LockMouse(Z_Param_Out_Reply,Z_Param_CapturingWidget);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function LockMouse

// Begin Class UWidgetBlueprintLibrary Function MakeBrushFromAsset
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics
{
	struct WidgetBlueprintLibrary_eventMakeBrushFromAsset_Parms
	{
		USlateBrushAsset* BrushAsset;
		FSlateBrush ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/**\n\x09 * Creates a Slate Brush from a Slate Brush Asset\n\x09 *\n\x09 * @return A new slate brush using the asset's brush.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Creates a Slate Brush from a Slate Brush Asset\n\n@return A new slate brush using the asset's brush." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::NewProp_BrushAsset = { "BrushAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromAsset_Parms, BrushAsset), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::NewProp_BrushAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "MakeBrushFromAsset", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::WidgetBlueprintLibrary_eventMakeBrushFromAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::WidgetBlueprintLibrary_eventMakeBrushFromAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execMakeBrushFromAsset)
{
	P_GET_OBJECT(USlateBrushAsset,Z_Param_BrushAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromAsset(Z_Param_BrushAsset);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function MakeBrushFromAsset

// Begin Class UWidgetBlueprintLibrary Function MakeBrushFromMaterial
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics
{
	struct WidgetBlueprintLibrary_eventMakeBrushFromMaterial_Parms
	{
		UMaterialInterface* Material;
		int32 Width;
		int32 Height;
		FSlateBrush ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/**\n\x09 * Creates a Slate Brush from a Material.  Materials don't have an implicit size, so providing a widget and height\n\x09 * is required to hint slate with how large the image wants to be by default.\n\x09 *\n\x09 * @return A new slate brush using the material.\n\x09 */" },
		{ "CPP_Default_Height", "32" },
		{ "CPP_Default_Width", "32" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Creates a Slate Brush from a Material.  Materials don't have an implicit size, so providing a widget and height\nis required to hint slate with how large the image wants to be by default.\n\n@return A new slate brush using the material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromMaterial_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromMaterial_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromMaterial_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "MakeBrushFromMaterial", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::WidgetBlueprintLibrary_eventMakeBrushFromMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::WidgetBlueprintLibrary_eventMakeBrushFromMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execMakeBrushFromMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromMaterial(Z_Param_Material,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function MakeBrushFromMaterial

// Begin Class UWidgetBlueprintLibrary Function MakeBrushFromTexture
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics
{
	struct WidgetBlueprintLibrary_eventMakeBrushFromTexture_Parms
	{
		UTexture2D* Texture;
		int32 Width;
		int32 Height;
		FSlateBrush ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/** \n\x09 * Creates a Slate Brush from a Texture2D\n\x09 *\n\x09 * @param Width  When less than or equal to zero, the Width of the brush will default to the Width of the Texture\n\x09 * @param Height  When less than or equal to zero, the Height of the brush will default to the Height of the Texture\n\x09 *\n\x09 * @return A new slate brush using the texture.\n\x09 */" },
		{ "CPP_Default_Height", "0" },
		{ "CPP_Default_Width", "0" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Creates a Slate Brush from a Texture2D\n\n@param Width  When less than or equal to zero, the Width of the brush will default to the Width of the Texture\n@param Height  When less than or equal to zero, the Height of the brush will default to the Height of the Texture\n\n@return A new slate brush using the texture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromTexture_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromTexture_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventMakeBrushFromTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "MakeBrushFromTexture", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::WidgetBlueprintLibrary_eventMakeBrushFromTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::WidgetBlueprintLibrary_eventMakeBrushFromTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execMakeBrushFromTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::MakeBrushFromTexture(Z_Param_Texture,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function MakeBrushFromTexture

// Begin Class UWidgetBlueprintLibrary Function NoResourceBrush
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics
{
	struct WidgetBlueprintLibrary_eventNoResourceBrush_Parms
	{
		FSlateBrush ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/**\n\x09 * Creates a Slate Brush that wont draw anything, the \"Null Brush\".\n\x09 *\n\x09 * @return A new slate brush that wont draw anything.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Creates a Slate Brush that wont draw anything, the \"Null Brush\".\n\n@return A new slate brush that wont draw anything." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventNoResourceBrush_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "NoResourceBrush", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::WidgetBlueprintLibrary_eventNoResourceBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::WidgetBlueprintLibrary_eventNoResourceBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execNoResourceBrush)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSlateBrush*)Z_Param__Result=UWidgetBlueprintLibrary::NoResourceBrush();
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function NoResourceBrush

// Begin Class UWidgetBlueprintLibrary Function ReleaseJoystickCapture
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics
{
	struct WidgetBlueprintLibrary_eventReleaseJoystickCapture_Parms
	{
		FEventReply Reply;
		bool bInAllJoysticks;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "CPP_Default_bInAllJoysticks", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ClearUserFocus() instead" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static void NewProp_bInAllJoysticks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllJoysticks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventReleaseJoystickCapture_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
void Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::NewProp_bInAllJoysticks_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventReleaseJoystickCapture_Parms*)Obj)->bInAllJoysticks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::NewProp_bInAllJoysticks = { "bInAllJoysticks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventReleaseJoystickCapture_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::NewProp_bInAllJoysticks_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventReleaseJoystickCapture_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::NewProp_bInAllJoysticks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "ReleaseJoystickCapture", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::WidgetBlueprintLibrary_eventReleaseJoystickCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::WidgetBlueprintLibrary_eventReleaseJoystickCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execReleaseJoystickCapture)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_GET_UBOOL(Z_Param_bInAllJoysticks);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseJoystickCapture(Z_Param_Out_Reply,Z_Param_bInAllJoysticks);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function ReleaseJoystickCapture

// Begin Class UWidgetBlueprintLibrary Function ReleaseMouseCapture
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics
{
	struct WidgetBlueprintLibrary_eventReleaseMouseCapture_Parms
	{
		FEventReply Reply;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventReleaseMouseCapture_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventReleaseMouseCapture_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "ReleaseMouseCapture", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::WidgetBlueprintLibrary_eventReleaseMouseCapture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::WidgetBlueprintLibrary_eventReleaseMouseCapture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execReleaseMouseCapture)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::ReleaseMouseCapture(Z_Param_Out_Reply);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function ReleaseMouseCapture

// Begin Class UWidgetBlueprintLibrary Function RestorePreviousWindowTitleBarState
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Window Title Bar" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "RestorePreviousWindowTitleBarState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execRestorePreviousWindowTitleBarState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState();
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function RestorePreviousWindowTitleBarState

// Begin Class UWidgetBlueprintLibrary Function SetBrushResourceToMaterial
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics
{
	struct WidgetBlueprintLibrary_eventSetBrushResourceToMaterial_Parms
	{
		FSlateBrush Brush;
		UMaterialInterface* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/**\n\x09 * Sets the resource on a brush to be a Material.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Sets the resource on a brush to be a Material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetBrushResourceToMaterial_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetBrushResourceToMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetBrushResourceToMaterial", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::WidgetBlueprintLibrary_eventSetBrushResourceToMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::WidgetBlueprintLibrary_eventSetBrushResourceToMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetBrushResourceToMaterial)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetBrushResourceToMaterial(Z_Param_Out_Brush,Z_Param_Material);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetBrushResourceToMaterial

// Begin Class UWidgetBlueprintLibrary Function SetBrushResourceToTexture
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics
{
	struct WidgetBlueprintLibrary_eventSetBrushResourceToTexture_Parms
	{
		FSlateBrush Brush;
		UTexture2D* Texture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Brush" },
		{ "Comment", "/**\n\x09 * Sets the resource on a brush to be a UTexture2D.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Sets the resource on a brush to be a UTexture2D." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetBrushResourceToTexture_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(0, nullptr) }; // 1704263518
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetBrushResourceToTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::NewProp_Texture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetBrushResourceToTexture", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::WidgetBlueprintLibrary_eventSetBrushResourceToTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::WidgetBlueprintLibrary_eventSetBrushResourceToTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetBrushResourceToTexture)
{
	P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetBrushResourceToTexture(Z_Param_Out_Brush,Z_Param_Texture);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetBrushResourceToTexture

// Begin Class UWidgetBlueprintLibrary Function SetColorVisionDeficiencyType
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics
{
	struct WidgetBlueprintLibrary_eventSetColorVisionDeficiencyType_Parms
	{
		EColorVisionDeficiency Type;
		float Severity;
		bool CorrectDeficiency;
		bool ShowCorrectionWithDeficiency;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Widget|Accessibility" },
		{ "Comment", "/**\n\x09* Apply color deficiency correction settings to the game window \n\x09* @param Type The type of color deficiency correction to apply.\n\x09* @param Severity Intensity of the color deficiency correction effect, from 0 to 1.\n\x09* @param CorrectDeficiency Shifts the color spectrum to the visible range based on the current deficiency type.\n\x09* @param ShowCorrectionWithDeficiency If you're correcting the color deficiency, you can use this to visualize what the correction looks like with the deficiency.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Apply color deficiency correction settings to the game window\n@param Type The type of color deficiency correction to apply.\n@param Severity Intensity of the color deficiency correction effect, from 0 to 1.\n@param CorrectDeficiency Shifts the color spectrum to the visible range based on the current deficiency type.\n@param ShowCorrectionWithDeficiency If you're correcting the color deficiency, you can use this to visualize what the correction looks like with the deficiency." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Severity;
	static void NewProp_CorrectDeficiency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CorrectDeficiency;
	static void NewProp_ShowCorrectionWithDeficiency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCorrectionWithDeficiency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetColorVisionDeficiencyType_Parms, Type), Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, METADATA_PARAMS(0, nullptr) }; // 759567682
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetColorVisionDeficiencyType_Parms, Severity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_CorrectDeficiency_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetColorVisionDeficiencyType_Parms*)Obj)->CorrectDeficiency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_CorrectDeficiency = { "CorrectDeficiency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetColorVisionDeficiencyType_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_CorrectDeficiency_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_ShowCorrectionWithDeficiency_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetColorVisionDeficiencyType_Parms*)Obj)->ShowCorrectionWithDeficiency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_ShowCorrectionWithDeficiency = { "ShowCorrectionWithDeficiency", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetColorVisionDeficiencyType_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_ShowCorrectionWithDeficiency_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_Severity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_CorrectDeficiency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::NewProp_ShowCorrectionWithDeficiency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetColorVisionDeficiencyType", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::WidgetBlueprintLibrary_eventSetColorVisionDeficiencyType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0402240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::WidgetBlueprintLibrary_eventSetColorVisionDeficiencyType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetColorVisionDeficiencyType)
{
	P_GET_ENUM(EColorVisionDeficiency,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Severity);
	P_GET_UBOOL(Z_Param_CorrectDeficiency);
	P_GET_UBOOL(Z_Param_ShowCorrectionWithDeficiency);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(EColorVisionDeficiency(Z_Param_Type),Z_Param_Severity,Z_Param_CorrectDeficiency,Z_Param_ShowCorrectionWithDeficiency);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetColorVisionDeficiencyType

// Begin Class UWidgetBlueprintLibrary Function SetFocusToGameViewport
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Focus" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetFocusToGameViewport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0402240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetFocusToGameViewport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetFocusToGameViewport();
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetFocusToGameViewport

// Begin Class UWidgetBlueprintLibrary Function SetHardwareCursor
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics
{
	struct WidgetBlueprintLibrary_eventSetHardwareCursor_Parms
	{
		UObject* WorldContextObject;
		TEnumAsByte<EMouseCursor::Type> CursorShape;
		FName CursorName;
		FVector2D HotSpot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Hardware Cursor" },
		{ "Comment", "/**\n\x09 * Loads or sets a hardware cursor from the content directory in the game.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Loads or sets a hardware cursor from the content directory in the game." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CursorShape;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CursorName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HotSpot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetHardwareCursor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_CursorShape = { "CursorShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetHardwareCursor_Parms, CursorShape), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(0, nullptr) }; // 3426243287
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_CursorName = { "CursorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetHardwareCursor_Parms, CursorName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_HotSpot = { "HotSpot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetHardwareCursor_Parms, HotSpot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetHardwareCursor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetHardwareCursor_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_CursorShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_CursorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_HotSpot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetHardwareCursor", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::WidgetBlueprintLibrary_eventSetHardwareCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::WidgetBlueprintLibrary_eventSetHardwareCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetHardwareCursor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FByteProperty,Z_Param_CursorShape);
	P_GET_PROPERTY(FNameProperty,Z_Param_CursorName);
	P_GET_STRUCT(FVector2D,Z_Param_HotSpot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWidgetBlueprintLibrary::SetHardwareCursor(Z_Param_WorldContextObject,EMouseCursor::Type(Z_Param_CursorShape),Z_Param_CursorName,Z_Param_HotSpot);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetHardwareCursor

// Begin Class UWidgetBlueprintLibrary Function SetInputMode_GameAndUIEx
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics
{
	struct WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms
	{
		APlayerController* PlayerController;
		UWidget* InWidgetToFocus;
		EMouseLockMode InMouseLockMode;
		bool bHideCursorDuringCapture;
		bool bFlushInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Setup an input mode that allows only the UI to respond to user input, and if the UI doesn't handle it player input / player controller gets a chance.\n\x09 * \n\x09 * Note: This means that any bound Input events in the widget will be called.\n\x09 */" },
		{ "CPP_Default_bFlushInput", "false" },
		{ "CPP_Default_bHideCursorDuringCapture", "true" },
		{ "CPP_Default_InMouseLockMode", "DoNotLock" },
		{ "CPP_Default_InWidgetToFocus", "None" },
		{ "DisplayName", "Set Input Mode Game And UI" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Setup an input mode that allows only the UI to respond to user input, and if the UI doesn't handle it player input / player controller gets a chance.\n\nNote: This means that any bound Input events in the widget will be called." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidgetToFocus_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetToFocus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMouseLockMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InMouseLockMode;
	static void NewProp_bHideCursorDuringCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideCursorDuringCapture;
	static void NewProp_bFlushInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_InWidgetToFocus = { "InWidgetToFocus", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms, InWidgetToFocus), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidgetToFocus_MetaData), NewProp_InWidgetToFocus_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_InMouseLockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_InMouseLockMode = { "InMouseLockMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms, InMouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(0, nullptr) }; // 2166499711
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_bHideCursorDuringCapture_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms*)Obj)->bHideCursorDuringCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_bHideCursorDuringCapture = { "bHideCursorDuringCapture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_bHideCursorDuringCapture_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_bFlushInput_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms*)Obj)->bFlushInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_bFlushInput = { "bFlushInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_bFlushInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushInput_MetaData), NewProp_bFlushInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_InWidgetToFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_InMouseLockMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_InMouseLockMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_bHideCursorDuringCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::NewProp_bFlushInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetInputMode_GameAndUIEx", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0402240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::WidgetBlueprintLibrary_eventSetInputMode_GameAndUIEx_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetInputMode_GameAndUIEx)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus);
	P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode);
	P_GET_UBOOL(Z_Param_bHideCursorDuringCapture);
	P_GET_UBOOL(Z_Param_bFlushInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode),Z_Param_bHideCursorDuringCapture,Z_Param_bFlushInput);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetInputMode_GameAndUIEx

// Begin Class UWidgetBlueprintLibrary Function SetInputMode_GameOnly
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics
{
	struct WidgetBlueprintLibrary_eventSetInputMode_GameOnly_Parms
	{
		APlayerController* PlayerController;
		bool bFlushInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Setup an input mode that allows only player input / player controller to respond to user input.\n\x09 * \n\x09 * Note: Any bound Input Events in this widget will be called.\n\x09 */" },
		{ "CPP_Default_bFlushInput", "false" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Setup an input mode that allows only player input / player controller to respond to user input.\n\nNote: Any bound Input Events in this widget will be called." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static void NewProp_bFlushInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetInputMode_GameOnly_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::NewProp_bFlushInput_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetInputMode_GameOnly_Parms*)Obj)->bFlushInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::NewProp_bFlushInput = { "bFlushInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetInputMode_GameOnly_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::NewProp_bFlushInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushInput_MetaData), NewProp_bFlushInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::NewProp_bFlushInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetInputMode_GameOnly", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::WidgetBlueprintLibrary_eventSetInputMode_GameOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0402240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::WidgetBlueprintLibrary_eventSetInputMode_GameOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetInputMode_GameOnly)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_UBOOL(Z_Param_bFlushInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(Z_Param_PlayerController,Z_Param_bFlushInput);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetInputMode_GameOnly

// Begin Class UWidgetBlueprintLibrary Function SetInputMode_UIOnlyEx
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics
{
	struct WidgetBlueprintLibrary_eventSetInputMode_UIOnlyEx_Parms
	{
		APlayerController* PlayerController;
		UWidget* InWidgetToFocus;
		EMouseLockMode InMouseLockMode;
		bool bFlushInput;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Setup an input mode that allows only the UI to respond to user input.\n\x09 * \n\x09 * Note: This means that any bound Input Events in the widget will not be called!\n\x09 */" },
		{ "CPP_Default_bFlushInput", "false" },
		{ "CPP_Default_InMouseLockMode", "DoNotLock" },
		{ "CPP_Default_InWidgetToFocus", "None" },
		{ "DisplayName", "Set Input Mode UI Only" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "Setup an input mode that allows only the UI to respond to user input.\n\nNote: This means that any bound Input Events in the widget will not be called!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWidgetToFocus_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlushInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetToFocus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMouseLockMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InMouseLockMode;
	static void NewProp_bFlushInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlushInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetInputMode_UIOnlyEx_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_InWidgetToFocus = { "InWidgetToFocus", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetInputMode_UIOnlyEx_Parms, InWidgetToFocus), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWidgetToFocus_MetaData), NewProp_InWidgetToFocus_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_InMouseLockMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_InMouseLockMode = { "InMouseLockMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetInputMode_UIOnlyEx_Parms, InMouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(0, nullptr) }; // 2166499711
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_bFlushInput_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetInputMode_UIOnlyEx_Parms*)Obj)->bFlushInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_bFlushInput = { "bFlushInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetInputMode_UIOnlyEx_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_bFlushInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlushInput_MetaData), NewProp_bFlushInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_InWidgetToFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_InMouseLockMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_InMouseLockMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::NewProp_bFlushInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetInputMode_UIOnlyEx", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::WidgetBlueprintLibrary_eventSetInputMode_UIOnlyEx_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0402240B, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::WidgetBlueprintLibrary_eventSetInputMode_UIOnlyEx_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetInputMode_UIOnlyEx)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus);
	P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode);
	P_GET_UBOOL(Z_Param_bFlushInput);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode),Z_Param_bFlushInput);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetInputMode_UIOnlyEx

// Begin Class UWidgetBlueprintLibrary Function SetMousePosition
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics
{
	struct WidgetBlueprintLibrary_eventSetMousePosition_Parms
	{
		FEventReply Reply;
		FVector2D NewMousePosition;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewMousePosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetMousePosition_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::NewProp_NewMousePosition = { "NewMousePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetMousePosition_Parms, NewMousePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetMousePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::NewProp_NewMousePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetMousePosition", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::WidgetBlueprintLibrary_eventSetMousePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::WidgetBlueprintLibrary_eventSetMousePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetMousePosition)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_GET_STRUCT(FVector2D,Z_Param_NewMousePosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetMousePosition(Z_Param_Out_Reply,Z_Param_NewMousePosition);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetMousePosition

// Begin Class UWidgetBlueprintLibrary Function SetUserFocus
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics
{
	struct WidgetBlueprintLibrary_eventSetUserFocus_Parms
	{
		FEventReply Reply;
		UWidget* FocusWidget;
		bool bInAllUsers;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "Comment", "/**  */" },
		{ "CPP_Default_bInAllUsers", "false" },
		{ "DefaultToSelf", "CapturingWidget" },
		{ "HidePin", "CapturingWidget" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusWidget;
	static void NewProp_bInAllUsers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllUsers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetUserFocus_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_FocusWidget = { "FocusWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetUserFocus_Parms, FocusWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusWidget_MetaData), NewProp_FocusWidget_MetaData) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_bInAllUsers_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetUserFocus_Parms*)Obj)->bInAllUsers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_bInAllUsers = { "bInAllUsers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetUserFocus_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_bInAllUsers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetUserFocus_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_FocusWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_bInAllUsers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetUserFocus", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::WidgetBlueprintLibrary_eventSetUserFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::WidgetBlueprintLibrary_eventSetUserFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetUserFocus)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_GET_OBJECT(UWidget,Z_Param_FocusWidget);
	P_GET_UBOOL(Z_Param_bInAllUsers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::SetUserFocus(Z_Param_Out_Reply,Z_Param_FocusWidget,Z_Param_bInAllUsers);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetUserFocus

// Begin Class UWidgetBlueprintLibrary Function SetWindowTitleBarCloseButtonActive
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics
{
	struct WidgetBlueprintLibrary_eventSetWindowTitleBarCloseButtonActive_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Window Title Bar" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetWindowTitleBarCloseButtonActive_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetWindowTitleBarCloseButtonActive_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetWindowTitleBarCloseButtonActive", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::WidgetBlueprintLibrary_eventSetWindowTitleBarCloseButtonActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::WidgetBlueprintLibrary_eventSetWindowTitleBarCloseButtonActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetWindowTitleBarCloseButtonActive)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(Z_Param_bActive);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetWindowTitleBarCloseButtonActive

// Begin Class UWidgetBlueprintLibrary Function SetWindowTitleBarOnCloseClickedDelegate
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics
{
	struct WidgetBlueprintLibrary_eventSetWindowTitleBarOnCloseClickedDelegate_Parms
	{
		FScriptDelegate Delegate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Window Title Bar" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetWindowTitleBarOnCloseClickedDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2490598098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::NewProp_Delegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetWindowTitleBarOnCloseClickedDelegate", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::WidgetBlueprintLibrary_eventSetWindowTitleBarOnCloseClickedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::WidgetBlueprintLibrary_eventSetWindowTitleBarOnCloseClickedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetWindowTitleBarOnCloseClickedDelegate)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(FOnGameWindowCloseButtonClickedDelegate(Z_Param_Delegate));
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetWindowTitleBarOnCloseClickedDelegate

// Begin Class UWidgetBlueprintLibrary Function SetWindowTitleBarState
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics
{
	struct WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms
	{
		UWidget* TitleBarContent;
		EWindowTitleBarMode Mode;
		bool bTitleBarDragEnabled;
		bool bWindowButtonsVisible;
		bool bTitleBarVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Window Title Bar" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleBarContent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleBarContent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static void NewProp_bTitleBarDragEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTitleBarDragEnabled;
	static void NewProp_bWindowButtonsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWindowButtonsVisible;
	static void NewProp_bTitleBarVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTitleBarVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_TitleBarContent = { "TitleBarContent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms, TitleBarContent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleBarContent_MetaData), NewProp_TitleBarContent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms, Mode), Z_Construct_UEnum_Engine_EWindowTitleBarMode, METADATA_PARAMS(0, nullptr) }; // 3811729529
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bTitleBarDragEnabled_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms*)Obj)->bTitleBarDragEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bTitleBarDragEnabled = { "bTitleBarDragEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bTitleBarDragEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bWindowButtonsVisible_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms*)Obj)->bWindowButtonsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bWindowButtonsVisible = { "bWindowButtonsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bWindowButtonsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bTitleBarVisible_SetBit(void* Obj)
{
	((WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms*)Obj)->bTitleBarVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bTitleBarVisible = { "bTitleBarVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms), &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bTitleBarVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_TitleBarContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bTitleBarDragEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bWindowButtonsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::NewProp_bTitleBarVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "SetWindowTitleBarState", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::WidgetBlueprintLibrary_eventSetWindowTitleBarState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execSetWindowTitleBarState)
{
	P_GET_OBJECT(UWidget,Z_Param_TitleBarContent);
	P_GET_ENUM(EWindowTitleBarMode,Z_Param_Mode);
	P_GET_UBOOL(Z_Param_bTitleBarDragEnabled);
	P_GET_UBOOL(Z_Param_bWindowButtonsVisible);
	P_GET_UBOOL(Z_Param_bTitleBarVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWidgetBlueprintLibrary::SetWindowTitleBarState(Z_Param_TitleBarContent,EWindowTitleBarMode(Z_Param_Mode),Z_Param_bTitleBarDragEnabled,Z_Param_bWindowButtonsVisible,Z_Param_bTitleBarVisible);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function SetWindowTitleBarState

// Begin Class UWidgetBlueprintLibrary Function Unhandled
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics
{
	struct WidgetBlueprintLibrary_eventUnhandled_Parms
	{
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "Comment", "/** The event reply to use when you choose not to handle an event. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ToolTip", "The event reply to use when you choose not to handle an event." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventUnhandled_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "Unhandled", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::WidgetBlueprintLibrary_eventUnhandled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::WidgetBlueprintLibrary_eventUnhandled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execUnhandled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::Unhandled();
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function Unhandled

// Begin Class UWidgetBlueprintLibrary Function UnlockMouse
struct Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics
{
	struct WidgetBlueprintLibrary_eventUnlockMouse_Parms
	{
		FEventReply Reply;
		FEventReply ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget|Event Reply" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::NewProp_Reply = { "Reply", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventUnlockMouse_Parms, Reply), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetBlueprintLibrary_eventUnlockMouse_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(0, nullptr) }; // 615652629
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::NewProp_Reply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetBlueprintLibrary, nullptr, "UnlockMouse", nullptr, nullptr, Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::WidgetBlueprintLibrary_eventUnlockMouse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::WidgetBlueprintLibrary_eventUnlockMouse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidgetBlueprintLibrary::execUnlockMouse)
{
	P_GET_STRUCT_REF(FEventReply,Z_Param_Out_Reply);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FEventReply*)Z_Param__Result=UWidgetBlueprintLibrary::UnlockMouse(Z_Param_Out_Reply);
	P_NATIVE_END;
}
// End Class UWidgetBlueprintLibrary Function UnlockMouse

// Begin Class UWidgetBlueprintLibrary
void UWidgetBlueprintLibrary::StaticRegisterNativesUWidgetBlueprintLibrary()
{
	UClass* Class = UWidgetBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelDragDrop", &UWidgetBlueprintLibrary::execCancelDragDrop },
		{ "CaptureJoystick", &UWidgetBlueprintLibrary::execCaptureJoystick },
		{ "CaptureMouse", &UWidgetBlueprintLibrary::execCaptureMouse },
		{ "ClearUserFocus", &UWidgetBlueprintLibrary::execClearUserFocus },
		{ "Create", &UWidgetBlueprintLibrary::execCreate },
		{ "CreateDragDropOperation", &UWidgetBlueprintLibrary::execCreateDragDropOperation },
		{ "DetectDrag", &UWidgetBlueprintLibrary::execDetectDrag },
		{ "DetectDragIfPressed", &UWidgetBlueprintLibrary::execDetectDragIfPressed },
		{ "DismissAllMenus", &UWidgetBlueprintLibrary::execDismissAllMenus },
		{ "DrawBox", &UWidgetBlueprintLibrary::execDrawBox },
		{ "DrawLine", &UWidgetBlueprintLibrary::execDrawLine },
		{ "DrawLines", &UWidgetBlueprintLibrary::execDrawLines },
		{ "DrawSpline", &UWidgetBlueprintLibrary::execDrawSpline },
		{ "DrawText", &UWidgetBlueprintLibrary::execDrawText },
		{ "DrawTextFormatted", &UWidgetBlueprintLibrary::execDrawTextFormatted },
		{ "EndDragDrop", &UWidgetBlueprintLibrary::execEndDragDrop },
		{ "GetAllWidgetsOfClass", &UWidgetBlueprintLibrary::execGetAllWidgetsOfClass },
		{ "GetAllWidgetsWithInterface", &UWidgetBlueprintLibrary::execGetAllWidgetsWithInterface },
		{ "GetBrushResource", &UWidgetBlueprintLibrary::execGetBrushResource },
		{ "GetBrushResourceAsMaterial", &UWidgetBlueprintLibrary::execGetBrushResourceAsMaterial },
		{ "GetBrushResourceAsTexture2D", &UWidgetBlueprintLibrary::execGetBrushResourceAsTexture2D },
		{ "GetDragDroppingContent", &UWidgetBlueprintLibrary::execGetDragDroppingContent },
		{ "GetDynamicMaterial", &UWidgetBlueprintLibrary::execGetDynamicMaterial },
		{ "GetInputEventFromCharacterEvent", &UWidgetBlueprintLibrary::execGetInputEventFromCharacterEvent },
		{ "GetInputEventFromKeyEvent", &UWidgetBlueprintLibrary::execGetInputEventFromKeyEvent },
		{ "GetInputEventFromNavigationEvent", &UWidgetBlueprintLibrary::execGetInputEventFromNavigationEvent },
		{ "GetInputEventFromPointerEvent", &UWidgetBlueprintLibrary::execGetInputEventFromPointerEvent },
		{ "GetKeyEventFromAnalogInputEvent", &UWidgetBlueprintLibrary::execGetKeyEventFromAnalogInputEvent },
		{ "GetSafeZonePadding", &UWidgetBlueprintLibrary::execGetSafeZonePadding },
		{ "Handled", &UWidgetBlueprintLibrary::execHandled },
		{ "IsDragDropping", &UWidgetBlueprintLibrary::execIsDragDropping },
		{ "LockMouse", &UWidgetBlueprintLibrary::execLockMouse },
		{ "MakeBrushFromAsset", &UWidgetBlueprintLibrary::execMakeBrushFromAsset },
		{ "MakeBrushFromMaterial", &UWidgetBlueprintLibrary::execMakeBrushFromMaterial },
		{ "MakeBrushFromTexture", &UWidgetBlueprintLibrary::execMakeBrushFromTexture },
		{ "NoResourceBrush", &UWidgetBlueprintLibrary::execNoResourceBrush },
		{ "ReleaseJoystickCapture", &UWidgetBlueprintLibrary::execReleaseJoystickCapture },
		{ "ReleaseMouseCapture", &UWidgetBlueprintLibrary::execReleaseMouseCapture },
		{ "RestorePreviousWindowTitleBarState", &UWidgetBlueprintLibrary::execRestorePreviousWindowTitleBarState },
		{ "SetBrushResourceToMaterial", &UWidgetBlueprintLibrary::execSetBrushResourceToMaterial },
		{ "SetBrushResourceToTexture", &UWidgetBlueprintLibrary::execSetBrushResourceToTexture },
		{ "SetColorVisionDeficiencyType", &UWidgetBlueprintLibrary::execSetColorVisionDeficiencyType },
		{ "SetFocusToGameViewport", &UWidgetBlueprintLibrary::execSetFocusToGameViewport },
		{ "SetHardwareCursor", &UWidgetBlueprintLibrary::execSetHardwareCursor },
		{ "SetInputMode_GameAndUIEx", &UWidgetBlueprintLibrary::execSetInputMode_GameAndUIEx },
		{ "SetInputMode_GameOnly", &UWidgetBlueprintLibrary::execSetInputMode_GameOnly },
		{ "SetInputMode_UIOnlyEx", &UWidgetBlueprintLibrary::execSetInputMode_UIOnlyEx },
		{ "SetMousePosition", &UWidgetBlueprintLibrary::execSetMousePosition },
		{ "SetUserFocus", &UWidgetBlueprintLibrary::execSetUserFocus },
		{ "SetWindowTitleBarCloseButtonActive", &UWidgetBlueprintLibrary::execSetWindowTitleBarCloseButtonActive },
		{ "SetWindowTitleBarOnCloseClickedDelegate", &UWidgetBlueprintLibrary::execSetWindowTitleBarOnCloseClickedDelegate },
		{ "SetWindowTitleBarState", &UWidgetBlueprintLibrary::execSetWindowTitleBarState },
		{ "Unhandled", &UWidgetBlueprintLibrary::execUnhandled },
		{ "UnlockMouse", &UWidgetBlueprintLibrary::execUnlockMouse },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprintLibrary);
UClass* Z_Construct_UClass_UWidgetBlueprintLibrary_NoRegister()
{
	return UWidgetBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_UWidgetBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/WidgetBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintLibrary.h" },
		{ "ScriptName", "WidgetLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_CancelDragDrop, "CancelDragDrop" }, // 2292969715
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureJoystick, "CaptureJoystick" }, // 2626026212
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_CaptureMouse, "CaptureMouse" }, // 2862334069
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_ClearUserFocus, "ClearUserFocus" }, // 4113373173
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_Create, "Create" }, // 1381456626
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_CreateDragDropOperation, "CreateDragDropOperation" }, // 3221924027
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDrag, "DetectDrag" }, // 4202303077
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_DetectDragIfPressed, "DetectDragIfPressed" }, // 3862340968
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_DismissAllMenus, "DismissAllMenus" }, // 2231473498
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawBox, "DrawBox" }, // 3954059942
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLine, "DrawLine" }, // 2564474742
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawLines, "DrawLines" }, // 1856498131
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawSpline, "DrawSpline" }, // 3252828629
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawText, "DrawText" }, // 4184292325
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_DrawTextFormatted, "DrawTextFormatted" }, // 4071000266
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_EndDragDrop, "EndDragDrop" }, // 4186676346
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsOfClass, "GetAllWidgetsOfClass" }, // 3551713186
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetAllWidgetsWithInterface, "GetAllWidgetsWithInterface" }, // 1377366083
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResource, "GetBrushResource" }, // 3299163583
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsMaterial, "GetBrushResourceAsMaterial" }, // 1293204355
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D, "GetBrushResourceAsTexture2D" }, // 3726895296
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDragDroppingContent, "GetDragDroppingContent" }, // 3598973988
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetDynamicMaterial, "GetDynamicMaterial" }, // 691466401
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent, "GetInputEventFromCharacterEvent" }, // 4278372808
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromKeyEvent, "GetInputEventFromKeyEvent" }, // 2331904189
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent, "GetInputEventFromNavigationEvent" }, // 1829811224
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetInputEventFromPointerEvent, "GetInputEventFromPointerEvent" }, // 1832370607
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent, "GetKeyEventFromAnalogInputEvent" }, // 1558868349
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_GetSafeZonePadding, "GetSafeZonePadding" }, // 1390274020
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_Handled, "Handled" }, // 3663261200
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_IsDragDropping, "IsDragDropping" }, // 144882302
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_LockMouse, "LockMouse" }, // 1167220804
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromAsset, "MakeBrushFromAsset" }, // 1756046528
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromMaterial, "MakeBrushFromMaterial" }, // 4105890620
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_MakeBrushFromTexture, "MakeBrushFromTexture" }, // 3845434954
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_NoResourceBrush, "NoResourceBrush" }, // 1141762340
		{ &Z_Construct_UDelegateFunction_UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature, "OnGameWindowCloseButtonClickedDelegate__DelegateSignature" }, // 2490598098
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseJoystickCapture, "ReleaseJoystickCapture" }, // 2936508463
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_ReleaseMouseCapture, "ReleaseMouseCapture" }, // 3224521921
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState, "RestorePreviousWindowTitleBarState" }, // 2602520706
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToMaterial, "SetBrushResourceToMaterial" }, // 1550606622
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetBrushResourceToTexture, "SetBrushResourceToTexture" }, // 1648822497
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetColorVisionDeficiencyType, "SetColorVisionDeficiencyType" }, // 1811198722
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetFocusToGameViewport, "SetFocusToGameViewport" }, // 429938465
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetHardwareCursor, "SetHardwareCursor" }, // 2037212819
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx, "SetInputMode_GameAndUIEx" }, // 1037245732
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_GameOnly, "SetInputMode_GameOnly" }, // 4273146537
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx, "SetInputMode_UIOnlyEx" }, // 3284402670
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetMousePosition, "SetMousePosition" }, // 3819657174
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetUserFocus, "SetUserFocus" }, // 621574998
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive, "SetWindowTitleBarCloseButtonActive" }, // 2569309435
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate, "SetWindowTitleBarOnCloseClickedDelegate" }, // 779710308
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_SetWindowTitleBarState, "SetWindowTitleBarState" }, // 1553509794
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_Unhandled, "Unhandled" }, // 2768297607
		{ &Z_Construct_UFunction_UWidgetBlueprintLibrary_UnlockMouse, "UnlockMouse" }, // 2434772779
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintLibrary_Statics::ClassParams = {
	&UWidgetBlueprintLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UWidgetBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UWidgetBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetBlueprintLibrary.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetBlueprintLibrary>()
{
	return UWidgetBlueprintLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintLibrary);
UWidgetBlueprintLibrary::~UWidgetBlueprintLibrary() {}
// End Class UWidgetBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprintLibrary, UWidgetBlueprintLibrary::StaticClass, TEXT("UWidgetBlueprintLibrary"), &Z_Registration_Info_UClass_UWidgetBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprintLibrary), 3376562457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_1126478603(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
