// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/ComboBox.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBox() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
UMG_API UClass* Z_Construct_UClass_UComboBox();
UMG_API UClass* Z_Construct_UClass_UComboBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UComboBox
void UComboBox::StaticRegisterNativesUComboBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboBox);
UClass* Z_Construct_UClass_UComboBox_NoRegister()
{
	return UComboBox::StaticClass();
}
struct Z_Construct_UClass_UComboBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The combobox allows you to display a list of options to the user in a dropdown menu for them to select one.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "ComboBox (Object)" },
		{ "IncludePath", "Components/ComboBox.h" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
		{ "ToolTip", "The combobox allows you to display a list of options to the user in a dropdown menu for them to select one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The list of items to be displayed on the combobox. */" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
		{ "ToolTip", "The list of items to be displayed on the combobox." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateWidgetEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when the widget is needed for the item. */" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
		{ "ToolTip", "Called when the widget is needed for the item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Components/ComboBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnGenerateWidgetEvent;
	static void NewProp_bIsFocusable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBox, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBarStyle_MetaData), NewProp_ScrollBarStyle_MetaData) }; // 1456599938
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBox, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent = { "OnGenerateWidgetEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBox, OnGenerateWidgetEvent), Z_Construct_UDelegateFunction_UWidget_GenerateWidgetForObject__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerateWidgetEvent_MetaData), NewProp_OnGenerateWidgetEvent_MetaData) }; // 3343311897
void Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
{
	((UComboBox*)Obj)->bIsFocusable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable = { "bIsFocusable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UComboBox), &Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFocusable_MetaData), NewProp_bIsFocusable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_ScrollBarStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_OnGenerateWidgetEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBox_Statics::NewProp_bIsFocusable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComboBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboBox_Statics::ClassParams = {
	&UComboBox::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UComboBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboBox()
{
	if (!Z_Registration_Info_UClass_UComboBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboBox.OuterSingleton, Z_Construct_UClass_UComboBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboBox.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UComboBox>()
{
	return UComboBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBox);
UComboBox::~UComboBox() {}
// End Class UComboBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboBox, UComboBox::StaticClass, TEXT("UComboBox"), &Z_Registration_Info_UClass_UComboBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboBox), 1576160012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_2795754864(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ComboBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
