// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuationEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAttenuationEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuationEditorSettings();
ENGINE_API UClass* Z_Construct_UClass_USoundAttenuationEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USoundAttenuationEditorSettings
void USoundAttenuationEditorSettings::StaticRegisterNativesUSoundAttenuationEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundAttenuationEditorSettings);
UClass* Z_Construct_UClass_USoundAttenuationEditorSettings_NoRegister()
{
	return USoundAttenuationEditorSettings::StaticClass();
}
struct Z_Construct_UClass_USoundAttenuationEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements Editor settings for sound attenuation assets and is used when switching editor modes.\n */" },
		{ "IncludePath", "Sound/SoundAttenuationEditorSettings.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuationEditorSettings.h" },
		{ "ToolTip", "Implements Editor settings for sound attenuation assets and is used when switching editor modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableReverbSend_MetaData[] = {
		{ "Comment", "/** Enables adjusting reverb sends based on distance. */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuationEditorSettings.h" },
		{ "ToolTip", "Enables adjusting reverb sends based on distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSendToAudioLink_MetaData[] = {
		{ "Comment", "/** Enables/Disables AudioLink on all sources using this attenuation */" },
		{ "ModuleRelativePath", "Classes/Sound/SoundAttenuationEditorSettings.h" },
		{ "ToolTip", "Enables/Disables AudioLink on all sources using this attenuation" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableReverbSend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableReverbSend;
	static void NewProp_bEnableSendToAudioLink_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSendToAudioLink;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAttenuationEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::NewProp_bEnableReverbSend_SetBit(void* Obj)
{
	((USoundAttenuationEditorSettings*)Obj)->bEnableReverbSend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::NewProp_bEnableReverbSend = { "bEnableReverbSend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAttenuationEditorSettings), &Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::NewProp_bEnableReverbSend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableReverbSend_MetaData), NewProp_bEnableReverbSend_MetaData) };
void Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::NewProp_bEnableSendToAudioLink_SetBit(void* Obj)
{
	((USoundAttenuationEditorSettings*)Obj)->bEnableSendToAudioLink = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::NewProp_bEnableSendToAudioLink = { "bEnableSendToAudioLink", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USoundAttenuationEditorSettings), &Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::NewProp_bEnableSendToAudioLink_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSendToAudioLink_MetaData), NewProp_bEnableSendToAudioLink_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::NewProp_bEnableReverbSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::NewProp_bEnableSendToAudioLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::ClassParams = {
	&USoundAttenuationEditorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USoundAttenuationEditorSettings()
{
	if (!Z_Registration_Info_UClass_USoundAttenuationEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundAttenuationEditorSettings.OuterSingleton, Z_Construct_UClass_USoundAttenuationEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USoundAttenuationEditorSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USoundAttenuationEditorSettings>()
{
	return USoundAttenuationEditorSettings::StaticClass();
}
USoundAttenuationEditorSettings::USoundAttenuationEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAttenuationEditorSettings);
USoundAttenuationEditorSettings::~USoundAttenuationEditorSettings() {}
// End Class USoundAttenuationEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USoundAttenuationEditorSettings, USoundAttenuationEditorSettings::StaticClass, TEXT("USoundAttenuationEditorSettings"), &Z_Registration_Info_UClass_USoundAttenuationEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundAttenuationEditorSettings), 2664570599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_12272552(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuationEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
