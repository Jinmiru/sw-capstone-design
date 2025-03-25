// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Styling/EditableTextBoxWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableTextBoxWidgetStyle() {}

// Begin Cross Module References
SLATE_API UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle();
SLATE_API UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditableTextBoxStyle();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Class UEditableTextBoxWidgetStyle
void UEditableTextBoxWidgetStyle::StaticRegisterNativesUEditableTextBoxWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableTextBoxWidgetStyle);
UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle_NoRegister()
{
	return UEditableTextBoxWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/EditableTextBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/EditableTextBoxWidgetStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/EditableTextBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EditableTextBoxStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableTextBoxWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::NewProp_EditableTextBoxStyle = { "EditableTextBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEditableTextBoxWidgetStyle, EditableTextBoxStyle), Z_Construct_UScriptStruct_FEditableTextBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBoxStyle_MetaData), NewProp_EditableTextBoxStyle_MetaData) }; // 661305945
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::NewProp_EditableTextBoxStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::ClassParams = {
	&UEditableTextBoxWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEditableTextBoxWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.OuterSingleton, Z_Construct_UClass_UEditableTextBoxWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle.OuterSingleton;
}
template<> SLATE_API UClass* StaticClass<UEditableTextBoxWidgetStyle>()
{
	return UEditableTextBoxWidgetStyle::StaticClass();
}
UEditableTextBoxWidgetStyle::UEditableTextBoxWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableTextBoxWidgetStyle);
UEditableTextBoxWidgetStyle::~UEditableTextBoxWidgetStyle() {}
// End Class UEditableTextBoxWidgetStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEditableTextBoxWidgetStyle, UEditableTextBoxWidgetStyle::StaticClass, TEXT("UEditableTextBoxWidgetStyle"), &Z_Registration_Info_UClass_UEditableTextBoxWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableTextBoxWidgetStyle), 2287393911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h_2073131503(TEXT("/Script/Slate"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_EditableTextBoxWidgetStyle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
