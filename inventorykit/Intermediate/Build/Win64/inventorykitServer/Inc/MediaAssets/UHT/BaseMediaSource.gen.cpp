// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/BaseMediaSource.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMediaSource() {}

// Begin Cross Module References
MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Class UBaseMediaSource
void UBaseMediaSource::StaticRegisterNativesUBaseMediaSource()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseMediaSource);
UClass* Z_Construct_UClass_UBaseMediaSource_NoRegister()
{
	return UBaseMediaSource::StaticClass();
}
struct Z_Construct_UClass_UBaseMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for concrete media sources.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "BaseMediaSource.h" },
		{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
		{ "ToolTip", "Base class for concrete media sources." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformPlayerNames_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "/** Override native media player plug-ins per platform (Empty = find one automatically). */" },
		{ "DisplayName", "Player Overrides" },
		{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
		{ "ToolTip", "Override native media player plug-ins per platform (Empty = find one automatically)." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Comment", "/** Name of the desired native media player (Empty = find one automatically). */" },
		{ "ModuleRelativePath", "Public/BaseMediaSource.h" },
		{ "ToolTip", "Name of the desired native media player (Empty = find one automatically)." },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlatformPlayerNames_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformPlayerNames_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlatformPlayerNames;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMediaSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_ValueProp = { "PlatformPlayerNames", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_Key_KeyProp = { "PlatformPlayerNames_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames = { "PlatformPlayerNames", nullptr, (EPropertyFlags)0x0010000800002005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMediaSource, PlatformPlayerNames), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformPlayerNames_MetaData), NewProp_PlatformPlayerNames_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseMediaSource, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlatformPlayerNames,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseMediaSource_Statics::NewProp_PlayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseMediaSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMediaSource,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMediaSource_Statics::ClassParams = {
	&UBaseMediaSource::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMediaSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseMediaSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseMediaSource()
{
	if (!Z_Registration_Info_UClass_UBaseMediaSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMediaSource.OuterSingleton, Z_Construct_UClass_UBaseMediaSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseMediaSource.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UBaseMediaSource>()
{
	return UBaseMediaSource::StaticClass();
}
UBaseMediaSource::UBaseMediaSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMediaSource);
UBaseMediaSource::~UBaseMediaSource() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UBaseMediaSource)
// End Class UBaseMediaSource

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseMediaSource, UBaseMediaSource::StaticClass, TEXT("UBaseMediaSource"), &Z_Registration_Info_UClass_UBaseMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMediaSource), 142225236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_1997391464(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
