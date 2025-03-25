// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeLayerCoords.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerCoords() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ETerrainCoordMappingType();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Enum ETerrainCoordMappingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETerrainCoordMappingType;
static UEnum* ETerrainCoordMappingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ETerrainCoordMappingType"));
	}
	return Z_Registration_Info_UEnum_ETerrainCoordMappingType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ETerrainCoordMappingType>()
{
	return ETerrainCoordMappingType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "TCMT_Auto.Name", "TCMT_Auto" },
		{ "TCMT_MAX.Name", "TCMT_MAX" },
		{ "TCMT_XY.Name", "TCMT_XY" },
		{ "TCMT_XZ.Name", "TCMT_XZ" },
		{ "TCMT_YZ.Name", "TCMT_YZ" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TCMT_Auto", (int64)TCMT_Auto },
		{ "TCMT_XY", (int64)TCMT_XY },
		{ "TCMT_XZ", (int64)TCMT_XZ },
		{ "TCMT_YZ", (int64)TCMT_YZ },
		{ "TCMT_MAX", (int64)TCMT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ETerrainCoordMappingType",
	"ETerrainCoordMappingType",
	Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ETerrainCoordMappingType()
{
	if (!Z_Registration_Info_UEnum_ETerrainCoordMappingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETerrainCoordMappingType.InnerSingleton, Z_Construct_UEnum_Landscape_ETerrainCoordMappingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETerrainCoordMappingType.InnerSingleton;
}
// End Enum ETerrainCoordMappingType

// Begin Enum ELandscapeCustomizedCoordType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType;
static UEnum* ELandscapeCustomizedCoordType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeCustomizedCoordType"));
	}
	return Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeCustomizedCoordType>()
{
	return ELandscapeCustomizedCoordType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LCCT_CustomUV0.Name", "LCCT_CustomUV0" },
		{ "LCCT_CustomUV1.Name", "LCCT_CustomUV1" },
		{ "LCCT_CustomUV2.Name", "LCCT_CustomUV2" },
		{ "LCCT_MAX.Name", "LCCT_MAX" },
		{ "LCCT_None.Comment", "/** Don't use customized UV, just use original UV. */" },
		{ "LCCT_None.Name", "LCCT_None" },
		{ "LCCT_None.ToolTip", "Don't use customized UV, just use original UV." },
		{ "LCCT_WeightMapUV.Comment", "/** Use original WeightMapUV, which could not be customized. */" },
		{ "LCCT_WeightMapUV.Name", "LCCT_WeightMapUV" },
		{ "LCCT_WeightMapUV.ToolTip", "Use original WeightMapUV, which could not be customized." },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LCCT_None", (int64)LCCT_None },
		{ "LCCT_CustomUV0", (int64)LCCT_CustomUV0 },
		{ "LCCT_CustomUV1", (int64)LCCT_CustomUV1 },
		{ "LCCT_CustomUV2", (int64)LCCT_CustomUV2 },
		{ "LCCT_WeightMapUV", (int64)LCCT_WeightMapUV },
		{ "LCCT_MAX", (int64)LCCT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeCustomizedCoordType",
	"ELandscapeCustomizedCoordType",
	Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType()
{
	if (!Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType.InnerSingleton;
}
// End Enum ELandscapeCustomizedCoordType

// Begin Class UMaterialExpressionLandscapeLayerCoords
void UMaterialExpressionLandscapeLayerCoords::StaticRegisterNativesUMaterialExpressionLandscapeLayerCoords()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeLayerCoords);
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_NoRegister()
{
	return UMaterialExpressionLandscapeLayerCoords::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingType_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Determines the mapping place to use on the terrain. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Determines the mapping place to use on the terrain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomUVType_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Determines the mapping place to use on the terrain. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Determines the mapping place to use on the terrain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingScale_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Uniform scale to apply to the mapping. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Uniform scale to apply to the mapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingRotation_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Rotation to apply to the mapping. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Rotation to apply to the mapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingPanU_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Offset to apply to the mapping along U. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Offset to apply to the mapping along U." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingPanV_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerCoords" },
		{ "Comment", "/** Offset to apply to the mapping along V. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerCoords.h" },
		{ "ToolTip", "Offset to apply to the mapping along V." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MappingType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomUVType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MappingScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MappingRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MappingPanU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MappingPanV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerCoords>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingType = { "MappingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingType), Z_Construct_UEnum_Landscape_ETerrainCoordMappingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingType_MetaData), NewProp_MappingType_MetaData) }; // 2474161250
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_CustomUVType = { "CustomUVType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, CustomUVType), Z_Construct_UEnum_Landscape_ELandscapeCustomizedCoordType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomUVType_MetaData), NewProp_CustomUVType_MetaData) }; // 3732906095
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingScale = { "MappingScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingScale_MetaData), NewProp_MappingScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingRotation = { "MappingRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingRotation_MetaData), NewProp_MappingRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanU = { "MappingPanU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingPanU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingPanU_MetaData), NewProp_MappingPanU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanV = { "MappingPanV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerCoords, MappingPanV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingPanV_MetaData), NewProp_MappingPanV_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_CustomUVType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::NewProp_MappingPanV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::ClassParams = {
	&UMaterialExpressionLandscapeLayerCoords::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeLayerCoords>()
{
	return UMaterialExpressionLandscapeLayerCoords::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerCoords);
UMaterialExpressionLandscapeLayerCoords::~UMaterialExpressionLandscapeLayerCoords() {}
// End Class UMaterialExpressionLandscapeLayerCoords

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETerrainCoordMappingType_StaticEnum, TEXT("ETerrainCoordMappingType"), &Z_Registration_Info_UEnum_ETerrainCoordMappingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2474161250U) },
		{ ELandscapeCustomizedCoordType_StaticEnum, TEXT("ELandscapeCustomizedCoordType"), &Z_Registration_Info_UEnum_ELandscapeCustomizedCoordType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3732906095U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeLayerCoords, UMaterialExpressionLandscapeLayerCoords::StaticClass, TEXT("UMaterialExpressionLandscapeLayerCoords"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerCoords, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeLayerCoords), 1474163916U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_3453245413(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerCoords_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
