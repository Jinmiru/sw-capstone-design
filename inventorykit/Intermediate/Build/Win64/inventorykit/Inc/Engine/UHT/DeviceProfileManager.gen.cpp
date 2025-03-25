// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/DeviceProfiles/DeviceProfileManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfileManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDeviceProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileManager();
ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDeviceProfileManager
void UDeviceProfileManager::StaticRegisterNativesUDeviceProfileManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeviceProfileManager);
UClass* Z_Construct_UClass_UDeviceProfileManager_NoRegister()
{
	return UDeviceProfileManager::StaticClass();
}
struct Z_Construct_UClass_UDeviceProfileManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a helper class that manages all profiles in the Device\n */" },
		{ "IncludePath", "DeviceProfiles/DeviceProfileManager.h" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
		{ "ToolTip", "Implements a helper class that manages all profiles in the Device" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Holds the collection of managed profiles.\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
		{ "ToolTip", "Holds the collection of managed profiles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackupProfiles_MetaData[] = {
		{ "Comment", "// Cached copy of profiles at load\n" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileManager.h" },
		{ "ToolTip", "Cached copy of profiles at load" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Profiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Profiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackupProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackupProfiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceProfileManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDeviceProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeviceProfileManager, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Profiles_MetaData), NewProp_Profiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles_Inner = { "BackupProfiles", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDeviceProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles = { "BackupProfiles", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeviceProfileManager, BackupProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackupProfiles_MetaData), NewProp_BackupProfiles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_Profiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileManager_Statics::NewProp_BackupProfiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeviceProfileManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeviceProfileManager_Statics::ClassParams = {
	&UDeviceProfileManager::StaticClass,
	"DeviceProfiles",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::PropPointers),
	0,
	0x000800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeviceProfileManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeviceProfileManager()
{
	if (!Z_Registration_Info_UClass_UDeviceProfileManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeviceProfileManager.OuterSingleton, Z_Construct_UClass_UDeviceProfileManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeviceProfileManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDeviceProfileManager>()
{
	return UDeviceProfileManager::StaticClass();
}
UDeviceProfileManager::UDeviceProfileManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfileManager);
UDeviceProfileManager::~UDeviceProfileManager() {}
// End Class UDeviceProfileManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeviceProfileManager, UDeviceProfileManager::StaticClass, TEXT("UDeviceProfileManager"), &Z_Registration_Info_UClass_UDeviceProfileManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeviceProfileManager), 146910392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_3991051058(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
