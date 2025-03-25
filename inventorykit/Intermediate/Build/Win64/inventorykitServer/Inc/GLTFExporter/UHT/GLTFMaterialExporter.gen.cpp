// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFMaterialExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFMaterialExporter() {}

// Begin Cross Module References
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFMaterialExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFMaterialExporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Class UGLTFMaterialExporter
void UGLTFMaterialExporter::StaticRegisterNativesUGLTFMaterialExporter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFMaterialExporter);
UClass* Z_Construct_UClass_UGLTFMaterialExporter_NoRegister()
{
	return UGLTFMaterialExporter::StaticClass();
}
struct Z_Construct_UClass_UGLTFMaterialExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFMaterialExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFMaterialExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFMaterialExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLTFMaterialExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFMaterialExporter_Statics::ClassParams = {
	&UGLTFMaterialExporter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFMaterialExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFMaterialExporter()
{
	if (!Z_Registration_Info_UClass_UGLTFMaterialExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFMaterialExporter.OuterSingleton, Z_Construct_UClass_UGLTFMaterialExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFMaterialExporter.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFMaterialExporter>()
{
	return UGLTFMaterialExporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFMaterialExporter);
UGLTFMaterialExporter::~UGLTFMaterialExporter() {}
// End Class UGLTFMaterialExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFMaterialExporter, UGLTFMaterialExporter::StaticClass, TEXT("UGLTFMaterialExporter"), &Z_Registration_Info_UClass_UGLTFMaterialExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFMaterialExporter), 3866381481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h_1990464869(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
