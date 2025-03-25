// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/DeviceProfiles/DeviceProfileFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfileFragment() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileFragment();
ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileFragment_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDeviceProfileFragment
void UDeviceProfileFragment::StaticRegisterNativesUDeviceProfileFragment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeviceProfileFragment);
UClass* Z_Construct_UClass_UDeviceProfileFragment_NoRegister()
{
	return UDeviceProfileFragment::StaticClass();
}
struct Z_Construct_UClass_UDeviceProfileFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DeviceProfiles/DeviceProfileFragment.h" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CVars_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CVars_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CVars;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceProfileFragment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars_Inner = { "CVars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars = { "CVars", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeviceProfileFragment, CVars), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CVars_MetaData), NewProp_CVars_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeviceProfileFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileFragment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeviceProfileFragment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileFragment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeviceProfileFragment_Statics::ClassParams = {
	&UDeviceProfileFragment::StaticClass,
	"DeviceProfiles",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDeviceProfileFragment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileFragment_Statics::PropPointers),
	0,
	0x000804A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileFragment_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeviceProfileFragment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeviceProfileFragment()
{
	if (!Z_Registration_Info_UClass_UDeviceProfileFragment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeviceProfileFragment.OuterSingleton, Z_Construct_UClass_UDeviceProfileFragment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeviceProfileFragment.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDeviceProfileFragment>()
{
	return UDeviceProfileFragment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfileFragment);
UDeviceProfileFragment::~UDeviceProfileFragment() {}
// End Class UDeviceProfileFragment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeviceProfileFragment, UDeviceProfileFragment::StaticClass, TEXT("UDeviceProfileFragment"), &Z_Registration_Info_UClass_UDeviceProfileFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeviceProfileFragment), 40733709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_210857429(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
