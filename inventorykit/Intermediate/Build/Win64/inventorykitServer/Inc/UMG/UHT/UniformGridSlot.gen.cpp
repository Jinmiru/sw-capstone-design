// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/UniformGridSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniformGridSlot() {}

// Begin Cross Module References
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
UMG_API UClass* Z_Construct_UClass_UPanelSlot();
UMG_API UClass* Z_Construct_UClass_UUniformGridSlot();
UMG_API UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UUniformGridSlot Function SetColumn
struct Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics
{
	struct UniformGridSlot_eventSetColumn_Parms
	{
		int32 InColumn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** Sets the column index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "Sets the column index of the slot, this determines what cell the slot is in the panel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InColumn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::NewProp_InColumn = { "InColumn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformGridSlot_eventSetColumn_Parms, InColumn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::NewProp_InColumn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetColumn", nullptr, nullptr, Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::UniformGridSlot_eventSetColumn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::UniformGridSlot_eventSetColumn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniformGridSlot_SetColumn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniformGridSlot::execSetColumn)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InColumn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColumn(Z_Param_InColumn);
	P_NATIVE_END;
}
// End Class UUniformGridSlot Function SetColumn

// Begin Class UUniformGridSlot Function SetHorizontalAlignment
struct Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics
{
	struct UniformGridSlot_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformGridSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::UniformGridSlot_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::UniformGridSlot_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniformGridSlot::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// End Class UUniformGridSlot Function SetHorizontalAlignment

// Begin Class UUniformGridSlot Function SetRow
struct Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics
{
	struct UniformGridSlot_eventSetRow_Parms
	{
		int32 InRow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** Sets the row index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "Sets the row index of the slot, this determines what cell the slot is in the panel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InRow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::NewProp_InRow = { "InRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformGridSlot_eventSetRow_Parms, InRow), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::NewProp_InRow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetRow", nullptr, nullptr, Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::UniformGridSlot_eventSetRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::UniformGridSlot_eventSetRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniformGridSlot_SetRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniformGridSlot::execSetRow)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRow(Z_Param_InRow);
	P_NATIVE_END;
}
// End Class UUniformGridSlot Function SetRow

// Begin Class UUniformGridSlot Function SetVerticalAlignment
struct Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics
{
	struct UniformGridSlot_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UniformGridSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::UniformGridSlot_eventSetVerticalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::UniformGridSlot_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUniformGridSlot::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// End Class UUniformGridSlot Function SetVerticalAlignment

// Begin Class UUniformGridSlot
void UUniformGridSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UUniformGridSlot* Obj = (UUniformGridSlot*)Object;
	EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
	Obj->SetHorizontalAlignment(Value);
}
void UUniformGridSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
{
	UUniformGridSlot* Obj = (UUniformGridSlot*)Object;
	EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
	Obj->SetVerticalAlignment(Value);
}
void UUniformGridSlot::SetRow_WrapperImpl(void* Object, const void* InValue)
{
	UUniformGridSlot* Obj = (UUniformGridSlot*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetRow(Value);
}
void UUniformGridSlot::SetColumn_WrapperImpl(void* Object, const void* InValue)
{
	UUniformGridSlot* Obj = (UUniformGridSlot*)Object;
	int32& Value = *(int32*)InValue;
	Obj->SetColumn(Value);
}
void UUniformGridSlot::StaticRegisterNativesUUniformGridSlot()
{
	UClass* Class = UUniformGridSlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetColumn", &UUniformGridSlot::execSetColumn },
		{ "SetHorizontalAlignment", &UUniformGridSlot::execSetHorizontalAlignment },
		{ "SetRow", &UUniformGridSlot::execSetRow },
		{ "SetVerticalAlignment", &UUniformGridSlot::execSetVerticalAlignment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniformGridSlot);
UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister()
{
	return UUniformGridSlot::StaticClass();
}
struct Z_Construct_UClass_UUniformGridSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A slot for UUniformGridPanel, these slots all share the same size as the largest slot\n * in the grid.\n */" },
		{ "IncludePath", "Components/UniformGridSlot.h" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "A slot for UUniformGridPanel, these slots all share the same size as the largest slot\nin the grid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "BlueprintSetter", "SetRow" },
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The row index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The row index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[] = {
		{ "BlueprintSetter", "SetColumn" },
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The column index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The column index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniformGridSlot_SetColumn, "SetColumn" }, // 2422621197
		{ &Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 2874885125
		{ &Z_Construct_UFunction_UUniformGridSlot_SetRow, "SetRow" }, // 3474137602
		{ &Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 2305795643
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformGridSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UUniformGridSlot::SetHorizontalAlignment_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UUniformGridSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, &UUniformGridSlot::SetVerticalAlignment_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UUniformGridSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UUniformGridSlot::SetRow_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UUniformGridSlot, Row), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, &UUniformGridSlot::SetColumn_WrapperImpl, nullptr, 1, STRUCT_OFFSET(UUniformGridSlot, Column), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Column_MetaData), NewProp_Column_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUniformGridSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPanelSlot,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniformGridSlot_Statics::ClassParams = {
	&UUniformGridSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UUniformGridSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUniformGridSlot()
{
	if (!Z_Registration_Info_UClass_UUniformGridSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniformGridSlot.OuterSingleton, Z_Construct_UClass_UUniformGridSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUniformGridSlot.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UUniformGridSlot>()
{
	return UUniformGridSlot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformGridSlot);
UUniformGridSlot::~UUniformGridSlot() {}
// End Class UUniformGridSlot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUniformGridSlot, UUniformGridSlot::StaticClass, TEXT("UUniformGridSlot"), &Z_Registration_Info_UClass_UUniformGridSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniformGridSlot), 932752577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_2441820301(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
