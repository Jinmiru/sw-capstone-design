// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithPointLightComponentTemplate() {}

// Begin Cross Module References
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPointLightComponentTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPointLightComponentTemplate_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithPointLightComponentTemplate
void UDatasmithPointLightComponentTemplate::StaticRegisterNativesUDatasmithPointLightComponentTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithPointLightComponentTemplate);
UClass* Z_Construct_UClass_UDatasmithPointLightComponentTemplate_NoRegister()
{
	return UDatasmithPointLightComponentTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPointLightComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithPointLightComponentTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithPointLightComponentTemplate, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntensityUnits_MetaData), NewProp_IntensityUnits_MetaData) }; // 3885668745
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithPointLightComponentTemplate, SourceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRadius_MetaData), NewProp_SourceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithPointLightComponentTemplate, SourceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLength_MetaData), NewProp_SourceLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithPointLightComponentTemplate, AttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationRadius_MetaData), NewProp_AttenuationRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_IntensityUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_SourceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::NewProp_AttenuationRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::ClassParams = {
	&UDatasmithPointLightComponentTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithPointLightComponentTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithPointLightComponentTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithPointLightComponentTemplate>()
{
	return UDatasmithPointLightComponentTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithPointLightComponentTemplate);
UDatasmithPointLightComponentTemplate::~UDatasmithPointLightComponentTemplate() {}
// End Class UDatasmithPointLightComponentTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithPointLightComponentTemplate, UDatasmithPointLightComponentTemplate::StaticClass, TEXT("UDatasmithPointLightComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithPointLightComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithPointLightComponentTemplate), 2189382787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h_3501276430(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithPointLightComponentTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
