// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAreaLightActorTemplate() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAreaLightActorTemplate();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAreaLightActorTemplate_NoRegister();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType();
ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Class UDatasmithAreaLightActorTemplate
void UDatasmithAreaLightActorTemplate::StaticRegisterNativesUDatasmithAreaLightActorTemplate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithAreaLightActorTemplate);
UClass* Z_Construct_UClass_UDatasmithAreaLightActorTemplate_NoRegister()
{
	return UDatasmithAreaLightActorTemplate::StaticClass();
}
struct Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightShape_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithAreaLightActorTemplate.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_IESTexture;
	static void NewProp_bUseIESBrightness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithAreaLightActorTemplate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_LightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_LightType = { "LightType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, LightType), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightType_MetaData), NewProp_LightType_MetaData) }; // 722950225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_LightShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_LightShape = { "LightShape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, LightShape), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightShape_MetaData), NewProp_LightShape_MetaData) }; // 4266196978
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, Dimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimensions_MetaData), NewProp_Dimensions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntensityUnits_MetaData), NewProp_IntensityUnits_MetaData) }; // 3885668745
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_IESTexture = { "IESTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IESTexture_MetaData), NewProp_IESTexture_MetaData) };
void Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
{
	((UDatasmithAreaLightActorTemplate*)Obj)->bUseIESBrightness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_bUseIESBrightness = { "bUseIESBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDatasmithAreaLightActorTemplate), &Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseIESBrightness_MetaData), NewProp_bUseIESBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_IESBrightnessScale = { "IESBrightnessScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, IESBrightnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IESBrightnessScale_MetaData), NewProp_IESBrightnessScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, SourceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRadius_MetaData), NewProp_SourceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, SourceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLength_MetaData), NewProp_SourceLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDatasmithAreaLightActorTemplate, AttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationRadius_MetaData), NewProp_AttenuationRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_LightType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_LightType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_LightShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_LightShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Dimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_IntensityUnits_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_IntensityUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_IESTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_bUseIESBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_IESBrightnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_SourceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_SourceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::NewProp_AttenuationRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::ClassParams = {
	&UDatasmithAreaLightActorTemplate::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatasmithAreaLightActorTemplate()
{
	if (!Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithAreaLightActorTemplate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithAreaLightActorTemplate>()
{
	return UDatasmithAreaLightActorTemplate::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithAreaLightActorTemplate);
UDatasmithAreaLightActorTemplate::~UDatasmithAreaLightActorTemplate() {}
// End Class UDatasmithAreaLightActorTemplate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithAreaLightActorTemplate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithAreaLightActorTemplate, UDatasmithAreaLightActorTemplate::StaticClass, TEXT("UDatasmithAreaLightActorTemplate"), &Z_Registration_Info_UClass_UDatasmithAreaLightActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithAreaLightActorTemplate), 3996329311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithAreaLightActorTemplate_h_511287887(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithAreaLightActorTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithAreaLightActorTemplate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
