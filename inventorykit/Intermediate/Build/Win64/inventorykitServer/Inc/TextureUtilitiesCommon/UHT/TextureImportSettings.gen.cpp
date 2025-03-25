// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/TextureUtilitiesCommon/Public/TextureImportSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureImportSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
TEXTUREUTILITIESCOMMON_API UClass* Z_Construct_UClass_UTextureImportSettings();
TEXTUREUTILITIESCOMMON_API UClass* Z_Construct_UClass_UTextureImportSettings_NoRegister();
TEXTUREUTILITIESCOMMON_API UEnum* Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat();
TEXTUREUTILITIESCOMMON_API UEnum* Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill();
UPackage* Z_Construct_UPackage__Script_TextureUtilitiesCommon();
// End Cross Module References

// Begin Enum ETextureImportFloatingPointFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat;
static UEnum* ETextureImportFloatingPointFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat, (UObject*)Z_Construct_UPackage__Script_TextureUtilitiesCommon(), TEXT("ETextureImportFloatingPointFormat"));
	}
	return Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.OuterSingleton;
}
template<> TEXTUREUTILITIESCOMMON_API UEnum* StaticEnum<ETextureImportFloatingPointFormat>()
{
	return ETextureImportFloatingPointFormat_StaticEnum();
}
struct Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/* What CompressionSettings runtime format should imported floating point textures use\n */" },
		{ "HDR_F16.Comment", "/* Use \"HDR\" RGBA16F */" },
		{ "HDR_F16.Name", "ETextureImportFloatingPointFormat::HDR_F16" },
		{ "HDR_F16.ToolTip", "Use \"HDR\" RGBA16F" },
		{ "HDR_F32_or_F16.Comment", "/* Use 32-bit float formats if the source is 32-bit, otherwise use 16-bit HDR */" },
		{ "HDR_F32_or_F16.Name", "ETextureImportFloatingPointFormat::HDR_F32_or_F16" },
		{ "HDR_F32_or_F16.ToolTip", "Use 32-bit float formats if the source is 32-bit, otherwise use 16-bit HDR" },
		{ "HDRCompressed_BC6.Comment", "/* Use \"HDRCompressed\" , BC6H */" },
		{ "HDRCompressed_BC6.Name", "ETextureImportFloatingPointFormat::HDRCompressed_BC6" },
		{ "HDRCompressed_BC6.ToolTip", "Use \"HDRCompressed\" , BC6H" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "PreviousDefault.Hidden", "" },
		{ "PreviousDefault.Name", "ETextureImportFloatingPointFormat::PreviousDefault" },
		{ "ToolTip", "What CompressionSettings runtime format should imported floating point textures use" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureImportFloatingPointFormat::HDR_F16", (int64)ETextureImportFloatingPointFormat::HDR_F16 },
		{ "ETextureImportFloatingPointFormat::HDRCompressed_BC6", (int64)ETextureImportFloatingPointFormat::HDRCompressed_BC6 },
		{ "ETextureImportFloatingPointFormat::HDR_F32_or_F16", (int64)ETextureImportFloatingPointFormat::HDR_F32_or_F16 },
		{ "ETextureImportFloatingPointFormat::PreviousDefault", (int64)ETextureImportFloatingPointFormat::PreviousDefault },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TextureUtilitiesCommon,
	nullptr,
	"ETextureImportFloatingPointFormat",
	"ETextureImportFloatingPointFormat",
	Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat()
{
	if (!Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.InnerSingleton, Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat.InnerSingleton;
}
// End Enum ETextureImportFloatingPointFormat

// Begin Enum ETextureImportPNGInfill
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureImportPNGInfill;
static UEnum* ETextureImportPNGInfill_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureImportPNGInfill.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureImportPNGInfill.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill, (UObject*)Z_Construct_UPackage__Script_TextureUtilitiesCommon(), TEXT("ETextureImportPNGInfill"));
	}
	return Z_Registration_Info_UEnum_ETextureImportPNGInfill.OuterSingleton;
}
template<> TEXTUREUTILITIESCOMMON_API UEnum* StaticEnum<ETextureImportPNGInfill>()
{
	return ETextureImportPNGInfill_StaticEnum();
}
struct Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "/* Always infill RGB to fully transparent white pixels, even for non-binary alpha channels. */" },
		{ "Always.Name", "ETextureImportPNGInfill::Always" },
		{ "Always.ToolTip", "Always infill RGB to fully transparent white pixels, even for non-binary alpha channels." },
		{ "Comment", "/* When should RGB colors be spread into neighboring fully transparent white pixels, replacing their RGB.\n   By default, this is done OnlyOnBinaryTransparency, not on PNG's with non-binary-transparency alpha channels.\n   The PNG format has two different ways of storing alpha, either as 1-bit binary transparency, or as full 8/16 bit alpha channels.\n\n   Used to be set from the TextureImporter/FillPNGZeroAlpha config value.  Setting this option will supercede that.\n */" },
		{ "Default.Comment", "/* Use the legacy default behavior, set from the TextureImporter/FillPNGZeroAlpha config value; default was OnlyOnBinaryTransparency. */" },
		{ "Default.Name", "ETextureImportPNGInfill::Default" },
		{ "Default.ToolTip", "Use the legacy default behavior, set from the TextureImporter/FillPNGZeroAlpha config value; default was OnlyOnBinaryTransparency." },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "Never.Comment", "/* Never infill RGB, import the PNG exactly as it is stored in the file. */" },
		{ "Never.Name", "ETextureImportPNGInfill::Never" },
		{ "Never.ToolTip", "Never infill RGB, import the PNG exactly as it is stored in the file." },
		{ "OnlyOnBinaryTransparency.Comment", "/* Only infill RGB on binary transparency; this is the default behavior. */" },
		{ "OnlyOnBinaryTransparency.Name", "ETextureImportPNGInfill::OnlyOnBinaryTransparency" },
		{ "OnlyOnBinaryTransparency.ToolTip", "Only infill RGB on binary transparency; this is the default behavior." },
		{ "ToolTip", "When should RGB colors be spread into neighboring fully transparent white pixels, replacing their RGB.\n  By default, this is done OnlyOnBinaryTransparency, not on PNG's with non-binary-transparency alpha channels.\n  The PNG format has two different ways of storing alpha, either as 1-bit binary transparency, or as full 8/16 bit alpha channels.\n\n  Used to be set from the TextureImporter/FillPNGZeroAlpha config value.  Setting this option will supercede that." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureImportPNGInfill::Default", (int64)ETextureImportPNGInfill::Default },
		{ "ETextureImportPNGInfill::Never", (int64)ETextureImportPNGInfill::Never },
		{ "ETextureImportPNGInfill::OnlyOnBinaryTransparency", (int64)ETextureImportPNGInfill::OnlyOnBinaryTransparency },
		{ "ETextureImportPNGInfill::Always", (int64)ETextureImportPNGInfill::Always },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TextureUtilitiesCommon,
	nullptr,
	"ETextureImportPNGInfill",
	"ETextureImportPNGInfill",
	Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill()
{
	if (!Z_Registration_Info_UEnum_ETextureImportPNGInfill.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureImportPNGInfill.InnerSingleton, Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureImportPNGInfill.InnerSingleton;
}
// End Enum ETextureImportPNGInfill

// Begin Class UTextureImportSettings
void UTextureImportSettings::StaticRegisterNativesUTextureImportSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureImportSettings);
UClass* Z_Construct_UClass_UTextureImportSettings_NoRegister()
{
	return UTextureImportSettings::StaticClass();
}
struct Z_Construct_UClass_UTextureImportSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Texture Import" },
		{ "IncludePath", "TextureImportSettings.h" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoVTSize_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "DisplayName", "Auto Virtual Texturing Size" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "ToolTip", "Automatically enable the 'Virtual Texture Streaming' texture setting for textures larger than or equal to this size. This setting will not affect existing textures in the project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNormalizeNormals_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Turn on NormalizeNormals for normal maps" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "ToolTip", "NormalizeNormals makes more correct normals in mip maps; it is recommended, but can be turned off to maintain legacy behavior. This setting is applied to newly imported textures, it does not affect existing textures in the project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFastMipFilter_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "Turn on fast mip generation filter" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "ToolTip", "Use the fast mip filter on new textures; it is recommended, but can be turned off to maintain legacy behavior. This setting is applied to newly imported textures, it does not affect existing textures in the project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressedFormatForFloatTextures_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "CompressionFormat to use for new float textures" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "ToolTip", "Optionally use HDRCompressed (BC6H), or 32-bit adaptively, instead of HDR (RGBA16F) for floating point textures.  This setting is applied to newly imported textures, it does not affect existing textures in the project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PNGInfill_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "DisplayName", "When to infill RGB in transparent white PNG" },
		{ "ModuleRelativePath", "Public/TextureImportSettings.h" },
		{ "ToolTip", "Default behavior is to infill only for binary transparency; this setting may change that to always or never.  Will check TextureImporter/FillPNGZeroAlpha if this is not changed from Default.  This setting is applied to newly imported textures, it does not affect existing textures in the project." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AutoVTSize;
	static void NewProp_bEnableNormalizeNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNormalizeNormals;
	static void NewProp_bEnableFastMipFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFastMipFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedFormatForFloatTextures_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompressedFormatForFloatTextures;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PNGInfill_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PNGInfill;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureImportSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_AutoVTSize = { "AutoVTSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureImportSettings, AutoVTSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoVTSize_MetaData), NewProp_AutoVTSize_MetaData) };
void Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals_SetBit(void* Obj)
{
	((UTextureImportSettings*)Obj)->bEnableNormalizeNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals = { "bEnableNormalizeNormals", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTextureImportSettings), &Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNormalizeNormals_MetaData), NewProp_bEnableNormalizeNormals_MetaData) };
void Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter_SetBit(void* Obj)
{
	((UTextureImportSettings*)Obj)->bEnableFastMipFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter = { "bEnableFastMipFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTextureImportSettings), &Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFastMipFilter_MetaData), NewProp_bEnableFastMipFilter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures = { "CompressedFormatForFloatTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureImportSettings, CompressedFormatForFloatTextures), Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportFloatingPointFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressedFormatForFloatTextures_MetaData), NewProp_CompressedFormatForFloatTextures_MetaData) }; // 65891998
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_PNGInfill_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_PNGInfill = { "PNGInfill", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureImportSettings, PNGInfill), Z_Construct_UEnum_TextureUtilitiesCommon_ETextureImportPNGInfill, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PNGInfill_MetaData), NewProp_PNGInfill_MetaData) }; // 2443570709
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureImportSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_AutoVTSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableNormalizeNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_bEnableFastMipFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_CompressedFormatForFloatTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_PNGInfill_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureImportSettings_Statics::NewProp_PNGInfill,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureImportSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_TextureUtilitiesCommon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureImportSettings_Statics::ClassParams = {
	&UTextureImportSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureImportSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureImportSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureImportSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureImportSettings()
{
	if (!Z_Registration_Info_UClass_UTextureImportSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureImportSettings.OuterSingleton, Z_Construct_UClass_UTextureImportSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureImportSettings.OuterSingleton;
}
template<> TEXTUREUTILITIESCOMMON_API UClass* StaticClass<UTextureImportSettings>()
{
	return UTextureImportSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureImportSettings);
UTextureImportSettings::~UTextureImportSettings() {}
// End Class UTextureImportSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETextureImportFloatingPointFormat_StaticEnum, TEXT("ETextureImportFloatingPointFormat"), &Z_Registration_Info_UEnum_ETextureImportFloatingPointFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 65891998U) },
		{ ETextureImportPNGInfill_StaticEnum, TEXT("ETextureImportPNGInfill"), &Z_Registration_Info_UEnum_ETextureImportPNGInfill, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2443570709U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureImportSettings, UTextureImportSettings::StaticClass, TEXT("UTextureImportSettings"), &Z_Registration_Info_UClass_UTextureImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureImportSettings), 3179853808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_921849070(TEXT("/Script/TextureUtilitiesCommon"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
