// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/MediaPlayerProxyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerProxyInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayerProxyInterface();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Interface UMediaPlayerProxyInterface
void UMediaPlayerProxyInterface::StaticRegisterNativesUMediaPlayerProxyInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlayerProxyInterface);
UClass* Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister()
{
	return UMediaPlayerProxyInterface::StaticClass();
}
struct Z_Construct_UClass_UMediaPlayerProxyInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaPlayerProxyInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMediaPlayerProxyInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::ClassParams = {
	&UMediaPlayerProxyInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaPlayerProxyInterface()
{
	if (!Z_Registration_Info_UClass_UMediaPlayerProxyInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlayerProxyInterface.OuterSingleton, Z_Construct_UClass_UMediaPlayerProxyInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaPlayerProxyInterface.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UMediaPlayerProxyInterface>()
{
	return UMediaPlayerProxyInterface::StaticClass();
}
UMediaPlayerProxyInterface::UMediaPlayerProxyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlayerProxyInterface);
UMediaPlayerProxyInterface::~UMediaPlayerProxyInterface() {}
// End Interface UMediaPlayerProxyInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlayerProxyInterface, UMediaPlayerProxyInterface::StaticClass, TEXT("UMediaPlayerProxyInterface"), &Z_Registration_Info_UClass_UMediaPlayerProxyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlayerProxyInterface), 984407898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_4001456526(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaPlayerProxyInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
