// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithSkyLightComponentTemplate() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithSkyLightComponentTemplate
void UDatasmithSkyLightComponentTemplate::StaticRegisterNativesUDatasmithSkyLightComponentTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithSkyLightComponentTemplate);
UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_NoRegister()
{
	return UDatasmithSkyLightComponentTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubemapResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CubemapResolution;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cubemap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSkyLightComponentTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithSkyLightComponentTemplate, SourceType), Z_Construct_UEnum_Engine_ESkyLightSourceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceType_MetaData), NewProp_SourceType_MetaData) }; // 2296310417
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution = { "CubemapResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithSkyLightComponentTemplate, CubemapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubemapResolution_MetaData), NewProp_CubemapResolution_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithSkyLightComponentTemplate, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cubemap_MetaData), NewProp_Cubemap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::ClassParams = {
	&UDatasmithSkyLightComponentTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSkyLightComponentTemplate>()
{
	return UDatasmithSkyLightComponentTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSkyLightComponentTemplate);
UDatasmithSkyLightComponentTemplate::~UDatasmithSkyLightComponentTemplate() {}
// End Class UDatasmithSkyLightComponentTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithSkyLightComponentTemplate, UDatasmithSkyLightComponentTemplate::StaticClass, TEXT("UDatasmithSkyLightComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithSkyLightComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithSkyLightComponentTemplate), 1385600495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h_3649541555(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSkyLightComponentTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
