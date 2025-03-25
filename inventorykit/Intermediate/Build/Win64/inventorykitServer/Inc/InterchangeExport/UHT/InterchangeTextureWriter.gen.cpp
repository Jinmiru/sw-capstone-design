// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Export/Public/InterchangeTextureWriter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureWriter() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeWriterBase();
INTERCHANGEEXPORT_API UClass* Z_Construct_UClass_UInterchangeTextureWriter();
INTERCHANGEEXPORT_API UClass* Z_Construct_UClass_UInterchangeTextureWriter_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangeExport();
// End Cross Module References

// Begin Class UInterchangeTextureWriter
void UInterchangeTextureWriter::StaticRegisterNativesUInterchangeTextureWriter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureWriter);
UClass* Z_Construct_UClass_UInterchangeTextureWriter_NoRegister()
{
	return UInterchangeTextureWriter::StaticClass();
}
struct Z_Construct_UClass_UInterchangeTextureWriter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTextureWriter.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureWriter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureWriter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeTextureWriter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeWriterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeExport,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureWriter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureWriter_Statics::ClassParams = {
	&UInterchangeTextureWriter::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureWriter_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeTextureWriter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeTextureWriter()
{
	if (!Z_Registration_Info_UClass_UInterchangeTextureWriter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureWriter.OuterSingleton, Z_Construct_UClass_UInterchangeTextureWriter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeTextureWriter.OuterSingleton;
}
template<> INTERCHANGEEXPORT_API UClass* StaticClass<UInterchangeTextureWriter>()
{
	return UInterchangeTextureWriter::StaticClass();
}
UInterchangeTextureWriter::UInterchangeTextureWriter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureWriter);
UInterchangeTextureWriter::~UInterchangeTextureWriter() {}
// End Class UInterchangeTextureWriter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureWriter, UInterchangeTextureWriter::StaticClass, TEXT("UInterchangeTextureWriter"), &Z_Registration_Info_UClass_UInterchangeTextureWriter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureWriter), 1948929444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h_1342429623(TEXT("/Script/InterchangeExport"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
