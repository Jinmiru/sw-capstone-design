// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Binding/States/WidgetStateSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStateSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UMG_API UClass* Z_Construct_UClass_UWidgetStateSettings();
UMG_API UClass* Z_Construct_UClass_UWidgetStateSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UWidgetStateSettings
void UWidgetStateSettings::StaticRegisterNativesUWidgetStateSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetStateSettings);
UClass* Z_Construct_UClass_UWidgetStateSettings_NoRegister()
{
	return UWidgetStateSettings::StaticClass();
}
struct Z_Construct_UClass_UWidgetStateSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings used to map widget states to indexes.\n * Does not perform any input validation, will crash if given invalid searches\n * \n * Note: Currently doesn't really have any meaningful settings, used more as global singleton. May change.\n */" },
		{ "IncludePath", "Binding/States/WidgetStateSettings.h" },
		{ "ModuleRelativePath", "Public/Binding/States/WidgetStateSettings.h" },
		{ "ToolTip", "Settings used to map widget states to indexes.\nDoes not perform any input validation, will crash if given invalid searches\n\nNote: Currently doesn't really have any meaningful settings, used more as global singleton. May change." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetStateSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetStateSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStateSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetStateSettings_Statics::ClassParams = {
	&UWidgetStateSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStateSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetStateSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetStateSettings()
{
	if (!Z_Registration_Info_UClass_UWidgetStateSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetStateSettings.OuterSingleton, Z_Construct_UClass_UWidgetStateSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetStateSettings.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UWidgetStateSettings>()
{
	return UWidgetStateSettings::StaticClass();
}
UWidgetStateSettings::UWidgetStateSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetStateSettings);
UWidgetStateSettings::~UWidgetStateSettings() {}
// End Class UWidgetStateSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetStateSettings, UWidgetStateSettings::StaticClass, TEXT("UWidgetStateSettings"), &Z_Registration_Info_UClass_UWidgetStateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetStateSettings), 1550183433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_3136654851(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_States_WidgetStateSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
