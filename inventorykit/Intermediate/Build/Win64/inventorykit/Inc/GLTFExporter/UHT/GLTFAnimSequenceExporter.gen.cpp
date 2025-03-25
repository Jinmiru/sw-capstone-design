// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFAnimSequenceExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFAnimSequenceExporter() {}

// Begin Cross Module References
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFAnimSequenceExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFAnimSequenceExporter_NoRegister();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Class UGLTFAnimSequenceExporter
void UGLTFAnimSequenceExporter::StaticRegisterNativesUGLTFAnimSequenceExporter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFAnimSequenceExporter);
UClass* Z_Construct_UClass_UGLTFAnimSequenceExporter_NoRegister()
{
	return UGLTFAnimSequenceExporter::StaticClass();
}
struct Z_Construct_UClass_UGLTFAnimSequenceExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFAnimSequenceExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFAnimSequenceExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFAnimSequenceExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLTFAnimSequenceExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFAnimSequenceExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFAnimSequenceExporter_Statics::ClassParams = {
	&UGLTFAnimSequenceExporter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFAnimSequenceExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFAnimSequenceExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFAnimSequenceExporter()
{
	if (!Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.OuterSingleton, Z_Construct_UClass_UGLTFAnimSequenceExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFAnimSequenceExporter.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFAnimSequenceExporter>()
{
	return UGLTFAnimSequenceExporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFAnimSequenceExporter);
UGLTFAnimSequenceExporter::~UGLTFAnimSequenceExporter() {}
// End Class UGLTFAnimSequenceExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFAnimSequenceExporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFAnimSequenceExporter, UGLTFAnimSequenceExporter::StaticClass, TEXT("UGLTFAnimSequenceExporter"), &Z_Registration_Info_UClass_UGLTFAnimSequenceExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFAnimSequenceExporter), 4176563447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFAnimSequenceExporter_h_3534561055(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFAnimSequenceExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFAnimSequenceExporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
