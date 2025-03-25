// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/PlatformMediaSource.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformMediaSource() {}

// Begin Cross Module References
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UPlatformMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UPlatformMediaSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Class UPlatformMediaSource
void UPlatformMediaSource::StaticRegisterNativesUPlatformMediaSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformMediaSource);
UClass* Z_Construct_UClass_UPlatformMediaSource_NoRegister()
{
	return UPlatformMediaSource::StaticClass();
}
struct Z_Construct_UClass_UPlatformMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A media source that selects other media sources based on target platform.\n *\n * Use this asset to override media sources on a per-platform basis.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PlatformMediaSource.h" },
		{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
		{ "ToolTip", "A media source that selects other media sources based on target platform.\n\nUse this asset to override media sources on a per-platform basis." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMediaSources_MetaData[] = {
		{ "Category", "Sources" },
		{ "Comment", "/** Media sources per platform. */" },
		{ "DisplayName", "Media Sources" },
		{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
		{ "ToolTip", "Media sources per platform." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[] = {
		{ "Comment", "/**\n\x09 * Default media source.\n\x09 *\n\x09 * This media source will be used if no source was specified for a target platform.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PlatformMediaSource.h" },
		{ "ToolTip", "Default media source.\n\nThis media source will be used if no source was specified for a target platform." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMediaSources_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformMediaSources_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformMediaSources;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformMediaSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_ValueProp = { "PlatformMediaSources", nullptr, (EPropertyFlags)0x0104000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_Key_KeyProp = { "PlatformMediaSources_Key", nullptr, (EPropertyFlags)0x0100000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources = { "PlatformMediaSources", nullptr, (EPropertyFlags)0x0114000800002001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformMediaSource, PlatformMediaSources), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMediaSources_MetaData), NewProp_PlatformMediaSources_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlatformMediaSource, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaSource_MetaData), NewProp_MediaSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_PlatformMediaSources,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformMediaSource_Statics::NewProp_MediaSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlatformMediaSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMediaSource,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformMediaSource_Statics::ClassParams = {
	&UPlatformMediaSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlatformMediaSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlatformMediaSource()
{
	if (!Z_Registration_Info_UClass_UPlatformMediaSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformMediaSource.OuterSingleton, Z_Construct_UClass_UPlatformMediaSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlatformMediaSource.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UPlatformMediaSource>()
{
	return UPlatformMediaSource::StaticClass();
}
UPlatformMediaSource::UPlatformMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformMediaSource);
UPlatformMediaSource::~UPlatformMediaSource() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPlatformMediaSource)
// End Class UPlatformMediaSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformMediaSource, UPlatformMediaSource::StaticClass, TEXT("UPlatformMediaSource"), &Z_Registration_Info_UClass_UPlatformMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformMediaSource), 536025590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_699824286(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
