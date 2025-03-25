// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/IAudioPropertiesSheet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioPropertiesSheet() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertySheetBaseAsset();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertySheetBaseAsset_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin Class UAudioPropertySheetBaseAsset
void UAudioPropertySheetBaseAsset::StaticRegisterNativesUAudioPropertySheetBaseAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioPropertySheetBaseAsset);
UClass* Z_Construct_UClass_UAudioPropertySheetBaseAsset_NoRegister()
{
	return UAudioPropertySheetBaseAsset::StaticClass();
}
struct Z_Construct_UClass_UAudioPropertySheetBaseAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IAudioPropertiesSheet.h" },
		{ "ModuleRelativePath", "Public/IAudioPropertiesSheet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioPropertySheetBaseAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioPropertySheetBaseAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertySheetBaseAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioPropertySheetBaseAsset_Statics::ClassParams = {
	&UAudioPropertySheetBaseAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertySheetBaseAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioPropertySheetBaseAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioPropertySheetBaseAsset()
{
	if (!Z_Registration_Info_UClass_UAudioPropertySheetBaseAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioPropertySheetBaseAsset.OuterSingleton, Z_Construct_UClass_UAudioPropertySheetBaseAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioPropertySheetBaseAsset.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioPropertySheetBaseAsset>()
{
	return UAudioPropertySheetBaseAsset::StaticClass();
}
UAudioPropertySheetBaseAsset::UAudioPropertySheetBaseAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioPropertySheetBaseAsset);
UAudioPropertySheetBaseAsset::~UAudioPropertySheetBaseAsset() {}
// End Class UAudioPropertySheetBaseAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioPropertySheetBaseAsset, UAudioPropertySheetBaseAsset::StaticClass, TEXT("UAudioPropertySheetBaseAsset"), &Z_Registration_Info_UClass_UAudioPropertySheetBaseAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioPropertySheetBaseAsset), 48820482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_2445312119(TEXT("/Script/AudioExtensions"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
