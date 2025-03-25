// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/ExpandableArea.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpandableArea() {}

// Begin Cross Module References
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FExpandableAreaStyle();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
UMG_API UClass* Z_Construct_UClass_UExpandableArea();
UMG_API UClass* Z_Construct_UClass_UExpandableArea_NoRegister();
UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Delegate FOnExpandableAreaExpansionChanged
struct Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics
{
	struct _Script_UMG_eventOnExpandableAreaExpansionChanged_Parms
	{
		UExpandableArea* Area;
		bool bIsExpanded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Area;
	static void NewProp_bIsExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms, Area), Z_Construct_UClass_UExpandableArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Area_MetaData), NewProp_Area_MetaData) };
void Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
{
	((_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms*)Obj)->bIsExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms), &Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_Area,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::NewProp_bIsExpanded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnExpandableAreaExpansionChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnExpandableAreaExpansionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnExpandableAreaExpansionChanged, UExpandableArea* Area, bool bIsExpanded)
{
	struct _Script_UMG_eventOnExpandableAreaExpansionChanged_Parms
	{
		UExpandableArea* Area;
		bool bIsExpanded;
	};
	_Script_UMG_eventOnExpandableAreaExpansionChanged_Parms Parms;
	Parms.Area=Area;
	Parms.bIsExpanded=bIsExpanded ? true : false;
	OnExpandableAreaExpansionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnExpandableAreaExpansionChanged

// Begin Class UExpandableArea Function GetIsExpanded
struct Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics
{
	struct ExpandableArea_eventGetIsExpanded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExpandableArea_eventGetIsExpanded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExpandableArea_eventGetIsExpanded_Parms), &Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, nullptr, "GetIsExpanded", nullptr, nullptr, Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::ExpandableArea_eventGetIsExpanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::ExpandableArea_eventGetIsExpanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExpandableArea_GetIsExpanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandableArea_GetIsExpanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExpandableArea::execGetIsExpanded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsExpanded();
	P_NATIVE_END;
}
// End Class UExpandableArea Function GetIsExpanded

