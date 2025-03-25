// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureAllMipDataProviderFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureAllMipDataProviderFactory() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTextureAllMipDataProviderFactory();
ENGINE_API UClass* Z_Construct_UClass_UTextureAllMipDataProviderFactory_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureMipDataProviderFactory();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureAllMipDataProviderFactory
void UTextureAllMipDataProviderFactory::StaticRegisterNativesUTextureAllMipDataProviderFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureAllMipDataProviderFactory);
UClass* Z_Construct_UClass_UTextureAllMipDataProviderFactory_NoRegister()
{
	return UTextureAllMipDataProviderFactory::StaticClass();
}
struct Z_Construct_UClass_UTextureAllMipDataProviderFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UTextureAllMipDataProviderFactory defines an interface to create instances of FTextureMipDataProvider.\n* Derived classes from UTextureAllMipDataProviderFactory can be attached to UTexture2D\n* to define a new source for all of the mip data (instead of the default disk file or ddc mips). \n* Use cases include custom texture compression.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Engine/TextureAllMipDataProviderFactory.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureAllMipDataProviderFactory.h" },
		{ "ToolTip", "UTextureAllMipDataProviderFactory defines an interface to create instances of FTextureMipDataProvider.\nDerived classes from UTextureAllMipDataProviderFactory can be attached to UTexture2D\nto define a new source for all of the mip data (instead of the default disk file or ddc mips).\nUse cases include custom texture compression." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureAllMipDataProviderFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextureAllMipDataProviderFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureMipDataProviderFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureAllMipDataProviderFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureAllMipDataProviderFactory_Statics::ClassParams = {
	&UTextureAllMipDataProviderFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureAllMipDataProviderFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureAllMipDataProviderFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureAllMipDataProviderFactory()
{
	if (!Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory.OuterSingleton, Z_Construct_UClass_UTextureAllMipDataProviderFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureAllMipDataProviderFactory>()
{
	return UTextureAllMipDataProviderFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureAllMipDataProviderFactory);
UTextureAllMipDataProviderFactory::~UTextureAllMipDataProviderFactory() {}
// End Class UTextureAllMipDataProviderFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureAllMipDataProviderFactory, UTextureAllMipDataProviderFactory::StaticClass, TEXT("UTextureAllMipDataProviderFactory"), &Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureAllMipDataProviderFactory), 121532817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_3448788808(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureAllMipDataProviderFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
