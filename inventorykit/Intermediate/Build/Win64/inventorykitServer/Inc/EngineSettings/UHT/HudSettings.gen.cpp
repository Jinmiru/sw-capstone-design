// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/EngineSettings/Classes/HudSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UHudSettings();
ENGINESETTINGS_API UClass* Z_Construct_UClass_UHudSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References

// Begin Class UHudSettings
void UHudSettings::StaticRegisterNativesUHudSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHudSettings);
UClass* Z_Construct_UClass_UHudSettings_NoRegister()
{
	return UHudSettings::StaticClass();
}
struct Z_Construct_UClass_UHudSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HudSettings.h" },
		{ "ModuleRelativePath", "Classes/HudSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowHUD_MetaData[] = {
		{ "Category", "HudSettings" },
		{ "Comment", "/** Whether the HUD is visible at all.\x09 */" },
		{ "ModuleRelativePath", "Classes/HudSettings.h" },
		{ "ToolTip", "Whether the HUD is visible at all." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDisplay_MetaData[] = {
		{ "Category", "HudSettings" },
		{ "Comment", "/** Collection of names specifying what debug info to display for ViewTarget actor.\x09 */" },
		{ "ModuleRelativePath", "Classes/HudSettings.h" },
		{ "ToolTip", "Collection of names specifying what debug info to display for ViewTarget actor." },
	};
#endif // WITH_METADATA
	static void NewProp_bShowHUD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHUD;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DebugDisplay_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugDisplay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD_SetBit(void* Obj)
{
	((UHudSettings*)Obj)->bShowHUD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD = { "bShowHUD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHudSettings), &Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowHUD_MetaData), NewProp_bShowHUD_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay_Inner = { "DebugDisplay", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay = { "DebugDisplay", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHudSettings, DebugDisplay), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDisplay_MetaData), NewProp_DebugDisplay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudSettings_Statics::NewProp_bShowHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudSettings_Statics::NewProp_DebugDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHudSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHudSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHudSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHudSettings_Statics::ClassParams = {
	&UHudSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHudSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHudSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHudSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UHudSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHudSettings()
{
	if (!Z_Registration_Info_UClass_UHudSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHudSettings.OuterSingleton, Z_Construct_UClass_UHudSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHudSettings.OuterSingleton;
}
template<> ENGINESETTINGS_API UClass* StaticClass<UHudSettings>()
{
	return UHudSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHudSettings);
UHudSettings::~UHudSettings() {}
// End Class UHudSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_HudSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHudSettings, UHudSettings::StaticClass, TEXT("UHudSettings"), &Z_Registration_Info_UClass_UHudSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHudSettings), 1125456311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_HudSettings_h_2955766128(TEXT("/Script/EngineSettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_HudSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_HudSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
