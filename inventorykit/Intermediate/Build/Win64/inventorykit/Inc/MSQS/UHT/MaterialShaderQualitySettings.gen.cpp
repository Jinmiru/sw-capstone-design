// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MaterialShaderQualitySettings/Classes/MaterialShaderQualitySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialShaderQualitySettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings();
MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister();
MATERIALSHADERQUALITYSETTINGS_API UClass* Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
// End Cross Module References

// Begin Class UMaterialShaderQualitySettings
void UMaterialShaderQualitySettings::StaticRegisterNativesUMaterialShaderQualitySettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialShaderQualitySettings);
UClass* Z_Construct_UClass_UMaterialShaderQualitySettings_NoRegister()
{
	return UMaterialShaderQualitySettings::StaticClass();
}
struct Z_Construct_UClass_UMaterialShaderQualitySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//UCLASS(config = Engine, defaultconfig)\n" },
		{ "IncludePath", "MaterialShaderQualitySettings.h" },
		{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
		{ "ToolTip", "UCLASS(config = Engine, defaultconfig)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSettingMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialShaderQualitySettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForwardSettingMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ForwardSettingMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ForwardSettingMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialShaderQualitySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_ValueProp = { "ForwardSettingMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UShaderPlatformQualitySettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_Key_KeyProp = { "ForwardSettingMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap = { "ForwardSettingMap", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialShaderQualitySettings, ForwardSettingMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSettingMap_MetaData), NewProp_ForwardSettingMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::NewProp_ForwardSettingMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MaterialShaderQualitySettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::ClassParams = {
	&UMaterialShaderQualitySettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialShaderQualitySettings()
{
	if (!Z_Registration_Info_UClass_UMaterialShaderQualitySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialShaderQualitySettings.OuterSingleton, Z_Construct_UClass_UMaterialShaderQualitySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialShaderQualitySettings.OuterSingleton;
}
template<> MATERIALSHADERQUALITYSETTINGS_API UClass* StaticClass<UMaterialShaderQualitySettings>()
{
	return UMaterialShaderQualitySettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialShaderQualitySettings);
UMaterialShaderQualitySettings::~UMaterialShaderQualitySettings() {}
// End Class UMaterialShaderQualitySettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialShaderQualitySettings, UMaterialShaderQualitySettings::StaticClass, TEXT("UMaterialShaderQualitySettings"), &Z_Registration_Info_UClass_UMaterialShaderQualitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialShaderQualitySettings), 2390548312U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_3713678518(TEXT("/Script/MaterialShaderQualitySettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MaterialShaderQualitySettings_Classes_MaterialShaderQualitySettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
