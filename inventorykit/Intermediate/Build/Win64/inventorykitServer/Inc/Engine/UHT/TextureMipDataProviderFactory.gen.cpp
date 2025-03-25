// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureMipDataProviderFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureMipDataProviderFactory() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ENGINE_API UClass* Z_Construct_UClass_UTextureMipDataProviderFactory();
ENGINE_API UClass* Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureMipDataProviderFactory
void UTextureMipDataProviderFactory::StaticRegisterNativesUTextureMipDataProviderFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureMipDataProviderFactory);
UClass* Z_Construct_UClass_UTextureMipDataProviderFactory_NoRegister()
{
	return UTextureMipDataProviderFactory::StaticClass();
}
struct Z_Construct_UClass_UTextureMipDataProviderFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UTextureMipDataProviderFactory defines an interface to create instances of FTextureMipDataProvider.\n* Derived classes from UTextureMipDataProviderFactory can be attached to UTexture::MipDataProviderFactory\n* to define a new source for mip content (instead of the default disk file or ddc mips). \n* Usecases include dynamic textures that need to be driven by the texture streaming or textures that \n* get they data over the network.\n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/TextureMipDataProviderFactory.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureMipDataProviderFactory.h" },
		{ "ToolTip", "UTextureMipDataProviderFactory defines an interface to create instances of FTextureMipDataProvider.\nDerived classes from UTextureMipDataProviderFactory can be attached to UTexture::MipDataProviderFactory\nto define a new source for mip content (instead of the default disk file or ddc mips).\nUsecases include dynamic textures that need to be driven by the texture streaming or textures that\nget they data over the network." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureMipDataProviderFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::ClassParams = {
	&UTextureMipDataProviderFactory::StaticClass,
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
	0x002810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureMipDataProviderFactory()
{
	if (!Z_Registration_Info_UClass_UTextureMipDataProviderFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureMipDataProviderFactory.OuterSingleton, Z_Construct_UClass_UTextureMipDataProviderFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureMipDataProviderFactory.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureMipDataProviderFactory>()
{
	return UTextureMipDataProviderFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureMipDataProviderFactory);
UTextureMipDataProviderFactory::~UTextureMipDataProviderFactory() {}
// End Class UTextureMipDataProviderFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureMipDataProviderFactory, UTextureMipDataProviderFactory::StaticClass, TEXT("UTextureMipDataProviderFactory"), &Z_Registration_Info_UClass_UTextureMipDataProviderFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureMipDataProviderFactory), 784412311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_2077280928(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureMipDataProviderFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
