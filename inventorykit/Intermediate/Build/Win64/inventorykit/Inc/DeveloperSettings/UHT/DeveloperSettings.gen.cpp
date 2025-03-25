// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/DeveloperSettings/Public/Engine/DeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeveloperSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_DeveloperSettings();
// End Cross Module References

// Begin Class UDeveloperSettings
void UDeveloperSettings::StaticRegisterNativesUDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeveloperSettings);
UClass* Z_Construct_UClass_UDeveloperSettings_NoRegister()
{
	return UDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of any auto discovered settings object.\n */" },
		{ "IncludePath", "Engine/DeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Engine/DeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base class of any auto discovered settings object." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeveloperSettings_Statics::ClassParams = {
	&UDeveloperSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeveloperSettings.OuterSingleton, Z_Construct_UClass_UDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeveloperSettings.OuterSingleton;
}
template<> DEVELOPERSETTINGS_API UClass* StaticClass<UDeveloperSettings>()
{
	return UDeveloperSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeveloperSettings);
UDeveloperSettings::~UDeveloperSettings() {}
// End Class UDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeveloperSettings, UDeveloperSettings::StaticClass, TEXT("UDeveloperSettings"), &Z_Registration_Info_UClass_UDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeveloperSettings), 2420261904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_1565447620(TEXT("/Script/DeveloperSettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
