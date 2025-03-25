// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimEnums() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ERootMotionRootLock
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionRootLock;
static UEnum* ERootMotionRootLock_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERootMotionRootLock.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERootMotionRootLock.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionRootLock, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionRootLock"));
	}
	return Z_Registration_Info_UEnum_ERootMotionRootLock.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERootMotionRootLock::Type>()
{
	return ERootMotionRootLock_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AnimFirstFrame.Comment", "/** Use root bone position on first frame of animation. */" },
		{ "AnimFirstFrame.Name", "ERootMotionRootLock::AnimFirstFrame" },
		{ "AnimFirstFrame.ToolTip", "Use root bone position on first frame of animation." },
		{ "Comment", "/** Root Bone Lock options when extracting Root Motion. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
		{ "RefPose.Comment", "/** Use reference pose root bone position. */" },
		{ "RefPose.Name", "ERootMotionRootLock::RefPose" },
		{ "RefPose.ToolTip", "Use reference pose root bone position." },
		{ "ToolTip", "Root Bone Lock options when extracting Root Motion." },
		{ "Zero.Comment", "/** FTransform::Identity. */" },
		{ "Zero.Name", "ERootMotionRootLock::Zero" },
		{ "Zero.ToolTip", "FTransform::Identity." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERootMotionRootLock::RefPose", (int64)ERootMotionRootLock::RefPose },
		{ "ERootMotionRootLock::AnimFirstFrame", (int64)ERootMotionRootLock::AnimFirstFrame },
		{ "ERootMotionRootLock::Zero", (int64)ERootMotionRootLock::Zero },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERootMotionRootLock",
	"ERootMotionRootLock::Type",
	Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock()
{
	if (!Z_Registration_Info_UEnum_ERootMotionRootLock.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionRootLock.InnerSingleton, Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERootMotionRootLock.InnerSingleton;
}
// End Enum ERootMotionRootLock

// Begin Enum ERootMotionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionMode;
static UEnum* ERootMotionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERootMotionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERootMotionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionMode"));
	}
	return Z_Registration_Info_UEnum_ERootMotionMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERootMotionMode::Type>()
{
	return ERootMotionMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERootMotionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "IgnoreRootMotion.Comment", "/** Extract root motion but do not apply it. */" },
		{ "IgnoreRootMotion.Name", "ERootMotionMode::IgnoreRootMotion" },
		{ "IgnoreRootMotion.ToolTip", "Extract root motion but do not apply it." },
		{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
		{ "NoRootMotionExtraction.Comment", "/** Leave root motion in animation. */" },
		{ "NoRootMotionExtraction.Name", "ERootMotionMode::NoRootMotionExtraction" },
		{ "NoRootMotionExtraction.ToolTip", "Leave root motion in animation." },
		{ "RootMotionFromEverything.Comment", "/** Root motion is taken from all animations contributing to the final pose, not suitable for network multiplayer setups. */" },
		{ "RootMotionFromEverything.Name", "ERootMotionMode::RootMotionFromEverything" },
		{ "RootMotionFromEverything.ToolTip", "Root motion is taken from all animations contributing to the final pose, not suitable for network multiplayer setups." },
		{ "RootMotionFromMontagesOnly.Comment", "/** Root motion is only taken from montages, suitable for network multiplayer setups. */" },
		{ "RootMotionFromMontagesOnly.Name", "ERootMotionMode::RootMotionFromMontagesOnly" },
		{ "RootMotionFromMontagesOnly.ToolTip", "Root motion is only taken from montages, suitable for network multiplayer setups." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERootMotionMode::NoRootMotionExtraction", (int64)ERootMotionMode::NoRootMotionExtraction },
		{ "ERootMotionMode::IgnoreRootMotion", (int64)ERootMotionMode::IgnoreRootMotion },
		{ "ERootMotionMode::RootMotionFromEverything", (int64)ERootMotionMode::RootMotionFromEverything },
		{ "ERootMotionMode::RootMotionFromMontagesOnly", (int64)ERootMotionMode::RootMotionFromMontagesOnly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERootMotionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERootMotionMode",
	"ERootMotionMode::Type",
	Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERootMotionMode()
{
	if (!Z_Registration_Info_UEnum_ERootMotionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionMode.InnerSingleton, Z_Construct_UEnum_Engine_ERootMotionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERootMotionMode.InnerSingleton;
}
// End Enum ERootMotionMode

// Begin Enum EAdditiveBasePoseType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAdditiveBasePoseType;
static UEnum* EAdditiveBasePoseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAdditiveBasePoseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAdditiveBasePoseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAdditiveBasePoseType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAdditiveBasePoseType"));
	}
	return Z_Registration_Info_UEnum_EAdditiveBasePoseType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAdditiveBasePoseType>()
{
	return EAdditiveBasePoseType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ABPT_AnimFrame.Comment", "/** Use one frame of an animation as a base pose. BasePoseSeq and RefFrameIndex must be set (RefFrameIndex will be clamped). */" },
		{ "ABPT_AnimFrame.DisplayName", "Selected animation frame" },
		{ "ABPT_AnimFrame.Name", "ABPT_AnimFrame" },
		{ "ABPT_AnimFrame.ToolTip", "Use one frame of an animation as a base pose. BasePoseSeq and RefFrameIndex must be set (RefFrameIndex will be clamped)." },
		{ "ABPT_AnimScaled.Comment", "/** Use a whole animation as a base pose. BasePoseSeq must be set. */" },
		{ "ABPT_AnimScaled.DisplayName", "Selected animation scaled" },
		{ "ABPT_AnimScaled.Name", "ABPT_AnimScaled" },
		{ "ABPT_AnimScaled.ToolTip", "Use a whole animation as a base pose. BasePoseSeq must be set." },
		{ "ABPT_LocalAnimFrame.Comment", "/** Use one frame of this animation. RefFrameIndex must be set (RefFrameIndex will be clamped). */" },
		{ "ABPT_LocalAnimFrame.DisplayName", "Frame from this animation" },
		{ "ABPT_LocalAnimFrame.Name", "ABPT_LocalAnimFrame" },
		{ "ABPT_LocalAnimFrame.ToolTip", "Use one frame of this animation. RefFrameIndex must be set (RefFrameIndex will be clamped)." },
		{ "ABPT_MAX.Name", "ABPT_MAX" },
		{ "ABPT_None.Comment", "/** Will be deprecated. */" },
		{ "ABPT_None.DisplayName", "None" },
		{ "ABPT_None.Name", "ABPT_None" },
		{ "ABPT_None.ToolTip", "Will be deprecated." },
		{ "ABPT_RefPose.Comment", "/** Use the Skeleton's ref pose as base. */" },
		{ "ABPT_RefPose.DisplayName", "Skeleton Reference Pose" },
		{ "ABPT_RefPose.Name", "ABPT_RefPose" },
		{ "ABPT_RefPose.ToolTip", "Use the Skeleton's ref pose as base." },
		{ "Comment", "/**\n* For an additive animation, indicates what the animation is relative to.\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
		{ "ToolTip", "For an additive animation, indicates what the animation is relative to." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ABPT_None", (int64)ABPT_None },
		{ "ABPT_RefPose", (int64)ABPT_RefPose },
		{ "ABPT_AnimScaled", (int64)ABPT_AnimScaled },
		{ "ABPT_AnimFrame", (int64)ABPT_AnimFrame },
		{ "ABPT_LocalAnimFrame", (int64)ABPT_LocalAnimFrame },
		{ "ABPT_MAX", (int64)ABPT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAdditiveBasePoseType",
	"EAdditiveBasePoseType",
	Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType()
{
	if (!Z_Registration_Info_UEnum_EAdditiveBasePoseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAdditiveBasePoseType.InnerSingleton, Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAdditiveBasePoseType.InnerSingleton;
}
// End Enum EAdditiveBasePoseType

// Begin Enum AnimationCompressionFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimationCompressionFormat;
static UEnum* AnimationCompressionFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AnimationCompressionFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AnimationCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimationCompressionFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationCompressionFormat"));
	}
	return Z_Registration_Info_UEnum_AnimationCompressionFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<AnimationCompressionFormat>()
{
	return AnimationCompressionFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACF_Fixed32NoW.Name", "ACF_Fixed32NoW" },
		{ "ACF_Fixed48NoW.Name", "ACF_Fixed48NoW" },
		{ "ACF_Float32NoW.Name", "ACF_Float32NoW" },
		{ "ACF_Float96NoW.Name", "ACF_Float96NoW" },
		{ "ACF_Identity.Name", "ACF_Identity" },
		{ "ACF_IntervalFixed32NoW.Name", "ACF_IntervalFixed32NoW" },
		{ "ACF_MAX.Hidden", "" },
		{ "ACF_MAX.Name", "ACF_MAX" },
		{ "ACF_None.Name", "ACF_None" },
		{ "Comment", "/**\n* Indicates animation data compression format.\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
		{ "ToolTip", "Indicates animation data compression format." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ACF_None", (int64)ACF_None },
		{ "ACF_Float96NoW", (int64)ACF_Float96NoW },
		{ "ACF_Fixed48NoW", (int64)ACF_Fixed48NoW },
		{ "ACF_IntervalFixed32NoW", (int64)ACF_IntervalFixed32NoW },
		{ "ACF_Fixed32NoW", (int64)ACF_Fixed32NoW },
		{ "ACF_Float32NoW", (int64)ACF_Float32NoW },
		{ "ACF_Identity", (int64)ACF_Identity },
		{ "ACF_MAX", (int64)ACF_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"AnimationCompressionFormat",
	"AnimationCompressionFormat",
	Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat()
{
	if (!Z_Registration_Info_UEnum_AnimationCompressionFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimationCompressionFormat.InnerSingleton, Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AnimationCompressionFormat.InnerSingleton;
}
// End Enum AnimationCompressionFormat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERootMotionRootLock_StaticEnum, TEXT("ERootMotionRootLock"), &Z_Registration_Info_UEnum_ERootMotionRootLock, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 103583639U) },
		{ ERootMotionMode_StaticEnum, TEXT("ERootMotionMode"), &Z_Registration_Info_UEnum_ERootMotionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 408616659U) },
		{ EAdditiveBasePoseType_StaticEnum, TEXT("EAdditiveBasePoseType"), &Z_Registration_Info_UEnum_EAdditiveBasePoseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 133878346U) },
		{ AnimationCompressionFormat_StaticEnum, TEXT("AnimationCompressionFormat"), &Z_Registration_Info_UEnum_AnimationCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2097126910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h_3427719999(TEXT("/Script/Engine"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
