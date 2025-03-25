// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextWidgetTypes() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextFlowDirection();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextWrappingPolicy();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextShapingMethod();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget();
UMG_API UClass* Z_Construct_UClass_UTextLayoutWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FShapedTextOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShapedTextOptions;
class UScriptStruct* FShapedTextOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShapedTextOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShapedTextOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapedTextOptions, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("ShapedTextOptions"));
	}
	return Z_Registration_Info_UScriptStruct_ShapedTextOptions.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FShapedTextOptions>()
{
	return FShapedTextOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FShapedTextOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Common data for all widgets that use shaped text.\n * Contains the common options that should be exposed for the underlying Slate widget.\n */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Common data for all widgets that use shaped text.\nContains the common options that should be exposed for the underlying Slate widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TextShapingMethod_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TextFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextShapingMethod_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Which text shaping method should the text within this widget use? (unset to use the default returned by GetDefaultTextShapingMethod) */" },
		{ "EditCondition", "bOverride_TextShapingMethod" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Which text shaping method should the text within this widget use? (unset to use the default returned by GetDefaultTextShapingMethod)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Which text flow direction should the text within this widget use? (unset to use the default returned by GetDefaultTextFlowDirection) */" },
		{ "EditCondition", "bOverride_TextFlowDirection" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Which text flow direction should the text within this widget use? (unset to use the default returned by GetDefaultTextFlowDirection)" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_TextShapingMethod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TextShapingMethod;
	static void NewProp_bOverride_TextFlowDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TextFlowDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextShapingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextShapingMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextFlowDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TextFlowDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapedTextOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_SetBit(void* Obj)
{
	((FShapedTextOptions*)Obj)->bOverride_TextShapingMethod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod = { "bOverride_TextShapingMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FShapedTextOptions), &Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_TextShapingMethod_MetaData), NewProp_bOverride_TextShapingMethod_MetaData) };
void Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_SetBit(void* Obj)
{
	((FShapedTextOptions*)Obj)->bOverride_TextFlowDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection = { "bOverride_TextFlowDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FShapedTextOptions), &Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_TextFlowDirection_MetaData), NewProp_bOverride_TextFlowDirection_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod = { "TextShapingMethod", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShapedTextOptions, TextShapingMethod), Z_Construct_UEnum_SlateCore_ETextShapingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextShapingMethod_MetaData), NewProp_TextShapingMethod_MetaData) }; // 2377206625
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection = { "TextFlowDirection", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShapedTextOptions, TextFlowDirection), Z_Construct_UEnum_Slate_ETextFlowDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextFlowDirection_MetaData), NewProp_TextFlowDirection_MetaData) }; // 1052999597
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextShapingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_bOverride_TextFlowDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextShapingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewProp_TextFlowDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShapedTextOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"ShapedTextOptions",
	Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::PropPointers),
	sizeof(FShapedTextOptions),
	alignof(FShapedTextOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShapedTextOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShapedTextOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShapedTextOptions()
{
	if (!Z_Registration_Info_UScriptStruct_ShapedTextOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShapedTextOptions.InnerSingleton, Z_Construct_UScriptStruct_FShapedTextOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ShapedTextOptions.InnerSingleton;
}
// End ScriptStruct FShapedTextOptions

// Begin Class UTextLayoutWidget Function SetJustification
struct Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics
{
	struct TextLayoutWidget_eventSetJustification_Parms
	{
		TEnumAsByte<ETextJustify::Type> InJustification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InJustification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::NewProp_InJustification = { "InJustification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TextLayoutWidget_eventSetJustification_Parms, InJustification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(0, nullptr) }; // 3082493381
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::NewProp_InJustification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextLayoutWidget, nullptr, "SetJustification", nullptr, nullptr, Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::TextLayoutWidget_eventSetJustification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::TextLayoutWidget_eventSetJustification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTextLayoutWidget_SetJustification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextLayoutWidget_SetJustification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTextLayoutWidget::execSetJustification)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InJustification);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetJustification(ETextJustify::Type(Z_Param_InJustification));
	P_NATIVE_END;
}
// End Class UTextLayoutWidget Function SetJustification

// Begin Class UTextLayoutWidget
void UTextLayoutWidget::SetShapedTextOptions_WrapperImpl(void* Object, const void* InValue)
{
	UTextLayoutWidget* Obj = (UTextLayoutWidget*)Object;
	FShapedTextOptions& Value = *(FShapedTextOptions*)InValue;
	Obj->SetShapedTextOptions(Value);
}
void UTextLayoutWidget::SetJustification_WrapperImpl(void* Object, const void* InValue)
{
	UTextLayoutWidget* Obj = (UTextLayoutWidget*)Object;
	ETextJustify::Type Value = (ETextJustify::Type)*(uint8*)InValue;
	Obj->SetJustification(Value);
}
void UTextLayoutWidget::SetWrappingPolicy_WrapperImpl(void* Object, const void* InValue)
{
	UTextLayoutWidget* Obj = (UTextLayoutWidget*)Object;
	ETextWrappingPolicy& Value = *(ETextWrappingPolicy*)InValue;
	Obj->SetWrappingPolicy(Value);
}
void UTextLayoutWidget::SetAutoWrapText_WrapperImpl(void* Object, const void* InValue)
{
	UTextLayoutWidget* Obj = (UTextLayoutWidget*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetAutoWrapText(Value);
}
void UTextLayoutWidget::SetWrapTextAt_WrapperImpl(void* Object, const void* InValue)
{
	UTextLayoutWidget* Obj = (UTextLayoutWidget*)Object;
	float& Value = *(float*)InValue;
	Obj->SetWrapTextAt(Value);
}
void UTextLayoutWidget::SetMargin_WrapperImpl(void* Object, const void* InValue)
{
	UTextLayoutWidget* Obj = (UTextLayoutWidget*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetMargin(Value);
}
void UTextLayoutWidget::SetLineHeightPercentage_WrapperImpl(void* Object, const void* InValue)
{
	UTextLayoutWidget* Obj = (UTextLayoutWidget*)Object;
	float& Value = *(float*)InValue;
	Obj->SetLineHeightPercentage(Value);
}
void UTextLayoutWidget::SetApplyLineHeightToBottomLine_WrapperImpl(void* Object, const void* InValue)
{
	UTextLayoutWidget* Obj = (UTextLayoutWidget*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetApplyLineHeightToBottomLine(Value);
}
void UTextLayoutWidget::StaticRegisterNativesUTextLayoutWidget()
{
	UClass* Class = UTextLayoutWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetJustification", &UTextLayoutWidget::execSetJustification },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextLayoutWidget);
UClass* Z_Construct_UClass_UTextLayoutWidget_NoRegister()
{
	return UTextLayoutWidget::StaticClass();
}
struct Z_Construct_UClass_UTextLayoutWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all widgets that use a text layout.\n * Contains the common options that should be exposed for the underlying Slate widget.\n */" },
		{ "IncludePath", "Components/TextWidgetTypes.h" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Base class for all widgets that use a text layout.\nContains the common options that should be exposed for the underlying Slate widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapedTextOptions_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Controls how the text within this widget should be shaped. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Controls how the text within this widget should be shaped." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[] = {
		{ "BlueprintSetter", "SetJustification" },
		{ "Category", "Appearance" },
		{ "Comment", "/** How the text should be aligned with the margin. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "How the text should be aligned with the margin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WrappingPolicy_MetaData[] = {
		{ "Category", "Wrapping" },
		{ "Comment", "/** The wrapping policy to use. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "The wrapping policy to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoWrapText_MetaData[] = {
		{ "Category", "Wrapping" },
		{ "Comment", "/** True if we're wrapping text automatically based on the computed horizontal space for this widget. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "True if we're wrapping text automatically based on the computed horizontal space for this widget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WrapTextAt_MetaData[] = {
		{ "Category", "Wrapping" },
		{ "Comment", "/** Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount of blank space left around the edges of text area. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "The amount of blank space left around the edges of text area." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineHeightPercentage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The amount to scale each lines height by. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "The amount to scale each lines height by." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyLineHeightToBottomLine_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether to leave extra space below the last line due to line height. */" },
		{ "ModuleRelativePath", "Public/Components/TextWidgetTypes.h" },
		{ "ToolTip", "Whether to leave extra space below the last line due to line height." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapedTextOptions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Justification;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WrappingPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WrappingPolicy;
	static void NewProp_AutoWrapText_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoWrapText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WrapTextAt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Margin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineHeightPercentage;
	static void NewProp_ApplyLineHeightToBottomLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyLineHeightToBottomLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextLayoutWidget_SetJustification, "SetJustification" }, // 1628625966
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextLayoutWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions = { "ShapedTextOptions", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UTextLayoutWidget::SetShapedTextOptions_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UTextLayoutWidget, ShapedTextOptions), Z_Construct_UScriptStruct_FShapedTextOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapedTextOptions_MetaData), NewProp_ShapedTextOptions_MetaData) }; // 2363626438
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UTextLayoutWidget::SetJustification_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UTextLayoutWidget, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Justification_MetaData), NewProp_Justification_MetaData) }; // 3082493381
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy = { "WrappingPolicy", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, &UTextLayoutWidget::SetWrappingPolicy_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UTextLayoutWidget, WrappingPolicy), Z_Construct_UEnum_Slate_ETextWrappingPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WrappingPolicy_MetaData), NewProp_WrappingPolicy_MetaData) }; // 863261354
void Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_SetBit(void* Obj)
{
	((UTextLayoutWidget*)Obj)->AutoWrapText = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText = { "AutoWrapText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, &UTextLayoutWidget::SetAutoWrapText_WrapperImpl, nullptr, 1, sizeof(uint8), sizeof(UTextLayoutWidget), &Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoWrapText_MetaData), NewProp_AutoWrapText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt = { "WrapTextAt", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UTextLayoutWidget::SetWrapTextAt_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UTextLayoutWidget, WrapTextAt), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WrapTextAt_MetaData), NewProp_WrapTextAt_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UTextLayoutWidget::SetMargin_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UTextLayoutWidget, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Margin_MetaData), NewProp_Margin_MetaData) }; // 2986890016
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage = { "LineHeightPercentage", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UTextLayoutWidget::SetLineHeightPercentage_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UTextLayoutWidget, LineHeightPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineHeightPercentage_MetaData), NewProp_LineHeightPercentage_MetaData) };
void Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ApplyLineHeightToBottomLine_SetBit(void* Obj)
{
	((UTextLayoutWidget*)Obj)->ApplyLineHeightToBottomLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ApplyLineHeightToBottomLine = { "ApplyLineHeightToBottomLine", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UTextLayoutWidget::SetApplyLineHeightToBottomLine_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(UTextLayoutWidget), &Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ApplyLineHeightToBottomLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyLineHeightToBottomLine_MetaData), NewProp_ApplyLineHeightToBottomLine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ShapedTextOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Justification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrappingPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_AutoWrapText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_WrapTextAt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_Margin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_LineHeightPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextLayoutWidget_Statics::NewProp_ApplyLineHeightToBottomLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextLayoutWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextLayoutWidget_Statics::ClassParams = {
	&UTextLayoutWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::PropPointers),
	0,
	0x00A800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextLayoutWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextLayoutWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextLayoutWidget()
{
	if (!Z_Registration_Info_UClass_UTextLayoutWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextLayoutWidget.OuterSingleton, Z_Construct_UClass_UTextLayoutWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextLayoutWidget.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UTextLayoutWidget>()
{
	return UTextLayoutWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextLayoutWidget);
UTextLayoutWidget::~UTextLayoutWidget() {}
// End Class UTextLayoutWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FShapedTextOptions::StaticStruct, Z_Construct_UScriptStruct_FShapedTextOptions_Statics::NewStructOps, TEXT("ShapedTextOptions"), &Z_Registration_Info_UScriptStruct_ShapedTextOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShapedTextOptions), 2363626438U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextLayoutWidget, UTextLayoutWidget::StaticClass, TEXT("UTextLayoutWidget"), &Z_Registration_Info_UClass_UTextLayoutWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextLayoutWidget), 2176131601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_1296031583(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TextWidgetTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
