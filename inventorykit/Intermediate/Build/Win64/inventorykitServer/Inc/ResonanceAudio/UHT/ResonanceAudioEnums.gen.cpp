// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResonanceAudio/Public/ResonanceAudioEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResonanceAudioEnums() {}

// Begin Cross Module References
RESONANCEAUDIO_API UEnum* Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel();
RESONANCEAUDIO_API UEnum* Z_Construct_UEnum_ResonanceAudio_ERaMaterialName();
RESONANCEAUDIO_API UEnum* Z_Construct_UEnum_ResonanceAudio_ERaQualityMode();
RESONANCEAUDIO_API UEnum* Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod();
UPackage* Z_Construct_UPackage__Script_ResonanceAudio();
// End Cross Module References

// Begin Enum ERaQualityMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERaQualityMode;
static UEnum* ERaQualityMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERaQualityMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERaQualityMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaQualityMode, (UObject*)Z_Construct_UPackage__Script_ResonanceAudio(), TEXT("ERaQualityMode"));
	}
	return Z_Registration_Info_UEnum_ERaQualityMode.OuterSingleton;
}
template<> RESONANCEAUDIO_API UEnum* StaticEnum<ERaQualityMode>()
{
	return ERaQualityMode_StaticEnum();
}
struct Z_Construct_UEnum_ResonanceAudio_ERaQualityMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BINAURAL_HIGH.Comment", "// Binaural High (Third Order Ambisonics = Default).\n" },
		{ "BINAURAL_HIGH.DisplayName", "Binaural High Quality" },
		{ "BINAURAL_HIGH.Name", "ERaQualityMode::BINAURAL_HIGH" },
		{ "BINAURAL_HIGH.ToolTip", "Binaural High (Third Order Ambisonics = Default)." },
		{ "BINAURAL_LOW.Comment", "// Binaural Low (First Order Ambisonics).\n" },
		{ "BINAURAL_LOW.DisplayName", "Binaural Low Quality" },
		{ "BINAURAL_LOW.Name", "ERaQualityMode::BINAURAL_LOW" },
		{ "BINAURAL_LOW.ToolTip", "Binaural Low (First Order Ambisonics)." },
		{ "BINAURAL_MEDIUM.Comment", "// Binaural Medium (Second Order Ambisonics).\n" },
		{ "BINAURAL_MEDIUM.DisplayName", "Binaural Medium Quality" },
		{ "BINAURAL_MEDIUM.Name", "ERaQualityMode::BINAURAL_MEDIUM" },
		{ "BINAURAL_MEDIUM.ToolTip", "Binaural Medium (Second Order Ambisonics)." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResonanceAudioEnums.h" },
		{ "STEREO_PANNING.Comment", "// Stereo panning.\n" },
		{ "STEREO_PANNING.DisplayName", "Stereo Panning" },
		{ "STEREO_PANNING.Name", "ERaQualityMode::STEREO_PANNING" },
		{ "STEREO_PANNING.ToolTip", "Stereo panning." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERaQualityMode::STEREO_PANNING", (int64)ERaQualityMode::STEREO_PANNING },
		{ "ERaQualityMode::BINAURAL_LOW", (int64)ERaQualityMode::BINAURAL_LOW },
		{ "ERaQualityMode::BINAURAL_MEDIUM", (int64)ERaQualityMode::BINAURAL_MEDIUM },
		{ "ERaQualityMode::BINAURAL_HIGH", (int64)ERaQualityMode::BINAURAL_HIGH },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ResonanceAudio_ERaQualityMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ResonanceAudio,
	nullptr,
	"ERaQualityMode",
	"ERaQualityMode",
	Z_Construct_UEnum_ResonanceAudio_ERaQualityMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_ERaQualityMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_ERaQualityMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ResonanceAudio_ERaQualityMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ResonanceAudio_ERaQualityMode()
{
	if (!Z_Registration_Info_UEnum_ERaQualityMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERaQualityMode.InnerSingleton, Z_Construct_UEnum_ResonanceAudio_ERaQualityMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERaQualityMode.InnerSingleton;
}
// End Enum ERaQualityMode

// Begin Enum ERaSpatializationMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERaSpatializationMethod;
static UEnum* ERaSpatializationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERaSpatializationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERaSpatializationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod, (UObject*)Z_Construct_UPackage__Script_ResonanceAudio(), TEXT("ERaSpatializationMethod"));
	}
	return Z_Registration_Info_UEnum_ERaSpatializationMethod.OuterSingleton;
}
template<> RESONANCEAUDIO_API UEnum* StaticEnum<ERaSpatializationMethod>()
{
	return ERaSpatializationMethod_StaticEnum();
}
struct Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HRTF.Comment", "// Binaural rendering via HRTF.\n" },
		{ "HRTF.DisplayName", "HRTF" },
		{ "HRTF.Name", "ERaSpatializationMethod::HRTF" },
		{ "HRTF.ToolTip", "Binaural rendering via HRTF." },
		{ "ModuleRelativePath", "Public/ResonanceAudioEnums.h" },
		{ "STEREO_PANNING.Comment", "// Stereo panning.\n" },
		{ "STEREO_PANNING.DisplayName", "Stereo Panning" },
		{ "STEREO_PANNING.Name", "ERaSpatializationMethod::STEREO_PANNING" },
		{ "STEREO_PANNING.ToolTip", "Stereo panning." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERaSpatializationMethod::STEREO_PANNING", (int64)ERaSpatializationMethod::STEREO_PANNING },
		{ "ERaSpatializationMethod::HRTF", (int64)ERaSpatializationMethod::HRTF },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ResonanceAudio,
	nullptr,
	"ERaSpatializationMethod",
	"ERaSpatializationMethod",
	Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod()
{
	if (!Z_Registration_Info_UEnum_ERaSpatializationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERaSpatializationMethod.InnerSingleton, Z_Construct_UEnum_ResonanceAudio_ERaSpatializationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERaSpatializationMethod.InnerSingleton;
}
// End Enum ERaSpatializationMethod

// Begin Enum ERaDistanceRolloffModel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERaDistanceRolloffModel;
static UEnum* ERaDistanceRolloffModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERaDistanceRolloffModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERaDistanceRolloffModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel, (UObject*)Z_Construct_UPackage__Script_ResonanceAudio(), TEXT("ERaDistanceRolloffModel"));
	}
	return Z_Registration_Info_UEnum_ERaDistanceRolloffModel.OuterSingleton;
}
template<> RESONANCEAUDIO_API UEnum* StaticEnum<ERaDistanceRolloffModel>()
{
	return ERaDistanceRolloffModel_StaticEnum();
}
struct Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LINEAR.Comment", "// Linear distance attenuation model.\n" },
		{ "LINEAR.DisplayName", "Linear" },
		{ "LINEAR.Name", "ERaDistanceRolloffModel::LINEAR" },
		{ "LINEAR.ToolTip", "Linear distance attenuation model." },
		{ "LOGARITHMIC.Comment", "// Logarithmic distance attenuation model (default).\n" },
		{ "LOGARITHMIC.DisplayName", "Logarithmic" },
		{ "LOGARITHMIC.Name", "ERaDistanceRolloffModel::LOGARITHMIC" },
		{ "LOGARITHMIC.ToolTip", "Logarithmic distance attenuation model (default)." },
		{ "ModuleRelativePath", "Public/ResonanceAudioEnums.h" },
		{ "NONE.Comment", "// Use Unreal Engine attenuation settings.\n" },
		{ "NONE.DisplayName", "None" },
		{ "NONE.Name", "ERaDistanceRolloffModel::NONE" },
		{ "NONE.ToolTip", "Use Unreal Engine attenuation settings." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERaDistanceRolloffModel::LOGARITHMIC", (int64)ERaDistanceRolloffModel::LOGARITHMIC },
		{ "ERaDistanceRolloffModel::LINEAR", (int64)ERaDistanceRolloffModel::LINEAR },
		{ "ERaDistanceRolloffModel::NONE", (int64)ERaDistanceRolloffModel::NONE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ResonanceAudio,
	nullptr,
	"ERaDistanceRolloffModel",
	"ERaDistanceRolloffModel",
	Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel()
{
	if (!Z_Registration_Info_UEnum_ERaDistanceRolloffModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERaDistanceRolloffModel.InnerSingleton, Z_Construct_UEnum_ResonanceAudio_ERaDistanceRolloffModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERaDistanceRolloffModel.InnerSingleton;
}
// End Enum ERaDistanceRolloffModel

// Begin Enum ERaMaterialName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERaMaterialName;
static UEnum* ERaMaterialName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERaMaterialName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERaMaterialName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ResonanceAudio_ERaMaterialName, (UObject*)Z_Construct_UPackage__Script_ResonanceAudio(), TEXT("ERaMaterialName"));
	}
	return Z_Registration_Info_UEnum_ERaMaterialName.OuterSingleton;
}
template<> RESONANCEAUDIO_API UEnum* StaticEnum<ERaMaterialName>()
{
	return ERaMaterialName_StaticEnum();
}
struct Z_Construct_UEnum_ResonanceAudio_ERaMaterialName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACOUSTIC_CEILING_TILES.DisplayName", "Acoustic Ceiling Tiles" },
		{ "ACOUSTIC_CEILING_TILES.Name", "ERaMaterialName::ACOUSTIC_CEILING_TILES" },
		{ "BlueprintType", "true" },
		{ "BRICK_BARE.DisplayName", "Brick Bare" },
		{ "BRICK_BARE.Name", "ERaMaterialName::BRICK_BARE" },
		{ "BRICK_PAINTED.DisplayName", "Brick Painted" },
		{ "BRICK_PAINTED.Name", "ERaMaterialName::BRICK_PAINTED" },
		{ "CONCRETE_BLOCK_COARSE.DisplayName", "Concrete Block Coarse" },
		{ "CONCRETE_BLOCK_COARSE.Name", "ERaMaterialName::CONCRETE_BLOCK_COARSE" },
		{ "CONCRETE_BLOCK_PAINTED.DisplayName", "Concrete Block Painted" },
		{ "CONCRETE_BLOCK_PAINTED.Name", "ERaMaterialName::CONCRETE_BLOCK_PAINTED" },
		{ "CURTAIN_HEAVY.DisplayName", "Curtain Heavy" },
		{ "CURTAIN_HEAVY.Name", "ERaMaterialName::CURTAIN_HEAVY" },
		{ "FIBER_GLASS_INSULATION.DisplayName", "Fiber Glass Insulation" },
		{ "FIBER_GLASS_INSULATION.Name", "ERaMaterialName::FIBER_GLASS_INSULATION" },
		{ "GLASS_THICK.DisplayName", "Glass Thick" },
		{ "GLASS_THICK.Name", "ERaMaterialName::GLASS_THICK" },
		{ "GLASS_THIN.DisplayName", "Glass Thin" },
		{ "GLASS_THIN.Name", "ERaMaterialName::GLASS_THIN" },
		{ "GRASS.DisplayName", "Grass" },
		{ "GRASS.Name", "ERaMaterialName::GRASS" },
		{ "LINOLEUM_ON_CONCRETE.DisplayName", "Linoleum On Concrete" },
		{ "LINOLEUM_ON_CONCRETE.Name", "ERaMaterialName::LINOLEUM_ON_CONCRETE" },
		{ "MARBLE.DisplayName", "Marble" },
		{ "MARBLE.Name", "ERaMaterialName::MARBLE" },
		{ "METAL.DisplayName", "Metal" },
		{ "METAL.Name", "ERaMaterialName::METAL" },
		{ "ModuleRelativePath", "Public/ResonanceAudioEnums.h" },
		{ "PARQUET_ONCONCRETE.DisplayName", "Parquet On Concrete" },
		{ "PARQUET_ONCONCRETE.Name", "ERaMaterialName::PARQUET_ONCONCRETE" },
		{ "PLASTER_ROUGH.DisplayName", "Plaster Rough" },
		{ "PLASTER_ROUGH.Name", "ERaMaterialName::PLASTER_ROUGH" },
		{ "PLASTER_SMOOTH.DisplayName", "Plaster Smooth" },
		{ "PLASTER_SMOOTH.Name", "ERaMaterialName::PLASTER_SMOOTH" },
		{ "PLYWOOD_PANEL.DisplayName", "Plywood Panel" },
		{ "PLYWOOD_PANEL.Name", "ERaMaterialName::PLYWOOD_PANEL" },
		{ "POLISHED_CONCRETE_OR_TILE.DisplayName", "Polished Concrete Or Tile" },
		{ "POLISHED_CONCRETE_OR_TILE.Name", "ERaMaterialName::POLISHED_CONCRETE_OR_TILE" },
		{ "SHEETROCK.DisplayName", "Sheetrock" },
		{ "SHEETROCK.Name", "ERaMaterialName::SHEETROCK" },
		{ "TRANSPARENT.Comment", "// Full acoustic energy absorption.\n" },
		{ "TRANSPARENT.DisplayName", "Transparent" },
		{ "TRANSPARENT.Name", "ERaMaterialName::TRANSPARENT" },
		{ "TRANSPARENT.ToolTip", "Full acoustic energy absorption." },
		{ "UNIFORM.Comment", "// Uniform acoustic energy absorption across all frequency bands.\n" },
		{ "UNIFORM.DisplayName", "Uniform" },
		{ "UNIFORM.Name", "ERaMaterialName::UNIFORM" },
		{ "UNIFORM.ToolTip", "Uniform acoustic energy absorption across all frequency bands." },
		{ "WATER_OR_ICE_SURFACE.DisplayName", "Water Or Ice Surface" },
		{ "WATER_OR_ICE_SURFACE.Name", "ERaMaterialName::WATER_OR_ICE_SURFACE" },
		{ "WOOD_CEILING.DisplayName", "Wood Ceiling" },
		{ "WOOD_CEILING.Name", "ERaMaterialName::WOOD_CEILING" },
		{ "WOOD_PANEL.DisplayName", "Wood Panel" },
		{ "WOOD_PANEL.Name", "ERaMaterialName::WOOD_PANEL" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERaMaterialName::TRANSPARENT", (int64)ERaMaterialName::TRANSPARENT },
		{ "ERaMaterialName::ACOUSTIC_CEILING_TILES", (int64)ERaMaterialName::ACOUSTIC_CEILING_TILES },
		{ "ERaMaterialName::BRICK_BARE", (int64)ERaMaterialName::BRICK_BARE },
		{ "ERaMaterialName::BRICK_PAINTED", (int64)ERaMaterialName::BRICK_PAINTED },
		{ "ERaMaterialName::CONCRETE_BLOCK_COARSE", (int64)ERaMaterialName::CONCRETE_BLOCK_COARSE },
		{ "ERaMaterialName::CONCRETE_BLOCK_PAINTED", (int64)ERaMaterialName::CONCRETE_BLOCK_PAINTED },
		{ "ERaMaterialName::CURTAIN_HEAVY", (int64)ERaMaterialName::CURTAIN_HEAVY },
		{ "ERaMaterialName::FIBER_GLASS_INSULATION", (int64)ERaMaterialName::FIBER_GLASS_INSULATION },
		{ "ERaMaterialName::GLASS_THIN", (int64)ERaMaterialName::GLASS_THIN },
		{ "ERaMaterialName::GLASS_THICK", (int64)ERaMaterialName::GLASS_THICK },
		{ "ERaMaterialName::GRASS", (int64)ERaMaterialName::GRASS },
		{ "ERaMaterialName::LINOLEUM_ON_CONCRETE", (int64)ERaMaterialName::LINOLEUM_ON_CONCRETE },
		{ "ERaMaterialName::MARBLE", (int64)ERaMaterialName::MARBLE },
		{ "ERaMaterialName::METAL", (int64)ERaMaterialName::METAL },
		{ "ERaMaterialName::PARQUET_ONCONCRETE", (int64)ERaMaterialName::PARQUET_ONCONCRETE },
		{ "ERaMaterialName::PLASTER_ROUGH", (int64)ERaMaterialName::PLASTER_ROUGH },
		{ "ERaMaterialName::PLASTER_SMOOTH", (int64)ERaMaterialName::PLASTER_SMOOTH },
		{ "ERaMaterialName::PLYWOOD_PANEL", (int64)ERaMaterialName::PLYWOOD_PANEL },
		{ "ERaMaterialName::POLISHED_CONCRETE_OR_TILE", (int64)ERaMaterialName::POLISHED_CONCRETE_OR_TILE },
		{ "ERaMaterialName::SHEETROCK", (int64)ERaMaterialName::SHEETROCK },
		{ "ERaMaterialName::WATER_OR_ICE_SURFACE", (int64)ERaMaterialName::WATER_OR_ICE_SURFACE },
		{ "ERaMaterialName::WOOD_CEILING", (int64)ERaMaterialName::WOOD_CEILING },
		{ "ERaMaterialName::WOOD_PANEL", (int64)ERaMaterialName::WOOD_PANEL },
		{ "ERaMaterialName::UNIFORM", (int64)ERaMaterialName::UNIFORM },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ResonanceAudio_ERaMaterialName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ResonanceAudio,
	nullptr,
	"ERaMaterialName",
	"ERaMaterialName",
	Z_Construct_UEnum_ResonanceAudio_ERaMaterialName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_ERaMaterialName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ResonanceAudio_ERaMaterialName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ResonanceAudio_ERaMaterialName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ResonanceAudio_ERaMaterialName()
{
	if (!Z_Registration_Info_UEnum_ERaMaterialName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERaMaterialName.InnerSingleton, Z_Construct_UEnum_ResonanceAudio_ERaMaterialName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERaMaterialName.InnerSingleton;
}
// End Enum ERaMaterialName

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERaQualityMode_StaticEnum, TEXT("ERaQualityMode"), &Z_Registration_Info_UEnum_ERaQualityMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3861981669U) },
		{ ERaSpatializationMethod_StaticEnum, TEXT("ERaSpatializationMethod"), &Z_Registration_Info_UEnum_ERaSpatializationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1629823794U) },
		{ ERaDistanceRolloffModel_StaticEnum, TEXT("ERaDistanceRolloffModel"), &Z_Registration_Info_UEnum_ERaDistanceRolloffModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1417429119U) },
		{ ERaMaterialName_StaticEnum, TEXT("ERaMaterialName"), &Z_Registration_Info_UEnum_ERaMaterialName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2917448844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioEnums_h_1446509534(TEXT("/Script/ResonanceAudio"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudio_Public_ResonanceAudioEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
