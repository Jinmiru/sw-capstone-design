// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Public/InterchangeglTFPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeglTFPipeline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UGLTFPipelineSettings();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UGLTFPipelineSettings_NoRegister();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGLTFPipeline();
INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGLTFPipeline_NoRegister();
UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References

// Begin Class UGLTFPipelineSettings
void UGLTFPipelineSettings::StaticRegisterNativesUGLTFPipelineSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFPipelineSettings);
UClass* Z_Construct_UClass_UGLTFPipelineSettings_NoRegister()
{
	return UGLTFPipelineSettings::StaticClass();
}
struct Z_Construct_UClass_UGLTFPipelineSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Interchange glTF" },
		{ "IncludePath", "InterchangeglTFPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeglTFPipeline.h" },
		{ "ToolTip", "Interchange settings for glTF conversions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParents_MetaData[] = {
		{ "Category", "PredefinedglTFMaterialLibrary" },
		{ "DisplayName", "Predefined glTF Material Library" },
		{ "ModuleRelativePath", "Public/InterchangeglTFPipeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParents_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialParents_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialParents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFPipelineSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_ValueProp = { "MaterialParents", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_Key_KeyProp = { "MaterialParents_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents = { "MaterialParents", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGLTFPipelineSettings, MaterialParents), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParents_MetaData), NewProp_MaterialParents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGLTFPipelineSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGLTFPipelineSettings_Statics::NewProp_MaterialParents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFPipelineSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGLTFPipelineSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFPipelineSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFPipelineSettings_Statics::ClassParams = {
	&UGLTFPipelineSettings::StaticClass,
	"Interchange",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGLTFPipelineSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFPipelineSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFPipelineSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGLTFPipelineSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGLTFPipelineSettings()
{
	if (!Z_Registration_Info_UClass_UGLTFPipelineSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFPipelineSettings.OuterSingleton, Z_Construct_UClass_UGLTFPipelineSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGLTFPipelineSettings.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UGLTFPipelineSettings>()
{
	return UGLTFPipelineSettings::StaticClass();
}
UGLTFPipelineSettings::UGLTFPipelineSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFPipelineSettings);
UGLTFPipelineSettings::~UGLTFPipelineSettings() {}
// End Class UGLTFPipelineSettings

// Begin Class UInterchangeGLTFPipeline
void UInterchangeGLTFPipeline::StaticRegisterNativesUInterchangeGLTFPipeline()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGLTFPipeline);
UClass* Z_Construct_UClass_UInterchangeGLTFPipeline_NoRegister()
{
	return UInterchangeGLTFPipeline::StaticClass();
}
struct Z_Construct_UClass_UInterchangeGLTFPipeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeglTFPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeglTFPipeline.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGLTFPipeline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::ClassParams = {
	&UInterchangeGLTFPipeline::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterchangeGLTFPipeline()
{
	if (!Z_Registration_Info_UClass_UInterchangeGLTFPipeline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGLTFPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGLTFPipeline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterchangeGLTFPipeline.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGLTFPipeline>()
{
	return UInterchangeGLTFPipeline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGLTFPipeline);
UInterchangeGLTFPipeline::~UInterchangeGLTFPipeline() {}
// End Class UInterchangeGLTFPipeline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFPipelineSettings, UGLTFPipelineSettings::StaticClass, TEXT("UGLTFPipelineSettings"), &Z_Registration_Info_UClass_UGLTFPipelineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFPipelineSettings), 1351354035U) },
		{ Z_Construct_UClass_UInterchangeGLTFPipeline, UInterchangeGLTFPipeline::StaticClass, TEXT("UInterchangeGLTFPipeline"), &Z_Registration_Info_UClass_UInterchangeGLTFPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGLTFPipeline), 1952198621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_2870256022(TEXT("/Script/InterchangePipelines"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeglTFPipeline_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
