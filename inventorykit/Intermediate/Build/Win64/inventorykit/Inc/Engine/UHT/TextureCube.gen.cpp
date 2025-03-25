// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCube() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureCube
void UTextureCube::StaticRegisterNativesUTextureCube()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureCube);
UClass* Z_Construct_UClass_UTextureCube_NoRegister()
{
	return UTextureCube::StaticClass();
}
struct Z_Construct_UClass_UTextureCube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/TextureCube.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCube.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTextureCube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureCube_Statics::ClassParams = {
	&UTextureCube::StaticClass,
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
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCube_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureCube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureCube()
{
	if (!Z_Registration_Info_UClass_UTextureCube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureCube.OuterSingleton, Z_Construct_UClass_UTextureCube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureCube.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureCube>()
{
	return UTextureCube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCube);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureCube)
// End Class UTextureCube

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureCube, UTextureCube::StaticClass, TEXT("UTextureCube"), &Z_Registration_Info_UClass_UTextureCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureCube), 2169128526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_716379181(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
