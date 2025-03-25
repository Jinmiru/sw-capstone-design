// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/LightMapTexture2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightMapTexture2D() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ULightMapTexture2D();
ENGINE_API UClass* Z_Construct_UClass_ULightMapTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULightMapTexture2D
void ULightMapTexture2D::StaticRegisterNativesULightMapTexture2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightMapTexture2D);
UClass* Z_Construct_UClass_ULightMapTexture2D_NoRegister()
{
	return ULightMapTexture2D::StaticClass();
}
struct Z_Construct_UClass_ULightMapTexture2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/LightMapTexture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/LightMapTexture2D.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapTexture2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULightMapTexture2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapTexture2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightMapTexture2D_Statics::ClassParams = {
	&ULightMapTexture2D::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapTexture2D_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightMapTexture2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightMapTexture2D()
{
	if (!Z_Registration_Info_UClass_ULightMapTexture2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightMapTexture2D.OuterSingleton, Z_Construct_UClass_ULightMapTexture2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightMapTexture2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULightMapTexture2D>()
{
	return ULightMapTexture2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapTexture2D);
ULightMapTexture2D::~ULightMapTexture2D() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULightMapTexture2D)
// End Class ULightMapTexture2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightMapTexture2D, ULightMapTexture2D::StaticClass, TEXT("ULightMapTexture2D"), &Z_Registration_Info_UClass_ULightMapTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightMapTexture2D), 1696177938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_2635164875(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
