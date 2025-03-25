// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/TileView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileView() {}

// Begin Cross Module References
SLATE_API UEnum* Z_Construct_UEnum_Slate_EListItemAlignment();
UMG_API UClass* Z_Construct_UClass_UListView();
UMG_API UClass* Z_Construct_UClass_UTileView();
UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UTileView Function GetEntryHeight
struct Z_Construct_UFunction_UTileView_GetEntryHeight_Statics
{
	struct TileView_eventGetEntryHeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Gets the height of tile entries */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Gets the height of tile entries" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileView_eventGetEntryHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "GetEntryHeight", nullptr, nullptr, Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::TileView_eventGetEntryHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::TileView_eventGetEntryHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileView_GetEntryHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTileView::execGetEntryHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEntryHeight();
	P_NATIVE_END;
}
// End Class UTileView Function GetEntryHeight

// Begin Class UTileView Function GetEntryWidth
struct Z_Construct_UFunction_UTileView_GetEntryWidth_Statics
{
	struct TileView_eventGetEntryWidth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Gets the width of tile entries */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Gets the width of tile entries" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileView_eventGetEntryWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "GetEntryWidth", nullptr, nullptr, Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::TileView_eventGetEntryWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::TileView_eventGetEntryWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileView_GetEntryWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTileView::execGetEntryWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetEntryWidth();
	P_NATIVE_END;
}
// End Class UTileView Function GetEntryWidth

// Begin Class UTileView Function IsAligned
struct Z_Construct_UFunction_UTileView_IsAligned_Statics
{
	struct TileView_eventIsAligned_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Returns whether the TileView is left, right or center aligned. */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Returns whether the TileView is left, right or center aligned." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTileView_IsAligned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TileView_eventIsAligned_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileView_IsAligned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TileView_eventIsAligned_Parms), &Z_Construct_UFunction_UTileView_IsAligned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_IsAligned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_IsAligned_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_IsAligned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_IsAligned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "IsAligned", nullptr, nullptr, Z_Construct_UFunction_UTileView_IsAligned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_IsAligned_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTileView_IsAligned_Statics::TileView_eventIsAligned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_IsAligned_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTileView_IsAligned_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTileView_IsAligned_Statics::TileView_eventIsAligned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileView_IsAligned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileView_IsAligned_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTileView::execIsAligned)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAligned();
	P_NATIVE_END;
}
// End Class UTileView Function IsAligned

