// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressBar() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillStyle();
SLATE_API UEnum* Z_Construct_UEnum_Slate_EProgressBarFillType();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
UMG_API UClass* Z_Construct_UClass_UProgressBar();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UProgressBar Function SetFillColorAndOpacity
struct Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics
{
	struct ProgressBar_eventSetFillColorAndOpacity_Parms
	{
		FLinearColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Sets the fill color of the progress bar. */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Sets the fill color of the progress bar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProgressBar_eventSetFillColorAndOpacity_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, nullptr, "SetFillColorAndOpacity", nullptr, nullptr, Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::ProgressBar_eventSetFillColorAndOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::ProgressBar_eventSetFillColorAndOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProgressBar::execSetFillColorAndOpacity)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFillColorAndOpacity(Z_Param_InColor);
	P_NATIVE_END;
}
// End Class UProgressBar Function SetFillColorAndOpacity

// Begin Class UProgressBar Function SetIsMarquee
struct Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics
{
	struct ProgressBar_eventSetIsMarquee_Parms
	{
		bool InbIsMarquee;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Sets the progress bar to show as a marquee. */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Sets the progress bar to show as a marquee." },
	};
#endif // WITH_METADATA
	static void NewProp_InbIsMarquee_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InbIsMarquee;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee_SetBit(void* Obj)
{
	((ProgressBar_eventSetIsMarquee_Parms*)Obj)->InbIsMarquee = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee = { "InbIsMarquee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProgressBar_eventSetIsMarquee_Parms), &Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::NewProp_InbIsMarquee,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, nullptr, "SetIsMarquee", nullptr, nullptr, Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::ProgressBar_eventSetIsMarquee_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::ProgressBar_eventSetIsMarquee_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProgressBar_SetIsMarquee()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProgressBar_SetIsMarquee_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProgressBar::execSetIsMarquee)
{
	P_GET_UBOOL(Z_Param_InbIsMarquee);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsMarquee(Z_Param_InbIsMarquee);
	P_NATIVE_END;
}
// End Class UProgressBar Function SetIsMarquee

// Begin Class UProgressBar Function SetPercent
struct Z_Construct_UFunction_UProgressBar_SetPercent_Statics
{
	struct ProgressBar_eventSetPercent_Parms
	{
		float InPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Sets the current value of the ProgressBar. */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Sets the current value of the ProgressBar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UProgressBar_SetPercent_Statics::NewProp_InPercent = { "InPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProgressBar_eventSetPercent_Parms, InPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProgressBar_SetPercent_Statics::NewProp_InPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProgressBar_SetPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProgressBar, nullptr, "SetPercent", nullptr, nullptr, Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::ProgressBar_eventSetPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProgressBar_SetPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UProgressBar_SetPercent_Statics::ProgressBar_eventSetPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UProgressBar_SetPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProgressBar_SetPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UProgressBar::execSetPercent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPercent(Z_Param_InPercent);
	P_NATIVE_END;
}
// End Class UProgressBar Function SetPercent

// Begin Class UProgressBar
void UProgressBar::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UProgressBar* Obj = (const UProgressBar*)Object;
	FProgressBarStyle& Result = *(FProgressBarStyle*)OutValue;
	Result = (FProgressBarStyle)Obj->GetWidgetStyle();
}
void UProgressBar::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
{
	UProgressBar* Obj = (UProgressBar*)Object;
	FProgressBarStyle& Value = *(FProgressBarStyle*)InValue;
	Obj->SetWidgetStyle(Value);
}
void UProgressBar::GetPercent_WrapperImpl(const void* Object, void* OutValue)
{
	const UProgressBar* Obj = (const UProgressBar*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetPercent();
}
void UProgressBar::SetPercent_WrapperImpl(void* Object, const void* InValue)
{
	UProgressBar* Obj = (UProgressBar*)Object;
	float& Value = *(float*)InValue;
	Obj->SetPercent(Value);
}
void UProgressBar::GetBarFillType_WrapperImpl(const void* Object, void* OutValue)
{
	const UProgressBar* Obj = (const UProgressBar*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetBarFillType();
}
void UProgressBar::SetBarFillType_WrapperImpl(void* Object, const void* InValue)
{
	UProgressBar* Obj = (UProgressBar*)Object;
	EProgressBarFillType::Type Value = (EProgressBarFillType::Type)*(uint8*)InValue;
	Obj->SetBarFillType(Value);
}
void UProgressBar::GetBarFillStyle_WrapperImpl(const void* Object, void* OutValue)
{
	const UProgressBar* Obj = (const UProgressBar*)Object;
	uint8& Result = *(uint8*)OutValue;
	Result = (uint8)Obj->GetBarFillStyle();
}
void UProgressBar::SetBarFillStyle_WrapperImpl(void* Object, const void* InValue)
{
	UProgressBar* Obj = (UProgressBar*)Object;
	EProgressBarFillStyle::Type Value = (EProgressBarFillStyle::Type)*(uint8*)InValue;
	Obj->SetBarFillStyle(Value);
}
void UProgressBar::GetbIsMarquee_WrapperImpl(const void* Object, void* OutValue)
{
	const UProgressBar* Obj = (const UProgressBar*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->UseMarquee();
}
void UProgressBar::SetbIsMarquee_WrapperImpl(void* Object, const void* InValue)
{
	UProgressBar* Obj = (UProgressBar*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsMarquee(Value);
}
void UProgressBar::GetBorderPadding_WrapperImpl(const void* Object, void* OutValue)
{
	const UProgressBar* Obj = (const UProgressBar*)Object;
	FVector2D& Result = *(FVector2D*)OutValue;
	Result = (FVector2D)Obj->GetBorderPadding();
}
void UProgressBar::SetBorderPadding_WrapperImpl(void* Object, const void* InValue)
{
	UProgressBar* Obj = (UProgressBar*)Object;
	FVector2D& Value = *(FVector2D*)InValue;
	Obj->SetBorderPadding(Value);
}
void UProgressBar::GetFillColorAndOpacity_WrapperImpl(const void* Object, void* OutValue)
{
	const UProgressBar* Obj = (const UProgressBar*)Object;
	FLinearColor& Result = *(FLinearColor*)OutValue;
	Result = (FLinearColor)Obj->GetFillColorAndOpacity();
}
void UProgressBar::SetFillColorAndOpacity_WrapperImpl(void* Object, const void* InValue)
{
	UProgressBar* Obj = (UProgressBar*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetFillColorAndOpacity(Value);
}
void UProgressBar::StaticRegisterNativesUProgressBar()
{
	UClass* Class = UProgressBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFillColorAndOpacity", &UProgressBar::execSetFillColorAndOpacity },
		{ "SetIsMarquee", &UProgressBar::execSetIsMarquee },
		{ "SetPercent", &UProgressBar::execSetPercent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProgressBar);
UClass* Z_Construct_UClass_UProgressBar_NoRegister()
{
	return UProgressBar::StaticClass();
}
struct Z_Construct_UClass_UProgressBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The progress bar widget is a simple bar that fills up that can be restyled to fit any number of uses.\n *\n * * No Children\n */" },
		{ "IncludePath", "Components/ProgressBar.h" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The progress bar widget is a simple bar that fills up that can be restyled to fit any number of uses.\n\n* No Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The progress bar style */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "The progress bar style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[] = {
		{ "BlueprintSetter", "SetPercent" },
		{ "Category", "Progress" },
		{ "Comment", "/** Used to determine the fill position of the progress bar ranging 0..1 */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Used to determine the fill position of the progress bar ranging 0..1" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarFillType_MetaData[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Defines the direction in which the progress bar fills */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Defines the direction in which the progress bar fills" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarFillStyle_MetaData[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** Defines the visual style of the progress bar fill - scale or mask */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Defines the visual style of the progress bar fill - scale or mask" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarquee_MetaData[] = {
		{ "BlueprintSetter", "SetIsMarquee" },
		{ "Category", "Progress" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderPadding_MetaData[] = {
		{ "Category", "Progress" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PercentDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate to allow logic to drive the text of the widget */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "A bindable delegate to allow logic to drive the text of the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillColorAndOpacity_MetaData[] = {
		{ "BlueprintSetter", "SetFillColorAndOpacity" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Fill Color and Opacity */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
		{ "ToolTip", "Fill Color and Opacity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/ProgressBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BarFillType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BarFillStyle;
	static void NewProp_bIsMarquee_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarquee;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderPadding;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_PercentDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColorAndOpacity;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_FillColorAndOpacityDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UProgressBar_SetFillColorAndOpacity, "SetFillColorAndOpacity" }, // 4089906919
		{ &Z_Construct_UFunction_UProgressBar_SetIsMarquee, "SetIsMarquee" }, // 3238235765
		{ &Z_Construct_UFunction_UProgressBar_SetPercent, "SetPercent" }, // 1989634437
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UProgressBar::SetWidgetStyle_WrapperImpl, &UProgressBar::GetWidgetStyle_WrapperImpl, 1, STRUCT_OFFSET(UProgressBar, WidgetStyle), Z_Construct_UScriptStruct_FProgressBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetStyle_MetaData), NewProp_WidgetStyle_MetaData) }; // 1245114315
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UProgressBar::SetPercent_WrapperImpl, &UProgressBar::GetPercent_WrapperImpl, 1, STRUCT_OFFSET(UProgressBar, Percent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Percent_MetaData), NewProp_Percent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType = { "BarFillType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UProgressBar::SetBarFillType_WrapperImpl, &UProgressBar::GetBarFillType_WrapperImpl, 1, STRUCT_OFFSET(UProgressBar, BarFillType), Z_Construct_UEnum_Slate_EProgressBarFillType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarFillType_MetaData), NewProp_BarFillType_MetaData) }; // 2476987303
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillStyle = { "BarFillStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UProgressBar::SetBarFillStyle_WrapperImpl, &UProgressBar::GetBarFillStyle_WrapperImpl, 1, STRUCT_OFFSET(UProgressBar, BarFillStyle), Z_Construct_UEnum_Slate_EProgressBarFillStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarFillStyle_MetaData), NewProp_BarFillStyle_MetaData) }; // 3774238239
void Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_SetBit(void* Obj)
{
	((UProgressBar*)Obj)->bIsMarquee = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee = { "bIsMarquee", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UProgressBar::SetbIsMarquee_WrapperImpl, &UProgressBar::GetbIsMarquee_WrapperImpl, 1, sizeof(bool), sizeof(UProgressBar), &Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarquee_MetaData), NewProp_bIsMarquee_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding = { "BorderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UProgressBar::SetBorderPadding_WrapperImpl, &UProgressBar::GetBorderPadding_WrapperImpl, 1, STRUCT_OFFSET(UProgressBar, BorderPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderPadding_MetaData), NewProp_BorderPadding_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate = { "PercentDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProgressBar, PercentDelegate), Z_Construct_UDelegateFunction_UWidget_GetFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PercentDelegate_MetaData), NewProp_PercentDelegate_MetaData) }; // 4086961303
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity = { "FillColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UProgressBar::SetFillColorAndOpacity_WrapperImpl, &UProgressBar::GetFillColorAndOpacity_WrapperImpl, 1, STRUCT_OFFSET(UProgressBar, FillColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColorAndOpacity_MetaData), NewProp_FillColorAndOpacity_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate = { "FillColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProgressBar, FillColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColorAndOpacityDelegate_MetaData), NewProp_FillColorAndOpacityDelegate_MetaData) }; // 3367946829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProgressBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_WidgetStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BarFillStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_bIsMarquee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_BorderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_PercentDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressBar_Statics::NewProp_FillColorAndOpacityDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProgressBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProgressBar_Statics::ClassParams = {
	&UProgressBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UProgressBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UProgressBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProgressBar()
{
	if (!Z_Registration_Info_UClass_UProgressBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProgressBar.OuterSingleton, Z_Construct_UClass_UProgressBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProgressBar.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UProgressBar>()
{
	return UProgressBar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressBar);
UProgressBar::~UProgressBar() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UProgressBar, Percent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UProgressBar, bIsMarquee)
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UProgressBar, FillColorAndOpacity)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UProgressBar)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UProgressBar, Percent)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UProgressBar, bIsMarquee)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UProgressBar, FillColorAndOpacity)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UProgressBar);
// End Class UProgressBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProgressBar, UProgressBar::StaticClass, TEXT("UProgressBar"), &Z_Registration_Info_UClass_UProgressBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProgressBar), 3605938545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_1423762052(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ProgressBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
