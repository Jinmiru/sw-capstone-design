// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Overlay/Public/LocalizedOverlays.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizedOverlays() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays_NoRegister();
OVERLAY_API UClass* Z_Construct_UClass_ULocalizedOverlays();
OVERLAY_API UClass* Z_Construct_UClass_ULocalizedOverlays_NoRegister();
OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
UPackage* Z_Construct_UPackage__Script_Overlay();
// End Cross Module References

// Begin Class ULocalizedOverlays
void ULocalizedOverlays::StaticRegisterNativesULocalizedOverlays()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalizedOverlays);
UClass* Z_Construct_UClass_ULocalizedOverlays_NoRegister()
{
	return ULocalizedOverlays::StaticClass();
}
struct Z_Construct_UClass_ULocalizedOverlays_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that contains a set of Basic Overlays that will be displayed in accordance with\n * the current locale, or a default set if an appropriate locale is not found\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "LocalizedOverlays.h" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "Implements an asset that contains a set of Basic Overlays that will be displayed in accordance with\nthe current locale, or a default set if an appropriate locale is not found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOverlays_MetaData[] = {
		{ "Category", "Overlay Data" },
		{ "Comment", "/** The overlays to use if no overlays are found for the current culture */" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "The overlays to use if no overlays are found for the current culture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocaleToOverlaysMap_MetaData[] = {
		{ "Category", "Overlay Data" },
		{ "Comment", "/**\n\x09 * Maps a set of cultures to specific BasicOverlays assets.\n\x09 * Cultures are comprised of three hyphen-separated parts:\n\x09 *\x09\x09""A two-letter ISO 639-1 language code (e.g., \"zh\")\n\x09 *\x09\x09""An optional four-letter ISO 15924 script code (e.g., \"Hans\")\n\x09 *\x09\x09""An optional two-letter ISO 3166-1 country code  (e.g., \"CN\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "Maps a set of cultures to specific BasicOverlays assets.\nCultures are comprised of three hyphen-separated parts:\n             A two-letter ISO 639-1 language code (e.g., \"zh\")\n             An optional four-letter ISO 15924 script code (e.g., \"Hans\")\n             An optional two-letter ISO 3166-1 country code  (e.g., \"CN\")" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** The import data used to make this overlays asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "The import data used to make this overlays asset" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultOverlays;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocaleToOverlaysMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocaleToOverlaysMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LocaleToOverlaysMap;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizedOverlays>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays = { "DefaultOverlays", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalizedOverlays, DefaultOverlays), Z_Construct_UClass_UBasicOverlays_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOverlays_MetaData), NewProp_DefaultOverlays_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_ValueProp = { "LocaleToOverlaysMap", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UBasicOverlays_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_Key_KeyProp = { "LocaleToOverlaysMap_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap = { "LocaleToOverlaysMap", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalizedOverlays, LocaleToOverlaysMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocaleToOverlaysMap_MetaData), NewProp_LocaleToOverlaysMap_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalizedOverlays, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocalizedOverlays_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOverlays,
	(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalizedOverlays_Statics::ClassParams = {
	&ULocalizedOverlays::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalizedOverlays_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalizedOverlays()
{
	if (!Z_Registration_Info_UClass_ULocalizedOverlays.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalizedOverlays.OuterSingleton, Z_Construct_UClass_ULocalizedOverlays_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalizedOverlays.OuterSingleton;
}
template<> OVERLAY_API UClass* StaticClass<ULocalizedOverlays>()
{
	return ULocalizedOverlays::StaticClass();
}
ULocalizedOverlays::ULocalizedOverlays(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizedOverlays);
ULocalizedOverlays::~ULocalizedOverlays() {}
// End Class ULocalizedOverlays

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocalizedOverlays, ULocalizedOverlays::StaticClass, TEXT("ULocalizedOverlays"), &Z_Registration_Info_UClass_ULocalizedOverlays, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalizedOverlays), 714417149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_1113295695(TEXT("/Script/Overlay"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
