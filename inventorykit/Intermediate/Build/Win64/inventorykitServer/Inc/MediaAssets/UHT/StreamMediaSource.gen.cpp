// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/StreamMediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamMediaSource() {}

// Begin Cross Module References
MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UStreamMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UStreamMediaSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Class UStreamMediaSource
void UStreamMediaSource::StaticRegisterNativesUStreamMediaSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamMediaSource);
UClass* Z_Construct_UClass_UStreamMediaSource_NoRegister()
{
	return UStreamMediaSource::StaticClass();
}
struct Z_Construct_UClass_UStreamMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "StreamMediaSource.h" },
		{ "ModuleRelativePath", "Public/StreamMediaSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamUrl_MetaData[] = {
		{ "Category", "Stream" },
		{ "Comment", "/** The URL to the media stream to be played. */" },
		{ "ModuleRelativePath", "Public/StreamMediaSource.h" },
		{ "ToolTip", "The URL to the media stream to be played." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreamUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamMediaSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl = { "StreamUrl", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStreamMediaSource, StreamUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamUrl_MetaData), NewProp_StreamUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamMediaSource_Statics::NewProp_StreamUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStreamMediaSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamMediaSource_Statics::ClassParams = {
	&UStreamMediaSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStreamMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UStreamMediaSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStreamMediaSource()
{
	if (!Z_Registration_Info_UClass_UStreamMediaSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamMediaSource.OuterSingleton, Z_Construct_UClass_UStreamMediaSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreamMediaSource.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UStreamMediaSource>()
{
	return UStreamMediaSource::StaticClass();
}
UStreamMediaSource::UStreamMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamMediaSource);
UStreamMediaSource::~UStreamMediaSource() {}
// End Class UStreamMediaSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreamMediaSource, UStreamMediaSource::StaticClass, TEXT("UStreamMediaSource"), &Z_Registration_Info_UClass_UStreamMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamMediaSource), 3068139853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_1866100506(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
