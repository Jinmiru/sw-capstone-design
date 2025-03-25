// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/GridPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPanel() {}

// Begin Cross Module References
UMG_API UClass* Z_Construct_UClass_UGridPanel();
UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UPanelWidget();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UGridPanel Function AddChildToGrid
struct Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics
{
	struct GridPanel_eventAddChildToGrid_Parms
	{
		UWidget* Content;
		int32 InRow;
		int32 InColumn;
		UGridSlot* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "CPP_Default_InColumn", "0" },
		{ "CPP_Default_InRow", "0" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InRow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InColumn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPanel_eventAddChildToGrid_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_InRow = { "InRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPanel_eventAddChildToGrid_Parms, InRow), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_InColumn = { "InColumn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPanel_eventAddChildToGrid_Parms, InColumn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPanel_eventAddChildToGrid_Parms, ReturnValue), Z_Construct_UClass_UGridSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_InRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_InColumn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPanel, nullptr, "AddChildToGrid", nullptr, nullptr, Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::GridPanel_eventAddChildToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::GridPanel_eventAddChildToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridPanel_AddChildToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridPanel_AddChildToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridPanel::execAddChildToGrid)
{
	P_GET_OBJECT(UWidget,Z_Param_Content);
	P_GET_PROPERTY(FIntProperty,Z_Param_InRow);
	P_GET_PROPERTY(FIntProperty,Z_Param_InColumn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGridSlot**)Z_Param__Result=P_THIS->AddChildToGrid(Z_Param_Content,Z_Param_InRow,Z_Param_InColumn);
	P_NATIVE_END;
}
// End Class UGridPanel Function AddChildToGrid

// Begin Class UGridPanel Function SetColumnFill
struct Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics
{
	struct GridPanel_eventSetColumnFill_Parms
	{
		int32 ColumnIndex;
		float Coefficient;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColumnIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::NewProp_ColumnIndex = { "ColumnIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPanel_eventSetColumnFill_Parms, ColumnIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPanel_eventSetColumnFill_Parms, Coefficient), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::NewProp_ColumnIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::NewProp_Coefficient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPanel, nullptr, "SetColumnFill", nullptr, nullptr, Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::GridPanel_eventSetColumnFill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::GridPanel_eventSetColumnFill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridPanel_SetColumnFill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridPanel_SetColumnFill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridPanel::execSetColumnFill)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ColumnIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Coefficient);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColumnFill(Z_Param_ColumnIndex,Z_Param_Coefficient);
	P_NATIVE_END;
}
// End Class UGridPanel Function SetColumnFill

// Begin Class UGridPanel Function SetRowFill
struct Z_Construct_UFunction_UGridPanel_SetRowFill_Statics
{
	struct GridPanel_eventSetRowFill_Parms
	{
		int32 RowIndex;
		float Coefficient;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RowIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPanel_eventSetRowFill_Parms, RowIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridPanel_eventSetRowFill_Parms, Coefficient), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::NewProp_RowIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::NewProp_Coefficient,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridPanel, nullptr, "SetRowFill", nullptr, nullptr, Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::GridPanel_eventSetRowFill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::GridPanel_eventSetRowFill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridPanel_SetRowFill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridPanel_SetRowFill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridPanel::execSetRowFill)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RowIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Coefficient);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRowFill(Z_Param_RowIndex,Z_Param_Coefficient);
	P_NATIVE_END;
}
// End Class UGridPanel Function SetRowFill

// Begin Class UGridPanel
void UGridPanel::StaticRegisterNativesUGridPanel()
{
	UClass* Class = UGridPanel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildToGrid", &UGridPanel::execAddChildToGrid },
		{ "SetColumnFill", &UGridPanel::execSetColumnFill },
		{ "SetRowFill", &UGridPanel::execSetRowFill },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridPanel);
UClass* Z_Construct_UClass_UGridPanel_NoRegister()
{
	return UGridPanel::StaticClass();
}
struct Z_Construct_UClass_UGridPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A table-like panel that retains the width of every column throughout the table.\n * \n * * Many Children\n */" },
		{ "IncludePath", "Components/GridPanel.h" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
		{ "ToolTip", "A table-like panel that retains the width of every column throughout the table.\n\n* Many Children" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnFill_MetaData[] = {
		{ "Category", "Fill Rules" },
		{ "Comment", "/** The column fill rules */" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
		{ "ToolTip", "The column fill rules" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowFill_MetaData[] = {
		{ "Category", "Fill Rules" },
		{ "Comment", "/** The row fill rules */" },
		{ "ModuleRelativePath", "Public/Components/GridPanel.h" },
		{ "ToolTip", "The row fill rules" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ColumnFill_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ColumnFill;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RowFill_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RowFill;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridPanel_AddChildToGrid, "AddChildToGrid" }, // 295492394
		{ &Z_Construct_UFunction_UGridPanel_SetColumnFill, "SetColumnFill" }, // 3556367453
		{ &Z_Construct_UFunction_UGridPanel_SetRowFill, "SetRowFill" }, // 3198131056
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridPanel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill_Inner = { "ColumnFill", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill = { "ColumnFill", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPanel, ColumnFill), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnFill_MetaData), NewProp_ColumnFill_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill_Inner = { "RowFill", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill = { "RowFill", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridPanel, RowFill), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowFill_MetaData), NewProp_RowFill_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridPanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPanel_Statics::NewProp_ColumnFill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridPanel_Statics::NewProp_RowFill,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPanel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridPanel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPanel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridPanel_Statics::ClassParams = {
	&UGridPanel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGridPanel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridPanel_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridPanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridPanel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridPanel()
{
	if (!Z_Registration_Info_UClass_UGridPanel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridPanel.OuterSingleton, Z_Construct_UClass_UGridPanel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridPanel.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UGridPanel>()
{
	return UGridPanel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPanel);
UGridPanel::~UGridPanel() {}
// End Class UGridPanel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridPanel, UGridPanel::StaticClass, TEXT("UGridPanel"), &Z_Registration_Info_UClass_UGridPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridPanel), 4256089699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_1914700711(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
