// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/DynamicEntryBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicEntryBox() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UDynamicEntryBox Function BP_CreateEntry
struct Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics
{
	struct DynamicEntryBox_eventBP_CreateEntry_Parms
	{
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicEntryBox" },
		{ "Comment", "/** Creates and establishes a new dynamic entry in the box */" },
		{ "DisplayName", "Create Entry" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Creates and establishes a new dynamic entry in the box" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicEntryBox_eventBP_CreateEntry_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "BP_CreateEntry", nullptr, nullptr, Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::DynamicEntryBox_eventBP_CreateEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::DynamicEntryBox_eventBP_CreateEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicEntryBox::execBP_CreateEntry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->BP_CreateEntry();
	P_NATIVE_END;
}
// End Class UDynamicEntryBox Function BP_CreateEntry

// Begin Class UDynamicEntryBox Function BP_CreateEntryOfClass
struct Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics
{
	struct DynamicEntryBox_eventBP_CreateEntryOfClass_Parms
	{
		TSubclassOf<UUserWidget> EntryClass;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DynamicEntryBox" },
		{ "Comment", "/** Creates and establishes a new dynamic entry in the box using the specified class instead of the default. */" },
		{ "DeterminesOutputType", "EntryClass" },
		{ "DisplayName", "Create Entry of Class" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Creates and establishes a new dynamic entry in the box using the specified class instead of the default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EntryClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_EntryClass = { "EntryClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicEntryBox_eventBP_CreateEntryOfClass_Parms, EntryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicEntryBox_eventBP_CreateEntryOfClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_EntryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "BP_CreateEntryOfClass", nullptr, nullptr, Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::DynamicEntryBox_eventBP_CreateEntryOfClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::DynamicEntryBox_eventBP_CreateEntryOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicEntryBox::execBP_CreateEntryOfClass)
{
	P_GET_OBJECT(UClass,Z_Param_EntryClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->BP_CreateEntryOfClass(Z_Param_EntryClass);
	P_NATIVE_END;
}
// End Class UDynamicEntryBox Function BP_CreateEntryOfClass

// Begin Class UDynamicEntryBox Function RemoveEntry
struct Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics
{
	struct DynamicEntryBox_eventRemoveEntry_Parms
	{
		UUserWidget* EntryWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget = { "EntryWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicEntryBox_eventRemoveEntry_Parms, EntryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidget_MetaData), NewProp_EntryWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::NewProp_EntryWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "RemoveEntry", nullptr, nullptr, Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::DynamicEntryBox_eventRemoveEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::DynamicEntryBox_eventRemoveEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicEntryBox::execRemoveEntry)
{
	P_GET_OBJECT(UUserWidget,Z_Param_EntryWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveEntry(Z_Param_EntryWidget);
	P_NATIVE_END;
}
// End Class UDynamicEntryBox Function RemoveEntry

// Begin Class UDynamicEntryBox Function Reset
struct Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics
{
	struct DynamicEntryBox_eventReset_Parms
	{
		bool bDeleteWidgets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DynamicEntryBox" },
		{ "Comment", "/** Clear out the box entries, optionally deleting the underlying Slate widgets entirely as well. */" },
		{ "CPP_Default_bDeleteWidgets", "false" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "Clear out the box entries, optionally deleting the underlying Slate widgets entirely as well." },
	};
#endif // WITH_METADATA
	static void NewProp_bDeleteWidgets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteWidgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets_SetBit(void* Obj)
{
	((DynamicEntryBox_eventReset_Parms*)Obj)->bDeleteWidgets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets = { "bDeleteWidgets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicEntryBox_eventReset_Parms), &Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::NewProp_bDeleteWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicEntryBox, nullptr, "Reset", nullptr, nullptr, Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::DynamicEntryBox_eventReset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::DynamicEntryBox_eventReset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicEntryBox_Reset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicEntryBox_Reset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDynamicEntryBox::execReset)
{
	P_GET_UBOOL(Z_Param_bDeleteWidgets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset(Z_Param_bDeleteWidgets);
	P_NATIVE_END;
}
// End Class UDynamicEntryBox Function Reset

// Begin Class UDynamicEntryBox
void UDynamicEntryBox::StaticRegisterNativesUDynamicEntryBox()
{
	UClass* Class = UDynamicEntryBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_CreateEntry", &UDynamicEntryBox::execBP_CreateEntry },
		{ "BP_CreateEntryOfClass", &UDynamicEntryBox::execBP_CreateEntryOfClass },
		{ "RemoveEntry", &UDynamicEntryBox::execRemoveEntry },
		{ "Reset", &UDynamicEntryBox::execReset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicEntryBox);
UClass* Z_Construct_UClass_UDynamicEntryBox_NoRegister()
{
	return UDynamicEntryBox::StaticClass();
}
struct Z_Construct_UClass_UDynamicEntryBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A special box panel that auto-generates its entries at both design-time and runtime.\n * Useful for cases where you can have a varying number of entries, but it isn't worth the effort or conceptual overhead to set up a list/tile view.\n * Note that entries here are *not* virtualized as they are in the list views, so generally this should be avoided if you intend to scroll through lots of items.\n *\n * No children can be manually added in the designer - all are auto-generated based on the given entry class.\n */" },
		{ "IncludePath", "Components/DynamicEntryBox.h" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "A special box panel that auto-generates its entries at both design-time and runtime.\nUseful for cases where you can have a varying number of entries, but it isn't worth the effort or conceptual overhead to set up a list/tile view.\nNote that entries here are *not* virtualized as they are in the list views, so generally this should be avoided if you intend to scroll through lots of items.\n\nNo children can be manually added in the designer - all are auto-generated based on the given entry class." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumDesignerPreviewEntries_MetaData[] = {
		{ "Category", "DynamicEntryBox" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EntryLayout" },
		{ "Comment", "/**\n\x09 * The class of widget to create entries of.\n\x09 * If natively binding this widget, use the EntryClass UPROPERTY metadata to specify the desired entry widget base class.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DynamicEntryBox.h" },
		{ "ToolTip", "The class of widget to create entries of.\nIf natively binding this widget, use the EntryClass UPROPERTY metadata to specify the desired entry widget base class." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumDesignerPreviewEntries;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EntryWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntry, "BP_CreateEntry" }, // 3491104732
		{ &Z_Construct_UFunction_UDynamicEntryBox_BP_CreateEntryOfClass, "BP_CreateEntryOfClass" }, // 3699440864
		{ &Z_Construct_UFunction_UDynamicEntryBox_RemoveEntry, "RemoveEntry" }, // 4147044088
		{ &Z_Construct_UFunction_UDynamicEntryBox_Reset, "Reset" }, // 3665610479
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicEntryBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries = { "NumDesignerPreviewEntries", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicEntryBox, NumDesignerPreviewEntries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumDesignerPreviewEntries_MetaData), NewProp_NumDesignerPreviewEntries_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass = { "EntryWidgetClass", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicEntryBox, EntryWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryWidgetClass_MetaData), NewProp_EntryWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_NumDesignerPreviewEntries,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicEntryBox_Statics::NewProp_EntryWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDynamicEntryBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicEntryBoxBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicEntryBox_Statics::ClassParams = {
	&UDynamicEntryBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicEntryBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UDynamicEntryBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDynamicEntryBox()
{
	if (!Z_Registration_Info_UClass_UDynamicEntryBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicEntryBox.OuterSingleton, Z_Construct_UClass_UDynamicEntryBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicEntryBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UDynamicEntryBox>()
{
	return UDynamicEntryBox::StaticClass();
}
UDynamicEntryBox::UDynamicEntryBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicEntryBox);
UDynamicEntryBox::~UDynamicEntryBox() {}
// End Class UDynamicEntryBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicEntryBox, UDynamicEntryBox::StaticClass, TEXT("UDynamicEntryBox"), &Z_Registration_Info_UClass_UDynamicEntryBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicEntryBox), 3586534443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_2067271658(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_DynamicEntryBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
