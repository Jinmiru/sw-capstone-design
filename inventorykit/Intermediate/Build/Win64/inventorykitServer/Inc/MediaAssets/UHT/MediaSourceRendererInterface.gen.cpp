// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MediaAssets/Public/MediaSourceRendererInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSourceRendererInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSourceRendererInterface();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSourceRendererInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References

// Begin Interface UMediaSourceRendererInterface
void UMediaSourceRendererInterface::StaticRegisterNativesUMediaSourceRendererInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaSourceRendererInterface);
UClass* Z_Construct_UClass_UMediaSourceRendererInterface_NoRegister()
{
	return UMediaSourceRendererInterface::StaticClass();
}
struct Z_Construct_UClass_UMediaSourceRendererInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaSourceRendererInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMediaSourceRendererInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMediaSourceRendererInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSourceRendererInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaSourceRendererInterface_Statics::ClassParams = {
	&UMediaSourceRendererInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSourceRendererInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaSourceRendererInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaSourceRendererInterface()
{
	if (!Z_Registration_Info_UClass_UMediaSourceRendererInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaSourceRendererInterface.OuterSingleton, Z_Construct_UClass_UMediaSourceRendererInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaSourceRendererInterface.OuterSingleton;
}
template<> MEDIAASSETS_API UClass* StaticClass<UMediaSourceRendererInterface>()
{
	return UMediaSourceRendererInterface::StaticClass();
}
UMediaSourceRendererInterface::UMediaSourceRendererInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSourceRendererInterface);
UMediaSourceRendererInterface::~UMediaSourceRendererInterface() {}
// End Interface UMediaSourceRendererInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMediaSourceRendererInterface, UMediaSourceRendererInterface::StaticClass, TEXT("UMediaSourceRendererInterface"), &Z_Registration_Info_UClass_UMediaSourceRendererInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaSourceRendererInterface), 380193790U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_1068942172(TEXT("/Script/MediaAssets"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaSourceRendererInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
