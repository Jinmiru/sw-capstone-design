// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/SpinBox.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinBox() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
UMG_API UClass* Z_Construct_UClass_USpinBox();
UMG_API UClass* Z_Construct_UClass_USpinBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType();
UMG_API UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnSpinBoxValueChangedEvent
struct Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics
{
	struct SpinBox_eventOnSpinBoxValueChangedEvent_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventOnSpinBoxValueChangedEvent_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "OnSpinBoxValueChangedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::SpinBox_eventOnSpinBoxValueChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::SpinBox_eventOnSpinBoxValueChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USpinBox::FOnSpinBoxValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxValueChangedEvent, float InValue)
{
	struct SpinBox_eventOnSpinBoxValueChangedEvent_Parms
	{
		float InValue;
	};
	SpinBox_eventOnSpinBoxValueChangedEvent_Parms Parms;
	Parms.InValue=InValue;
	OnSpinBoxValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSpinBoxValueChangedEvent

// Begin Delegate FOnSpinBoxValueCommittedEvent
struct Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics
{
	struct SpinBox_eventOnSpinBoxValueCommittedEvent_Parms
	{
		float InValue;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventOnSpinBoxValueCommittedEvent_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventOnSpinBoxValueCommittedEvent_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "OnSpinBoxValueCommittedEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::SpinBox_eventOnSpinBoxValueCommittedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::SpinBox_eventOnSpinBoxValueCommittedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USpinBox::FOnSpinBoxValueCommittedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxValueCommittedEvent, float InValue, ETextCommit::Type CommitMethod)
{
	struct SpinBox_eventOnSpinBoxValueCommittedEvent_Parms
	{
		float InValue;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
	SpinBox_eventOnSpinBoxValueCommittedEvent_Parms Parms;
	Parms.InValue=InValue;
	Parms.CommitMethod=CommitMethod;
	OnSpinBoxValueCommittedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSpinBoxValueCommittedEvent

// Begin Delegate FOnSpinBoxBeginSliderMovement
struct Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "OnSpinBoxBeginSliderMovement__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void USpinBox::FOnSpinBoxBeginSliderMovement_DelegateWrapper(const FMulticastScriptDelegate& OnSpinBoxBeginSliderMovement)
{
	OnSpinBoxBeginSliderMovement.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnSpinBoxBeginSliderMovement

// Begin Class USpinBox Function ClearMaxSliderValue
struct Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Clear the maximum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Clear the maximum value that can be specified using the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "ClearMaxSliderValue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpinBox_ClearMaxSliderValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_ClearMaxSliderValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execClearMaxSliderValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMaxSliderValue();
	P_NATIVE_END;
}
// End Class USpinBox Function ClearMaxSliderValue

// Begin Class USpinBox Function ClearMaxValue
struct Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Clear the maximum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Clear the maximum value that can be manually set in the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "ClearMaxValue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpinBox_ClearMaxValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_ClearMaxValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execClearMaxValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMaxValue();
	P_NATIVE_END;
}
// End Class USpinBox Function ClearMaxValue

// Begin Class USpinBox Function ClearMinSliderValue
struct Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Clear the minimum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Clear the minimum value that can be specified using the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "ClearMinSliderValue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpinBox_ClearMinSliderValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_ClearMinSliderValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execClearMinSliderValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMinSliderValue();
	P_NATIVE_END;
}
// End Class USpinBox Function ClearMinSliderValue

// Begin Class USpinBox Function ClearMinValue
struct Z_Construct_UFunction_USpinBox_ClearMinValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Clear the minimum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Clear the minimum value that can be manually set in the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_ClearMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "ClearMinValue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_ClearMinValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_ClearMinValue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USpinBox_ClearMinValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_ClearMinValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execClearMinValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMinValue();
	P_NATIVE_END;
}
// End Class USpinBox Function ClearMinValue

// Begin Class USpinBox Function GetAlwaysUsesDeltaSnap
struct Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics
{
	struct SpinBox_eventGetAlwaysUsesDeltaSnap_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Get whether the spin box uses delta snap on type. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get whether the spin box uses delta snap on type." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SpinBox_eventGetAlwaysUsesDeltaSnap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpinBox_eventGetAlwaysUsesDeltaSnap_Parms), &Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetAlwaysUsesDeltaSnap", nullptr, nullptr, Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::SpinBox_eventGetAlwaysUsesDeltaSnap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::SpinBox_eventGetAlwaysUsesDeltaSnap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execGetAlwaysUsesDeltaSnap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAlwaysUsesDeltaSnap();
	P_NATIVE_END;
}
// End Class USpinBox Function GetAlwaysUsesDeltaSnap

// Begin Class USpinBox Function GetDelta
struct Z_Construct_UFunction_USpinBox_GetDelta_Statics
{
	struct SpinBox_eventGetDelta_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current delta for the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current delta for the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventGetDelta_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetDelta", nullptr, nullptr, Z_Construct_UFunction_USpinBox_GetDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_GetDelta_Statics::SpinBox_eventGetDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_GetDelta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_GetDelta_Statics::SpinBox_eventGetDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_GetDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_GetDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execGetDelta)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDelta();
	P_NATIVE_END;
}
// End Class USpinBox Function GetDelta

// Begin Class USpinBox Function GetMaxFractionalDigits
struct Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics
{
	struct SpinBox_eventGetMaxFractionalDigits_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current Max Fractional Digits for the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current Max Fractional Digits for the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventGetMaxFractionalDigits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMaxFractionalDigits", nullptr, nullptr, Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::SpinBox_eventGetMaxFractionalDigits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::SpinBox_eventGetMaxFractionalDigits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execGetMaxFractionalDigits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxFractionalDigits();
	P_NATIVE_END;
}
// End Class USpinBox Function GetMaxFractionalDigits

// Begin Class USpinBox Function GetMaxSliderValue
struct Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics
{
	struct SpinBox_eventGetMaxSliderValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current maximum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current maximum value that can be specified using the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventGetMaxSliderValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMaxSliderValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::SpinBox_eventGetMaxSliderValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::SpinBox_eventGetMaxSliderValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_GetMaxSliderValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_GetMaxSliderValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execGetMaxSliderValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxSliderValue();
	P_NATIVE_END;
}
// End Class USpinBox Function GetMaxSliderValue

// Begin Class USpinBox Function GetMaxValue
struct Z_Construct_UFunction_USpinBox_GetMaxValue_Statics
{
	struct SpinBox_eventGetMaxValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current maximum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current maximum value that can be manually set in the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventGetMaxValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMaxValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::SpinBox_eventGetMaxValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::SpinBox_eventGetMaxValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_GetMaxValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_GetMaxValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execGetMaxValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxValue();
	P_NATIVE_END;
}
// End Class USpinBox Function GetMaxValue

// Begin Class USpinBox Function GetMinFractionalDigits
struct Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics
{
	struct SpinBox_eventGetMinFractionalDigits_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current Min Fractional Digits for the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current Min Fractional Digits for the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventGetMinFractionalDigits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMinFractionalDigits", nullptr, nullptr, Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::SpinBox_eventGetMinFractionalDigits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::SpinBox_eventGetMinFractionalDigits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_GetMinFractionalDigits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_GetMinFractionalDigits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execGetMinFractionalDigits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMinFractionalDigits();
	P_NATIVE_END;
}
// End Class USpinBox Function GetMinFractionalDigits

// Begin Class USpinBox Function GetMinSliderValue
struct Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics
{
	struct SpinBox_eventGetMinSliderValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current minimum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current minimum value that can be specified using the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventGetMinSliderValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMinSliderValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::SpinBox_eventGetMinSliderValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::SpinBox_eventGetMinSliderValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_GetMinSliderValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_GetMinSliderValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execGetMinSliderValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMinSliderValue();
	P_NATIVE_END;
}
// End Class USpinBox Function GetMinSliderValue

// Begin Class USpinBox Function GetMinValue
struct Z_Construct_UFunction_USpinBox_GetMinValue_Statics
{
	struct SpinBox_eventGetMinValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current minimum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current minimum value that can be manually set in the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetMinValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventGetMinValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetMinValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetMinValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetMinValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_GetMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_GetMinValue_Statics::SpinBox_eventGetMinValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetMinValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_GetMinValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_GetMinValue_Statics::SpinBox_eventGetMinValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_GetMinValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_GetMinValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execGetMinValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMinValue();
	P_NATIVE_END;
}
// End Class USpinBox Function GetMinValue

// Begin Class USpinBox Function GetValue
struct Z_Construct_UFunction_USpinBox_GetValue_Statics
{
	struct SpinBox_eventGetValue_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Get the current value of the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Get the current value of the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_GetValue_Statics::SpinBox_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_GetValue_Statics::SpinBox_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execGetValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValue();
	P_NATIVE_END;
}
// End Class USpinBox Function GetValue

// Begin Class USpinBox Function SetAlwaysUsesDeltaSnap
struct Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics
{
	struct SpinBox_eventSetAlwaysUsesDeltaSnap_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Set whether the spin box uses delta snap on type. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set whether the spin box uses delta snap on type." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((SpinBox_eventSetAlwaysUsesDeltaSnap_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SpinBox_eventSetAlwaysUsesDeltaSnap_Parms), &Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetAlwaysUsesDeltaSnap", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::SpinBox_eventSetAlwaysUsesDeltaSnap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::SpinBox_eventSetAlwaysUsesDeltaSnap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetAlwaysUsesDeltaSnap)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAlwaysUsesDeltaSnap(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class USpinBox Function SetAlwaysUsesDeltaSnap

// Begin Class USpinBox Function SetDelta
struct Z_Construct_UFunction_USpinBox_SetDelta_Statics
{
	struct SpinBox_eventSetDelta_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the delta for the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the delta for the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetDelta_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventSetDelta_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetDelta_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetDelta", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetDelta_Statics::SpinBox_eventSetDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetDelta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetDelta_Statics::SpinBox_eventSetDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetDelta)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDelta(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USpinBox Function SetDelta

// Begin Class USpinBox Function SetForegroundColor
struct Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics
{
	struct SpinBox_eventSetForegroundColor_Parms
	{
		FSlateColor InForegroundColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InForegroundColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::NewProp_InForegroundColor = { "InForegroundColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventSetForegroundColor_Parms, InForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(0, nullptr) }; // 2024315916
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::NewProp_InForegroundColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetForegroundColor", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::SpinBox_eventSetForegroundColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::SpinBox_eventSetForegroundColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetForegroundColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetForegroundColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetForegroundColor)
{
	P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForegroundColor(Z_Param_InForegroundColor);
	P_NATIVE_END;
}
// End Class USpinBox Function SetForegroundColor

// Begin Class USpinBox Function SetMaxFractionalDigits
struct Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics
{
	struct SpinBox_eventSetMaxFractionalDigits_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the Max Fractional Digits for the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the Max Fractional Digits for the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventSetMaxFractionalDigits_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMaxFractionalDigits", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::SpinBox_eventSetMaxFractionalDigits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::SpinBox_eventSetMaxFractionalDigits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetMaxFractionalDigits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxFractionalDigits(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USpinBox Function SetMaxFractionalDigits

// Begin Class USpinBox Function SetMaxSliderValue
struct Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics
{
	struct SpinBox_eventSetMaxSliderValue_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the maximum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the maximum value that can be specified using the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventSetMaxSliderValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMaxSliderValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::SpinBox_eventSetMaxSliderValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::SpinBox_eventSetMaxSliderValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetMaxSliderValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetMaxSliderValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetMaxSliderValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxSliderValue(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USpinBox Function SetMaxSliderValue

// Begin Class USpinBox Function SetMaxValue
struct Z_Construct_UFunction_USpinBox_SetMaxValue_Statics
{
	struct SpinBox_eventSetMaxValue_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the maximum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the maximum value that can be manually set in the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventSetMaxValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMaxValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::SpinBox_eventSetMaxValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::SpinBox_eventSetMaxValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetMaxValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetMaxValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetMaxValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxValue(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USpinBox Function SetMaxValue

// Begin Class USpinBox Function SetMinFractionalDigits
struct Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics
{
	struct SpinBox_eventSetMinFractionalDigits_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the Min Fractional Digits for the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the Min Fractional Digits for the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventSetMinFractionalDigits_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMinFractionalDigits", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::SpinBox_eventSetMinFractionalDigits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::SpinBox_eventSetMinFractionalDigits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetMinFractionalDigits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetMinFractionalDigits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetMinFractionalDigits)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinFractionalDigits(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USpinBox Function SetMinFractionalDigits

// Begin Class USpinBox Function SetMinSliderValue
struct Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics
{
	struct SpinBox_eventSetMinSliderValue_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the minimum value that can be specified using the slider. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the minimum value that can be specified using the slider." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventSetMinSliderValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMinSliderValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::SpinBox_eventSetMinSliderValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::SpinBox_eventSetMinSliderValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetMinSliderValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetMinSliderValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetMinSliderValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinSliderValue(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USpinBox Function SetMinSliderValue

// Begin Class USpinBox Function SetMinValue
struct Z_Construct_UFunction_USpinBox_SetMinValue_Statics
{
	struct SpinBox_eventSetMinValue_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the minimum value that can be manually set in the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the minimum value that can be manually set in the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetMinValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventSetMinValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetMinValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetMinValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetMinValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetMinValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetMinValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetMinValue_Statics::SpinBox_eventSetMinValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetMinValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetMinValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetMinValue_Statics::SpinBox_eventSetMinValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetMinValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetMinValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetMinValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMinValue(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USpinBox Function SetMinValue

// Begin Class USpinBox Function SetValue
struct Z_Construct_UFunction_USpinBox_SetValue_Statics
{
	struct SpinBox_eventSetValue_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Set the value of the spin box. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Set the value of the spin box." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpinBox_SetValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpinBox_eventSetValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinBox_SetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinBox_SetValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinBox_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinBox, nullptr, "SetValue", nullptr, nullptr, Z_Construct_UFunction_USpinBox_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpinBox_SetValue_Statics::SpinBox_eventSetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpinBox_SetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpinBox_SetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpinBox_SetValue_Statics::SpinBox_eventSetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpinBox_SetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpinBox_SetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpinBox::execSetValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValue(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class USpinBox Function SetValue

// Begin Class USpinBox
void USpinBox::GetValue_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetValue();
}
void USpinBox::SetValue_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetValue(Value);
}
void USpinBox::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	FSpinBoxStyle& Result = *(FSpinBoxStyle*)OutValue;
	Result = (FSpinBoxStyle)Obj->GetWidgetStyle();
}
void USpinBox::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	FSpinBoxStyle& Value = *(FSpinBoxStyle*)InValue;
	Obj->SetWidgetStyle(Value);
}
void USpinBox::GetMinFractionalDigits_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetMinFractionalDigits();
}
void USpinBox::SetMinFractionalDigits_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetMinFractionalDigits(Value);
}
void USpinBox::GetMaxFractionalDigits_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	int32& Result = *(int32*)OutValue;
	Result = (int32)Obj->GetMaxFractionalDigits();
}
void USpinBox::SetMaxFractionalDigits_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetMaxFractionalDigits(Value);
}
void USpinBox::GetbAlwaysUsesDeltaSnap_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetAlwaysUsesDeltaSnap();
}
void USpinBox::SetbAlwaysUsesDeltaSnap_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAlwaysUsesDeltaSnap(Value);
}
void USpinBox::GetbEnableSlider_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetEnableSlider();
}
void USpinBox::SetbEnableSlider_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetEnableSlider(Value);
}
void USpinBox::GetDelta_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetDelta();
}
void USpinBox::SetDelta_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetDelta(Value);
}
void USpinBox::GetSliderExponent_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetSliderExponent();
}
void USpinBox::SetSliderExponent_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetSliderExponent(Value);
}
void USpinBox::GetFont_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	FSlateFontInfo& Result = *(FSlateFontInfo*)OutValue;
	Result = (FSlateFontInfo)Obj->GetFont();
}
void USpinBox::SetFont_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	FSlateFontInfo& Value = *(FSlateFontInfo*)InValue;
	Obj->SetFont(Value);
}
void USpinBox::GetJustification_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetJustification();
}
void USpinBox::SetJustification_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	ETextJustify::Type Value = (ETextJustify::Type)*(uint8*)InValue;
	Obj->SetJustification(Value);
}
void USpinBox::GetMinDesiredWidth_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMinDesiredWidth();
}
void USpinBox::SetMinDesiredWidth_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMinDesiredWidth(Value);
}
void USpinBox::GetClearKeyboardFocusOnCommit_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetClearKeyboardFocusOnCommit();
}
void USpinBox::SetClearKeyboardFocusOnCommit_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetClearKeyboardFocusOnCommit(Value);
}
void USpinBox::GetSelectAllTextOnCommit_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetSelectAllTextOnCommit();
}
void USpinBox::SetSelectAllTextOnCommit_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetSelectAllTextOnCommit(Value);
}
void USpinBox::GetForegroundColor_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	FSlateColor& Result = *(FSlateColor*)OutValue;
	Result = (FSlateColor)Obj->GetForegroundColor();
}
void USpinBox::SetForegroundColor_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	FSlateColor& Value = *(FSlateColor*)InValue;
	Obj->SetForegroundColor(Value);
}
void USpinBox::GetMinValue_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMinValue();
}
void USpinBox::SetMinValue_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMinValue(Value);
}
void USpinBox::GetMaxValue_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMaxValue();
}
void USpinBox::SetMaxValue_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMaxValue(Value);
}
void USpinBox::GetMinSliderValue_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMinSliderValue();
}
void USpinBox::SetMinSliderValue_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMinSliderValue(Value);
}
void USpinBox::GetMaxSliderValue_WrapperImpl(const void* Object, void* OutValue)
{
	const USpinBox* Obj = (const USpinBox*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMaxSliderValue();
}
void USpinBox::SetMaxSliderValue_WrapperImpl(void* Object, const void* InValue)
{
	USpinBox* Obj = (USpinBox*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMaxSliderValue(Value);
}
void USpinBox::StaticRegisterNativesUSpinBox()
{
	UClass* Class = USpinBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearMaxSliderValue", &USpinBox::execClearMaxSliderValue },
		{ "ClearMaxValue", &USpinBox::execClearMaxValue },
		{ "ClearMinSliderValue", &USpinBox::execClearMinSliderValue },
		{ "ClearMinValue", &USpinBox::execClearMinValue },
		{ "GetAlwaysUsesDeltaSnap", &USpinBox::execGetAlwaysUsesDeltaSnap },
		{ "GetDelta", &USpinBox::execGetDelta },
		{ "GetMaxFractionalDigits", &USpinBox::execGetMaxFractionalDigits },
		{ "GetMaxSliderValue", &USpinBox::execGetMaxSliderValue },
		{ "GetMaxValue", &USpinBox::execGetMaxValue },
		{ "GetMinFractionalDigits", &USpinBox::execGetMinFractionalDigits },
		{ "GetMinSliderValue", &USpinBox::execGetMinSliderValue },
		{ "GetMinValue", &USpinBox::execGetMinValue },
		{ "GetValue", &USpinBox::execGetValue },
		{ "SetAlwaysUsesDeltaSnap", &USpinBox::execSetAlwaysUsesDeltaSnap },
		{ "SetDelta", &USpinBox::execSetDelta },
		{ "SetForegroundColor", &USpinBox::execSetForegroundColor },
		{ "SetMaxFractionalDigits", &USpinBox::execSetMaxFractionalDigits },
		{ "SetMaxSliderValue", &USpinBox::execSetMaxSliderValue },
		{ "SetMaxValue", &USpinBox::execSetMaxValue },
		{ "SetMinFractionalDigits", &USpinBox::execSetMinFractionalDigits },
		{ "SetMinSliderValue", &USpinBox::execSetMinSliderValue },
		{ "SetMinValue", &USpinBox::execSetMinValue },
		{ "SetValue", &USpinBox::execSetValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpinBox);
UClass* Z_Construct_UClass_USpinBox_NoRegister()
{
	return USpinBox::StaticClass();
}
struct Z_Construct_UClass_USpinBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A numerical entry box that allows for direct entry of the number or allows the user to click and slide the number.\n */" },
		{ "IncludePath", "Components/SpinBox.h" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "A numerical entry box that allows for direct entry of the number or allows the user to click and slide the number." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "BlueprintGetter", "GetValue" },
		{ "BlueprintSetter", "SetValue" },
		{ "Category", "Content" },
		{ "Comment", "/** Value stored in this spin box */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Value stored in this spin box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the value of the widget */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the value of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The Style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The Style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFractionalDigits_MetaData[] = {
		{ "BlueprintGetter", "GetMinFractionalDigits" },
		{ "BlueprintSetter", "SetMinFractionalDigits" },
		{ "Category", "Slider" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum required fractional digits - default 1 */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The minimum required fractional digits - default 1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFractionalDigits_MetaData[] = {
		{ "BlueprintGetter", "GetMaxFractionalDigits" },
		{ "BlueprintSetter", "SetMaxFractionalDigits" },
		{ "Category", "Slider" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum required fractional digits - default 6 */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The maximum required fractional digits - default 6" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUsesDeltaSnap_MetaData[] = {
		{ "BlueprintGetter", "GetAlwaysUsesDeltaSnap" },
		{ "BlueprintSetter", "SetAlwaysUsesDeltaSnap" },
		{ "Category", "Slider" },
		{ "Comment", "/** Whether this spin box should use the delta snapping logic for typed values - default false */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether this spin box should use the delta snapping logic for typed values - default false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSlider_MetaData[] = {
		{ "Category", "Slider" },
		{ "Comment", "/** Whether this spin box should have slider feature enabled */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether this spin box should have slider feature enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[] = {
		{ "BlueprintGetter", "GetDelta" },
		{ "BlueprintSetter", "SetDelta" },
		{ "Category", "Slider" },
		{ "Comment", "/** The amount by which to change the spin box value as the slider moves. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The amount by which to change the spin box value as the slider moves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SliderExponent_MetaData[] = {
		{ "Category", "Slider" },
		{ "Comment", "/** The exponent by which to increase the delta as the mouse moves. 1 is constant (never increases the delta). */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The exponent by which to increase the delta as the mouse moves. 1 is constant (never increases the delta)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Font color and opacity (overrides style) */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Font color and opacity (overrides style)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The justification the value text should appear as. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The justification the value text should appear as." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The minimum width of the spin box */" },
		{ "DisplayName", "Minimum Desired Width" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The minimum width of the spin box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardType_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use? */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "If we're on a platform that requires a virtual keyboard, what kind of keyboard should this widget use?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearKeyboardFocusOnCommit_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Whether to remove the keyboard focus from the spin box when the value is committed */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether to remove the keyboard focus from the spin box when the value is committed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAllTextOnCommit_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Whether to select the text in the spin box when the value is committed */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether to select the text in the spin box when the value is committed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[] = {
		{ "BlueprintSetter", "SetForegroundColor" },
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "Comment", "/** Called when the value is changed interactively by the user */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Called when the value is changed interactively by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnValueCommitted_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "Comment", "/** Called when the value is committed. Occurs when the user presses Enter or the text box loses focus. */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Called when the value is committed. Occurs when the user presses Enter or the text box loses focus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginSliderMovement_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "Comment", "/** Called right before the slider begins to move */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Called right before the slider begins to move" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEndSliderMovement_MetaData[] = {
		{ "Category", "SpinBox|Events" },
		{ "Comment", "/** Called right after the slider handle is released by the user */" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Called right after the slider handle is released by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Whether the optional MinValue attribute of the widget is set */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether the optional MinValue attribute of the widget is set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Whether the optional MaxValue attribute of the widget is set */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether the optional MaxValue attribute of the widget is set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Whether the optional MinSliderValue attribute of the widget is set */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether the optional MinSliderValue attribute of the widget is set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxSliderValue_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Whether the optional MaxSliderValue attribute of the widget is set */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "Whether the optional MaxSliderValue attribute of the widget is set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "BlueprintGetter", "GetMinValue" },
		{ "BlueprintSetter", "SetMinValue" },
		{ "Category", "Content" },
		{ "Comment", "/** The minimum allowable value that can be manually entered into the spin box */" },
		{ "DisplayName", "Minimum Value" },
		{ "editcondition", "bOverride_MinValue" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The minimum allowable value that can be manually entered into the spin box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "BlueprintGetter", "GetMaxValue" },
		{ "BlueprintSetter", "SetMaxValue" },
		{ "Category", "Content" },
		{ "Comment", "/** The maximum allowable value that can be manually entered into the spin box */" },
		{ "DisplayName", "Maximum Value" },
		{ "editcondition", "bOverride_MaxValue" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The maximum allowable value that can be manually entered into the spin box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSliderValue_MetaData[] = {
		{ "BlueprintGetter", "GetMinSliderValue" },
		{ "BlueprintSetter", "SetMinSliderValue" },
		{ "Category", "Content" },
		{ "Comment", "/** The minimum allowable value that can be specified using the slider */" },
		{ "DisplayName", "Minimum Slider Value" },
		{ "editcondition", "bOverride_MinSliderValue" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The minimum allowable value that can be specified using the slider" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSliderValue_MetaData[] = {
		{ "BlueprintGetter", "GetMaxSliderValue" },
		{ "BlueprintSetter", "SetMaxSliderValue" },
		{ "Category", "Content" },
		{ "Comment", "/** The maximum allowable value that can be specified using the slider */" },
		{ "DisplayName", "Maximum Slider Value" },
		{ "editcondition", "bOverride_MaxSliderValue" },
		{ "ModuleRelativePath", "Public/Components/SpinBox.h" },
		{ "ToolTip", "The maximum allowable value that can be specified using the slider" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ValueDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinFractionalDigits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFractionalDigits;
	static void NewProp_bAlwaysUsesDeltaSnap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUsesDeltaSnap;
	static void NewProp_bEnableSlider_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSlider;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SliderExponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Font;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Justification;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyboardType;
	static void NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ClearKeyboardFocusOnCommit;
	static void NewProp_SelectAllTextOnCommit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SelectAllTextOnCommit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueCommitted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginSliderMovement;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndSliderMovement;
	static void NewProp_bOverride_MinValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinValue;
	static void NewProp_bOverride_MaxValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxValue;
	static void NewProp_bOverride_MinSliderValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinSliderValue;
	static void NewProp_bOverride_MaxSliderValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxSliderValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSliderValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSliderValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpinBox_ClearMaxSliderValue, "ClearMaxSliderValue" }, // 3871474574
		{ &Z_Construct_UFunction_USpinBox_ClearMaxValue, "ClearMaxValue" }, // 3308627207
		{ &Z_Construct_UFunction_USpinBox_ClearMinSliderValue, "ClearMinSliderValue" }, // 2613072329
		{ &Z_Construct_UFunction_USpinBox_ClearMinValue, "ClearMinValue" }, // 4062571517
		{ &Z_Construct_UFunction_USpinBox_GetAlwaysUsesDeltaSnap, "GetAlwaysUsesDeltaSnap" }, // 3876200877
		{ &Z_Construct_UFunction_USpinBox_GetDelta, "GetDelta" }, // 1818417836
		{ &Z_Construct_UFunction_USpinBox_GetMaxFractionalDigits, "GetMaxFractionalDigits" }, // 2843617683
		{ &Z_Construct_UFunction_USpinBox_GetMaxSliderValue, "GetMaxSliderValue" }, // 2589808865
		{ &Z_Construct_UFunction_USpinBox_GetMaxValue, "GetMaxValue" }, // 541955517
		{ &Z_Construct_UFunction_USpinBox_GetMinFractionalDigits, "GetMinFractionalDigits" }, // 484592312
		{ &Z_Construct_UFunction_USpinBox_GetMinSliderValue, "GetMinSliderValue" }, // 1761452415
		{ &Z_Construct_UFunction_USpinBox_GetMinValue, "GetMinValue" }, // 3983230082
		{ &Z_Construct_UFunction_USpinBox_GetValue, "GetValue" }, // 2850706985
		{ &Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature, "OnSpinBoxBeginSliderMovement__DelegateSignature" }, // 2494479177
		{ &Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature, "OnSpinBoxValueChangedEvent__DelegateSignature" }, // 615379290
		{ &Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature, "OnSpinBoxValueCommittedEvent__DelegateSignature" }, // 275964177
		{ &Z_Construct_UFunction_USpinBox_SetAlwaysUsesDeltaSnap, "SetAlwaysUsesDeltaSnap" }, // 1844593687
		{ &Z_Construct_UFunction_USpinBox_SetDelta, "SetDelta" }, // 2551023232
		{ &Z_Construct_UFunction_USpinBox_SetForegroundColor, "SetForegroundColor" }, // 127537812
		{ &Z_Construct_UFunction_USpinBox_SetMaxFractionalDigits, "SetMaxFractionalDigits" }, // 1711912269
		{ &Z_Construct_UFunction_USpinBox_SetMaxSliderValue, "SetMaxSliderValue" }, // 926506333
		{ &Z_Construct_UFunction_USpinBox_SetMaxValue, "SetMaxValue" }, // 3955975271
		{ &Z_Construct_UFunction_USpinBox_SetMinFractionalDigits, "SetMinFractionalDigits" }, // 1180776843
		{ &Z_Construct_UFunction_USpinBox_SetMinSliderValue, "SetMinSliderValue" }, // 1047170320
		{ &Z_Construct_UFunction_USpinBox_SetMinValue, "SetMinValue" }, // 4208529722
		{ &Z_Construct_UFunction_USpinBox_SetValue, "SetValue" }, // 2817202182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetValue_WrapperImpl, &USpinBox::GetValue_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_ValueDelegate = { "ValueDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinBox, ValueDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueDelegate_MetaData), NewProp_ValueDelegate_MetaData) }; // 4086961303
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetWidgetStyle_WrapperImpl, &USpinBox::GetWidgetStyle_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, WidgetStyle), Z_Construct_UScriptStruct_FSpinBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 3058619479
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MinFractionalDigits = { "MinFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetMinFractionalDigits_WrapperImpl, &USpinBox::GetMinFractionalDigits_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, MinFractionalDigits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFractionalDigits_MetaData), NewProp_MinFractionalDigits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MaxFractionalDigits = { "MaxFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetMaxFractionalDigits_WrapperImpl, &USpinBox::GetMaxFractionalDigits_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, MaxFractionalDigits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFractionalDigits_MetaData), NewProp_MaxFractionalDigits_MetaData) };
void Z_Construct_UClass_USpinBox_Statics::NewProp_bAlwaysUsesDeltaSnap_SetBit(void* Obj)
{
	((USpinBox*)Obj)->bAlwaysUsesDeltaSnap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bAlwaysUsesDeltaSnap = { "bAlwaysUsesDeltaSnap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetbAlwaysUsesDeltaSnap_WrapperImpl, &USpinBox::GetbAlwaysUsesDeltaSnap_WrapperImpl, 1, sizeof(bool), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bAlwaysUsesDeltaSnap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysUsesDeltaSnap_MetaData), NewProp_bAlwaysUsesDeltaSnap_MetaData) };
void Z_Construct_UClass_USpinBox_Statics::NewProp_bEnableSlider_SetBit(void* Obj)
{
	((USpinBox*)Obj)->bEnableSlider = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bEnableSlider = { "bEnableSlider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetbEnableSlider_WrapperImpl, &USpinBox::GetbEnableSlider_WrapperImpl, 1, sizeof(bool), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bEnableSlider_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSlider_MetaData), NewProp_bEnableSlider_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetDelta_WrapperImpl, &USpinBox::GetDelta_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, Delta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delta_MetaData), NewProp_Delta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_SliderExponent = { "SliderExponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetSliderExponent_WrapperImpl, &USpinBox::GetSliderExponent_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, SliderExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SliderExponent_MetaData), NewProp_SliderExponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetFont_WrapperImpl, &USpinBox::GetFont_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, Font), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) }; // 2419385967
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetJustification_WrapperImpl, &USpinBox::GetJustification_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Justification_MetaData), NewProp_Justification_MetaData) }; // 3082493381
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetMinDesiredWidth_WrapperImpl, &USpinBox::GetMinDesiredWidth_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, MinDesiredWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDesiredWidth_MetaData), NewProp_MinDesiredWidth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_KeyboardType = { "KeyboardType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinBox, KeyboardType), Z_Construct_UEnum_UMG_EVirtualKeyboardType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyboardType_MetaData), NewProp_KeyboardType_MetaData) }; // 2483245499
void Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit(void* Obj)
{
	((USpinBox*)Obj)->ClearKeyboardFocusOnCommit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit = { "ClearKeyboardFocusOnCommit", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetClearKeyboardFocusOnCommit_WrapperImpl, &USpinBox::GetClearKeyboardFocusOnCommit_WrapperImpl, 1, sizeof(bool), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearKeyboardFocusOnCommit_MetaData), NewProp_ClearKeyboardFocusOnCommit_MetaData) };
void Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit_SetBit(void* Obj)
{
	((USpinBox*)Obj)->SelectAllTextOnCommit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit = { "SelectAllTextOnCommit", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetSelectAllTextOnCommit_WrapperImpl, &USpinBox::GetSelectAllTextOnCommit_WrapperImpl, 1, sizeof(bool), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAllTextOnCommit_MetaData), NewProp_SelectAllTextOnCommit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetForegroundColor_WrapperImpl, &USpinBox::GetForegroundColor_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForegroundColor_MetaData), NewProp_ForegroundColor_MetaData) }; // 2024315916
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinBox, OnValueChanged), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueChanged_MetaData), NewProp_OnValueChanged_MetaData) }; // 615379290
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueCommitted = { "OnValueCommitted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinBox, OnValueCommitted), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnValueCommitted_MetaData), NewProp_OnValueCommitted_MetaData) }; // 275964177
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_OnBeginSliderMovement = { "OnBeginSliderMovement", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinBox, OnBeginSliderMovement), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBeginSliderMovement_MetaData), NewProp_OnBeginSliderMovement_MetaData) }; // 2494479177
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_OnEndSliderMovement = { "OnEndSliderMovement", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinBox, OnEndSliderMovement), Z_Construct_UDelegateFunction_USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEndSliderMovement_MetaData), NewProp_OnEndSliderMovement_MetaData) }; // 615379290
void Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue_SetBit(void* Obj)
{
	((USpinBox*)Obj)->bOverride_MinValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue = { "bOverride_MinValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MinValue_MetaData), NewProp_bOverride_MinValue_MetaData) };
void Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue_SetBit(void* Obj)
{
	((USpinBox*)Obj)->bOverride_MaxValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue = { "bOverride_MaxValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MaxValue_MetaData), NewProp_bOverride_MaxValue_MetaData) };
void Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue_SetBit(void* Obj)
{
	((USpinBox*)Obj)->bOverride_MinSliderValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue = { "bOverride_MinSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MinSliderValue_MetaData), NewProp_bOverride_MinSliderValue_MetaData) };
void Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue_SetBit(void* Obj)
{
	((USpinBox*)Obj)->bOverride_MaxSliderValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue = { "bOverride_MaxSliderValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USpinBox), &Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MaxSliderValue_MetaData), NewProp_bOverride_MaxSliderValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetMinValue_WrapperImpl, &USpinBox::GetMinValue_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetMaxValue_WrapperImpl, &USpinBox::GetMaxValue_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MinSliderValue = { "MinSliderValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetMinSliderValue_WrapperImpl, &USpinBox::GetMinSliderValue_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, MinSliderValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSliderValue_MetaData), NewProp_MinSliderValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpinBox_Statics::NewProp_MaxSliderValue = { "MaxSliderValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &USpinBox::SetMaxSliderValue_WrapperImpl, &USpinBox::GetMaxSliderValue_WrapperImpl, 1, STRUCT_OFFSET(USpinBox, MaxSliderValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSliderValue_MetaData), NewProp_MaxSliderValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_ValueDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MinFractionalDigits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MaxFractionalDigits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bAlwaysUsesDeltaSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bEnableSlider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_SliderExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_Justification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MinDesiredWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_KeyboardType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_ClearKeyboardFocusOnCommit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_SelectAllTextOnCommit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_ForegroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_OnValueCommitted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_OnBeginSliderMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_OnEndSliderMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MinSliderValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_bOverride_MaxSliderValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MinSliderValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBox_Statics::NewProp_MaxSliderValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpinBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpinBox_Statics::ClassParams = {
	&USpinBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpinBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpinBox_Statics::Class_MetaDataParams), Z_Construct_UClass_USpinBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpinBox()
{
	if (!Z_Registration_Info_UClass_USpinBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpinBox.OuterSingleton, Z_Construct_UClass_USpinBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpinBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<USpinBox>()
{
	return USpinBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpinBox);
USpinBox::~USpinBox() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(USpinBox, Value)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(USpinBox)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(USpinBox, Value)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(USpinBox);
// End Class USpinBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpinBox, USpinBox::StaticClass, TEXT("USpinBox"), &Z_Registration_Info_UClass_USpinBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpinBox), 3261624102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_389926315(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SpinBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
