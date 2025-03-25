// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/Localization/Public/LocalizationSettings.h"
#include "Developer/Localization/Public/LocalizationTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizationSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationSettings();
LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationSettings_NoRegister();
LOCALIZATION_API UClass* Z_Construct_UClass_ULocalizationTargetSet_NoRegister();
LOCALIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FLocalizationTargetSettings();
UPackage* Z_Construct_UPackage__Script_Localization();
// End Cross Module References

// Begin Class ULocalizationSettings
void ULocalizationSettings::StaticRegisterNativesULocalizationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalizationSettings);
UClass* Z_Construct_UClass_ULocalizationSettings_NoRegister()
{
	return ULocalizationSettings::StaticClass();
}
struct Z_Construct_UClass_ULocalizationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Class for loading/saving configuration settings and the details view objects needed for localization dashboard functionality.\n" },
		{ "IncludePath", "LocalizationSettings.h" },
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class for loading/saving configuration settings and the details view objects needed for localization dashboard functionality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineTargetSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineTargetsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTargetSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTargetsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/LocalizationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineTargetSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EngineTargetsSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EngineTargetsSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameTargetSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameTargetsSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameTargetsSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetSet = { "EngineTargetSet", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalizationSettings, EngineTargetSet), Z_Construct_UClass_ULocalizationTargetSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineTargetSet_MetaData), NewProp_EngineTargetSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings_Inner = { "EngineTargetsSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLocalizationTargetSettings, METADATA_PARAMS(0, nullptr) }; // 727971925
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings = { "EngineTargetsSettings", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalizationSettings, EngineTargetsSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineTargetsSettings_MetaData), NewProp_EngineTargetsSettings_MetaData) }; // 727971925
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetSet = { "GameTargetSet", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalizationSettings, GameTargetSet), Z_Construct_UClass_ULocalizationTargetSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTargetSet_MetaData), NewProp_GameTargetSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings_Inner = { "GameTargetsSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLocalizationTargetSettings, METADATA_PARAMS(0, nullptr) }; // 727971925
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings = { "GameTargetsSettings", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalizationSettings, GameTargetsSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTargetsSettings_MetaData), NewProp_GameTargetsSettings_MetaData) }; // 727971925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalizationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_EngineTargetsSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizationSettings_Statics::NewProp_GameTargetsSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocalizationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Localization,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalizationSettings_Statics::ClassParams = {
	&ULocalizationSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULocalizationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalizationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalizationSettings()
{
	if (!Z_Registration_Info_UClass_ULocalizationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalizationSettings.OuterSingleton, Z_Construct_UClass_ULocalizationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalizationSettings.OuterSingleton;
}
template<> LOCALIZATION_API UClass* StaticClass<ULocalizationSettings>()
{
	return ULocalizationSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationSettings);
ULocalizationSettings::~ULocalizationSettings() {}
// End Class ULocalizationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocalizationSettings, ULocalizationSettings::StaticClass, TEXT("ULocalizationSettings"), &Z_Registration_Info_UClass_ULocalizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalizationSettings), 3677582942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_2473751655(TEXT("/Script/Localization"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Localization_Public_LocalizationSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
