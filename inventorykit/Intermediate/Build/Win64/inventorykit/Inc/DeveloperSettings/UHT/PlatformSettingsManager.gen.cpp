// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/DeveloperSettings/Public/Engine/PlatformSettingsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSettingsManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettingsManager();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformSettingsInstances();
UPackage* Z_Construct_UPackage__Script_DeveloperSettings();
// End Cross Module References

// Begin ScriptStruct FPlatformSettingsInstances
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlatformSettingsInstances;
class UScriptStruct* FPlatformSettingsInstances::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformSettingsInstances, (UObject*)Z_Construct_UPackage__Script_DeveloperSettings(), TEXT("PlatformSettingsInstances"));
	}
	return Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.OuterSingleton;
}
template<> DEVELOPERSETTINGS_API UScriptStruct* StaticStruct<FPlatformSettingsInstances>()
{
	return FPlatformSettingsInstances::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// List of platform-specific instances for a class\n" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ToolTip", "List of platform-specific instances for a class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformInstance_MetaData[] = {
		{ "Comment", "// The instance for the native platform\n" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ToolTip", "The instance for the native platform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherPlatforms_MetaData[] = {
		{ "Comment", "// Instances for other platforms (only used in the editor)\n" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ToolTip", "Instances for other platforms (only used in the editor)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherPlatforms_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OtherPlatforms_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OtherPlatforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformSettingsInstances>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_PlatformInstance = { "PlatformInstance", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformSettingsInstances, PlatformInstance), Z_Construct_UClass_UPlatformSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformInstance_MetaData), NewProp_PlatformInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_ValueProp = { "OtherPlatforms", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPlatformSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_Key_KeyProp = { "OtherPlatforms_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms = { "OtherPlatforms", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlatformSettingsInstances, OtherPlatforms), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherPlatforms_MetaData), NewProp_OtherPlatforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_PlatformInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
	nullptr,
	&NewStructOps,
	"PlatformSettingsInstances",
	Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::PropPointers),
	sizeof(FPlatformSettingsInstances),
	alignof(FPlatformSettingsInstances),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlatformSettingsInstances()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.InnerSingleton, Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.InnerSingleton;
}
// End ScriptStruct FPlatformSettingsInstances

// Begin Class UPlatformSettingsManager
void UPlatformSettingsManager::StaticRegisterNativesUPlatformSettingsManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformSettingsManager);
UClass* Z_Construct_UClass_UPlatformSettingsManager_NoRegister()
{
	return UPlatformSettingsManager::StaticClass();
}
struct Z_Construct_UClass_UPlatformSettingsManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// The manager for all platform-specific settings\n" },
		{ "IncludePath", "Engine/PlatformSettingsManager.h" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The manager for all platform-specific settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsMap_MetaData[] = {
		{ "Comment", "// Created platform-specific settings\n" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ToolTip", "Created platform-specific settings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SettingsMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformSettingsManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_ValueProp = { "SettingsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlatformSettingsInstances, METADATA_PARAMS(0, nullptr) }; // 3857740528
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_Key_KeyProp = { "SettingsMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UPlatformSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap = { "SettingsMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformSettingsManager, SettingsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsMap_MetaData), NewProp_SettingsMap_MetaData) }; // 3857740528
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformSettingsManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSettingsManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlatformSettingsManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSettingsManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformSettingsManager_Statics::ClassParams = {
	&UPlatformSettingsManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlatformSettingsManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSettingsManager_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSettingsManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlatformSettingsManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlatformSettingsManager()
{
	if (!Z_Registration_Info_UClass_UPlatformSettingsManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformSettingsManager.OuterSingleton, Z_Construct_UClass_UPlatformSettingsManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlatformSettingsManager.OuterSingleton;
}
template<> DEVELOPERSETTINGS_API UClass* StaticClass<UPlatformSettingsManager>()
{
	return UPlatformSettingsManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformSettingsManager);
UPlatformSettingsManager::~UPlatformSettingsManager() {}
// End Class UPlatformSettingsManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlatformSettingsInstances::StaticStruct, Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewStructOps, TEXT("PlatformSettingsInstances"), &Z_Registration_Info_UScriptStruct_PlatformSettingsInstances, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlatformSettingsInstances), 3857740528U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformSettingsManager, UPlatformSettingsManager::StaticClass, TEXT("UPlatformSettingsManager"), &Z_Registration_Info_UClass_UPlatformSettingsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformSettingsManager), 790054068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_2107972148(TEXT("/Script/DeveloperSettings"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