// Begin Class UExpandableArea Function SetIsExpanded
struct Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics
{
	struct ExpandableArea_eventSetIsExpanded_Parms
	{
		bool IsExpanded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsExpanded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded_SetBit(void* Obj)
{
	((ExpandableArea_eventSetIsExpanded_Parms*)Obj)->IsExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded = { "IsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExpandableArea_eventSetIsExpanded_Parms), &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::NewProp_IsExpanded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, nullptr, "SetIsExpanded", nullptr, nullptr, Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::ExpandableArea_eventSetIsExpanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::ExpandableArea_eventSetIsExpanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExpandableArea::execSetIsExpanded)
{
	P_GET_UBOOL(Z_Param_IsExpanded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsExpanded(Z_Param_IsExpanded);
	P_NATIVE_END;
}
// End Class UExpandableArea Function SetIsExpanded

// Begin Class UExpandableArea Function SetIsExpanded_Animated
struct Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics
{
	struct ExpandableArea_eventSetIsExpanded_Animated_Parms
	{
		bool IsExpanded;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsExpanded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded_SetBit(void* Obj)
{
	((ExpandableArea_eventSetIsExpanded_Animated_Parms*)Obj)->IsExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded = { "IsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExpandableArea_eventSetIsExpanded_Animated_Parms), &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::NewProp_IsExpanded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExpandableArea, nullptr, "SetIsExpanded_Animated", nullptr, nullptr, Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::ExpandableArea_eventSetIsExpanded_Animated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::ExpandableArea_eventSetIsExpanded_Animated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExpandableArea::execSetIsExpanded_Animated)
{
	P_GET_UBOOL(Z_Param_IsExpanded);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsExpanded_Animated(Z_Param_IsExpanded);
	P_NATIVE_END;
}
// End Class UExpandableArea Function SetIsExpanded_Animated

// Begin Class UExpandableArea
void UExpandableArea::GetBorderBrush_WrapperImpl(const void* Object, void* OutValue)
{
	const UExpandableArea* Obj = (const UExpandableArea*)Object;
	FSlateBrush& Result = *(FSlateBrush*)OutValue;
	Result = (FSlateBrush)Obj->GetBorderBrush();
}
void UExpandableArea::SetBorderBrush_WrapperImpl(void* Object, const void* InValue)
{
	UExpandableArea* Obj = (UExpandableArea*)Object;
	FSlateBrush& Value = *(FSlateBrush*)InValue;
	Obj->SetBorderBrush(Value);
}
void UExpandableArea::GetBorderColor_WrapperImpl(const void* Object, void* OutValue)
{
	const UExpandableArea* Obj = (const UExpandableArea*)Object;
	FSlateColor& Result = *(FSlateColor*)OutValue;
	Result = (FSlateColor)Obj->GetBorderColor();
}
void UExpandableArea::SetBorderColor_WrapperImpl(void* Object, const void* InValue)
{
	UExpandableArea* Obj = (UExpandableArea*)Object;
	FSlateColor& Value = *(FSlateColor*)InValue;
	Obj->SetBorderColor(Value);
}
void UExpandableArea::GetbIsExpanded_WrapperImpl(const void* Object, void* OutValue)
{
	const UExpandableArea* Obj = (const UExpandableArea*)Object;
	bool& Result = *(bool*)OutValue;
	Result = (bool)Obj->GetIsExpanded();
}
void UExpandableArea::SetbIsExpanded_WrapperImpl(void* Object, const void* InValue)
{
	UExpandableArea* Obj = (UExpandableArea*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetIsExpanded(Value);
}
void UExpandableArea::GetMaxHeight_WrapperImpl(const void* Object, void* OutValue)
{
	const UExpandableArea* Obj = (const UExpandableArea*)Object;
	float& Result = *(float*)OutValue;
	Result = (float)Obj->GetMaxHeight();
}
void UExpandableArea::SetMaxHeight_WrapperImpl(void* Object, const void* InValue)
{
	UExpandableArea* Obj = (UExpandableArea*)Object;
	float& Value = *(float*)InValue;
	Obj->SetMaxHeight(Value);
}
void UExpandableArea::GetHeaderPadding_WrapperImpl(const void* Object, void* OutValue)
{
	const UExpandableArea* Obj = (const UExpandableArea*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetHeaderPadding();
}
void UExpandableArea::SetHeaderPadding_WrapperImpl(void* Object, const void* InValue)
{
	UExpandableArea* Obj = (UExpandableArea*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetHeaderPadding(Value);
}
void UExpandableArea::GetAreaPadding_WrapperImpl(const void* Object, void* OutValue)
{
	const UExpandableArea* Obj = (const UExpandableArea*)Object;
	FMargin& Result = *(FMargin*)OutValue;
	Result = (FMargin)Obj->GetAreaPadding();
}
void UExpandableArea::SetAreaPadding_WrapperImpl(void* Object, const void* InValue)
{
	UExpandableArea* Obj = (UExpandableArea*)Object;
	FMargin& Value = *(FMargin*)InValue;
	Obj->SetAreaPadding(Value);
}
void UExpandableArea::StaticRegisterNativesUExpandableArea()
{
	UClass* Class = UExpandableArea::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetIsExpanded", &UExpandableArea::execGetIsExpanded },
		{ "SetIsExpanded", &UExpandableArea::execSetIsExpanded },
		{ "SetIsExpanded_Animated", &UExpandableArea::execSetIsExpanded_Animated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExpandableArea);
UClass* Z_Construct_UClass_UExpandableArea_NoRegister()
{
	return UExpandableArea::StaticClass();
}
struct Z_Construct_UClass_UExpandableArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Components/ExpandableArea.h" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderBrush_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[] = {
		{ "BlueprintGetter", "GetIsExpanded" },
		{ "BlueprintSetter", "SetIsExpanded" },
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Expansion" },
		{ "Comment", "/** The maximum height of the area */" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
		{ "ToolTip", "The maximum height of the area" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderPadding_MetaData[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaPadding_MetaData[] = {
		{ "Category", "Expansion" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnExpansionChanged_MetaData[] = {
		{ "Category", "ExpandableArea|Event" },
		{ "Comment", "/** A bindable delegate for the IsChecked. */" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
		{ "ToolTip", "A bindable delegate for the IsChecked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderContent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyContent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/ExpandableArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
	static void NewProp_bIsExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeaderPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AreaPadding;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExpansionChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeaderContent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyContent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExpandableArea_GetIsExpanded, "GetIsExpanded" }, // 2434341557
		{ &Z_Construct_UFunction_UExpandableArea_SetIsExpanded, "SetIsExpanded" }, // 3137656733
		{ &Z_Construct_UFunction_UExpandableArea_SetIsExpanded_Animated, "SetIsExpanded_Animated" }, // 3681381318
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExpandableArea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExpandableArea, Style), Z_Construct_UScriptStruct_FExpandableAreaStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) }; // 755514244
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush = { "BorderBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UExpandableArea::SetBorderBrush_WrapperImpl, &UExpandableArea::GetBorderBrush_WrapperImpl, 1, STRUCT_OFFSET(UExpandableArea, BorderBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderBrush_MetaData), NewProp_BorderBrush_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UExpandableArea::SetBorderColor_WrapperImpl, &UExpandableArea::GetBorderColor_WrapperImpl, 1, STRUCT_OFFSET(UExpandableArea, BorderColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderColor_MetaData), NewProp_BorderColor_MetaData) }; // 2024315916
void Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
{
	((UExpandableArea*)Obj)->bIsExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &UExpandableArea::SetbIsExpanded_WrapperImpl, &UExpandableArea::GetbIsExpanded_WrapperImpl, 1, sizeof(bool), sizeof(UExpandableArea), &Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExpanded_MetaData), NewProp_bIsExpanded_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, &UExpandableArea::SetMaxHeight_WrapperImpl, &UExpandableArea::GetMaxHeight_WrapperImpl, 1, STRUCT_OFFSET(UExpandableArea, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeight_MetaData), NewProp_MaxHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding = { "HeaderPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UExpandableArea::SetHeaderPadding_WrapperImpl, &UExpandableArea::GetHeaderPadding_WrapperImpl, 1, STRUCT_OFFSET(UExpandableArea, HeaderPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderPadding_MetaData), NewProp_HeaderPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding = { "AreaPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UExpandableArea::SetAreaPadding_WrapperImpl, &UExpandableArea::GetAreaPadding_WrapperImpl, 1, STRUCT_OFFSET(UExpandableArea, AreaPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaPadding_MetaData), NewProp_AreaPadding_MetaData) }; // 2986890016
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged = { "OnExpansionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExpandableArea, OnExpansionChanged), Z_Construct_UDelegateFunction_UMG_OnExpandableAreaExpansionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnExpansionChanged_MetaData), NewProp_OnExpansionChanged_MetaData) }; // 216559547
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent = { "HeaderContent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExpandableArea, HeaderContent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderContent_MetaData), NewProp_HeaderContent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent = { "BodyContent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExpandableArea, BodyContent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyContent_MetaData), NewProp_BodyContent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExpandableArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_Style,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_BorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_bIsExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_MaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_AreaPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_OnExpansionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_HeaderContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExpandableArea_Statics::NewProp_BodyContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExpandableArea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UExpandableArea_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNamedSlotInterface_NoRegister, (int32)VTABLE_OFFSET(UExpandableArea, INamedSlotInterface), false },  // 1434016692
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExpandableArea_Statics::ClassParams = {
	&UExpandableArea::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UExpandableArea_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExpandableArea_Statics::Class_MetaDataParams), Z_Construct_UClass_UExpandableArea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExpandableArea()
{
	if (!Z_Registration_Info_UClass_UExpandableArea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExpandableArea.OuterSingleton, Z_Construct_UClass_UExpandableArea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExpandableArea.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UExpandableArea>()
{
	return UExpandableArea::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExpandableArea);
UExpandableArea::~UExpandableArea() {}
	UE_FIELD_NOTIFICATION_IMPLEMENT_FIELD(UExpandableArea, bIsExpanded)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_BEGIN(UExpandableArea)
	UE_FIELD_NOTIFICATION_IMPLEMENT_ENUM_FIELD(UExpandableArea, bIsExpanded)
	UE_FIELD_NOTIFICATION_IMPLEMENTATION_END(UExpandableArea);
// End Class UExpandableArea

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExpandableArea, UExpandableArea::StaticClass, TEXT("UExpandableArea"), &Z_Registration_Info_UClass_UExpandableArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExpandableArea), 2710174002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_2355964889(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ExpandableArea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