// Begin Class UTileView Function SetEntryHeight
struct Z_Construct_UFunction_UTileView_SetEntryHeight_Statics
{
	struct TileView_eventSetEntryHeight_Parms
	{
		float NewHeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Sets the height of every tile entry */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Sets the height of every tile entry" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::NewProp_NewHeight = { "NewHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileView_eventSetEntryHeight_Parms, NewHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::NewProp_NewHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "SetEntryHeight", nullptr, nullptr, Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::TileView_eventSetEntryHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::TileView_eventSetEntryHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileView_SetEntryHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTileView::execSetEntryHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEntryHeight(Z_Param_NewHeight);
	P_NATIVE_END;
}
// End Class UTileView Function SetEntryHeight

// Begin Class UTileView Function SetEntryWidth
struct Z_Construct_UFunction_UTileView_SetEntryWidth_Statics
{
	struct TileView_eventSetEntryWidth_Parms
	{
		float NewWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Sets the width of every tile entry */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Sets the width of every tile entry" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::NewProp_NewWidth = { "NewWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TileView_eventSetEntryWidth_Parms, NewWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::NewProp_NewWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "SetEntryWidth", nullptr, nullptr, Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::TileView_eventSetEntryWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::TileView_eventSetEntryWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileView_SetEntryWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTileView::execSetEntryWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEntryWidth(Z_Param_NewWidth);
	P_NATIVE_END;
}
// End Class UTileView Function SetEntryWidth

// Begin Class UTileView
void UTileView::StaticRegisterNativesUTileView()
{
	UClass* Class = UTileView::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEntryHeight", &UTileView::execGetEntryHeight },
		{ "GetEntryWidth", &UTileView::execGetEntryWidth },
		{ "IsAligned", &UTileView::execIsAligned },
		{ "SetEntryHeight", &UTileView::execSetEntryHeight },
		{ "SetEntryWidth", &UTileView::execSetEntryWidth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileView);
UClass* Z_Construct_UClass_UTileView_NoRegister()
{
	return UTileView::StaticClass();
}
struct Z_Construct_UClass_UTileView_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A ListView that presents the contents as a set of tiles all uniformly sized.\n *\n * To make a widget usable as an entry in a TileView, it must inherit from the IUserObjectListEntry interface.\n */" },
		{ "IncludePath", "Components/TileView.h" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A ListView that presents the contents as a set of tiles all uniformly sized.\n\nTo make a widget usable as an entry in a TileView, it must inherit from the IUserObjectListEntry interface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryHeight_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/** The height of each tile */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The height of each tile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidth_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/** The width of each tile */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The width of each tile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileAlignment_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/** The method by which to align the tile entries in the available space for the tile view */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The method by which to align the tile entries in the available space for the tile view" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWrapHorizontalNavigation_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** True to allow left/right navigation to wrap back to the tile on the opposite edge */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "True to allow left/right navigation to wrap back to the tile on the opposite edge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollbarDisabledVisibility_MetaData[] = {
		{ "Category", "ListView" },
		{ "Comment", "/** Set the visibility of the Scrollbar when it's not needed */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Set the visibility of the Scrollbar when it's not needed" },
		{ "ValidEnumValues", "Collapsed, Hidden, Visible" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEntrySizeIncludesEntrySpacing_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/**\n\x09 * True if entry dimensions should be the sum of the entry widget dimensions and the spacing.\n\x09 * This means the size of the entry widget will be adjusted so that the summation of the widget size and entry spacing always equals entry size.\n\x09 */" },
		{ "EditCondition", "IsAligned" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "True if entry dimensions should be the sum of the entry widget dimensions and the spacing.\nThis means the size of the entry widget will be adjusted so that the summation of the widget size and entry spacing always equals entry size." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EntryHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EntryWidth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileAlignment_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileAlignment;
	static void NewProp_bWrapHorizontalNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapHorizontalNavigation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScrollbarDisabledVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScrollbarDisabledVisibility;
	static void NewProp_bEntrySizeIncludesEntrySpacing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEntrySizeIncludesEntrySpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTileView_GetEntryHeight, "GetEntryHeight" }, // 1941573083
		{ &Z_Construct_UFunction_UTileView_GetEntryWidth, "GetEntryWidth" }, // 3795831995
		{ &Z_Construct_UFunction_UTileView_IsAligned, "IsAligned" }, // 1399412950
		{ &Z_Construct_UFunction_UTileView_SetEntryHeight, "SetEntryHeight" }, // 2167486843
		{ &Z_Construct_UFunction_UTileView_SetEntryWidth, "SetEntryWidth" }, // 557072069
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileView>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight = { "EntryHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTileView, EntryHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryHeight_MetaData), NewProp_EntryHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth = { "EntryWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTileView, EntryWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidth_MetaData), NewProp_EntryWidth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment = { "TileAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTileView, TileAlignment), Z_Construct_UEnum_Slate_EListItemAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileAlignment_MetaData), NewProp_TileAlignment_MetaData) }; // 2025916266
void Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_SetBit(void* Obj)
{
	((UTileView*)Obj)->bWrapHorizontalNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation = { "bWrapHorizontalNavigation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTileView), &Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWrapHorizontalNavigation_MetaData), NewProp_bWrapHorizontalNavigation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_ScrollbarDisabledVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_ScrollbarDisabledVisibility = { "ScrollbarDisabledVisibility", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTileView, ScrollbarDisabledVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollbarDisabledVisibility_MetaData), NewProp_ScrollbarDisabledVisibility_MetaData) }; // 2974316103
void Z_Construct_UClass_UTileView_Statics::NewProp_bEntrySizeIncludesEntrySpacing_SetBit(void* Obj)
{
	((UTileView*)Obj)->bEntrySizeIncludesEntrySpacing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_bEntrySizeIncludesEntrySpacing = { "bEntrySizeIncludesEntrySpacing", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTileView), &Z_Construct_UClass_UTileView_Statics::NewProp_bEntrySizeIncludesEntrySpacing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEntrySizeIncludesEntrySpacing_MetaData), NewProp_bEntrySizeIncludesEntrySpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_ScrollbarDisabledVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_ScrollbarDisabledVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_bEntrySizeIncludesEntrySpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTileView_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UListView,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileView_Statics::ClassParams = {
	&UTileView::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTileView_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams), Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTileView()
{
	if (!Z_Registration_Info_UClass_UTileView.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileView.OuterSingleton, Z_Construct_UClass_UTileView_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTileView.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UTileView>()
{
	return UTileView::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTileView);
UTileView::~UTileView() {}
// End Class UTileView

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTileView, UTileView::StaticClass, TEXT("UTileView"), &Z_Registration_Info_UClass_UTileView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileView), 2253989559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_3735459290(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
