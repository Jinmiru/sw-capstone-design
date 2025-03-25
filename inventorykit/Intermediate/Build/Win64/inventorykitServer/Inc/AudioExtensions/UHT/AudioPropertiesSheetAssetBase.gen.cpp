// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AudioExtensions/Public/AudioPropertiesSheetAssetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioPropertiesSheetAssetBase() {}

// Begin Cross Module References
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase();
AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References

// Begin Class UAudioPropertiesSheetAssetBase
void UAudioPropertiesSheetAssetBase::StaticRegisterNativesUAudioPropertiesSheetAssetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioPropertiesSheetAssetBase);
UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase_NoRegister()
{
	return UAudioPropertiesSheetAssetBase::StaticClass();
}
struct Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AudioPropertiesSheetAssetBase.h" },
		{ "ModuleRelativePath", "Public/AudioPropertiesSheetAssetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioPropertiesSheetAssetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::ClassParams = {
	&UAudioPropertiesSheetAssetBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioPropertiesSheetAssetBase()
{
	if (!Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.OuterSingleton, Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase.OuterSingleton;
}
template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioPropertiesSheetAssetBase>()
{
	return UAudioPropertiesSheetAssetBase::StaticClass();
}
UAudioPropertiesSheetAssetBase::UAudioPropertiesSheetAssetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioPropertiesSheetAssetBase);
UAudioPropertiesSheetAssetBase::~UAudioPropertiesSheetAssetBase() {}
// End Class UAudioPropertiesSheetAssetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioPropertiesSheetAssetBase, UAudioPropertiesSheetAssetBase::StaticClass, TEXT("UAudioPropertiesSheetAssetBase"), &Z_Registration_Info_UClass_UAudioPropertiesSheetAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioPropertiesSheetAssetBase), 1724629928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_228776766(TEXT("/Script/AudioExtensions"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
