// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Styling/ScrollBarWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBarWidgetStyle() {}

// Begin Cross Module References
SLATE_API UClass* Z_Construct_UClass_UScrollBarWidgetStyle();
SLATE_API UClass* Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Class UScrollBarWidgetStyle
void UScrollBarWidgetStyle::StaticRegisterNativesUScrollBarWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScrollBarWidgetStyle);
UClass* Z_Construct_UClass_UScrollBarWidgetStyle_NoRegister()
{
	return UScrollBarWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UScrollBarWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ScrollBarWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBarWidgetStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBarStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the scrollbox's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ScrollBarWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the scrollbox's appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBarStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBarWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBarWidgetStyle_Statics::NewProp_ScrollBarStyle = { "ScrollBarStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScrollBarWidgetStyle, ScrollBarStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBarStyle_MetaData), NewProp_ScrollBarStyle_MetaData) }; // 1456599938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBarWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBarWidgetStyle_Statics::NewProp_ScrollBarStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBarWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScrollBarWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBarWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScrollBarWidgetStyle_Statics::ClassParams = {
	&UScrollBarWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScrollBarWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBarWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBarWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UScrollBarWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScrollBarWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UScrollBarWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScrollBarWidgetStyle.OuterSingleton, Z_Construct_UClass_UScrollBarWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScrollBarWidgetStyle.OuterSingleton;
}
template<> SLATE_API UClass* StaticClass<UScrollBarWidgetStyle>()
{
	return UScrollBarWidgetStyle::StaticClass();
}
UScrollBarWidgetStyle::UScrollBarWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBarWidgetStyle);
UScrollBarWidgetStyle::~UScrollBarWidgetStyle() {}
// End Class UScrollBarWidgetStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScrollBarWidgetStyle, UScrollBarWidgetStyle::StaticClass, TEXT("UScrollBarWidgetStyle"), &Z_Registration_Info_UClass_UScrollBarWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScrollBarWidgetStyle), 4030315613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_3162057355(TEXT("/Script/Slate"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ScrollBarWidgetStyle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
