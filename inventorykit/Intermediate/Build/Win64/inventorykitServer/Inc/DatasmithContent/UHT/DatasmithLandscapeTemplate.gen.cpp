// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithLandscapeTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithLandscapeTemplate() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLandscapeTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLandscapeTemplate_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithLandscapeTemplate
void UDatasmithLandscapeTemplate::StaticRegisterNativesUDatasmithLandscapeTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithLandscapeTemplate);
UClass* Z_Construct_UClass_UDatasmithLandscapeTemplate_NoRegister()
{
	return UDatasmithLandscapeTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithLandscapeTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLandscapeTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLandscapeTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticLightingLOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLandscapeTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StaticLightingLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithLandscapeTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithLandscapeTemplate, LandscapeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterial_MetaData), NewProp_LandscapeMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_StaticLightingLOD = { "StaticLightingLOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithLandscapeTemplate, StaticLightingLOD), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticLightingLOD_MetaData), NewProp_StaticLightingLOD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_LandscapeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::NewProp_StaticLightingLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::ClassParams = {
	&UDatasmithLandscapeTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithLandscapeTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithLandscapeTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithLandscapeTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithLandscapeTemplate>()
{
	return UDatasmithLandscapeTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithLandscapeTemplate);
UDatasmithLandscapeTemplate::~UDatasmithLandscapeTemplate() {}
// End Class UDatasmithLandscapeTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithLandscapeTemplate, UDatasmithLandscapeTemplate::StaticClass, TEXT("UDatasmithLandscapeTemplate"), &Z_Registration_Info_UClass_UDatasmithLandscapeTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithLandscapeTemplate), 1530941215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h_2382306264(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLandscapeTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
