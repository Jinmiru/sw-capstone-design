// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFLevelVariantSetsExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFLevelVariantSetsExporter() {}

// Begin Cross Module References
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelVariantSetsExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelVariantSetsExporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Class UGLTFLevelVariantSetsExporter
void UGLTFLevelVariantSetsExporter::StaticRegisterNativesUGLTFLevelVariantSetsExporter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFLevelVariantSetsExporter);
UClass* Z_Construct_UClass_UGLTFLevelVariantSetsExporter_NoRegister()
{
	return UGLTFLevelVariantSetsExporter::StaticClass();
}
struct Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFLevelVariantSetsExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFLevelVariantSetsExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFLevelVariantSetsExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::ClassParams = {
	&UGLTFLevelVariantSetsExporter::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFLevelVariantSetsExporter()
{
	if (!Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.OuterSingleton, Z_Construct_UClass_UGLTFLevelVariantSetsExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFLevelVariantSetsExporter>()
{
	return UGLTFLevelVariantSetsExporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFLevelVariantSetsExporter);
UGLTFLevelVariantSetsExporter::~UGLTFLevelVariantSetsExporter() {}
// End Class UGLTFLevelVariantSetsExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelVariantSetsExporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFLevelVariantSetsExporter, UGLTFLevelVariantSetsExporter::StaticClass, TEXT("UGLTFLevelVariantSetsExporter"), &Z_Registration_Info_UClass_UGLTFLevelVariantSetsExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFLevelVariantSetsExporter), 2306157634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelVariantSetsExporter_h_2878039378(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelVariantSetsExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelVariantSetsExporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
