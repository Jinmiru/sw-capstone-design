// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangeMaterialXPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMaterialXPipeline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
INTERCHANGECOMMON_API UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF();
INTERCHANGECOMMON_API UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF();
INTERCHANGECOMMON_API UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders();
INTERCHANGECOMMON_API UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeMaterialXPipeline();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeMaterialXPipeline_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UMaterialXPipelineSettings();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UMaterialXPipelineSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin Class UMaterialXPipelineSettings
void UMaterialXPipelineSettings::StaticRegisterNativesUMaterialXPipelineSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialXPipelineSettings);
UClass* Z_Construct_UClass_UMaterialXPipelineSettings_NoRegister()
{
	return UMaterialXPipelineSettings::StaticClass();
}
struct Z_Construct_UClass_UMaterialXPipelineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Interchange MaterialX" },
		{ "IncludePath", "InterchangeMaterialXPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredefinedSurfaceShaders_MetaData[] = {
		{ "Category", "MaterialXPredefined | Surface Shaders" },
		{ "DisplayName", "MaterialX Predefined Surface Shaders" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredefinedBSDF_MetaData[] = {
		{ "Category", "MaterialXPredefined | BSDF" },
		{ "DisplayName", "MaterialX Predefined BSDF" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredefinedEDF_MetaData[] = {
		{ "Category", "MaterialXPredefined | EDF" },
		{ "DisplayName", "MaterialX Predefined EDF" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredefinedVDF_MetaData[] = {
		{ "Category", "MaterialXPredefined | VDF" },
		{ "DisplayName", "MaterialX Predefined VDF" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredefinedSurfaceShaders_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PredefinedSurfaceShaders_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PredefinedSurfaceShaders_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PredefinedSurfaceShaders;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredefinedBSDF_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PredefinedBSDF_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PredefinedBSDF_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PredefinedBSDF;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredefinedEDF_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PredefinedEDF_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PredefinedEDF_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PredefinedEDF;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PredefinedVDF_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PredefinedVDF_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PredefinedVDF_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PredefinedVDF;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialXPipelineSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_ValueProp = { "PredefinedSurfaceShaders", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_Key_KeyProp = { "PredefinedSurfaceShaders_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders, METADATA_PARAMS(0, nullptr) }; // 3792897675
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders = { "PredefinedSurfaceShaders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialXPipelineSettings, PredefinedSurfaceShaders), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredefinedSurfaceShaders_MetaData), NewProp_PredefinedSurfaceShaders_MetaData) }; // 3792897675
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedBSDF_ValueProp = { "PredefinedBSDF", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedBSDF_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedBSDF_Key_KeyProp = { "PredefinedBSDF_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF, METADATA_PARAMS(0, nullptr) }; // 170029114
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedBSDF = { "PredefinedBSDF", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialXPipelineSettings, PredefinedBSDF), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredefinedBSDF_MetaData), NewProp_PredefinedBSDF_MetaData) }; // 170029114
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedEDF_ValueProp = { "PredefinedEDF", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedEDF_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedEDF_Key_KeyProp = { "PredefinedEDF_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF, METADATA_PARAMS(0, nullptr) }; // 3574067269
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedEDF = { "PredefinedEDF", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialXPipelineSettings, PredefinedEDF), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredefinedEDF_MetaData), NewProp_PredefinedEDF_MetaData) }; // 3574067269
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedVDF_ValueProp = { "PredefinedVDF", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedVDF_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedVDF_Key_KeyProp = { "PredefinedVDF_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF, METADATA_PARAMS(0, nullptr) }; // 3381568588
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedVDF = { "PredefinedVDF", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialXPipelineSettings, PredefinedVDF), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredefinedVDF_MetaData), NewProp_PredefinedVDF_MetaData) }; // 3381568588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialXPipelineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedSurfaceShaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedBSDF_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedBSDF_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedBSDF_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedBSDF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedEDF_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedEDF_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedEDF_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedEDF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedVDF_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedVDF_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedVDF_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialXPipelineSettings_Statics::NewProp_PredefinedVDF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXPipelineSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialXPipelineSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXPipelineSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialXPipelineSettings_Statics::ClassParams = {
	&UMaterialXPipelineSettings::StaticClass,
	"Interchange",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialXPipelineSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXPipelineSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialXPipelineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialXPipelineSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialXPipelineSettings()
{
	if (!Z_Registration_Info_UClass_UMaterialXPipelineSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialXPipelineSettings.OuterSingleton, Z_Construct_UClass_UMaterialXPipelineSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialXPipelineSettings.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UMaterialXPipelineSettings>()
{
	return UMaterialXPipelineSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialXPipelineSettings);
UMaterialXPipelineSettings::~UMaterialXPipelineSettings() {}
// End Class UMaterialXPipelineSettings

// Begin Class UInterchangeMaterialXPipeline
void UInterchangeMaterialXPipeline::StaticRegisterNativesUInterchangeMaterialXPipeline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialXPipeline);
UClass* Z_Construct_UClass_UInterchangeMaterialXPipeline_NoRegister()
{
	return UInterchangeMaterialXPipeline::StaticClass();
}
struct Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeMaterialXPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeMaterialXPipeline.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialXPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::ClassParams = {
	&UInterchangeMaterialXPipeline::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeMaterialXPipeline()
{
	if (!Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialXPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeMaterialXPipeline.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeMaterialXPipeline>()
{
	return UInterchangeMaterialXPipeline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialXPipeline);
UInterchangeMaterialXPipeline::~UInterchangeMaterialXPipeline() {}
// End Class UInterchangeMaterialXPipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialXPipelineSettings, UMaterialXPipelineSettings::StaticClass, TEXT("UMaterialXPipelineSettings"), &Z_Registration_Info_UClass_UMaterialXPipelineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialXPipelineSettings), 1162788866U) },
		{ Z_Construct_UClass_UInterchangeMaterialXPipeline, UInterchangeMaterialXPipeline::StaticClass, TEXT("UInterchangeMaterialXPipeline"), &Z_Registration_Info_UClass_UInterchangeMaterialXPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialXPipeline), 1530416607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_2068201748(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeMaterialXPipeline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
