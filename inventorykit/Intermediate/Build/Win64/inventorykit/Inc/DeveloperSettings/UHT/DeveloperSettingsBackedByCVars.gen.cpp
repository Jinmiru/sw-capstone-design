// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/DeveloperSettings/Public/Engine/DeveloperSettingsBackedByCVars.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeveloperSettingsBackedByCVars() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars_NoRegister();
UPackage* Z_Construct_UPackage__Script_DeveloperSettings();
// End Cross Module References

// Begin Class UDeveloperSettingsBackedByCVars
void UDeveloperSettingsBackedByCVars::StaticRegisterNativesUDeveloperSettingsBackedByCVars()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeveloperSettingsBackedByCVars);
UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars_NoRegister()
{
	return UDeveloperSettingsBackedByCVars::StaticClass();
}
struct Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of auto discovered settings object where some or all of the settings\n * are stored in console variables instead of config variables.\n */" },
		{ "IncludePath", "Engine/DeveloperSettingsBackedByCVars.h" },
		{ "ModuleRelativePath", "Public/Engine/DeveloperSettingsBackedByCVars.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base class of auto discovered settings object where some or all of the settings\nare stored in console variables instead of config variables." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeveloperSettingsBackedByCVars>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::ClassParams = {
	&UDeveloperSettingsBackedByCVars::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars()
{
	if (!Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.OuterSingleton, Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.OuterSingleton;
}
template<> DEVELOPERSETTINGS_API UClass* StaticClass<UDeveloperSettingsBackedByCVars>()
{
	return UDeveloperSettingsBackedByCVars::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeveloperSettingsBackedByCVars);
UDeveloperSettingsBackedByCVars::~UDeveloperSettingsBackedByCVars() {}
// End Class UDeveloperSettingsBackedByCVars

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeveloperSettingsBackedByCVars, UDeveloperSettingsBackedByCVars::StaticClass, TEXT("UDeveloperSettingsBackedByCVars"), &Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeveloperSettingsBackedByCVars), 1643614341U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_1117519512(TEXT("/Script/DeveloperSettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
