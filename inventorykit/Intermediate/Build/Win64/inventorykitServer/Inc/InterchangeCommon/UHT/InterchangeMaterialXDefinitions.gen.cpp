// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Public/MaterialX/InterchangeMaterialXDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMaterialXDefinitions() {}

// Begin Cross Module References
INTERCHANGECOMMON_API UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF();
INTERCHANGECOMMON_API UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF();
INTERCHANGECOMMON_API UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders();
INTERCHANGECOMMON_API UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF();
UPackage* Z_Construct_UPackage__Script_InterchangeCommon();
// End Cross Module References

// Begin Enum EInterchangeMaterialXShaders
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMaterialXShaders;
static UEnum* EInterchangeMaterialXShaders_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders, (UObject*)Z_Construct_UPackage__Script_InterchangeCommon(), TEXT("EInterchangeMaterialXShaders"));
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.OuterSingleton;
}
template<> INTERCHANGECOMMON_API UEnum* StaticEnum<EInterchangeMaterialXShaders>()
{
	return EInterchangeMaterialXShaders_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MaxShaderCount.hidden", "" },
		{ "MaxShaderCount.Name", "EInterchangeMaterialXShaders::MaxShaderCount" },
		{ "ModuleRelativePath", "Public/MaterialX/InterchangeMaterialXDefinitions.h" },
		{ "OpenPBRSurface.Comment", "/** Default settings for Open PBR Surface shader. */" },
		{ "OpenPBRSurface.Name", "EInterchangeMaterialXShaders::OpenPBRSurface" },
		{ "OpenPBRSurface.ToolTip", "Default settings for Open PBR Surface shader." },
		{ "OpenPBRSurfaceTransmission.Comment", "/** Open PBR Surface shader\x09used for translucency. */" },
		{ "OpenPBRSurfaceTransmission.Name", "EInterchangeMaterialXShaders::OpenPBRSurfaceTransmission" },
		{ "OpenPBRSurfaceTransmission.ToolTip", "Open PBR Surface shader        used for translucency." },
		{ "StandardSurface.Comment", "/** Default settings for Autodesk's Standard Surface shader. */" },
		{ "StandardSurface.Name", "EInterchangeMaterialXShaders::StandardSurface" },
		{ "StandardSurface.ToolTip", "Default settings for Autodesk's Standard Surface shader." },
		{ "StandardSurfaceTransmission.Comment", "/** Standard Surface shader used for translucency. */" },
		{ "StandardSurfaceTransmission.Name", "EInterchangeMaterialXShaders::StandardSurfaceTransmission" },
		{ "StandardSurfaceTransmission.ToolTip", "Standard Surface shader used for translucency." },
		{ "Surface.Comment", "/** A surface shader constructed from scattering and emission distribution functions. */" },
		{ "Surface.Name", "EInterchangeMaterialXShaders::Surface" },
		{ "Surface.ToolTip", "A surface shader constructed from scattering and emission distribution functions." },
		{ "SurfaceUnlit.Comment", "/** Shader used for unlit surfaces. */" },
		{ "SurfaceUnlit.Name", "EInterchangeMaterialXShaders::SurfaceUnlit" },
		{ "SurfaceUnlit.ToolTip", "Shader used for unlit surfaces." },
		{ "UsdPreviewSurface.Comment", "/** Default settings for USD's Surface shader. */" },
		{ "UsdPreviewSurface.Name", "EInterchangeMaterialXShaders::UsdPreviewSurface" },
		{ "UsdPreviewSurface.ToolTip", "Default settings for USD's Surface shader." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeMaterialXShaders::OpenPBRSurface", (int64)EInterchangeMaterialXShaders::OpenPBRSurface },
		{ "EInterchangeMaterialXShaders::OpenPBRSurfaceTransmission", (int64)EInterchangeMaterialXShaders::OpenPBRSurfaceTransmission },
		{ "EInterchangeMaterialXShaders::StandardSurface", (int64)EInterchangeMaterialXShaders::StandardSurface },
		{ "EInterchangeMaterialXShaders::StandardSurfaceTransmission", (int64)EInterchangeMaterialXShaders::StandardSurfaceTransmission },
		{ "EInterchangeMaterialXShaders::SurfaceUnlit", (int64)EInterchangeMaterialXShaders::SurfaceUnlit },
		{ "EInterchangeMaterialXShaders::UsdPreviewSurface", (int64)EInterchangeMaterialXShaders::UsdPreviewSurface },
		{ "EInterchangeMaterialXShaders::Surface", (int64)EInterchangeMaterialXShaders::Surface },
		{ "EInterchangeMaterialXShaders::MaxShaderCount", (int64)EInterchangeMaterialXShaders::MaxShaderCount },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCommon,
	nullptr,
	"EInterchangeMaterialXShaders",
	"EInterchangeMaterialXShaders",
	Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.InnerSingleton, Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXShaders_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialXShaders.InnerSingleton;
}
// End Enum EInterchangeMaterialXShaders

// Begin Enum EInterchangeMaterialXBSDF
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMaterialXBSDF;
static UEnum* EInterchangeMaterialXBSDF_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialXBSDF.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeMaterialXBSDF.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF, (UObject*)Z_Construct_UPackage__Script_InterchangeCommon(), TEXT("EInterchangeMaterialXBSDF"));
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialXBSDF.OuterSingleton;
}
template<> INTERCHANGECOMMON_API UEnum* StaticEnum<EInterchangeMaterialXBSDF>()
{
	return EInterchangeMaterialXBSDF_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BurleyDiffuse.Comment", "/** A BSDF node for Burley diffuse reflections. */" },
		{ "BurleyDiffuse.Name", "EInterchangeMaterialXBSDF::BurleyDiffuse" },
		{ "BurleyDiffuse.ToolTip", "A BSDF node for Burley diffuse reflections." },
		{ "Comment", "/** Data type representing a Bidirectional Scattering Distribution Function. */" },
		{ "Conductor.Comment", "/** A reflection BSDF node based on a microfacet model and a Fresnel curve for conductors/metals. */" },
		{ "Conductor.Name", "EInterchangeMaterialXBSDF::Conductor" },
		{ "Conductor.ToolTip", "A reflection BSDF node based on a microfacet model and a Fresnel curve for conductors/metals." },
		{ "Dielectric.Comment", "/** A reflection/transmission BSDF node based on a microfacet model and a Fresnel curve for dielectrics. */" },
		{ "Dielectric.Name", "EInterchangeMaterialXBSDF::Dielectric" },
		{ "Dielectric.ToolTip", "A reflection/transmission BSDF node based on a microfacet model and a Fresnel curve for dielectrics." },
		{ "GeneralizedSchlick.Comment", "/** A reflection/transmission BSDF node based on a microfacet model and a generalized Schlick Fresnel curve. */" },
		{ "GeneralizedSchlick.Name", "EInterchangeMaterialXBSDF::GeneralizedSchlick" },
		{ "GeneralizedSchlick.ToolTip", "A reflection/transmission BSDF node based on a microfacet model and a generalized Schlick Fresnel curve." },
		{ "MaxBSDFCount.hidden", "" },
		{ "MaxBSDFCount.Name", "EInterchangeMaterialXBSDF::MaxBSDFCount" },
		{ "ModuleRelativePath", "Public/MaterialX/InterchangeMaterialXDefinitions.h" },
		{ "OrenNayarDiffuse.Comment", "/** A BSDF node for diffuse reflections. */" },
		{ "OrenNayarDiffuse.Name", "EInterchangeMaterialXBSDF::OrenNayarDiffuse" },
		{ "OrenNayarDiffuse.ToolTip", "A BSDF node for diffuse reflections." },
		{ "Sheen.Comment", "/** A microfacet BSDF for the back-scattering properties of cloth-like materials. */" },
		{ "Sheen.Name", "EInterchangeMaterialXBSDF::Sheen" },
		{ "Sheen.ToolTip", "A microfacet BSDF for the back-scattering properties of cloth-like materials." },
		{ "Subsurface.Comment", "/** A subsurface scattering BSDF for true subsurface scattering. */" },
		{ "Subsurface.Name", "EInterchangeMaterialXBSDF::Subsurface" },
		{ "Subsurface.ToolTip", "A subsurface scattering BSDF for true subsurface scattering." },
		{ "ThinFilm.Comment", "/** Adds an iridescent thin film layer over a microfacet base BSDF. */" },
		{ "ThinFilm.Name", "EInterchangeMaterialXBSDF::ThinFilm" },
		{ "ThinFilm.ToolTip", "Adds an iridescent thin film layer over a microfacet base BSDF." },
		{ "ToolTip", "Data type representing a Bidirectional Scattering Distribution Function." },
		{ "Translucent.Comment", "/** A BSDF node for pure diffuse transmission. */" },
		{ "Translucent.Name", "EInterchangeMaterialXBSDF::Translucent" },
		{ "Translucent.ToolTip", "A BSDF node for pure diffuse transmission." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeMaterialXBSDF::OrenNayarDiffuse", (int64)EInterchangeMaterialXBSDF::OrenNayarDiffuse },
		{ "EInterchangeMaterialXBSDF::BurleyDiffuse", (int64)EInterchangeMaterialXBSDF::BurleyDiffuse },
		{ "EInterchangeMaterialXBSDF::Translucent", (int64)EInterchangeMaterialXBSDF::Translucent },
		{ "EInterchangeMaterialXBSDF::Dielectric", (int64)EInterchangeMaterialXBSDF::Dielectric },
		{ "EInterchangeMaterialXBSDF::Conductor", (int64)EInterchangeMaterialXBSDF::Conductor },
		{ "EInterchangeMaterialXBSDF::GeneralizedSchlick", (int64)EInterchangeMaterialXBSDF::GeneralizedSchlick },
		{ "EInterchangeMaterialXBSDF::Subsurface", (int64)EInterchangeMaterialXBSDF::Subsurface },
		{ "EInterchangeMaterialXBSDF::Sheen", (int64)EInterchangeMaterialXBSDF::Sheen },
		{ "EInterchangeMaterialXBSDF::ThinFilm", (int64)EInterchangeMaterialXBSDF::ThinFilm },
		{ "EInterchangeMaterialXBSDF::MaxBSDFCount", (int64)EInterchangeMaterialXBSDF::MaxBSDFCount },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCommon,
	nullptr,
	"EInterchangeMaterialXBSDF",
	"EInterchangeMaterialXBSDF",
	Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialXBSDF.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMaterialXBSDF.InnerSingleton, Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXBSDF_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialXBSDF.InnerSingleton;
}
// End Enum EInterchangeMaterialXBSDF

// Begin Enum EInterchangeMaterialXEDF
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMaterialXEDF;
static UEnum* EInterchangeMaterialXEDF_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialXEDF.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeMaterialXEDF.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF, (UObject*)Z_Construct_UPackage__Script_InterchangeCommon(), TEXT("EInterchangeMaterialXEDF"));
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialXEDF.OuterSingleton;
}
template<> INTERCHANGECOMMON_API UEnum* StaticEnum<EInterchangeMaterialXEDF>()
{
	return EInterchangeMaterialXEDF_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data type representing an Emission Distribution Function. */" },
		{ "Conical.Comment", "/** Constructs an EDF emitting light inside a cone around the normal direction. */" },
		{ "Conical.Name", "EInterchangeMaterialXEDF::Conical" },
		{ "Conical.ToolTip", "Constructs an EDF emitting light inside a cone around the normal direction." },
		{ "MaxEDFCount.hidden", "" },
		{ "MaxEDFCount.Name", "EInterchangeMaterialXEDF::MaxEDFCount" },
		{ "Measured.Comment", "/** Constructs an EDF emitting light according to a measured IES light profile. */" },
		{ "Measured.Name", "EInterchangeMaterialXEDF::Measured" },
		{ "Measured.ToolTip", "Constructs an EDF emitting light according to a measured IES light profile." },
		{ "ModuleRelativePath", "Public/MaterialX/InterchangeMaterialXDefinitions.h" },
		{ "ToolTip", "Data type representing an Emission Distribution Function." },
		{ "Uniform.Comment", "/** An EDF node for uniform emission. */" },
		{ "Uniform.Name", "EInterchangeMaterialXEDF::Uniform" },
		{ "Uniform.ToolTip", "An EDF node for uniform emission." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeMaterialXEDF::Uniform", (int64)EInterchangeMaterialXEDF::Uniform },
		{ "EInterchangeMaterialXEDF::Conical", (int64)EInterchangeMaterialXEDF::Conical },
		{ "EInterchangeMaterialXEDF::Measured", (int64)EInterchangeMaterialXEDF::Measured },
		{ "EInterchangeMaterialXEDF::MaxEDFCount", (int64)EInterchangeMaterialXEDF::MaxEDFCount },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCommon,
	nullptr,
	"EInterchangeMaterialXEDF",
	"EInterchangeMaterialXEDF",
	Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialXEDF.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMaterialXEDF.InnerSingleton, Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXEDF_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialXEDF.InnerSingleton;
}
// End Enum EInterchangeMaterialXEDF

// Begin Enum EInterchangeMaterialXVDF
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeMaterialXVDF;
static UEnum* EInterchangeMaterialXVDF_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialXVDF.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeMaterialXVDF.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF, (UObject*)Z_Construct_UPackage__Script_InterchangeCommon(), TEXT("EInterchangeMaterialXVDF"));
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialXVDF.OuterSingleton;
}
template<> INTERCHANGECOMMON_API UEnum* StaticEnum<EInterchangeMaterialXVDF>()
{
	return EInterchangeMaterialXVDF_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absorption.Comment", "/** Constructs a VDF for pure light absorption. */" },
		{ "Absorption.Name", "EInterchangeMaterialXVDF::Absorption" },
		{ "Absorption.ToolTip", "Constructs a VDF for pure light absorption." },
		{ "Anisotropic.Comment", "/** Constructs a VDF scattering light for a participating medium, based on the Henyey-Greenstein phase function. */" },
		{ "Anisotropic.Name", "EInterchangeMaterialXVDF::Anisotropic" },
		{ "Anisotropic.ToolTip", "Constructs a VDF scattering light for a participating medium, based on the Henyey-Greenstein phase function." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data type representing a Volume Distribution Function. */" },
		{ "MaxVDFCount.hidden", "" },
		{ "MaxVDFCount.Name", "EInterchangeMaterialXVDF::MaxVDFCount" },
		{ "ModuleRelativePath", "Public/MaterialX/InterchangeMaterialXDefinitions.h" },
		{ "ToolTip", "Data type representing a Volume Distribution Function." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeMaterialXVDF::Absorption", (int64)EInterchangeMaterialXVDF::Absorption },
		{ "EInterchangeMaterialXVDF::Anisotropic", (int64)EInterchangeMaterialXVDF::Anisotropic },
		{ "EInterchangeMaterialXVDF::MaxVDFCount", (int64)EInterchangeMaterialXVDF::MaxVDFCount },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCommon,
	nullptr,
	"EInterchangeMaterialXVDF",
	"EInterchangeMaterialXVDF",
	Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF()
{
	if (!Z_Registration_Info_UEnum_EInterchangeMaterialXVDF.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeMaterialXVDF.InnerSingleton, Z_Construct_UEnum_InterchangeCommon_EInterchangeMaterialXVDF_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeMaterialXVDF.InnerSingleton;
}
// End Enum EInterchangeMaterialXVDF

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Common_Public_MaterialX_InterchangeMaterialXDefinitions_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeMaterialXShaders_StaticEnum, TEXT("EInterchangeMaterialXShaders"), &Z_Registration_Info_UEnum_EInterchangeMaterialXShaders, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3792897675U) },
		{ EInterchangeMaterialXBSDF_StaticEnum, TEXT("EInterchangeMaterialXBSDF"), &Z_Registration_Info_UEnum_EInterchangeMaterialXBSDF, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 170029114U) },
		{ EInterchangeMaterialXEDF_StaticEnum, TEXT("EInterchangeMaterialXEDF"), &Z_Registration_Info_UEnum_EInterchangeMaterialXEDF, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3574067269U) },
		{ EInterchangeMaterialXVDF_StaticEnum, TEXT("EInterchangeMaterialXVDF"), &Z_Registration_Info_UEnum_EInterchangeMaterialXVDF, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3381568588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Common_Public_MaterialX_InterchangeMaterialXDefinitions_h_623291230(TEXT("/Script/InterchangeCommon"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Common_Public_MaterialX_InterchangeMaterialXDefinitions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Common_Public_MaterialX_InterchangeMaterialXDefinitions_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
