// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Styling/CheckBoxWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckBoxWidgetStyle() {}

// Begin Cross Module References
SLATE_API UClass* Z_Construct_UClass_UCheckBoxWidgetStyle();
SLATE_API UClass* Z_Construct_UClass_UCheckBoxWidgetStyle_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Class UCheckBoxWidgetStyle
void UCheckBoxWidgetStyle::StaticRegisterNativesUCheckBoxWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckBoxWidgetStyle);
UClass* Z_Construct_UClass_UCheckBoxWidgetStyle_NoRegister()
{
	return UCheckBoxWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UCheckBoxWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/CheckBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/CheckBoxWidgetStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/CheckBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckBoxStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckBoxWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::NewProp_CheckBoxStyle = { "CheckBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckBoxWidgetStyle, CheckBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBoxStyle_MetaData), NewProp_CheckBoxStyle_MetaData) }; // 2899985267
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::NewProp_CheckBoxStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::ClassParams = {
	&UCheckBoxWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCheckBoxWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UCheckBoxWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckBoxWidgetStyle.OuterSingleton, Z_Construct_UClass_UCheckBoxWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCheckBoxWidgetStyle.OuterSingleton;
}
template<> SLATE_API UClass* StaticClass<UCheckBoxWidgetStyle>()
{
	return UCheckBoxWidgetStyle::StaticClass();
}
UCheckBoxWidgetStyle::UCheckBoxWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBoxWidgetStyle);
UCheckBoxWidgetStyle::~UCheckBoxWidgetStyle() {}
// End Class UCheckBoxWidgetStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCheckBoxWidgetStyle, UCheckBoxWidgetStyle::StaticClass, TEXT("UCheckBoxWidgetStyle"), &Z_Registration_Info_UClass_UCheckBoxWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckBoxWidgetStyle), 2176180829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h_228287761(TEXT("/Script/Slate"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_CheckBoxWidgetStyle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
