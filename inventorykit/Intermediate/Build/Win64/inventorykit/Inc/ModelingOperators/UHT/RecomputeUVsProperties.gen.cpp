// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingOperators/Public/Properties/RecomputeUVsProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecomputeUVsProperties() {}

// Begin Cross Module References
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsToolProperties();
MODELINGOPERATORS_API UClass* Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode();
UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References

// Begin Enum ERecomputeUVsPropertiesUnwrapType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERecomputeUVsPropertiesUnwrapType;
static UEnum* ERecomputeUVsPropertiesUnwrapType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERecomputeUVsPropertiesUnwrapType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERecomputeUVsPropertiesUnwrapType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ERecomputeUVsPropertiesUnwrapType"));
	}
	return Z_Registration_Info_UEnum_ERecomputeUVsPropertiesUnwrapType.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ERecomputeUVsPropertiesUnwrapType>()
{
	return ERecomputeUVsPropertiesUnwrapType_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Conformal.Comment", "/** Conformal UV flattening is increasingly expensive on large islands but reduces distortion */" },
		{ "Conformal.Name", "ERecomputeUVsPropertiesUnwrapType::Conformal" },
		{ "Conformal.ToolTip", "Conformal UV flattening is increasingly expensive on large islands but reduces distortion" },
		{ "ExpMap.Comment", "/** ExpMap UV flattening is very fast but has limited abilities to reduce stretching and distortion */" },
		{ "ExpMap.DisplayName", "ExpMap" },
		{ "ExpMap.Name", "ERecomputeUVsPropertiesUnwrapType::ExpMap" },
		{ "ExpMap.ToolTip", "ExpMap UV flattening is very fast but has limited abilities to reduce stretching and distortion" },
		{ "IslandMerging.Comment", "/** UV islands will be merged into larger islands if it does not increase stretching and distortion beyond defined limits */" },
		{ "IslandMerging.Name", "ERecomputeUVsPropertiesUnwrapType::IslandMerging" },
		{ "IslandMerging.ToolTip", "UV islands will be merged into larger islands if it does not increase stretching and distortion beyond defined limits" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "SpectralConformal.Comment", "/** Compared to the default Conformal method does not pin two vertices along the boundary which reduces the distortion but is more expensive to compute. */" },
		{ "SpectralConformal.Name", "ERecomputeUVsPropertiesUnwrapType::SpectralConformal" },
		{ "SpectralConformal.ToolTip", "Compared to the default Conformal method does not pin two vertices along the boundary which reduces the distortion but is more expensive to compute." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERecomputeUVsPropertiesUnwrapType::ExpMap", (int64)ERecomputeUVsPropertiesUnwrapType::ExpMap },
		{ "ERecomputeUVsPropertiesUnwrapType::Conformal", (int64)ERecomputeUVsPropertiesUnwrapType::Conformal },
		{ "ERecomputeUVsPropertiesUnwrapType::SpectralConformal", (int64)ERecomputeUVsPropertiesUnwrapType::SpectralConformal },
		{ "ERecomputeUVsPropertiesUnwrapType::IslandMerging", (int64)ERecomputeUVsPropertiesUnwrapType::IslandMerging },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"ERecomputeUVsPropertiesUnwrapType",
	"ERecomputeUVsPropertiesUnwrapType",
	Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType()
{
	if (!Z_Registration_Info_UEnum_ERecomputeUVsPropertiesUnwrapType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERecomputeUVsPropertiesUnwrapType.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERecomputeUVsPropertiesUnwrapType.InnerSingleton;
}
// End Enum ERecomputeUVsPropertiesUnwrapType

// Begin Enum ERecomputeUVsPropertiesIslandMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERecomputeUVsPropertiesIslandMode;
static UEnum* ERecomputeUVsPropertiesIslandMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERecomputeUVsPropertiesIslandMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERecomputeUVsPropertiesIslandMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ERecomputeUVsPropertiesIslandMode"));
	}
	return Z_Registration_Info_UEnum_ERecomputeUVsPropertiesIslandMode.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ERecomputeUVsPropertiesIslandMode>()
{
	return ERecomputeUVsPropertiesIslandMode_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ExistingUVs.Comment", "/** Use existing UV Layer to define UV islands, i.e. re-solve UV flattening based on existing UVs */" },
		{ "ExistingUVs.Name", "ERecomputeUVsPropertiesIslandMode::ExistingUVs" },
		{ "ExistingUVs.ToolTip", "Use existing UV Layer to define UV islands, i.e. re-solve UV flattening based on existing UVs" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "PolyGroups.Comment", "/** Use PolyGroups defined by Active PolyGroup property to define initial UV islands. */" },
		{ "PolyGroups.DisplayName", "PolyGroups" },
		{ "PolyGroups.Name", "ERecomputeUVsPropertiesIslandMode::PolyGroups" },
		{ "PolyGroups.ToolTip", "Use PolyGroups defined by Active PolyGroup property to define initial UV islands." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERecomputeUVsPropertiesIslandMode::PolyGroups", (int64)ERecomputeUVsPropertiesIslandMode::PolyGroups },
		{ "ERecomputeUVsPropertiesIslandMode::ExistingUVs", (int64)ERecomputeUVsPropertiesIslandMode::ExistingUVs },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"ERecomputeUVsPropertiesIslandMode",
	"ERecomputeUVsPropertiesIslandMode",
	Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode()
{
	if (!Z_Registration_Info_UEnum_ERecomputeUVsPropertiesIslandMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERecomputeUVsPropertiesIslandMode.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERecomputeUVsPropertiesIslandMode.InnerSingleton;
}
// End Enum ERecomputeUVsPropertiesIslandMode

// Begin Enum ERecomputeUVsToolOrientationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERecomputeUVsToolOrientationMode;
static UEnum* ERecomputeUVsToolOrientationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERecomputeUVsToolOrientationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERecomputeUVsToolOrientationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ERecomputeUVsToolOrientationMode"));
	}
	return Z_Registration_Info_UEnum_ERecomputeUVsToolOrientationMode.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ERecomputeUVsToolOrientationMode>()
{
	return ERecomputeUVsToolOrientationMode_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MinBounds.Comment", "/** Automatically rotate each UV island to reduce its bounding box size */" },
		{ "MinBounds.Name", "ERecomputeUVsToolOrientationMode::MinBounds" },
		{ "MinBounds.ToolTip", "Automatically rotate each UV island to reduce its bounding box size" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "None.Comment", "/** Do not rotate UV islands */" },
		{ "None.Name", "ERecomputeUVsToolOrientationMode::None" },
		{ "None.ToolTip", "Do not rotate UV islands" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERecomputeUVsToolOrientationMode::None", (int64)ERecomputeUVsToolOrientationMode::None },
		{ "ERecomputeUVsToolOrientationMode::MinBounds", (int64)ERecomputeUVsToolOrientationMode::MinBounds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"ERecomputeUVsToolOrientationMode",
	"ERecomputeUVsToolOrientationMode",
	Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode()
{
	if (!Z_Registration_Info_UEnum_ERecomputeUVsToolOrientationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERecomputeUVsToolOrientationMode.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERecomputeUVsToolOrientationMode.InnerSingleton;
}
// End Enum ERecomputeUVsToolOrientationMode

// Begin Enum ERecomputeUVsPropertiesLayoutType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERecomputeUVsPropertiesLayoutType;
static UEnum* ERecomputeUVsPropertiesLayoutType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERecomputeUVsPropertiesLayoutType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERecomputeUVsPropertiesLayoutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ERecomputeUVsPropertiesLayoutType"));
	}
	return Z_Registration_Info_UEnum_ERecomputeUVsPropertiesLayoutType.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ERecomputeUVsPropertiesLayoutType>()
{
	return ERecomputeUVsPropertiesLayoutType_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "None.Comment", "/** Do not apply additional layout options to unwrapped UVs */" },
		{ "None.Name", "ERecomputeUVsPropertiesLayoutType::None" },
		{ "None.ToolTip", "Do not apply additional layout options to unwrapped UVs" },
		{ "NormalizeToBounds.Comment", "/** Uniformly scale UV islands such that they have constant relative area, relative to object bounds */" },
		{ "NormalizeToBounds.Name", "ERecomputeUVsPropertiesLayoutType::NormalizeToBounds" },
		{ "NormalizeToBounds.ToolTip", "Uniformly scale UV islands such that they have constant relative area, relative to object bounds" },
		{ "NormalizeToExistingBounds.Comment", "/** Scale and center all islands to fit within their original bounding boxes. Only applicable if using existing UVs. */" },
		{ "NormalizeToExistingBounds.Name", "ERecomputeUVsPropertiesLayoutType::NormalizeToExistingBounds" },
		{ "NormalizeToExistingBounds.ToolTip", "Scale and center all islands to fit within their original bounding boxes. Only applicable if using existing UVs." },
		{ "NormalizeToWorld.Comment", "/** Uniformly scale UV islands such that they have constant relative area, relative to world space */" },
		{ "NormalizeToWorld.Name", "ERecomputeUVsPropertiesLayoutType::NormalizeToWorld" },
		{ "NormalizeToWorld.ToolTip", "Uniformly scale UV islands such that they have constant relative area, relative to world space" },
		{ "Repack.Comment", "/** Uniformly scale and translate UV islands collectively to pack them into the unit square, i.e. fit between 0 and 1 with no overlap */" },
		{ "Repack.Name", "ERecomputeUVsPropertiesLayoutType::Repack" },
		{ "Repack.ToolTip", "Uniformly scale and translate UV islands collectively to pack them into the unit square, i.e. fit between 0 and 1 with no overlap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERecomputeUVsPropertiesLayoutType::None", (int64)ERecomputeUVsPropertiesLayoutType::None },
		{ "ERecomputeUVsPropertiesLayoutType::Repack", (int64)ERecomputeUVsPropertiesLayoutType::Repack },
		{ "ERecomputeUVsPropertiesLayoutType::NormalizeToExistingBounds", (int64)ERecomputeUVsPropertiesLayoutType::NormalizeToExistingBounds },
		{ "ERecomputeUVsPropertiesLayoutType::NormalizeToBounds", (int64)ERecomputeUVsPropertiesLayoutType::NormalizeToBounds },
		{ "ERecomputeUVsPropertiesLayoutType::NormalizeToWorld", (int64)ERecomputeUVsPropertiesLayoutType::NormalizeToWorld },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"ERecomputeUVsPropertiesLayoutType",
	"ERecomputeUVsPropertiesLayoutType",
	Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType()
{
	if (!Z_Registration_Info_UEnum_ERecomputeUVsPropertiesLayoutType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERecomputeUVsPropertiesLayoutType.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERecomputeUVsPropertiesLayoutType.InnerSingleton;
}
// End Enum ERecomputeUVsPropertiesLayoutType

// Begin Class URecomputeUVsToolProperties
void URecomputeUVsToolProperties::StaticRegisterNativesURecomputeUVsToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URecomputeUVsToolProperties);
UClass* Z_Construct_UClass_URecomputeUVsToolProperties_NoRegister()
{
	return URecomputeUVsToolProperties::StaticClass();
}
struct Z_Construct_UClass_URecomputeUVsToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/RecomputeUVsProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePolygroupSupport_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IslandGeneration_MetaData[] = {
		{ "Category", "UV Unwrap" },
		{ "Comment", "/** Generation method for initial UV islands.*/" },
		{ "EditCondition", "bEnablePolygroupSupport" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Generation method for initial UV islands." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnwrapType_MetaData[] = {
		{ "Category", "UV Unwrap" },
		{ "Comment", "/** Type of UV flattening algorithm to use */" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Type of UV flattening algorithm to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoRotation_MetaData[] = {
		{ "Category", "UV Unwrap" },
		{ "Comment", "/** Type of automatic rotation applied to each UV island */" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Type of automatic rotation applied to each UV island" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveIrregularity_MetaData[] = {
		{ "Category", "UV Unwrap" },
		{ "Comment", "/**  If enabled, reduces distortion for meshes with triangles of vastly different sizes, This is only enabled if the Unwrap Type is set to Spectral Conformal. */" },
		{ "EditCondition", "UnwrapType == ERecomputeUVsPropertiesUnwrapType::SpectralConformal" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "If enabled, reduces distortion for meshes with triangles of vastly different sizes, This is only enabled if the Unwrap Type is set to Spectral Conformal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingSteps_MetaData[] = {
		{ "Category", "UV Unwrap" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of smoothing steps to apply; this slightly increases distortion but produces more stable results. This is only enabled if the Unwrap Type is set to ExpMap or Island Merging. */" },
		{ "EditCondition", "UnwrapType == ERecomputeUVsPropertiesUnwrapType::ExpMap || UnwrapType == ERecomputeUVsPropertiesUnwrapType::IslandMerging" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Number of smoothing steps to apply; this slightly increases distortion but produces more stable results. This is only enabled if the Unwrap Type is set to ExpMap or Island Merging." },
		{ "UIMax", "25" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingAlpha_MetaData[] = {
		{ "Category", "UV Unwrap" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Smoothing parameter; larger values result in faster smoothing in each step. This is only enabled if the Unwrap Type is set to ExpMap or Island Merging. */" },
		{ "EditCondition", "UnwrapType == ERecomputeUVsPropertiesUnwrapType::ExpMap || UnwrapType == ERecomputeUVsPropertiesUnwrapType::IslandMerging" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Smoothing parameter; larger values result in faster smoothing in each step. This is only enabled if the Unwrap Type is set to ExpMap or Island Merging." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergingDistortionThreshold_MetaData[] = {
		{ "Category", "UV Unwrap" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Threshold for stretching and distortion below which island merging is allowed; larger values increase the allowable UV distortion. This is only enabled if the Unwrap Type is set to Island Merging. */" },
		{ "DisplayName", "Distortion Threshold" },
		{ "EditCondition", "UnwrapType == ERecomputeUVsPropertiesUnwrapType::IslandMerging" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Threshold for stretching and distortion below which island merging is allowed; larger values increase the allowable UV distortion. This is only enabled if the Unwrap Type is set to Island Merging." },
		{ "UIMax", "5.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergingAngleThreshold_MetaData[] = {
		{ "Category", "UV Unwrap" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold for the average face normal deviation below  which island merging is allowed. This is only enabled if the Unwrap Type is set to Island Merging. */" },
		{ "DisplayName", "Angle Threshold" },
		{ "EditCondition", "UnwrapType == ERecomputeUVsPropertiesUnwrapType::IslandMerging" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Threshold for the average face normal deviation below  which island merging is allowed. This is only enabled if the Unwrap Type is set to Island Merging." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutType_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Uniformly scale and translate UV islands collectively to pack them into the unit square, i.e. fit between 0 and 1 with no overlap. */" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Uniformly scale and translate UV islands collectively to pack them into the unit square, i.e. fit between 0 and 1 with no overlap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureResolution_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts. This is only enabled when the Layout Type is set to Repack. */" },
		{ "EditCondition", "LayoutType == ERecomputeUVsPropertiesLayoutType::Repack" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts. This is only enabled when the Layout Type is set to Repack." },
		{ "UIMax", "2048" },
		{ "UIMin", "64" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizeScale_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** Scaling factor used for UV island normalization/scaling. This is only enabled when the Layout Type is set to Normalize to Bounds or Normalize to World. */" },
		{ "EditCondition", "LayoutType == ERecomputeUVsPropertiesLayoutType::NormalizeToBounds || LayoutType == ERecomputeUVsPropertiesLayoutType::NormalizeToWorld" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Scaling factor used for UV island normalization/scaling. This is only enabled when the Layout Type is set to Normalize to Bounds or Normalize to World." },
		{ "UIMax", "10" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUDIMLayout_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Enable UDIM aware layout and keep islands within their originating UDIM tiles when laying out.*/" },
		{ "DisplayName", "Preserve UDIMs" },
		{ "EditCondition", "bUDIMCVAREnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
		{ "ToolTip", "Enable UDIM aware layout and keep islands within their originating UDIM tiles when laying out." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUDIMCVAREnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/RecomputeUVsProperties.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnablePolygroupSupport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePolygroupSupport;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IslandGeneration_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IslandGeneration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnwrapType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UnwrapType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoRotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoRotation;
	static void NewProp_bPreserveIrregularity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveIrregularity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingSteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MergingDistortionThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MergingAngleThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayoutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizeScale;
	static void NewProp_bEnableUDIMLayout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUDIMLayout;
	static void NewProp_bUDIMCVAREnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUDIMCVAREnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecomputeUVsToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bEnablePolygroupSupport_SetBit(void* Obj)
{
	((URecomputeUVsToolProperties*)Obj)->bEnablePolygroupSupport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bEnablePolygroupSupport = { "bEnablePolygroupSupport", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URecomputeUVsToolProperties), &Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bEnablePolygroupSupport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePolygroupSupport_MetaData), NewProp_bEnablePolygroupSupport_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_IslandGeneration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_IslandGeneration = { "IslandGeneration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, IslandGeneration), Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesIslandMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IslandGeneration_MetaData), NewProp_IslandGeneration_MetaData) }; // 2547113909
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_UnwrapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_UnwrapType = { "UnwrapType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, UnwrapType), Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesUnwrapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnwrapType_MetaData), NewProp_UnwrapType_MetaData) }; // 3124146218
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_AutoRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_AutoRotation = { "AutoRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, AutoRotation), Z_Construct_UEnum_ModelingOperators_ERecomputeUVsToolOrientationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoRotation_MetaData), NewProp_AutoRotation_MetaData) }; // 2640462161
void Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bPreserveIrregularity_SetBit(void* Obj)
{
	((URecomputeUVsToolProperties*)Obj)->bPreserveIrregularity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bPreserveIrregularity = { "bPreserveIrregularity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URecomputeUVsToolProperties), &Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bPreserveIrregularity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveIrregularity_MetaData), NewProp_bPreserveIrregularity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_SmoothingSteps = { "SmoothingSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, SmoothingSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingSteps_MetaData), NewProp_SmoothingSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_SmoothingAlpha = { "SmoothingAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, SmoothingAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingAlpha_MetaData), NewProp_SmoothingAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_MergingDistortionThreshold = { "MergingDistortionThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, MergingDistortionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergingDistortionThreshold_MetaData), NewProp_MergingDistortionThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_MergingAngleThreshold = { "MergingAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, MergingAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergingAngleThreshold_MetaData), NewProp_MergingAngleThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_LayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_LayoutType = { "LayoutType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, LayoutType), Z_Construct_UEnum_ModelingOperators_ERecomputeUVsPropertiesLayoutType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutType_MetaData), NewProp_LayoutType_MetaData) }; // 3891823876
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_TextureResolution = { "TextureResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, TextureResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureResolution_MetaData), NewProp_TextureResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_NormalizeScale = { "NormalizeScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URecomputeUVsToolProperties, NormalizeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizeScale_MetaData), NewProp_NormalizeScale_MetaData) };
void Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bEnableUDIMLayout_SetBit(void* Obj)
{
	((URecomputeUVsToolProperties*)Obj)->bEnableUDIMLayout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bEnableUDIMLayout = { "bEnableUDIMLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URecomputeUVsToolProperties), &Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bEnableUDIMLayout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableUDIMLayout_MetaData), NewProp_bEnableUDIMLayout_MetaData) };
void Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bUDIMCVAREnabled_SetBit(void* Obj)
{
	((URecomputeUVsToolProperties*)Obj)->bUDIMCVAREnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bUDIMCVAREnabled = { "bUDIMCVAREnabled", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URecomputeUVsToolProperties), &Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bUDIMCVAREnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUDIMCVAREnabled_MetaData), NewProp_bUDIMCVAREnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URecomputeUVsToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bEnablePolygroupSupport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_IslandGeneration_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_IslandGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_UnwrapType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_UnwrapType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_AutoRotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_AutoRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bPreserveIrregularity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_SmoothingSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_SmoothingAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_MergingDistortionThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_MergingAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_LayoutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_LayoutType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_TextureResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_NormalizeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bEnableUDIMLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecomputeUVsToolProperties_Statics::NewProp_bUDIMCVAREnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URecomputeUVsToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URecomputeUVsToolProperties_Statics::ClassParams = {
	&URecomputeUVsToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URecomputeUVsToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URecomputeUVsToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_URecomputeUVsToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URecomputeUVsToolProperties()
{
	if (!Z_Registration_Info_UClass_URecomputeUVsToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URecomputeUVsToolProperties.OuterSingleton, Z_Construct_UClass_URecomputeUVsToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URecomputeUVsToolProperties.OuterSingleton;
}
template<> MODELINGOPERATORS_API UClass* StaticClass<URecomputeUVsToolProperties>()
{
	return URecomputeUVsToolProperties::StaticClass();
}
URecomputeUVsToolProperties::URecomputeUVsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URecomputeUVsToolProperties);
URecomputeUVsToolProperties::~URecomputeUVsToolProperties() {}
// End Class URecomputeUVsToolProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERecomputeUVsPropertiesUnwrapType_StaticEnum, TEXT("ERecomputeUVsPropertiesUnwrapType"), &Z_Registration_Info_UEnum_ERecomputeUVsPropertiesUnwrapType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3124146218U) },
		{ ERecomputeUVsPropertiesIslandMode_StaticEnum, TEXT("ERecomputeUVsPropertiesIslandMode"), &Z_Registration_Info_UEnum_ERecomputeUVsPropertiesIslandMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2547113909U) },
		{ ERecomputeUVsToolOrientationMode_StaticEnum, TEXT("ERecomputeUVsToolOrientationMode"), &Z_Registration_Info_UEnum_ERecomputeUVsToolOrientationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2640462161U) },
		{ ERecomputeUVsPropertiesLayoutType_StaticEnum, TEXT("ERecomputeUVsPropertiesLayoutType"), &Z_Registration_Info_UEnum_ERecomputeUVsPropertiesLayoutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3891823876U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URecomputeUVsToolProperties, URecomputeUVsToolProperties::StaticClass, TEXT("URecomputeUVsToolProperties"), &Z_Registration_Info_UClass_URecomputeUVsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URecomputeUVsToolProperties), 3691398236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_1436851451(TEXT("/Script/ModelingOperators"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_RecomputeUVsProperties_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
