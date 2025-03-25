// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GLTFExporter/Public/Exporters/GLTFLevelExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFLevelExporter() {}

// Begin Cross Module References
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelExporter();
GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFLevelExporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References

// Begin Class UGLTFLevelExporter
void UGLTFLevelExporter::StaticRegisterNativesUGLTFLevelExporter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFLevelExporter);
UClass* Z_Construct_UClass_UGLTFLevelExporter_NoRegister()
{
	return UGLTFLevelExporter::StaticClass();
}
struct Z_Construct_UClass_UGLTFLevelExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFLevelExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFLevelExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFLevelExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGLTFLevelExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFLevelExporter_Statics::ClassParams = {
	&UGLTFLevelExporter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFLevelExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFLevelExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFLevelExporter()
{
	if (!Z_Registration_Info_UClass_UGLTFLevelExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFLevelExporter.OuterSingleton, Z_Construct_UClass_UGLTFLevelExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFLevelExporter.OuterSingleton;
}
template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFLevelExporter>()
{
	return UGLTFLevelExporter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFLevelExporter);
UGLTFLevelExporter::~UGLTFLevelExporter() {}
// End Class UGLTFLevelExporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFLevelExporter, UGLTFLevelExporter::StaticClass, TEXT("UGLTFLevelExporter"), &Z_Registration_Info_UClass_UGLTFLevelExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFLevelExporter), 386983737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h_3989852351(TEXT("/Script/GLTFExporter"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFLevelExporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
