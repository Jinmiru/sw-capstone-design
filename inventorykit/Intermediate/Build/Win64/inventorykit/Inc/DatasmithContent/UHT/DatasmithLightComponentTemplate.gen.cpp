// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithLightComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithLightComponentTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithLightComponentTemplate
void UDatasmithLightComponentTemplate::StaticRegisterNativesUDatasmithLightComponentTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithLightComponentTemplate);
UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate_NoRegister()
{
	return UDatasmithLightComponentTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTemperature_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightFunctionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static void NewProp_CastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
	static void NewProp_bUseTemperature_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTemperature;
	static void NewProp_bUseIESBrightness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightFunctionMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IESTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithLightComponentTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((UDatasmithLightComponentTemplate*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_SetBit(void* Obj)
{
	((UDatasmithLightComponentTemplate*)Obj)->CastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadows_MetaData), NewProp_CastShadows_MetaData) };
void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_SetBit(void* Obj)
{
	((UDatasmithLightComponentTemplate*)Obj)->bUseTemperature = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature = { "bUseTemperature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTemperature_MetaData), NewProp_bUseTemperature_MetaData) };
void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
{
	((UDatasmithLightComponentTemplate*)Obj)->bUseIESBrightness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness = { "bUseIESBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseIESBrightness_MetaData), NewProp_bUseIESBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale = { "IESBrightnessScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, IESBrightnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IESBrightnessScale_MetaData), NewProp_IESBrightnessScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightColor_MetaData), NewProp_LightColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial = { "LightFunctionMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, LightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightFunctionMaterial_MetaData), NewProp_LightFunctionMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture = { "IESTexture", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithLightComponentTemplate, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IESTexture_MetaData), NewProp_IESTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::ClassParams = {
	&UDatasmithLightComponentTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithLightComponentTemplate>()
{
	return UDatasmithLightComponentTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithLightComponentTemplate);
UDatasmithLightComponentTemplate::~UDatasmithLightComponentTemplate() {}
// End Class UDatasmithLightComponentTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithLightComponentTemplate, UDatasmithLightComponentTemplate::StaticClass, TEXT("UDatasmithLightComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithLightComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithLightComponentTemplate), 1576388326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h_2677895512(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
