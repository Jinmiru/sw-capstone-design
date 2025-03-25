// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithAreaLightActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAreaLightActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithAreaLightActor();
DATASMITHCONTENT_API UClass* Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape();
DATASMITHCONTENT_API UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References

// Begin Enum EDatasmithAreaLightActorShape
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape;
static UEnum* EDatasmithAreaLightActorShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithAreaLightActorShape"));
	}
	return Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithAreaLightActorShape>()
{
	return EDatasmithAreaLightActorShape_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Keep in sync with EDatasmithLightShape from DatasmithDefinitions\n" },
		{ "Cylinder.Name", "EDatasmithAreaLightActorShape::Cylinder" },
		{ "Disc.Name", "EDatasmithAreaLightActorShape::Disc" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "None.Name", "EDatasmithAreaLightActorShape::None" },
		{ "Rectangle.Name", "EDatasmithAreaLightActorShape::Rectangle" },
		{ "Sphere.Name", "EDatasmithAreaLightActorShape::Sphere" },
		{ "ToolTip", "Keep in sync with EDatasmithLightShape from DatasmithDefinitions" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithAreaLightActorShape::Rectangle", (int64)EDatasmithAreaLightActorShape::Rectangle },
		{ "EDatasmithAreaLightActorShape::Disc", (int64)EDatasmithAreaLightActorShape::Disc },
		{ "EDatasmithAreaLightActorShape::Sphere", (int64)EDatasmithAreaLightActorShape::Sphere },
		{ "EDatasmithAreaLightActorShape::Cylinder", (int64)EDatasmithAreaLightActorShape::Cylinder },
		{ "EDatasmithAreaLightActorShape::None", (int64)EDatasmithAreaLightActorShape::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithAreaLightActorShape",
	"EDatasmithAreaLightActorShape",
	Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape()
{
	if (!Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape.InnerSingleton;
}
// End Enum EDatasmithAreaLightActorShape

// Begin Enum EDatasmithAreaLightActorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDatasmithAreaLightActorType;
static UEnum* EDatasmithAreaLightActorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, (UObject*)Z_Construct_UPackage__Script_DatasmithContent(), TEXT("EDatasmithAreaLightActorType"));
	}
	return Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.OuterSingleton;
}
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithAreaLightActorType>()
{
	return EDatasmithAreaLightActorType_StaticEnum();
}
struct Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IES_DEPRECATED.Name", "EDatasmithAreaLightActorType::IES_DEPRECATED" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "Point.Name", "EDatasmithAreaLightActorType::Point" },
		{ "Rect.Comment", "// Added for consistency with type EDatasmithAreaLightType. \n// Removing this will result in 'EDatasmithAreaLightActorType MAX' enum value in the editor.\n" },
		{ "Rect.Name", "EDatasmithAreaLightActorType::Rect" },
		{ "Rect.ToolTip", "Added for consistency with type EDatasmithAreaLightType.\nRemoving this will result in 'EDatasmithAreaLightActorType MAX' enum value in the editor." },
		{ "Spot.Name", "EDatasmithAreaLightActorType::Spot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDatasmithAreaLightActorType::Point", (int64)EDatasmithAreaLightActorType::Point },
		{ "EDatasmithAreaLightActorType::Spot", (int64)EDatasmithAreaLightActorType::Spot },
		{ "EDatasmithAreaLightActorType::IES_DEPRECATED", (int64)EDatasmithAreaLightActorType::IES_DEPRECATED },
		{ "EDatasmithAreaLightActorType::Rect", (int64)EDatasmithAreaLightActorType::Rect },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DatasmithContent,
	nullptr,
	"EDatasmithAreaLightActorType",
	"EDatasmithAreaLightActorType",
	Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType()
{
	if (!Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.InnerSingleton, Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDatasmithAreaLightActorType.InnerSingleton;
}
// End Enum EDatasmithAreaLightActorType

// Begin Class ADatasmithAreaLightActor
void ADatasmithAreaLightActor::StaticRegisterNativesADatasmithAreaLightActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADatasmithAreaLightActor);
UClass* Z_Construct_UClass_ADatasmithAreaLightActor_NoRegister()
{
	return ADatasmithAreaLightActor::StaticClass();
}
struct Z_Construct_UClass_ADatasmithAreaLightActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DatasmithAreaLightActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[] = {
		{ "Category", "Mobility" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightType_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightShape_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
		{ "Category", "Light" },
		{ "EditCondition", "LightShape != EDatasmithAreaLightActorShape::None" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntensityUnits_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Use IES Intensity" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "IES Intensity Scale" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "SliderExponent", "5.0" },
		{ "UIMax", "16384.0" },
		{ "UIMin", "8.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotlightInnerAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "SliderExponent", "1.0" },
		{ "UIMax", "80.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotlightOuterAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "ModuleRelativePath", "Public/DatasmithAreaLightActor.h" },
		{ "SliderExponent", "1.0" },
		{ "UIMax", "80.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntensityUnits_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IntensityUnits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IESTexture;
	static void NewProp_bUseIESBrightness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpotlightInnerAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpotlightOuterAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatasmithAreaLightActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mobility_MetaData), NewProp_Mobility_MetaData) }; // 2012069661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType = { "LightType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, LightType), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightType_MetaData), NewProp_LightType_MetaData) }; // 722950225
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape = { "LightShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, LightShape), Z_Construct_UEnum_DatasmithContent_EDatasmithAreaLightActorShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightShape_MetaData), NewProp_LightShape_MetaData) }; // 4266196978
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Dimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimensions_MetaData), NewProp_Dimensions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits = { "IntensityUnits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, IntensityUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntensityUnits_MetaData), NewProp_IntensityUnits_MetaData) }; // 3885668745
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture = { "IESTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IESTexture_MetaData), NewProp_IESTexture_MetaData) };
void Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
{
	((ADatasmithAreaLightActor*)Obj)->bUseIESBrightness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness = { "bUseIESBrightness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADatasmithAreaLightActor), &Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseIESBrightness_MetaData), NewProp_bUseIESBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale = { "IESBrightnessScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, IESBrightnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IESBrightnessScale_MetaData), NewProp_IESBrightnessScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, SourceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRadius_MetaData), NewProp_SourceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, SourceLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceLength_MetaData), NewProp_SourceLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, AttenuationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttenuationRadius_MetaData), NewProp_AttenuationRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle = { "SpotlightInnerAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, SpotlightInnerAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotlightInnerAngle_MetaData), NewProp_SpotlightInnerAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle = { "SpotlightOuterAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADatasmithAreaLightActor, SpotlightOuterAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotlightOuterAngle_MetaData), NewProp_SpotlightOuterAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Mobility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_LightShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Dimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IntensityUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_bUseIESBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_IESBrightnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SourceLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_AttenuationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightInnerAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithAreaLightActor_Statics::NewProp_SpotlightOuterAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADatasmithAreaLightActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADatasmithAreaLightActor_Statics::ClassParams = {
	&ADatasmithAreaLightActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithAreaLightActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADatasmithAreaLightActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADatasmithAreaLightActor()
{
	if (!Z_Registration_Info_UClass_ADatasmithAreaLightActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADatasmithAreaLightActor.OuterSingleton, Z_Construct_UClass_ADatasmithAreaLightActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADatasmithAreaLightActor.OuterSingleton;
}
template<> DATASMITHCONTENT_API UClass* StaticClass<ADatasmithAreaLightActor>()
{
	return ADatasmithAreaLightActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADatasmithAreaLightActor);
ADatasmithAreaLightActor::~ADatasmithAreaLightActor() {}
// End Class ADatasmithAreaLightActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDatasmithAreaLightActorShape_StaticEnum, TEXT("EDatasmithAreaLightActorShape"), &Z_Registration_Info_UEnum_EDatasmithAreaLightActorShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4266196978U) },
		{ EDatasmithAreaLightActorType_StaticEnum, TEXT("EDatasmithAreaLightActorType"), &Z_Registration_Info_UEnum_EDatasmithAreaLightActorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 722950225U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADatasmithAreaLightActor, ADatasmithAreaLightActor::StaticClass, TEXT("ADatasmithAreaLightActor"), &Z_Registration_Info_UClass_ADatasmithAreaLightActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADatasmithAreaLightActor), 196014063U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_982006865(TEXT("/Script/DatasmithContent"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
