// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraControllerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCameraControllerSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UDebugCameraControllerSettings();
ENGINE_API UClass* Z_Construct_UClass_UDebugCameraControllerSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FDebugCameraControllerSettingsViewModeIndex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex;
class UScriptStruct* FDebugCameraControllerSettingsViewModeIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DebugCameraControllerSettingsViewModeIndex"));
	}
	return Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebugCameraControllerSettingsViewModeIndex>()
{
	return FDebugCameraControllerSettingsViewModeIndex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModeIndex_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Cycle View Mode" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ViewModeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCameraControllerSettingsViewModeIndex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex = { "ViewModeIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugCameraControllerSettingsViewModeIndex, ViewModeIndex), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModeIndex_MetaData), NewProp_ViewModeIndex_MetaData) }; // 2782198090
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DebugCameraControllerSettingsViewModeIndex",
	Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers),
	sizeof(FDebugCameraControllerSettingsViewModeIndex),
	alignof(FDebugCameraControllerSettingsViewModeIndex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex()
{
	if (!Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.InnerSingleton, Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.InnerSingleton;
}
// End ScriptStruct FDebugCameraControllerSettingsViewModeIndex

// Begin Class UDebugCameraControllerSettings
void UDebugCameraControllerSettings::StaticRegisterNativesUDebugCameraControllerSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugCameraControllerSettings);
UClass* Z_Construct_UClass_UDebugCameraControllerSettings_NoRegister()
{
	return UDebugCameraControllerSettings::StaticClass();
}
struct Z_Construct_UClass_UDebugCameraControllerSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default debug camera controller settings.\n */" },
		{ "DisplayName", "Debug Camera Controller" },
		{ "IncludePath", "Engine/DebugCameraControllerSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
		{ "ToolTip", "Default debug camera controller settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleViewModes_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CycleViewModes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CycleViewModes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugCameraControllerSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_Inner = { "CycleViewModes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex, METADATA_PARAMS(0, nullptr) }; // 3417279817
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes = { "CycleViewModes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDebugCameraControllerSettings, CycleViewModes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleViewModes_MetaData), NewProp_CycleViewModes_MetaData) }; // 3417279817
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDebugCameraControllerSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugCameraControllerSettings_Statics::ClassParams = {
	&UDebugCameraControllerSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDebugCameraControllerSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDebugCameraControllerSettings()
{
	if (!Z_Registration_Info_UClass_UDebugCameraControllerSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugCameraControllerSettings.OuterSingleton, Z_Construct_UClass_UDebugCameraControllerSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDebugCameraControllerSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDebugCameraControllerSettings>()
{
	return UDebugCameraControllerSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugCameraControllerSettings);
UDebugCameraControllerSettings::~UDebugCameraControllerSettings() {}
// End Class UDebugCameraControllerSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDebugCameraControllerSettingsViewModeIndex::StaticStruct, Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewStructOps, TEXT("DebugCameraControllerSettingsViewModeIndex"), &Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugCameraControllerSettingsViewModeIndex), 3417279817U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDebugCameraControllerSettings, UDebugCameraControllerSettings::StaticClass, TEXT("UDebugCameraControllerSettings"), &Z_Registration_Info_UClass_UDebugCameraControllerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugCameraControllerSettings), 2017578675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_1439973077(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
