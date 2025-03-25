// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/LevelSequence/Private/LevelSequenceProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceProjectSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceProjectSettings();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister();
MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EUpdateClockSource();
UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References

// Begin Class ULevelSequenceProjectSettings
void ULevelSequenceProjectSettings::StaticRegisterNativesULevelSequenceProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceProjectSettings);
UClass* Z_Construct_UClass_ULevelSequenceProjectSettings_NoRegister()
{
	return ULevelSequenceProjectSettings::StaticClass();
}
struct Z_Construct_UClass_ULevelSequenceProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Settings for level sequences\n" },
		{ "DisplayName", "Level Sequence" },
		{ "IncludePath", "LevelSequenceProjectSettings.h" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "ToolTip", "Settings for level sequences" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultLockEngineToDisplayRate_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultLockEngineToDisplayRate" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "0: Playback locked to playback frames\n1: Unlocked playback with sub frame interpolation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDisplayRate_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultDisplayRate" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "Specifies default display frame rate for newly created level sequences; also defines frame locked frame rate where sequences are set to be frame locked. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTickResolution_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultTickResolution" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "Specifies default tick resolution for newly created level sequences. Examples: 30 fps, 120/1 (120 fps), 30000/1001 (29.97), 0.01s (10ms)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultClockSource_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ConsoleVariable", "LevelSequence.DefaultClockSource" },
		{ "ModuleRelativePath", "Private/LevelSequenceProjectSettings.h" },
		{ "Tooltip", "Specifies default clock source for newly created level sequences. Examples: 0: Tick, 1: Platform, 2: Audio, 3: RelativeTimecode, 4: Timecode, 5: Custom" },
	};
#endif // WITH_METADATA
	static void NewProp_bDefaultLockEngineToDisplayRate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultLockEngineToDisplayRate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultDisplayRate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultTickResolution;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultClockSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultClockSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_SetBit(void* Obj)
{
	((ULevelSequenceProjectSettings*)Obj)->bDefaultLockEngineToDisplayRate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate = { "bDefaultLockEngineToDisplayRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULevelSequenceProjectSettings), &Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultLockEngineToDisplayRate_MetaData), NewProp_bDefaultLockEngineToDisplayRate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate = { "DefaultDisplayRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceProjectSettings, DefaultDisplayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDisplayRate_MetaData), NewProp_DefaultDisplayRate_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution = { "DefaultTickResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceProjectSettings, DefaultTickResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTickResolution_MetaData), NewProp_DefaultTickResolution_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource = { "DefaultClockSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelSequenceProjectSettings, DefaultClockSource), Z_Construct_UEnum_MovieScene_EUpdateClockSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultClockSource_MetaData), NewProp_DefaultClockSource_MetaData) }; // 2266554604
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_bDefaultLockEngineToDisplayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultDisplayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultTickResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::NewProp_DefaultClockSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::ClassParams = {
	&ULevelSequenceProjectSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelSequenceProjectSettings()
{
	if (!Z_Registration_Info_UClass_ULevelSequenceProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceProjectSettings.OuterSingleton, Z_Construct_UClass_ULevelSequenceProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelSequenceProjectSettings.OuterSingleton;
}
template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceProjectSettings>()
{
	return ULevelSequenceProjectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceProjectSettings);
ULevelSequenceProjectSettings::~ULevelSequenceProjectSettings() {}
// End Class ULevelSequenceProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LevelSequenceProjectSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceProjectSettings, ULevelSequenceProjectSettings::StaticClass, TEXT("ULevelSequenceProjectSettings"), &Z_Registration_Info_UClass_ULevelSequenceProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceProjectSettings), 3755124415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LevelSequenceProjectSettings_h_1630380723(TEXT("/Script/LevelSequence"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LevelSequenceProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Private_LevelSequenceProjectSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
