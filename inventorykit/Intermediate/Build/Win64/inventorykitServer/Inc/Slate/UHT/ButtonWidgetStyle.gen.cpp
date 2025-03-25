// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Styling/ButtonWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonWidgetStyle() {}

// Begin Cross Module References
SLATE_API UClass* Z_Construct_UClass_UButtonWidgetStyle();
SLATE_API UClass* Z_Construct_UClass_UButtonWidgetStyle_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Class UButtonWidgetStyle
void UButtonWidgetStyle::StaticRegisterNativesUButtonWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UButtonWidgetStyle);
UClass* Z_Construct_UClass_UButtonWidgetStyle_NoRegister()
{
	return UButtonWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_UButtonWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/ButtonWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ButtonWidgetStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/ButtonWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButtonWidgetStyle_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButtonWidgetStyle, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyle_MetaData), NewProp_ButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWidgetStyle_Statics::NewProp_ButtonStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UButtonWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UButtonWidgetStyle_Statics::ClassParams = {
	&UButtonWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UButtonWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_UButtonWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UButtonWidgetStyle()
{
	if (!Z_Registration_Info_UClass_UButtonWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UButtonWidgetStyle.OuterSingleton, Z_Construct_UClass_UButtonWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UButtonWidgetStyle.OuterSingleton;
}
template<> SLATE_API UClass* StaticClass<UButtonWidgetStyle>()
{
	return UButtonWidgetStyle::StaticClass();
}
UButtonWidgetStyle::UButtonWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonWidgetStyle);
UButtonWidgetStyle::~UButtonWidgetStyle() {}
// End Class UButtonWidgetStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UButtonWidgetStyle, UButtonWidgetStyle::StaticClass, TEXT("UButtonWidgetStyle"), &Z_Registration_Info_UClass_UButtonWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UButtonWidgetStyle), 1761759314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_3928639213(TEXT("/Script/Slate"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_ButtonWidgetStyle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
