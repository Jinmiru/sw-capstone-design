// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/Localization/Public/UserGeneratedContentLocalization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserGeneratedContentLocalization() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOCALIZATION_API UClass* Z_Construct_UClass_UUserGeneratedContentLocalizationSettings();
LOCALIZATION_API UClass* Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_NoRegister();
LOCALIZATION_API UEnum* Z_Construct_UEnum_Localization_EPortableObjectFormat();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor();
UPackage* Z_Construct_UPackage__Script_Localization();
// End Cross Module References

// Begin Class UUserGeneratedContentLocalizationSettings
void UUserGeneratedContentLocalizationSettings::StaticRegisterNativesUUserGeneratedContentLocalizationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserGeneratedContentLocalizationSettings);
UClass* Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_NoRegister()
{
	return UUserGeneratedContentLocalizationSettings::StaticClass();
}
struct Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings controlling UGC localization.\n */" },
		{ "IncludePath", "UserGeneratedContentLocalization.h" },
		{ "ModuleRelativePath", "Public/UserGeneratedContentLocalization.h" },
		{ "ToolTip", "Settings controlling UGC localization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CulturesToDisable_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n\x09 * List of cultures that should be disabled for UGC localization.\n\x09 * @note You can't disable the native culture for the project.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserGeneratedContentLocalization.h" },
		{ "ToolTip", "List of cultures that should be disabled for UGC localization.\n@note You can't disable the native culture for the project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompileDLCLocalizationDuringCook_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n\x09 * Should we compile UGC localization (if present) for DLC plugins during cook?\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserGeneratedContentLocalization.h" },
		{ "ToolTip", "Should we compile UGC localization (if present) for DLC plugins during cook?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValidateDLCLocalizationDuringCook_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n\x09 * Should we validate UGC localization (if present) for DLC plugins during cook?\n\x09 * @note Validation will happen against a UGC localization descriptor that has had InitializeFromProject called on it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserGeneratedContentLocalization.h" },
		{ "ToolTip", "Should we validate UGC localization (if present) for DLC plugins during cook?\n@note Validation will happen against a UGC localization descriptor that has had InitializeFromProject called on it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CulturesToDisable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CulturesToDisable;
	static void NewProp_bCompileDLCLocalizationDuringCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileDLCLocalizationDuringCook;
	static void NewProp_bValidateDLCLocalizationDuringCook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateDLCLocalizationDuringCook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserGeneratedContentLocalizationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_CulturesToDisable_Inner = { "CulturesToDisable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_CulturesToDisable = { "CulturesToDisable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserGeneratedContentLocalizationSettings, CulturesToDisable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CulturesToDisable_MetaData), NewProp_CulturesToDisable_MetaData) };
void Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_bCompileDLCLocalizationDuringCook_SetBit(void* Obj)
{
	((UUserGeneratedContentLocalizationSettings*)Obj)->bCompileDLCLocalizationDuringCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_bCompileDLCLocalizationDuringCook = { "bCompileDLCLocalizationDuringCook", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUserGeneratedContentLocalizationSettings), &Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_bCompileDLCLocalizationDuringCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompileDLCLocalizationDuringCook_MetaData), NewProp_bCompileDLCLocalizationDuringCook_MetaData) };
void Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_bValidateDLCLocalizationDuringCook_SetBit(void* Obj)
{
	((UUserGeneratedContentLocalizationSettings*)Obj)->bValidateDLCLocalizationDuringCook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_bValidateDLCLocalizationDuringCook = { "bValidateDLCLocalizationDuringCook", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUserGeneratedContentLocalizationSettings), &Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_bValidateDLCLocalizationDuringCook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValidateDLCLocalizationDuringCook_MetaData), NewProp_bValidateDLCLocalizationDuringCook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_CulturesToDisable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_CulturesToDisable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_bCompileDLCLocalizationDuringCook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::NewProp_bValidateDLCLocalizationDuringCook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::ClassParams = {
	&UUserGeneratedContentLocalizationSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::PropPointers),
	0,
	0x001000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserGeneratedContentLocalizationSettings()
{
	if (!Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings.OuterSingleton, Z_Construct_UClass_UUserGeneratedContentLocalizationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings.OuterSingleton;
}
template<> LOCALIZATION_API UClass* StaticClass<UUserGeneratedContentLocalizationSettings>()
{
	return UUserGeneratedContentLocalizationSettings::StaticClass();
}
UUserGeneratedContentLocalizationSettings::UUserGeneratedContentLocalizationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserGeneratedContentLocalizationSettings);
UUserGeneratedContentLocalizationSettings::~UUserGeneratedContentLocalizationSettings() {}
// End Class UUserGeneratedContentLocalizationSettings

