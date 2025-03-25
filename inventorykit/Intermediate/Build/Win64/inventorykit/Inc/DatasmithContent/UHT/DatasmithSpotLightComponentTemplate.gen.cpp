// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithSpotLightComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithSpotLightComponentTemplate() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSpotLightComponentTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithSpotLightComponentTemplate
void UDatasmithSpotLightComponentTemplate::StaticRegisterNativesUDatasmithSpotLightComponentTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithSpotLightComponentTemplate);
UClass* Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_NoRegister()
{
	return UDatasmithSpotLightComponentTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithSpotLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSpotLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSpotLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSpotLightComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSpotLightComponentTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithSpotLightComponentTemplate, InnerConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerConeAngle_MetaData), NewProp_InnerConeAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithSpotLightComponentTemplate, OuterConeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterConeAngle_MetaData), NewProp_OuterConeAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_InnerConeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::NewProp_OuterConeAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::ClassParams = {
	&UDatasmithSpotLightComponentTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithSpotLightComponentTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithSpotLightComponentTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSpotLightComponentTemplate>()
{
	return UDatasmithSpotLightComponentTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSpotLightComponentTemplate);
UDatasmithSpotLightComponentTemplate::~UDatasmithSpotLightComponentTemplate() {}
// End Class UDatasmithSpotLightComponentTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithSpotLightComponentTemplate, UDatasmithSpotLightComponentTemplate::StaticClass, TEXT("UDatasmithSpotLightComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithSpotLightComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithSpotLightComponentTemplate), 1327829647U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h_2483668241(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithSpotLightComponentTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
