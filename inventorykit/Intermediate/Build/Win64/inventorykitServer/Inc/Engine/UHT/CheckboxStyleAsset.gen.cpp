// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Slate/CheckboxStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckboxStyleAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UCheckBoxStyleAsset();
ENGINE_API UClass* Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCheckBoxStyleAsset
void UCheckBoxStyleAsset::StaticRegisterNativesUCheckBoxStyleAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckBoxStyleAsset);
UClass* Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister()
{
	return UCheckBoxStyleAsset::StaticClass();
}
struct Z_Construct_UClass_UCheckBoxStyleAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An asset describing a CheckBox's appearance.\n * Just a wrapper for the struct with real data in it.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Slate/CheckboxStyleAsset.h" },
		{ "ModuleRelativePath", "Classes/Slate/CheckboxStyleAsset.h" },
		{ "ToolTip", "An asset describing a CheckBox's appearance.\nJust a wrapper for the struct with real data in it." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the Check Box's appearance. */" },
		{ "ModuleRelativePath", "Classes/Slate/CheckboxStyleAsset.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the Check Box's appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckBoxStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckBoxStyleAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle = { "CheckBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCheckBoxStyleAsset, CheckBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBoxStyle_MetaData), NewProp_CheckBoxStyle_MetaData) }; // 2899985267
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCheckBoxStyleAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckBoxStyleAsset_Statics::ClassParams = {
	&UCheckBoxStyleAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCheckBoxStyleAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCheckBoxStyleAsset()
{
	if (!Z_Registration_Info_UClass_UCheckBoxStyleAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckBoxStyleAsset.OuterSingleton, Z_Construct_UClass_UCheckBoxStyleAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCheckBoxStyleAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCheckBoxStyleAsset>()
{
	return UCheckBoxStyleAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBoxStyleAsset);
UCheckBoxStyleAsset::~UCheckBoxStyleAsset() {}
// End Class UCheckBoxStyleAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCheckBoxStyleAsset, UCheckBoxStyleAsset::StaticClass, TEXT("UCheckBoxStyleAsset"), &Z_Registration_Info_UClass_UCheckBoxStyleAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckBoxStyleAsset), 1945648361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_4235149433(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
