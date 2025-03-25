// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Styling/ComboBoxWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxWidgetStyle() {}

// Begin Cross Module References
SLATE_API UClass* Z_Construct_UClass_UComboBoxWidgetStyle();
SLATE_API UClass* Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FComboBoxStyle();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Class UComboBoxWidgetStyle
void UComboBoxWidgetStyle::StaticRegisterNativesUComboBoxWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComboBoxWidgetStyle);
UClass* Z_Construct_UClass_UComboBoxWidgetStyle_NoRegister()
{
	return UComboBoxWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UComboBoxWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ComboBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ComboBoxWidgetStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the combo box's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ComboBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the combo box's appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboBoxStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBoxWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComboBoxWidgetStyle_Statics::NewProp_ComboBoxStyle = { "ComboBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UComboBoxWidgetStyle, ComboBoxStyle), Z_Construct_UScriptStruct_FComboBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboBoxStyle_MetaData), NewProp_ComboBoxStyle_MetaData) }; // 594911996
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBoxWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxWidgetStyle_Statics::NewProp_ComboBoxStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UComboBoxWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UComboBoxWidgetStyle_Statics::ClassParams = {
	&UComboBoxWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UComboBoxWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UComboBoxWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UComboBoxWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UComboBoxWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComboBoxWidgetStyle.OuterSingleton, Z_Construct_UClass_UComboBoxWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UComboBoxWidgetStyle.OuterSingleton;
}
template<> SLATE_API UClass* StaticClass<UComboBoxWidgetStyle>()
{
	return UComboBoxWidgetStyle::StaticClass();
}
UComboBoxWidgetStyle::UComboBoxWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxWidgetStyle);
UComboBoxWidgetStyle::~UComboBoxWidgetStyle() {}
// End Class UComboBoxWidgetStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UComboBoxWidgetStyle, UComboBoxWidgetStyle::StaticClass, TEXT("UComboBoxWidgetStyle"), &Z_Registration_Info_UClass_UComboBoxWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComboBoxWidgetStyle), 3579702238U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_2643760005(TEXT("/Script/Slate"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ComboBoxWidgetStyle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
