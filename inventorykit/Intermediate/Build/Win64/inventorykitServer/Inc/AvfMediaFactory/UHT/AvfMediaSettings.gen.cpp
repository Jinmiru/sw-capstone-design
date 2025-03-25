// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AvfMediaFactory/Public/AvfMediaSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvfMediaSettings() {}

// Begin Cross Module References
AVFMEDIAFACTORY_API UClass* Z_Construct_UClass_UAvfMediaSettings();
AVFMEDIAFACTORY_API UClass* Z_Construct_UClass_UAvfMediaSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AvfMediaFactory();
// End Cross Module References

// Begin Class UAvfMediaSettings
void UAvfMediaSettings::StaticRegisterNativesUAvfMediaSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAvfMediaSettings);
UClass* Z_Construct_UClass_UAvfMediaSettings_NoRegister()
{
	return UAvfMediaSettings::StaticClass();
}
struct Z_Construct_UClass_UAvfMediaSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the AvfMedia plug-in.\n */" },
		{ "IncludePath", "AvfMediaSettings.h" },
		{ "ModuleRelativePath", "Public/AvfMediaSettings.h" },
		{ "ToolTip", "Settings for the AvfMedia plug-in." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeAudioOut_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Play audio tracks via the operating system's native sound mixer. */" },
		{ "ModuleRelativePath", "Public/AvfMediaSettings.h" },
		{ "ToolTip", "Play audio tracks via the operating system's native sound mixer." },
	};
#endif // WITH_METADATA
	static void NewProp_NativeAudioOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NativeAudioOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvfMediaSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit(void* Obj)
{
	((UAvfMediaSettings*)Obj)->NativeAudioOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut = { "NativeAudioOut", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAvfMediaSettings), &Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeAudioOut_MetaData), NewProp_NativeAudioOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAvfMediaSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AvfMediaFactory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAvfMediaSettings_Statics::ClassParams = {
	&UAvfMediaSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAvfMediaSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAvfMediaSettings()
{
	if (!Z_Registration_Info_UClass_UAvfMediaSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAvfMediaSettings.OuterSingleton, Z_Construct_UClass_UAvfMediaSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAvfMediaSettings.OuterSingleton;
}
template<> AVFMEDIAFACTORY_API UClass* StaticClass<UAvfMediaSettings>()
{
	return UAvfMediaSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAvfMediaSettings);
UAvfMediaSettings::~UAvfMediaSettings() {}
// End Class UAvfMediaSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAvfMediaSettings, UAvfMediaSettings::StaticClass, TEXT("UAvfMediaSettings"), &Z_Registration_Info_UClass_UAvfMediaSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAvfMediaSettings), 3325220344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_3099590500(TEXT("/Script/AvfMediaFactory"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaFactory_Public_AvfMediaSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