// Begin ScriptStruct FUserGeneratedContentLocalizationDescriptor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserGeneratedContentLocalizationDescriptor;
class UScriptStruct* FUserGeneratedContentLocalizationDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserGeneratedContentLocalizationDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserGeneratedContentLocalizationDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor, (UObject*)Z_Construct_UPackage__Script_Localization(), TEXT("UserGeneratedContentLocalizationDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_UserGeneratedContentLocalizationDescriptor.OuterSingleton;
}
template<> LOCALIZATION_API UScriptStruct* StaticStruct<FUserGeneratedContentLocalizationDescriptor>()
{
	return FUserGeneratedContentLocalizationDescriptor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Minimal descriptor needed to generate a localization target for UGC localization.\n */" },
		{ "ModuleRelativePath", "Public/UserGeneratedContentLocalization.h" },
		{ "ToolTip", "Minimal descriptor needed to generate a localization target for UGC localization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeCulture_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n\x09 * The culture that the source text is authored in.\n\x09 * @note You shouldn't change this once you start to localize your text.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserGeneratedContentLocalization.h" },
		{ "ToolTip", "The culture that the source text is authored in.\n@note You shouldn't change this once you start to localize your text." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CulturesToGenerate_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n\x09 * The cultures that we should generate localization data for.\n\x09 * @note Will implicitly always contain the native culture during export/compile.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UserGeneratedContentLocalization.h" },
		{ "ToolTip", "The cultures that we should generate localization data for.\n@note Will implicitly always contain the native culture during export/compile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoFormat_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/**\n\x09 * What format of PO file should we use?\n\x09 * @note You can adjust this later and we'll attempt to preserve any existing localization data by importing with the old setting prior to export.\n\x09 */" },
		{ "DisplayName", "PO Format" },
		{ "ModuleRelativePath", "Public/UserGeneratedContentLocalization.h" },
		{ "ToolTip", "What format of PO file should we use?\n@note You can adjust this later and we'll attempt to preserve any existing localization data by importing with the old setting prior to export." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NativeCulture;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CulturesToGenerate_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CulturesToGenerate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PoFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PoFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserGeneratedContentLocalizationDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_NativeCulture = { "NativeCulture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserGeneratedContentLocalizationDescriptor, NativeCulture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeCulture_MetaData), NewProp_NativeCulture_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_CulturesToGenerate_Inner = { "CulturesToGenerate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_CulturesToGenerate = { "CulturesToGenerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserGeneratedContentLocalizationDescriptor, CulturesToGenerate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CulturesToGenerate_MetaData), NewProp_CulturesToGenerate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_PoFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_PoFormat = { "PoFormat", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserGeneratedContentLocalizationDescriptor, PoFormat), Z_Construct_UEnum_Localization_EPortableObjectFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoFormat_MetaData), NewProp_PoFormat_MetaData) }; // 782644604
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_NativeCulture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_CulturesToGenerate_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_CulturesToGenerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_PoFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewProp_PoFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
	nullptr,
	&NewStructOps,
	"UserGeneratedContentLocalizationDescriptor",
	Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::PropPointers),
	sizeof(FUserGeneratedContentLocalizationDescriptor),
	alignof(FUserGeneratedContentLocalizationDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_UserGeneratedContentLocalizationDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserGeneratedContentLocalizationDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserGeneratedContentLocalizationDescriptor.InnerSingleton;
}
// End ScriptStruct FUserGeneratedContentLocalizationDescriptor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUserGeneratedContentLocalizationDescriptor::StaticStruct, Z_Construct_UScriptStruct_FUserGeneratedContentLocalizationDescriptor_Statics::NewStructOps, TEXT("UserGeneratedContentLocalizationDescriptor"), &Z_Registration_Info_UScriptStruct_UserGeneratedContentLocalizationDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserGeneratedContentLocalizationDescriptor), 3683571836U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserGeneratedContentLocalizationSettings, UUserGeneratedContentLocalizationSettings::StaticClass, TEXT("UUserGeneratedContentLocalizationSettings"), &Z_Registration_Info_UClass_UUserGeneratedContentLocalizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserGeneratedContentLocalizationSettings), 2532409103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_2931641830(TEXT("/Script/Localization"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_UserGeneratedContentLocalization_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
