// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Slate/ButtonStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonStyleAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UButtonStyleAsset();
ENGINE_API UClass* Z_Construct_UClass_UButtonStyleAsset_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UButtonStyleAsset
void UButtonStyleAsset::StaticRegisterNativesUButtonStyleAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UButtonStyleAsset);
UClass* Z_Construct_UClass_UButtonStyleAsset_NoRegister()
{
	return UButtonStyleAsset::StaticClass();
}
struct Z_Construct_UClass_UButtonStyleAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An asset describing a button's appearance.\n * Just a wrapper for the struct with real data in it.style factory\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Slate/ButtonStyleAsset.h" },
		{ "ModuleRelativePath", "Classes/Slate/ButtonStyleAsset.h" },
		{ "ToolTip", "An asset describing a button's appearance.\nJust a wrapper for the struct with real data in it.style factory" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the button's appearance. */" },
		{ "ModuleRelativePath", "Classes/Slate/ButtonStyleAsset.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the button's appearance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonStyleAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButtonStyleAsset_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UButtonStyleAsset, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStyle_MetaData), NewProp_ButtonStyle_MetaData) }; // 1298854793
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonStyleAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonStyleAsset_Statics::NewProp_ButtonStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonStyleAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UButtonStyleAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonStyleAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UButtonStyleAsset_Statics::ClassParams = {
	&UButtonStyleAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UButtonStyleAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UButtonStyleAsset_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UButtonStyleAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UButtonStyleAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UButtonStyleAsset()
{
	if (!Z_Registration_Info_UClass_UButtonStyleAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UButtonStyleAsset.OuterSingleton, Z_Construct_UClass_UButtonStyleAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UButtonStyleAsset.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UButtonStyleAsset>()
{
	return UButtonStyleAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonStyleAsset);
UButtonStyleAsset::~UButtonStyleAsset() {}
// End Class UButtonStyleAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UButtonStyleAsset, UButtonStyleAsset::StaticClass, TEXT("UButtonStyleAsset"), &Z_Registration_Info_UClass_UButtonStyleAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UButtonStyleAsset), 2024260651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_1139299601(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_ButtonStyleAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
