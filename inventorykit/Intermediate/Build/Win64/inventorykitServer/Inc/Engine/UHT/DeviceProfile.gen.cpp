// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/DeviceProfiles/DeviceProfile.h"
#include "Runtime/Engine/Classes/DeviceProfiles/DeviceProfileMatching.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDeviceProfile();
ENGINE_API UClass* Z_Construct_UClass_UDeviceProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDPMatchingRulestruct();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDeviceProfile
void UDeviceProfile::StaticRegisterNativesUDeviceProfile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeviceProfile);
UClass* Z_Construct_UClass_UDeviceProfile_NoRegister()
{
	return UDeviceProfile::StaticClass();
}
struct Z_Construct_UClass_UDeviceProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DeviceProfiles/DeviceProfile.h" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[] = {
		{ "Category", "DeviceSettings" },
		{ "Comment", "/** The type of this profile, I.e. IOS, Windows, PS4 etc */" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "The type of this profile, I.e. IOS, Windows, PS4 etc" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseProfileName_MetaData[] = {
		{ "Category", "DeviceSettings" },
		{ "Comment", "/** The name of the parent profile of this object */" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "The name of the parent profile of this object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisibleForAssets_MetaData[] = {
		{ "Category", "DeviceSettings" },
		{ "Comment", "/** Some asset types can reference Device Profiles, is this profile visible to those assets. */" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "Some asset types can reference Device Profiles, is this profile visible to those assets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Comment", "/** The parent object of this profile, it is the object matching this DeviceType with the BaseProfileName */" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "The parent object of this profile, it is the object matching this DeviceType with the BaseProfileName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CVars_MetaData[] = {
		{ "Category", "ConsoleVariables" },
		{ "Comment", "/** The collection of CVars which is set from this profile */" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "The collection of CVars which is set from this profile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchingRules_MetaData[] = {
		{ "Category", "DeviceProfile Matching Rules" },
		{ "Comment", "/** An array of conditions to test against and fragment names to select. */" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfile.h" },
		{ "ToolTip", "An array of conditions to test against and fragment names to select." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseProfileName;
	static void NewProp_bIsVisibleForAssets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisibleForAssets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CVars_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CVars;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MatchingRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MatchingRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeviceProfile, DeviceType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceType_MetaData), NewProp_DeviceType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_BaseProfileName = { "BaseProfileName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeviceProfile, BaseProfileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseProfileName_MetaData), NewProp_BaseProfileName_MetaData) };
void Z_Construct_UClass_UDeviceProfile_Statics::NewProp_bIsVisibleForAssets_SetBit(void* Obj)
{
	((UDeviceProfile*)Obj)->bIsVisibleForAssets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_bIsVisibleForAssets = { "bIsVisibleForAssets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDeviceProfile), &Z_Construct_UClass_UDeviceProfile_Statics::NewProp_bIsVisibleForAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisibleForAssets_MetaData), NewProp_bIsVisibleForAssets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeviceProfile, Parent), Z_Construct_UClass_UDeviceProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars_Inner = { "CVars", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars = { "CVars", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeviceProfile, CVars), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CVars_MetaData), NewProp_CVars_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_MatchingRules_Inner = { "MatchingRules", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDPMatchingRulestruct, METADATA_PARAMS(0, nullptr) }; // 1876381570
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfile_Statics::NewProp_MatchingRules = { "MatchingRules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeviceProfile, MatchingRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchingRules_MetaData), NewProp_MatchingRules_MetaData) }; // 1876381570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeviceProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_DeviceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_BaseProfileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_bIsVisibleForAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_CVars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_MatchingRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfile_Statics::NewProp_MatchingRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeviceProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureLODSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeviceProfile_Statics::ClassParams = {
	&UDeviceProfile::StaticClass,
	"DeviceProfiles",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDeviceProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::PropPointers),
	0,
	0x000804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeviceProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeviceProfile()
{
	if (!Z_Registration_Info_UClass_UDeviceProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeviceProfile.OuterSingleton, Z_Construct_UClass_UDeviceProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeviceProfile.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDeviceProfile>()
{
	return UDeviceProfile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfile);
UDeviceProfile::~UDeviceProfile() {}
// End Class UDeviceProfile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeviceProfile, UDeviceProfile::StaticClass, TEXT("UDeviceProfile"), &Z_Registration_Info_UClass_UDeviceProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeviceProfile), 3817756096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_720037406(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
