// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWrapperTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UMG_API UClass* Z_Construct_UClass_USlateAccessibleWidgetData();
UMG_API UClass* Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateAccessibleBehavior();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateSizeRule();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UMG_API UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType();
UMG_API UFunction* Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Enum ESlateVisibility
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateVisibility;
static UEnum* ESlateVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlateVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlateVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_ESlateVisibility, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("ESlateVisibility"));
	}
	return Z_Registration_Info_UEnum_ESlateVisibility.OuterSingleton;
}
template<> UMG_API UEnum* StaticEnum<ESlateVisibility>()
{
	return ESlateVisibility_StaticEnum();
}
struct Z_Construct_UEnum_UMG_ESlateVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Collapsed.Comment", "/** Not visible and takes up no space in the layout (obviously not hit-testable). */" },
		{ "Collapsed.Name", "ESlateVisibility::Collapsed" },
		{ "Collapsed.ToolTip", "Not visible and takes up no space in the layout (obviously not hit-testable)." },
		{ "Comment", "/** Is an entity visible? */" },
		{ "Hidden.Comment", "/** Not visible but occupies layout space (obviously not hit-testable). */" },
		{ "Hidden.Name", "ESlateVisibility::Hidden" },
		{ "Hidden.ToolTip", "Not visible but occupies layout space (obviously not hit-testable)." },
		{ "HitTestInvisible.Comment", "/** Visible but not hit-testable (cannot interact with cursor) and children in the hierarchy (if any) are also not hit-testable. */" },
		{ "HitTestInvisible.DisplayName", "Not Hit-Testable (Self & All Children)" },
		{ "HitTestInvisible.Name", "ESlateVisibility::HitTestInvisible" },
		{ "HitTestInvisible.ToolTip", "Visible but not hit-testable (cannot interact with cursor) and children in the hierarchy (if any) are also not hit-testable." },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "SelfHitTestInvisible.Comment", "/** Visible but not hit-testable (cannot interact with cursor) and doesn't affect hit-testing on children (if any). */" },
		{ "SelfHitTestInvisible.DisplayName", "Not Hit-Testable (Self Only)" },
		{ "SelfHitTestInvisible.Name", "ESlateVisibility::SelfHitTestInvisible" },
		{ "SelfHitTestInvisible.ToolTip", "Visible but not hit-testable (cannot interact with cursor) and doesn't affect hit-testing on children (if any)." },
		{ "ToolTip", "Is an entity visible?" },
		{ "Visible.Comment", "/** Visible and hit-testable (can interact with cursor). Default value. */" },
		{ "Visible.Name", "ESlateVisibility::Visible" },
		{ "Visible.ToolTip", "Visible and hit-testable (can interact with cursor). Default value." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlateVisibility::Visible", (int64)ESlateVisibility::Visible },
		{ "ESlateVisibility::Collapsed", (int64)ESlateVisibility::Collapsed },
		{ "ESlateVisibility::Hidden", (int64)ESlateVisibility::Hidden },
		{ "ESlateVisibility::HitTestInvisible", (int64)ESlateVisibility::HitTestInvisible },
		{ "ESlateVisibility::SelfHitTestInvisible", (int64)ESlateVisibility::SelfHitTestInvisible },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_ESlateVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	"ESlateVisibility",
	"ESlateVisibility",
	Z_Construct_UEnum_UMG_ESlateVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_ESlateVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_ESlateVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UMG_ESlateVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UMG_ESlateVisibility()
{
	if (!Z_Registration_Info_UEnum_ESlateVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateVisibility.InnerSingleton, Z_Construct_UEnum_UMG_ESlateVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlateVisibility.InnerSingleton;
}
// End Enum ESlateVisibility

// Begin Enum ESlateAccessibleBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateAccessibleBehavior;
static UEnum* ESlateAccessibleBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlateAccessibleBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlateAccessibleBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_ESlateAccessibleBehavior, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("ESlateAccessibleBehavior"));
	}
	return Z_Registration_Info_UEnum_ESlateAccessibleBehavior.OuterSingleton;
}
template<> UMG_API UEnum* StaticEnum<ESlateAccessibleBehavior>()
{
	return ESlateAccessibleBehavior_StaticEnum();
}
struct Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/**\n\x09 * Accessible, first checking to see if there's any custom default text assigned for widgets of this type.\n\x09 * If not, then it will attempt to use the alternate behavior (ie AccessibleSummaryBehavior instead of AccessibleBehavior)\n\x09 * and return that value instead. This acts as a reference so that you only need to set one value for both of them\n\x09 * to return the same thing.\n\x09 */" },
		{ "Auto.Name", "ESlateAccessibleBehavior::Auto" },
		{ "Auto.ToolTip", "Accessible, first checking to see if there's any custom default text assigned for widgets of this type.\nIf not, then it will attempt to use the alternate behavior (ie AccessibleSummaryBehavior instead of AccessibleBehavior)\nand return that value instead. This acts as a reference so that you only need to set one value for both of them\nto return the same thing." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Whether a widget should be included in accessibility, and if so, how its text should be retrieved. */" },
		{ "Custom.Comment", "/** Accessible, and retrieve manually-assigned text from a TAttribute. */" },
		{ "Custom.Name", "ESlateAccessibleBehavior::Custom" },
		{ "Custom.ToolTip", "Accessible, and retrieve manually-assigned text from a TAttribute." },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "NotAccessible.Comment", "/** Not accessible. */" },
		{ "NotAccessible.Name", "ESlateAccessibleBehavior::NotAccessible" },
		{ "NotAccessible.ToolTip", "Not accessible." },
		{ "Summary.Comment", "/** Accessible, and traverse all child widgets and concat their AccessibleSummaryText together. */" },
		{ "Summary.Name", "ESlateAccessibleBehavior::Summary" },
		{ "Summary.ToolTip", "Accessible, and traverse all child widgets and concat their AccessibleSummaryText together." },
		{ "ToolTip", "Whether a widget should be included in accessibility, and if so, how its text should be retrieved." },
		{ "ToolTip.Comment", "/** Accessible, and use the tooltip's accessible text. */" },
		{ "ToolTip.Name", "ESlateAccessibleBehavior::ToolTip" },
		{ "ToolTip.ToolTip", "Accessible, and use the tooltip's accessible text." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlateAccessibleBehavior::NotAccessible", (int64)ESlateAccessibleBehavior::NotAccessible },
		{ "ESlateAccessibleBehavior::Auto", (int64)ESlateAccessibleBehavior::Auto },
		{ "ESlateAccessibleBehavior::Summary", (int64)ESlateAccessibleBehavior::Summary },
		{ "ESlateAccessibleBehavior::Custom", (int64)ESlateAccessibleBehavior::Custom },
		{ "ESlateAccessibleBehavior::ToolTip", (int64)ESlateAccessibleBehavior::ToolTip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	"ESlateAccessibleBehavior",
	"ESlateAccessibleBehavior",
	Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UMG_ESlateAccessibleBehavior()
{
	if (!Z_Registration_Info_UEnum_ESlateAccessibleBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateAccessibleBehavior.InnerSingleton, Z_Construct_UEnum_UMG_ESlateAccessibleBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlateAccessibleBehavior.InnerSingleton;
}
// End Enum ESlateAccessibleBehavior

// Begin Delegate FGetText
struct Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics
{
	struct SlateAccessibleWidgetData_eventGetText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SlateAccessibleWidgetData_eventGetText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateAccessibleWidgetData, nullptr, "GetText__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::SlateAccessibleWidgetData_eventGetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::SlateAccessibleWidgetData_eventGetText_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
FText USlateAccessibleWidgetData::FGetText_DelegateWrapper(const FScriptDelegate& GetText)
{
	struct SlateAccessibleWidgetData_eventGetText_Parms
	{
		FText ReturnValue;
	};
	SlateAccessibleWidgetData_eventGetText_Parms Parms;
	GetText.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// End Delegate FGetText

// Begin Class USlateAccessibleWidgetData
void USlateAccessibleWidgetData::StaticRegisterNativesUSlateAccessibleWidgetData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateAccessibleWidgetData);
UClass* Z_Construct_UClass_USlateAccessibleWidgetData_NoRegister()
{
	return USlateAccessibleWidgetData::StaticClass();
}
struct Z_Construct_UClass_USlateAccessibleWidgetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A container for all accessible properties for a UWidget that will be passed to the underlying SWidget.\n * Any property here must also be added to UWidget.h and synchronized. See UWidget for more information.\n */" },
		{ "IncludePath", "Components/SlateWrapperTypes.h" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "A container for all accessible properties for a UWidget that will be passed to the underlying SWidget.\nAny property here must also be added to UWidget.h and synchronized. See UWidget for more information." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanChildrenBeAccessible_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleSummaryBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleTextDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleSummaryText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessibleSummaryTextDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCanChildrenBeAccessible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanChildrenBeAccessible;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccessibleBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccessibleBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AccessibleSummaryBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AccessibleSummaryBehavior;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AccessibleText;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_AccessibleTextDelegate;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AccessibleSummaryText;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_AccessibleSummaryTextDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature, "GetText__DelegateSignature" }, // 495903161
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateAccessibleWidgetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible_SetBit(void* Obj)
{
	((USlateAccessibleWidgetData*)Obj)->bCanChildrenBeAccessible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible = { "bCanChildrenBeAccessible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USlateAccessibleWidgetData), &Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanChildrenBeAccessible_MetaData), NewProp_bCanChildrenBeAccessible_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior = { "AccessibleBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleBehavior), Z_Construct_UEnum_UMG_ESlateAccessibleBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleBehavior_MetaData), NewProp_AccessibleBehavior_MetaData) }; // 2421214166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior = { "AccessibleSummaryBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleSummaryBehavior), Z_Construct_UEnum_UMG_ESlateAccessibleBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleSummaryBehavior_MetaData), NewProp_AccessibleSummaryBehavior_MetaData) }; // 2421214166
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleText = { "AccessibleText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleText_MetaData), NewProp_AccessibleText_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleTextDelegate = { "AccessibleTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleTextDelegate), Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleTextDelegate_MetaData), NewProp_AccessibleTextDelegate_MetaData) }; // 495903161
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryText = { "AccessibleSummaryText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleSummaryText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleSummaryText_MetaData), NewProp_AccessibleSummaryText_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryTextDelegate = { "AccessibleSummaryTextDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateAccessibleWidgetData, AccessibleSummaryTextDelegate), Z_Construct_UDelegateFunction_USlateAccessibleWidgetData_GetText__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessibleSummaryTextDelegate_MetaData), NewProp_AccessibleSummaryTextDelegate_MetaData) }; // 495903161
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateAccessibleWidgetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_bCanChildrenBeAccessible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleTextDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateAccessibleWidgetData_Statics::NewProp_AccessibleSummaryTextDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlateAccessibleWidgetData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateAccessibleWidgetData_Statics::ClassParams = {
	&USlateAccessibleWidgetData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USlateAccessibleWidgetData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::PropPointers),
	0,
	0x00A000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateAccessibleWidgetData_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateAccessibleWidgetData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateAccessibleWidgetData()
{
	if (!Z_Registration_Info_UClass_USlateAccessibleWidgetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateAccessibleWidgetData.OuterSingleton, Z_Construct_UClass_USlateAccessibleWidgetData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateAccessibleWidgetData.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<USlateAccessibleWidgetData>()
{
	return USlateAccessibleWidgetData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateAccessibleWidgetData);
USlateAccessibleWidgetData::~USlateAccessibleWidgetData() {}
// End Class USlateAccessibleWidgetData

// Begin Enum ESlateSizeRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateSizeRule;
static UEnum* ESlateSizeRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESlateSizeRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESlateSizeRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_ESlateSizeRule, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("ESlateSizeRule"));
	}
	return Z_Registration_Info_UEnum_ESlateSizeRule.OuterSingleton;
}
template<> UMG_API UEnum* StaticEnum<ESlateSizeRule::Type>()
{
	return ESlateSizeRule_StaticEnum();
}
struct Z_Construct_UEnum_UMG_ESlateSizeRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Automatic.Comment", "/** Only requests as much room as it needs based on the widgets desired size. */" },
		{ "Automatic.Name", "ESlateSizeRule::Automatic" },
		{ "Automatic.ToolTip", "Only requests as much room as it needs based on the widgets desired size." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** The sizing options of UWidgets */" },
		{ "Fill.Comment", "/** Greedily attempts to fill all available room based on the percentage value 0..1 */" },
		{ "Fill.Name", "ESlateSizeRule::Fill" },
		{ "Fill.ToolTip", "Greedily attempts to fill all available room based on the percentage value 0..1" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "The sizing options of UWidgets" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESlateSizeRule::Automatic", (int64)ESlateSizeRule::Automatic },
		{ "ESlateSizeRule::Fill", (int64)ESlateSizeRule::Fill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_ESlateSizeRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	"ESlateSizeRule",
	"ESlateSizeRule::Type",
	Z_Construct_UEnum_UMG_ESlateSizeRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_ESlateSizeRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_ESlateSizeRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UMG_ESlateSizeRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UMG_ESlateSizeRule()
{
	if (!Z_Registration_Info_UEnum_ESlateSizeRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateSizeRule.InnerSingleton, Z_Construct_UEnum_UMG_ESlateSizeRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESlateSizeRule.InnerSingleton;
}
// End Enum ESlateSizeRule

// Begin ScriptStruct FEventReply
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventReply;
class UScriptStruct* FEventReply::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventReply.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventReply.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventReply, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EventReply"));
	}
	return Z_Registration_Info_UScriptStruct_EventReply.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FEventReply>()
{
	return FEventReply::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEventReply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Allows users to handle events and return information to the underlying UI layer.\n */" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "Allows users to handle events and return information to the underlying UI layer." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventReply>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventReply_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"EventReply",
	nullptr,
	0,
	sizeof(FEventReply),
	alignof(FEventReply),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventReply_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEventReply_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEventReply()
{
	if (!Z_Registration_Info_UScriptStruct_EventReply.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventReply.InnerSingleton, Z_Construct_UScriptStruct_FEventReply_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EventReply.InnerSingleton;
}
// End ScriptStruct FEventReply

// Begin ScriptStruct FSlateChildSize
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateChildSize;
class UScriptStruct* FSlateChildSize::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateChildSize.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateChildSize.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateChildSize, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("SlateChildSize"));
	}
	return Z_Registration_Info_UScriptStruct_SlateChildSize.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FSlateChildSize>()
{
	return FSlateChildSize::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlateChildSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A struct exposing size param related properties to UMG. */" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "A struct exposing size param related properties to UMG." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The parameter of the size rule. */" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "The parameter of the size rule." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeRule_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The sizing rule of the content. */" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "ToolTip", "The sizing rule of the content." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SizeRule;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateChildSize>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateChildSize, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule = { "SizeRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateChildSize, SizeRule), Z_Construct_UEnum_UMG_ESlateSizeRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeRule_MetaData), NewProp_SizeRule_MetaData) }; // 2378141294
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewProp_SizeRule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateChildSize_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"SlateChildSize",
	Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::PropPointers),
	sizeof(FSlateChildSize),
	alignof(FSlateChildSize),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateChildSize_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlateChildSize_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize()
{
	if (!Z_Registration_Info_UScriptStruct_SlateChildSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateChildSize.InnerSingleton, Z_Construct_UScriptStruct_FSlateChildSize_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlateChildSize.InnerSingleton;
}
// End ScriptStruct FSlateChildSize

// Begin Enum EVirtualKeyboardType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVirtualKeyboardType;
static UEnum* EVirtualKeyboardType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVirtualKeyboardType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVirtualKeyboardType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EVirtualKeyboardType, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EVirtualKeyboardType"));
	}
	return Z_Registration_Info_UEnum_EVirtualKeyboardType.OuterSingleton;
}
template<> UMG_API UEnum* StaticEnum<EVirtualKeyboardType::Type>()
{
	return EVirtualKeyboardType_StaticEnum();
}
struct Z_Construct_UEnum_UMG_EVirtualKeyboardType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlphaNumeric.Name", "EVirtualKeyboardType::AlphaNumeric" },
		{ "BlueprintType", "true" },
		{ "Default.Name", "EVirtualKeyboardType::Default" },
		{ "Email.Name", "EVirtualKeyboardType::Email" },
		{ "ModuleRelativePath", "Public/Components/SlateWrapperTypes.h" },
		{ "Number.Name", "EVirtualKeyboardType::Number" },
		{ "Password.Name", "EVirtualKeyboardType::Password" },
		{ "Web.Name", "EVirtualKeyboardType::Web" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVirtualKeyboardType::Default", (int64)EVirtualKeyboardType::Default },
		{ "EVirtualKeyboardType::Number", (int64)EVirtualKeyboardType::Number },
		{ "EVirtualKeyboardType::Web", (int64)EVirtualKeyboardType::Web },
		{ "EVirtualKeyboardType::Email", (int64)EVirtualKeyboardType::Email },
		{ "EVirtualKeyboardType::Password", (int64)EVirtualKeyboardType::Password },
		{ "EVirtualKeyboardType::AlphaNumeric", (int64)EVirtualKeyboardType::AlphaNumeric },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EVirtualKeyboardType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	"EVirtualKeyboardType",
	"EVirtualKeyboardType::Type",
	Z_Construct_UEnum_UMG_EVirtualKeyboardType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EVirtualKeyboardType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EVirtualKeyboardType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UMG_EVirtualKeyboardType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_UMG_EVirtualKeyboardType()
{
	if (!Z_Registration_Info_UEnum_EVirtualKeyboardType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVirtualKeyboardType.InnerSingleton, Z_Construct_UEnum_UMG_EVirtualKeyboardType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVirtualKeyboardType.InnerSingleton;
}
// End Enum EVirtualKeyboardType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESlateVisibility_StaticEnum, TEXT("ESlateVisibility"), &Z_Registration_Info_UEnum_ESlateVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2974316103U) },
		{ ESlateAccessibleBehavior_StaticEnum, TEXT("ESlateAccessibleBehavior"), &Z_Registration_Info_UEnum_ESlateAccessibleBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2421214166U) },
		{ ESlateSizeRule_StaticEnum, TEXT("ESlateSizeRule"), &Z_Registration_Info_UEnum_ESlateSizeRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2378141294U) },
		{ EVirtualKeyboardType_StaticEnum, TEXT("EVirtualKeyboardType"), &Z_Registration_Info_UEnum_EVirtualKeyboardType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2483245499U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEventReply::StaticStruct, Z_Construct_UScriptStruct_FEventReply_Statics::NewStructOps, TEXT("EventReply"), &Z_Registration_Info_UScriptStruct_EventReply, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventReply), 615652629U) },
		{ FSlateChildSize::StaticStruct, Z_Construct_UScriptStruct_FSlateChildSize_Statics::NewStructOps, TEXT("SlateChildSize"), &Z_Registration_Info_UScriptStruct_SlateChildSize, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateChildSize), 1279028364U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateAccessibleWidgetData, USlateAccessibleWidgetData::StaticClass, TEXT("USlateAccessibleWidgetData"), &Z_Registration_Info_UClass_USlateAccessibleWidgetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateAccessibleWidgetData), 1027258173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_815144619(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SlateWrapperTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
