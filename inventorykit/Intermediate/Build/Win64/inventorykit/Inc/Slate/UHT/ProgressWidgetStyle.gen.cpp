// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Styling/ProgressWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressWidgetStyle() {}

// Begin Cross Module References
SLATE_API UClass* Z_Construct_UClass_UProgressWidgetStyle();
SLATE_API UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Class UProgressWidgetStyle
void UProgressWidgetStyle::StaticRegisterNativesUProgressWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProgressWidgetStyle);
UClass* Z_Construct_UClass_UProgressWidgetStyle_NoRegister()
{
	return UProgressWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UProgressWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ProgressWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ProgressWidgetStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ProgressWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressBarStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProgressWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle = { "ProgressBarStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProgressWidgetStyle, ProgressBarStyle), Z_Construct_UScriptStruct_FProgressBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBarStyle_MetaData), NewProp_ProgressBarStyle_MetaData) }; // 1245114315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProgressWidgetStyle_Statics::NewProp_ProgressBarStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UProgressWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UProgressWidgetStyle_Statics::ClassParams = {
	&UProgressWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProgressWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UProgressWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UProgressWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UProgressWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProgressWidgetStyle.OuterSingleton, Z_Construct_UClass_UProgressWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UProgressWidgetStyle.OuterSingleton;
}
template<> SLATE_API UClass* StaticClass<UProgressWidgetStyle>()
{
	return UProgressWidgetStyle::StaticClass();
}
UProgressWidgetStyle::UProgressWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UProgressWidgetStyle);
UProgressWidgetStyle::~UProgressWidgetStyle() {}
// End Class UProgressWidgetStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UProgressWidgetStyle, UProgressWidgetStyle::StaticClass, TEXT("UProgressWidgetStyle"), &Z_Registration_Info_UClass_UProgressWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProgressWidgetStyle), 360255628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_1894114586(TEXT("/Script/Slate"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ProgressWidgetStyle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
