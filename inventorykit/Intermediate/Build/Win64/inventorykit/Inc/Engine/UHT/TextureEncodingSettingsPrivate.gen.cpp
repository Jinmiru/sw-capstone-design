// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Private/TextureEncodingSettingsPrivate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureEncodingSettingsPrivate() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingProjectSettings();
ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingProjectSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingUserSettings();
ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingUserSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureEncodeEffort();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureEncodeSpeed();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureUniversalTiling();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UTextureEncodingProjectSettings
void UTextureEncodingProjectSettings::StaticRegisterNativesUTextureEncodingProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureEncodingProjectSettings);
UClass* Z_Construct_UClass_UTextureEncodingProjectSettings_NoRegister()
{
	return UTextureEncodingProjectSettings::StaticClass();
}
struct Z_Construct_UClass_UTextureEncodingProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// \n// Encoding can either use the \"Final\" or \"Fast\" speeds, for supported encoders (e.g. Oodle)\n// Encode speed settings have no effect on encoders that don't support encode speed, currently limited to Oodle.\n//\n" },
		{ "DisplayName", "Texture Encoding" },
		{ "IncludePath", "TextureEncodingSettingsPrivate.h" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Encoding can either use the \"Final\" or \"Fast\" speeds, for supported encoders (e.g. Oodle)\nEncode speed settings have no effect on encoders that don't support encode speed, currently limited to Oodle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSharedLinearTextureEncoding_MetaData[] = {
		{ "Category", "EncodeSettings" },
		{ "Comment", "// If true, platforms that want to take a linearly encoded texture and then tile them\n// will try to reuse the linear texture rather than encode it for every platform. This can result in\n// massive speedups for texture building as tiling is very fast compared to encoding. So instead of:\n//\n//\x09Host Platform: Linear encode\n//\x09""Console 1: Linear encode + platform specific tile\n//\x09""Console 2: Linear encode + platform specific tile\n//\n// you instead get:\n//\x09Host platform: Linear encode\n//\x09""Console 1: fetch linear + platform specific tile\n//\x09""Console 2: fetch linear + platform specific tile\n//\n// Note that this has no effect on cook time, only build time - once the texture is in the DDC this has no\n// effect.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "If true, platforms that want to take a linearly encoded texture and then tile them\nwill try to reuse the linear texture rather than encode it for every platform. This can result in\nmassive speedups for texture building as tiling is very fast compared to encoding. So instead of:\n\n      Host Platform: Linear encode\n      Console 1: Linear encode + platform specific tile\n      Console 2: Linear encode + platform specific tile\n\nyou instead get:\n      Host platform: Linear encode\n      Console 1: fetch linear + platform specific tile\n      Console 2: fetch linear + platform specific tile\n\nNote that this has no effect on cook time, only build time - once the texture is in the DDC this has no\neffect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinalUsesRDO_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// If true, Final encode speed enables rate-distortion optimization on supported encoders to\n// decrease *on disc* size of textures in compressed package files.\n// This rate-distortion tradeoff is controlled via \"Lambda\". The \"LossyCompressionAmount\" parameter on\n// textures is used to control it. Specific LossyCompressionAmount values correspond to\n// to RDO lambdas of:\n// \n//\x09None - Disable RDO for this texture.\n//\x09Lowest - 1 (Least distortion)\n//\x09Low - 10\n//\x09Medium - 20\n//\x09High - 30\n//\x09Highest - 40\n// \n// If set to Default, then the LossyCompressionAmount in the LODGroup for the texture is\n// used. If that is also Default, then the RDOLambda in these settings is used.\n//\n// Note that any distortion introduced is on top of, and likely less than, any introduced by the format itself.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "If true, Final encode speed enables rate-distortion optimization on supported encoders to\ndecrease *on disc* size of textures in compressed package files.\nThis rate-distortion tradeoff is controlled via \"Lambda\". The \"LossyCompressionAmount\" parameter on\ntextures is used to control it. Specific LossyCompressionAmount values correspond to\nto RDO lambdas of:\n\n      None - Disable RDO for this texture.\n      Lowest - 1 (Least distortion)\n      Low - 10\n      Medium - 20\n      High - 30\n      Highest - 40\n\nIf set to Default, then the LossyCompressionAmount in the LODGroup for the texture is\nused. If that is also Default, then the RDOLambda in these settings is used.\n\nNote that any distortion introduced is on top of, and likely less than, any introduced by the format itself." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalRDOLambda_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// Ignored if UsesRDO is false. This value is used if a given texture is using \"Default\" LossyCompressionAmount.\n// Otherwise, the value of LossyCompressionAmount is translated in to a fixed lambda (see UsesRDO tooltip).\n// \n// Low values (1) represent highest quality (least distortion) results.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Final RDO Lambda" },
		{ "EditCondition", "bFinalUsesRDO" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Ignored if UsesRDO is false. This value is used if a given texture is using \"Default\" LossyCompressionAmount.\nOtherwise, the value of LossyCompressionAmount is translated in to a fixed lambda (see UsesRDO tooltip).\n\nLow values (1) represent highest quality (least distortion) results." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalEffortLevel_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// Specifies how much time to take trying for better encoding results.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Specifies how much time to take trying for better encoding results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinalUniversalTiling_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// Specifies how to assume textures are laid out on disc. This only applies to Oodle with RDO\n// enabled. 256 KB is a good middle ground. Enabling this will decrease the on-disc\n// sizes of textures for platforms with exposed texture tiling (i.e. consoles), but will slightly increase\n// sizes of textures for platforms with opaque tiling (i.e. desktop).\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Specifies how to assume textures are laid out on disc. This only applies to Oodle with RDO\nenabled. 256 KB is a good middle ground. Enabling this will decrease the on-disc\nsizes of textures for platforms with exposed texture tiling (i.e. consoles), but will slightly increase\nsizes of textures for platforms with opaque tiling (i.e. desktop)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFastUsesRDO_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// If true, Final encode speed enables rate-distortion optimization on supported encoders to\n// decrease *on disc* size of textures in compressed package files.\n// This rate-distortion tradeoff is controlled via \"Lambda\". The \"LossyCompressionAmount\" parameter on\n// textures is used to control it. Specific LossyCompressionAmount values correspond to\n// to RDO lambdas of:\n// \n//\x09None - Disable RDO for this texture.\n//\x09Lowest - 1 (Least distortion)\n//\x09Low - 10\n//\x09Medium - 20\n//\x09High - 30\n//\x09Highest - 40\n// \n// If set to Default, then the LossyCompressionAmount in the LODGroup for the texture is\n// used. If that is also Default, then the RDOLambda in these settings is used.\n//\n// Note that any distortion introduced is on top of, and likely less than, any introduced by the format itself.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "If true, Final encode speed enables rate-distortion optimization on supported encoders to\ndecrease *on disc* size of textures in compressed package files.\nThis rate-distortion tradeoff is controlled via \"Lambda\". The \"LossyCompressionAmount\" parameter on\ntextures is used to control it. Specific LossyCompressionAmount values correspond to\nto RDO lambdas of:\n\n      None - Disable RDO for this texture.\n      Lowest - 1 (Least distortion)\n      Low - 10\n      Medium - 20\n      High - 30\n      Highest - 40\n\nIf set to Default, then the LossyCompressionAmount in the LODGroup for the texture is\nused. If that is also Default, then the RDOLambda in these settings is used.\n\nNote that any distortion introduced is on top of, and likely less than, any introduced by the format itself." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastRDOLambda_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// Ignored if UsesRDO is false. This value is used if a given texture is using \"Default\" LossyCompressionAmount.\n// Otherwise, the value of LossyCompressionAmount is translated in to a fixed lambda (see UsesRDO tooltip).\n// \n// Low values (1) represent highest quality (least distortion) results.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Fast RDO Lambda" },
		{ "EditCondition", "bFastUsesRDO" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Ignored if UsesRDO is false. This value is used if a given texture is using \"Default\" LossyCompressionAmount.\nOtherwise, the value of LossyCompressionAmount is translated in to a fixed lambda (see UsesRDO tooltip).\n\nLow values (1) represent highest quality (least distortion) results." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastEffortLevel_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// Specifies how much time to take trying for better encode results.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Specifies how much time to take trying for better encode results." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastUniversalTiling_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// Specifies how to assume textures are laid out on disc. This only applies to Oodle with RDO\n// enabled. 256 KB is a good middle ground. Enabling this will decrease the on-disc\n// sizes of textures for platforms with exposed texture tiling (i.e. consoles), but will slightly increase\n// sizes of textures for platforms with opaque tiling (i.e. desktop).\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Specifies how to assume textures are laid out on disc. This only applies to Oodle with RDO\nenabled. 256 KB is a good middle ground. Enabling this will decrease the on-disc\nsizes of textures for platforms with exposed texture tiling (i.e. consoles), but will slightly increase\nsizes of textures for platforms with opaque tiling (i.e. desktop)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CookUsesSpeed_MetaData[] = {
		{ "Category", "EncodeSpeeds" },
		{ "Comment", "// Which encode speed non interactive editor sessions will use (i.e. commandlets)\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Which encode speed non interactive editor sessions will use (i.e. commandlets)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorUsesSpeed_MetaData[] = {
		{ "Category", "EncodeSpeeds" },
		{ "Comment", "// Which encode speed everything else uses.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Which encode speed everything else uses." },
	};
#endif // WITH_METADATA
	static void NewProp_bSharedLinearTextureEncoding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSharedLinearTextureEncoding;
	static void NewProp_bFinalUsesRDO_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinalUsesRDO;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_FinalRDOLambda;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinalEffortLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinalEffortLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FinalUniversalTiling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FinalUniversalTiling;
	static void NewProp_bFastUsesRDO_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFastUsesRDO;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_FastRDOLambda;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FastEffortLevel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FastEffortLevel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FastUniversalTiling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FastUniversalTiling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CookUsesSpeed_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CookUsesSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EditorUsesSpeed_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EditorUsesSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureEncodingProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bSharedLinearTextureEncoding_SetBit(void* Obj)
{
	((UTextureEncodingProjectSettings*)Obj)->bSharedLinearTextureEncoding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bSharedLinearTextureEncoding = { "bSharedLinearTextureEncoding", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureEncodingProjectSettings), &Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bSharedLinearTextureEncoding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSharedLinearTextureEncoding_MetaData), NewProp_bSharedLinearTextureEncoding_MetaData) };
void Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO_SetBit(void* Obj)
{
	((UTextureEncodingProjectSettings*)Obj)->bFinalUsesRDO = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO = { "bFinalUsesRDO", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureEncodingProjectSettings), &Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinalUsesRDO_MetaData), NewProp_bFinalUsesRDO_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalRDOLambda = { "FinalRDOLambda", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureEncodingProjectSettings, FinalRDOLambda), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalRDOLambda_MetaData), NewProp_FinalRDOLambda_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel = { "FinalEffortLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureEncodingProjectSettings, FinalEffortLevel), Z_Construct_UEnum_Engine_ETextureEncodeEffort, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalEffortLevel_MetaData), NewProp_FinalEffortLevel_MetaData) }; // 1945876810
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling = { "FinalUniversalTiling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureEncodingProjectSettings, FinalUniversalTiling), Z_Construct_UEnum_Engine_ETextureUniversalTiling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinalUniversalTiling_MetaData), NewProp_FinalUniversalTiling_MetaData) }; // 1588265898
void Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO_SetBit(void* Obj)
{
	((UTextureEncodingProjectSettings*)Obj)->bFastUsesRDO = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO = { "bFastUsesRDO", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureEncodingProjectSettings), &Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFastUsesRDO_MetaData), NewProp_bFastUsesRDO_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastRDOLambda = { "FastRDOLambda", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureEncodingProjectSettings, FastRDOLambda), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastRDOLambda_MetaData), NewProp_FastRDOLambda_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel = { "FastEffortLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureEncodingProjectSettings, FastEffortLevel), Z_Construct_UEnum_Engine_ETextureEncodeEffort, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastEffortLevel_MetaData), NewProp_FastEffortLevel_MetaData) }; // 1945876810
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling = { "FastUniversalTiling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureEncodingProjectSettings, FastUniversalTiling), Z_Construct_UEnum_Engine_ETextureUniversalTiling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastUniversalTiling_MetaData), NewProp_FastUniversalTiling_MetaData) }; // 1588265898
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed = { "CookUsesSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureEncodingProjectSettings, CookUsesSpeed), Z_Construct_UEnum_Engine_ETextureEncodeSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CookUsesSpeed_MetaData), NewProp_CookUsesSpeed_MetaData) }; // 903645131
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed = { "EditorUsesSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureEncodingProjectSettings, EditorUsesSpeed), Z_Construct_UEnum_Engine_ETextureEncodeSpeed, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorUsesSpeed_MetaData), NewProp_EditorUsesSpeed_MetaData) }; // 903645131
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bSharedLinearTextureEncoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalRDOLambda,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastRDOLambda,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::ClassParams = {
	&UTextureEncodingProjectSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureEncodingProjectSettings()
{
	if (!Z_Registration_Info_UClass_UTextureEncodingProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureEncodingProjectSettings.OuterSingleton, Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureEncodingProjectSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureEncodingProjectSettings>()
{
	return UTextureEncodingProjectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureEncodingProjectSettings);
UTextureEncodingProjectSettings::~UTextureEncodingProjectSettings() {}
// End Class UTextureEncodingProjectSettings

// Begin Class UTextureEncodingUserSettings
void UTextureEncodingUserSettings::StaticRegisterNativesUTextureEncodingUserSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureEncodingUserSettings);
UClass* Z_Construct_UClass_UTextureEncodingUserSettings_NoRegister()
{
	return UTextureEncodingUserSettings::StaticClass();
}
struct Z_Construct_UClass_UTextureEncodingUserSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Texture Encoding" },
		{ "IncludePath", "TextureEncodingSettingsPrivate.h" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceEncodeSpeed_MetaData[] = {
		{ "Category", "EncodeSpeeds" },
		{ "Comment", "// Local machine/project setting to force an encode speed, if desired.\n// See the Engine \"Texture Encoding\" section for details.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/TextureEncodingSettingsPrivate.h" },
		{ "ToolTip", "Local machine/project setting to force an encode speed, if desired.\nSee the Engine \"Texture Encoding\" section for details." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ForceEncodeSpeed_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ForceEncodeSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureEncodingUserSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed = { "ForceEncodeSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureEncodingUserSettings, ForceEncodeSpeed), Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceEncodeSpeed_MetaData), NewProp_ForceEncodeSpeed_MetaData) }; // 2048272143
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureEncodingUserSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingUserSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureEncodingUserSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingUserSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureEncodingUserSettings_Statics::ClassParams = {
	&UTextureEncodingUserSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureEncodingUserSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingUserSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingUserSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureEncodingUserSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureEncodingUserSettings()
{
	if (!Z_Registration_Info_UClass_UTextureEncodingUserSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureEncodingUserSettings.OuterSingleton, Z_Construct_UClass_UTextureEncodingUserSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureEncodingUserSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureEncodingUserSettings>()
{
	return UTextureEncodingUserSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureEncodingUserSettings);
UTextureEncodingUserSettings::~UTextureEncodingUserSettings() {}
// End Class UTextureEncodingUserSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureEncodingProjectSettings, UTextureEncodingProjectSettings::StaticClass, TEXT("UTextureEncodingProjectSettings"), &Z_Registration_Info_UClass_UTextureEncodingProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureEncodingProjectSettings), 3258576049U) },
		{ Z_Construct_UClass_UTextureEncodingUserSettings, UTextureEncodingUserSettings::StaticClass, TEXT("UTextureEncodingUserSettings"), &Z_Registration_Info_UClass_UTextureEncodingUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureEncodingUserSettings), 3265510183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_3323961401(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_TextureEncodingSettingsPrivate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
