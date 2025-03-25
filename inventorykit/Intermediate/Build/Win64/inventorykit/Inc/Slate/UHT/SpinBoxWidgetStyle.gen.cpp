// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Slate/Public/Framework/Styling/SpinBoxWidgetStyle.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinBoxWidgetStyle() {}

// Begin Cross Module References
SLATE_API UClass* Z_Construct_UClass_USpinBoxWidgetStyle();
SLATE_API UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSpinBoxStyle();
UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References

// Begin Class USpinBoxWidgetStyle
void USpinBoxWidgetStyle::StaticRegisterNativesUSpinBoxWidgetStyle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpinBoxWidgetStyle);
UClass* Z_Construct_UClass_USpinBoxWidgetStyle_NoRegister()
{
	return USpinBoxWidgetStyle::StaticClass();
}
struct Z_Construct_UClass_USpinBoxWidgetStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Framework/Styling/SpinBoxWidgetStyle.h" },
		{ "ModuleRelativePath", "Public/Framework/Styling/SpinBoxWidgetStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpinBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Public/Framework/Styling/SpinBoxWidgetStyle.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpinBoxStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinBoxWidgetStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle = { "SpinBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpinBoxWidgetStyle, SpinBoxStyle), Z_Construct_UScriptStruct_FSpinBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpinBoxStyle_MetaData), NewProp_SpinBoxStyle_MetaData) }; // 3058619479
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinBoxWidgetStyle_Statics::NewProp_SpinBoxStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpinBoxWidgetStyle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Slate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpinBoxWidgetStyle_Statics::ClassParams = {
	&USpinBoxWidgetStyle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpinBoxWidgetStyle_Statics::Class_MetaDataParams), Z_Construct_UClass_USpinBoxWidgetStyle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpinBoxWidgetStyle()
{
	if (!Z_Registration_Info_UClass_USpinBoxWidgetStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpinBoxWidgetStyle.OuterSingleton, Z_Construct_UClass_USpinBoxWidgetStyle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpinBoxWidgetStyle.OuterSingleton;
}
template<> SLATE_API UClass* StaticClass<USpinBoxWidgetStyle>()
{
	return USpinBoxWidgetStyle::StaticClass();
}
USpinBoxWidgetStyle::USpinBoxWidgetStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpinBoxWidgetStyle);
USpinBoxWidgetStyle::~USpinBoxWidgetStyle() {}
// End Class USpinBoxWidgetStyle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpinBoxWidgetStyle, USpinBoxWidgetStyle::StaticClass, TEXT("USpinBoxWidgetStyle"), &Z_Registration_Info_UClass_USpinBoxWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpinBoxWidgetStyle), 1966423935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h_1505086373(TEXT("/Script/Slate"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Styling_SpinBoxWidgetStyle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
