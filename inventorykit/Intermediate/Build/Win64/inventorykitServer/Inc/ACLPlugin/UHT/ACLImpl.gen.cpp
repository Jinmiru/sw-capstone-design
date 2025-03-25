// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Public/ACLImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACLImpl() {}

// Begin Cross Module References
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel();
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode();
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLRotationFormat();
ACLPLUGIN_API UEnum* Z_Construct_UEnum_ACLPlugin_ACLVectorFormat();
UPackage* Z_Construct_UPackage__Script_ACLPlugin();
// End Cross Module References

// Begin Enum ACLRotationFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ACLRotationFormat;
static UEnum* ACLRotationFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ACLRotationFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ACLRotationFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLRotationFormat, (UObject*)Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLRotationFormat"));
	}
	return Z_Registration_Info_UEnum_ACLRotationFormat.OuterSingleton;
}
template<> ACLPLUGIN_API UEnum* StaticEnum<ACLRotationFormat>()
{
	return ACLRotationFormat_StaticEnum();
}
struct Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACLRF_Quat_128.DisplayName", "Quat Full Bit Rate" },
		{ "ACLRF_Quat_128.Name", "ACLRF_Quat_128" },
		{ "ACLRF_QuatDropW_96.DisplayName", "Quat Drop W Full Bit Rate" },
		{ "ACLRF_QuatDropW_96.Name", "ACLRF_QuatDropW_96" },
		{ "ACLRF_QuatDropW_Variable.DisplayName", "Quat Drop W Variable Bit Rate" },
		{ "ACLRF_QuatDropW_Variable.Name", "ACLRF_QuatDropW_Variable" },
		{ "Comment", "/** An enum for ACL rotation formats. */" },
		{ "ModuleRelativePath", "Public/ACLImpl.h" },
		{ "ToolTip", "An enum for ACL rotation formats." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ACLRF_Quat_128", (int64)ACLRF_Quat_128 },
		{ "ACLRF_QuatDropW_96", (int64)ACLRF_QuatDropW_96 },
		{ "ACLRF_QuatDropW_Variable", (int64)ACLRF_QuatDropW_Variable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
	nullptr,
	"ACLRotationFormat",
	"ACLRotationFormat",
	Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ACLPlugin_ACLRotationFormat()
{
	if (!Z_Registration_Info_UEnum_ACLRotationFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ACLRotationFormat.InnerSingleton, Z_Construct_UEnum_ACLPlugin_ACLRotationFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ACLRotationFormat.InnerSingleton;
}
// End Enum ACLRotationFormat

// Begin Enum ACLVectorFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ACLVectorFormat;
static UEnum* ACLVectorFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ACLVectorFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ACLVectorFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLVectorFormat, (UObject*)Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLVectorFormat"));
	}
	return Z_Registration_Info_UEnum_ACLVectorFormat.OuterSingleton;
}
template<> ACLPLUGIN_API UEnum* StaticEnum<ACLVectorFormat>()
{
	return ACLVectorFormat_StaticEnum();
}
struct Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACLVF_Vector3_96.DisplayName", "Vector3 Full Bit Rate" },
		{ "ACLVF_Vector3_96.Name", "ACLVF_Vector3_96" },
		{ "ACLVF_Vector3_Variable.DisplayName", "Vector3 Variable Bit Rate" },
		{ "ACLVF_Vector3_Variable.Name", "ACLVF_Vector3_Variable" },
		{ "Comment", "/** An enum for ACL Vector3 formats. */" },
		{ "ModuleRelativePath", "Public/ACLImpl.h" },
		{ "ToolTip", "An enum for ACL Vector3 formats." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ACLVF_Vector3_96", (int64)ACLVF_Vector3_96 },
		{ "ACLVF_Vector3_Variable", (int64)ACLVF_Vector3_Variable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
	nullptr,
	"ACLVectorFormat",
	"ACLVectorFormat",
	Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ACLPlugin_ACLVectorFormat()
{
	if (!Z_Registration_Info_UEnum_ACLVectorFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ACLVectorFormat.InnerSingleton, Z_Construct_UEnum_ACLPlugin_ACLVectorFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ACLVectorFormat.InnerSingleton;
}
// End Enum ACLVectorFormat

// Begin Enum ACLCompressionLevel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ACLCompressionLevel;
static UEnum* ACLCompressionLevel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ACLCompressionLevel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ACLCompressionLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel, (UObject*)Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLCompressionLevel"));
	}
	return Z_Registration_Info_UEnum_ACLCompressionLevel.OuterSingleton;
}
template<> ACLPLUGIN_API UEnum* StaticEnum<ACLCompressionLevel>()
{
	return ACLCompressionLevel_StaticEnum();
}
struct Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACLCL_High.DisplayName", "High" },
		{ "ACLCL_High.Name", "ACLCL_High" },
		{ "ACLCL_Highest.DisplayName", "Highest" },
		{ "ACLCL_Highest.Name", "ACLCL_Highest" },
		{ "ACLCL_Low.DisplayName", "Low" },
		{ "ACLCL_Low.Name", "ACLCL_Low" },
		{ "ACLCL_Lowest.DisplayName", "Lowest" },
		{ "ACLCL_Lowest.Name", "ACLCL_Lowest" },
		{ "ACLCL_Medium.DisplayName", "Medium" },
		{ "ACLCL_Medium.Name", "ACLCL_Medium" },
		{ "Comment", "/** An enum for ACL compression levels. */" },
		{ "ModuleRelativePath", "Public/ACLImpl.h" },
		{ "ToolTip", "An enum for ACL compression levels." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ACLCL_Lowest", (int64)ACLCL_Lowest },
		{ "ACLCL_Low", (int64)ACLCL_Low },
		{ "ACLCL_Medium", (int64)ACLCL_Medium },
		{ "ACLCL_High", (int64)ACLCL_High },
		{ "ACLCL_Highest", (int64)ACLCL_Highest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
	nullptr,
	"ACLCompressionLevel",
	"ACLCompressionLevel",
	Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel()
{
	if (!Z_Registration_Info_UEnum_ACLCompressionLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ACLCompressionLevel.InnerSingleton, Z_Construct_UEnum_ACLPlugin_ACLCompressionLevel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ACLCompressionLevel.InnerSingleton;
}
// End Enum ACLCompressionLevel

// Begin Enum ACLPhantomTrackMode
#if WITH_EDITORONLY_DATA
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ACLPhantomTrackMode;
static UEnum* ACLPhantomTrackMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ACLPhantomTrackMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ACLPhantomTrackMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode, (UObject*)Z_Construct_UPackage__Script_ACLPlugin(), TEXT("ACLPhantomTrackMode"));
	}
	return Z_Registration_Info_UEnum_ACLPhantomTrackMode.OuterSingleton;
}
template<> ACLPLUGIN_API UEnum* StaticEnum<ACLPhantomTrackMode>()
{
	return ACLPhantomTrackMode_StaticEnum();
}
struct Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* An enum to control how to handle UE phantom tracks.\n* A phantom tracks are present in an animation sequence but aren't mapped to skeleton bones.\n* As such, they cannot be queried by the engine except manually through DecompressBone.\n* It should generally be safe to Strip them but we default to Ignore.\n* Re-importing the animation sequence should clean up any such stale data.\n*/" },
		{ "Ignore.Comment", "// Ignore phantom tracks and compress them anyway (same as UE codecs).\n" },
		{ "Ignore.Name", "ACLPhantomTrackMode::Ignore" },
		{ "Ignore.ToolTip", "Ignore phantom tracks and compress them anyway (same as UE codecs)." },
		{ "ModuleRelativePath", "Public/ACLImpl.h" },
		{ "Strip.Comment", "// Strip the phantom track to save memory by collapsing them to the identity transform while maintaining the track ordering.\n" },
		{ "Strip.Name", "ACLPhantomTrackMode::Strip" },
		{ "Strip.ToolTip", "Strip the phantom track to save memory by collapsing them to the identity transform while maintaining the track ordering." },
		{ "ToolTip", "An enum to control how to handle UE phantom tracks.\nA phantom tracks are present in an animation sequence but aren't mapped to skeleton bones.\nAs such, they cannot be queried by the engine except manually through DecompressBone.\nIt should generally be safe to Strip them but we default to Ignore.\nRe-importing the animation sequence should clean up any such stale data." },
		{ "Warn.Comment", "// We ignore the phantom tracks and output a warning to the log.\n" },
		{ "Warn.Name", "ACLPhantomTrackMode::Warn" },
		{ "Warn.ToolTip", "We ignore the phantom tracks and output a warning to the log." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ACLPhantomTrackMode::Ignore", (int64)ACLPhantomTrackMode::Ignore },
		{ "ACLPhantomTrackMode::Strip", (int64)ACLPhantomTrackMode::Strip },
		{ "ACLPhantomTrackMode::Warn", (int64)ACLPhantomTrackMode::Warn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ACLPlugin,
	nullptr,
	"ACLPhantomTrackMode",
	"ACLPhantomTrackMode",
	Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode()
{
	if (!Z_Registration_Info_UEnum_ACLPhantomTrackMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ACLPhantomTrackMode.InnerSingleton, Z_Construct_UEnum_ACLPlugin_ACLPhantomTrackMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ACLPhantomTrackMode.InnerSingleton;
}
#endif // WITH_EDITORONLY_DATA
// End Enum ACLPhantomTrackMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ACLRotationFormat_StaticEnum, TEXT("ACLRotationFormat"), &Z_Registration_Info_UEnum_ACLRotationFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1569556780U) },
		{ ACLVectorFormat_StaticEnum, TEXT("ACLVectorFormat"), &Z_Registration_Info_UEnum_ACLVectorFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 421492154U) },
		{ ACLCompressionLevel_StaticEnum, TEXT("ACLCompressionLevel"), &Z_Registration_Info_UEnum_ACLCompressionLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 17174031U) },
#if WITH_EDITORONLY_DATA
		{ ACLPhantomTrackMode_StaticEnum, TEXT("ACLPhantomTrackMode"), &Z_Registration_Info_UEnum_ACLPhantomTrackMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3168793838U) },
#endif // WITH_EDITORONLY_DATA
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h_1480923155(TEXT("/Script/ACLPlugin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
