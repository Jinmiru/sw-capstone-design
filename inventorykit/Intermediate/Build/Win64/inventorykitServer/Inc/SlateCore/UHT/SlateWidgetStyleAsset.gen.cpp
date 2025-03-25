// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister();
SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References

// Begin Class USlateWidgetStyleAsset
void USlateWidgetStyleAsset::StaticRegisterNativesUSlateWidgetStyleAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateWidgetStyleAsset);
UClass* Z_Construct_UClass_USlateWidgetStyleAsset_NoRegister()
{
	return USlateWidgetStyleAsset::StaticClass();
}
struct Z_Construct_UClass_USlateWidgetStyleAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Just a wrapper for the struct with real data in it.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Styling/SlateWidgetStyleAsset.h" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleAsset.h" },
		{ "ToolTip", "Just a wrapper for the struct with real data in it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateWidgetStyleAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle = { "CustomStyle", nullptr, (EPropertyFlags)0x0116000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateWidgetStyleAsset, CustomStyle), Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomStyle_MetaData), NewProp_CustomStyle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateWidgetStyleAsset_Statics::NewProp_CustomStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlateWidgetStyleAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateWidgetStyleAsset_Statics::ClassParams = {
	&USlateWidgetStyleAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateWidgetStyleAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateWidgetStyleAsset()
{
	if (!Z_Registration_Info_UClass_USlateWidgetStyleAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateWidgetStyleAsset.OuterSingleton, Z_Construct_UClass_USlateWidgetStyleAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateWidgetStyleAsset.OuterSingleton;
}
template<> SLATECORE_API UClass* StaticClass<USlateWidgetStyleAsset>()
{
	return USlateWidgetStyleAsset::StaticClass();
}
USlateWidgetStyleAsset::USlateWidgetStyleAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleAsset);
USlateWidgetStyleAsset::~USlateWidgetStyleAsset() {}
// End Class USlateWidgetStyleAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateWidgetStyleAsset, USlateWidgetStyleAsset::StaticClass, TEXT("USlateWidgetStyleAsset"), &Z_Registration_Info_UClass_USlateWidgetStyleAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateWidgetStyleAsset), 575139992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleAsset_h_2766712874(TEXT("/Script/SlateCore"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
