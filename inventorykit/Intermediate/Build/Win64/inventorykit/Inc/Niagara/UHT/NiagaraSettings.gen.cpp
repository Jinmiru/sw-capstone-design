// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraSettings.h"
#include "Niagara/Classes/NiagaraPlatformSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSettings();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSettings_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompilationMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENDISkelMesh_GpuMaxInfluences
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences;
static UEnum* ENDISkelMesh_GpuMaxInfluences_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkelMesh_GpuMaxInfluences"));
	}
	return Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_GpuMaxInfluences::Type>()
{
	return ENDISkelMesh_GpuMaxInfluences_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllowMax4.Comment", "/** Allow up to 4 bones to be sampled. */" },
		{ "AllowMax4.Name", "ENDISkelMesh_GpuMaxInfluences::AllowMax4" },
		{ "AllowMax4.ToolTip", "Allow up to 4 bones to be sampled." },
		{ "AllowMax8.Comment", "/** Allow up to 8 bones to be sampled. */" },
		{ "AllowMax8.Name", "ENDISkelMesh_GpuMaxInfluences::AllowMax8" },
		{ "AllowMax8.ToolTip", "Allow up to 8 bones to be sampled." },
		{ "Comment", "// This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush\n" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush" },
		{ "Unlimited.Comment", "/** Allow an unlimited amount of bones to be sampled. */" },
		{ "Unlimited.Name", "ENDISkelMesh_GpuMaxInfluences::Unlimited" },
		{ "Unlimited.ToolTip", "Allow an unlimited amount of bones to be sampled." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDISkelMesh_GpuMaxInfluences::AllowMax4", (int64)ENDISkelMesh_GpuMaxInfluences::AllowMax4 },
		{ "ENDISkelMesh_GpuMaxInfluences::AllowMax8", (int64)ENDISkelMesh_GpuMaxInfluences::AllowMax8 },
		{ "ENDISkelMesh_GpuMaxInfluences::Unlimited", (int64)ENDISkelMesh_GpuMaxInfluences::Unlimited },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDISkelMesh_GpuMaxInfluences",
	"ENDISkelMesh_GpuMaxInfluences::Type",
	Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences()
{
	if (!Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences.InnerSingleton;
}
// End Enum ENDISkelMesh_GpuMaxInfluences

// Begin Enum ENDISkelMesh_GpuUniformSamplingFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat;
static UEnum* ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkelMesh_GpuUniformSamplingFormat"));
	}
	return Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_GpuUniformSamplingFormat::Type>()
{
	return ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush\n" },
		{ "Full.Comment", "/** 64 bits per entry. Allow for the full int32 range of triangles (2 billion). */" },
		{ "Full.Name", "ENDISkelMesh_GpuUniformSamplingFormat::Full" },
		{ "Full.ToolTip", "64 bits per entry. Allow for the full int32 range of triangles (2 billion)." },
		{ "Limited_23_9.Comment", "/** 32 bits per entry. Allow for ~8.4 millions triangles and 9 bits of probability precision. */" },
		{ "Limited_23_9.Name", "ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9" },
		{ "Limited_23_9.ToolTip", "32 bits per entry. Allow for ~8.4 millions triangles and 9 bits of probability precision." },
		{ "Limited_24_8.Comment", "/** 32 bits per entry. Allow for ~16.7 million triangles and 8 bits of probability precision. */" },
		{ "Limited_24_8.Name", "ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8" },
		{ "Limited_24_8.ToolTip", "32 bits per entry. Allow for ~16.7 million triangles and 8 bits of probability precision." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDISkelMesh_GpuUniformSamplingFormat::Full", (int64)ENDISkelMesh_GpuUniformSamplingFormat::Full },
		{ "ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8", (int64)ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8 },
		{ "ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9", (int64)ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDISkelMesh_GpuUniformSamplingFormat",
	"ENDISkelMesh_GpuUniformSamplingFormat::Type",
	Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat()
{
	if (!Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat.InnerSingleton;
}
// End Enum ENDISkelMesh_GpuUniformSamplingFormat

// Begin Enum ENDISkelMesh_AdjacencyTriangleIndexFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat;
static UEnum* ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkelMesh_AdjacencyTriangleIndexFormat"));
	}
	return Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_AdjacencyTriangleIndexFormat::Type>()
{
	return ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush\n" },
		{ "Full.Comment", "/** 32 bits per entry. Allow for the full int32 range of triangles (2 billion). */" },
		{ "Full.Name", "ENDISkelMesh_AdjacencyTriangleIndexFormat::Full" },
		{ "Full.ToolTip", "32 bits per entry. Allow for the full int32 range of triangles (2 billion)." },
		{ "Half.Comment", "/** 16 bits per entry. Allow for half (int16) range of triangles (64k). */" },
		{ "Half.Name", "ENDISkelMesh_AdjacencyTriangleIndexFormat::Half" },
		{ "Half.ToolTip", "16 bits per entry. Allow for half (int16) range of triangles (64k)." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "This enum must match the order in NiagaraDataInterfaceSkeletalMesh.ush" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDISkelMesh_AdjacencyTriangleIndexFormat::Full", (int64)ENDISkelMesh_AdjacencyTriangleIndexFormat::Full },
		{ "ENDISkelMesh_AdjacencyTriangleIndexFormat::Half", (int64)ENDISkelMesh_AdjacencyTriangleIndexFormat::Half },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDISkelMesh_AdjacencyTriangleIndexFormat",
	"ENDISkelMesh_AdjacencyTriangleIndexFormat::Type",
	Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat()
{
	if (!Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat.InnerSingleton;
}
// End Enum ENDISkelMesh_AdjacencyTriangleIndexFormat

// Begin Enum ENiagaraDefaultRendererPixelCoverageMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode;
static UEnum* ENiagaraDefaultRendererPixelCoverageMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultRendererPixelCoverageMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultRendererPixelCoverageMode>()
{
	return ENiagaraDefaultRendererPixelCoverageMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "/** When renderer is set to automatic mode pixel coverage is disabled. */" },
		{ "Disabled.Name", "ENiagaraDefaultRendererPixelCoverageMode::Disabled" },
		{ "Disabled.ToolTip", "When renderer is set to automatic mode pixel coverage is disabled." },
		{ "Enabled.Comment", "/** When renderer is set to automatic mode pixel coverage is enabled. */" },
		{ "Enabled.Name", "ENiagaraDefaultRendererPixelCoverageMode::Enabled" },
		{ "Enabled.ToolTip", "When renderer is set to automatic mode pixel coverage is enabled." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraDefaultRendererPixelCoverageMode::Enabled", (int64)ENiagaraDefaultRendererPixelCoverageMode::Enabled },
		{ "ENiagaraDefaultRendererPixelCoverageMode::Disabled", (int64)ENiagaraDefaultRendererPixelCoverageMode::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraDefaultRendererPixelCoverageMode",
	"ENiagaraDefaultRendererPixelCoverageMode",
	Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode.InnerSingleton;
}
// End Enum ENiagaraDefaultRendererPixelCoverageMode

// Begin Enum ENiagaraDefaultSortPrecision
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision;
static UEnum* ENiagaraDefaultSortPrecision_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultSortPrecision"));
	}
	return Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultSortPrecision>()
{
	return ENiagaraDefaultSortPrecision_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "High.Comment", "/** High precision sorting, float (fp32) precision, slower but may fix sorting artifacts. */" },
		{ "High.Name", "ENiagaraDefaultSortPrecision::High" },
		{ "High.ToolTip", "High precision sorting, float (fp32) precision, slower but may fix sorting artifacts." },
		{ "Low.Comment", "/** Low precision sorting, half float (fp16) precision, faster and adequate for most cases. */" },
		{ "Low.Name", "ENiagaraDefaultSortPrecision::Low" },
		{ "Low.ToolTip", "Low precision sorting, half float (fp16) precision, faster and adequate for most cases." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraDefaultSortPrecision::Low", (int64)ENiagaraDefaultSortPrecision::Low },
		{ "ENiagaraDefaultSortPrecision::High", (int64)ENiagaraDefaultSortPrecision::High },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraDefaultSortPrecision",
	"ENiagaraDefaultSortPrecision",
	Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision.InnerSingleton;
}
// End Enum ENiagaraDefaultSortPrecision

// Begin Enum ENiagaraDefaultGpuTranslucentLatency
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency;
static UEnum* ENiagaraDefaultGpuTranslucentLatency_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultGpuTranslucentLatency"));
	}
	return Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultGpuTranslucentLatency>()
{
	return ENiagaraDefaultGpuTranslucentLatency_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Immediate.Comment", "/** Gpu simulations will always read this frames data for translucent materials. */" },
		{ "Immediate.Name", "ENiagaraDefaultGpuTranslucentLatency::Immediate" },
		{ "Immediate.ToolTip", "Gpu simulations will always read this frames data for translucent materials." },
		{ "Latent.Comment", "/** Gpu simulations will read the previous frames data if the simulation has to run in PostRenderOpaque. */" },
		{ "Latent.Name", "ENiagaraDefaultGpuTranslucentLatency::Latent" },
		{ "Latent.ToolTip", "Gpu simulations will read the previous frames data if the simulation has to run in PostRenderOpaque." },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraDefaultGpuTranslucentLatency::Immediate", (int64)ENiagaraDefaultGpuTranslucentLatency::Immediate },
		{ "ENiagaraDefaultGpuTranslucentLatency::Latent", (int64)ENiagaraDefaultGpuTranslucentLatency::Latent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraDefaultGpuTranslucentLatency",
	"ENiagaraDefaultGpuTranslucentLatency",
	Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency.InnerSingleton;
}
// End Enum ENiagaraDefaultGpuTranslucentLatency

// Begin Enum ENiagaraCompileErrorSeverity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity;
static UEnum* ENiagaraCompileErrorSeverity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCompileErrorSeverity"));
	}
	return Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCompileErrorSeverity>()
{
	return ENiagaraCompileErrorSeverity_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Name", "ENiagaraCompileErrorSeverity::Error" },
		{ "Ignore.Name", "ENiagaraCompileErrorSeverity::Ignore" },
		{ "LogOnly.Name", "ENiagaraCompileErrorSeverity::LogOnly" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "Warning.Name", "ENiagaraCompileErrorSeverity::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraCompileErrorSeverity::Ignore", (int64)ENiagaraCompileErrorSeverity::Ignore },
		{ "ENiagaraCompileErrorSeverity::LogOnly", (int64)ENiagaraCompileErrorSeverity::LogOnly },
		{ "ENiagaraCompileErrorSeverity::Warning", (int64)ENiagaraCompileErrorSeverity::Warning },
		{ "ENiagaraCompileErrorSeverity::Error", (int64)ENiagaraCompileErrorSeverity::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraCompileErrorSeverity",
	"ENiagaraCompileErrorSeverity",
	Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity.InnerSingleton;
}
// End Enum ENiagaraCompileErrorSeverity

// Begin Enum ENDICollisionQuery_AsyncGpuTraceProvider
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider;
static UEnum* ENDICollisionQuery_AsyncGpuTraceProvider_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDICollisionQuery_AsyncGpuTraceProvider"));
	}
	return Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENDICollisionQuery_AsyncGpuTraceProvider::Type>()
{
	return ENDICollisionQuery_AsyncGpuTraceProvider_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.DisplayName", "Project Default" },
		{ "Default.Name", "ENDICollisionQuery_AsyncGpuTraceProvider::Default" },
		{ "GSDF.DisplayName", "Global Signed Distance Fields" },
		{ "GSDF.Name", "ENDICollisionQuery_AsyncGpuTraceProvider::GSDF" },
		{ "HWRT.DisplayName", "HW Ray Tracing" },
		{ "HWRT.Name", "ENDICollisionQuery_AsyncGpuTraceProvider::HWRT" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "None.DisplayName", "Disabled" },
		{ "None.Name", "ENDICollisionQuery_AsyncGpuTraceProvider::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENDICollisionQuery_AsyncGpuTraceProvider::Default", (int64)ENDICollisionQuery_AsyncGpuTraceProvider::Default },
		{ "ENDICollisionQuery_AsyncGpuTraceProvider::HWRT", (int64)ENDICollisionQuery_AsyncGpuTraceProvider::HWRT },
		{ "ENDICollisionQuery_AsyncGpuTraceProvider::GSDF", (int64)ENDICollisionQuery_AsyncGpuTraceProvider::GSDF },
		{ "ENDICollisionQuery_AsyncGpuTraceProvider::None", (int64)ENDICollisionQuery_AsyncGpuTraceProvider::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENDICollisionQuery_AsyncGpuTraceProvider",
	"ENDICollisionQuery_AsyncGpuTraceProvider::Type",
	Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider()
{
	if (!Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.InnerSingleton, Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider.InnerSingleton;
}
// End Enum ENDICollisionQuery_AsyncGpuTraceProvider

// Begin Enum ENiagaraStripScriptByteCodeOption
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption;
static UEnum* ENiagaraStripScriptByteCodeOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraStripScriptByteCodeOption"));
	}
	return Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStripScriptByteCodeOption>()
{
	return ENiagaraStripScriptByteCodeOption_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.DisplayName", "No Stripping" },
		{ "Default.Name", "ENiagaraStripScriptByteCodeOption::Default" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "Strip_Experimental.DisplayName", "Strip Optimized ByteCode" },
		{ "Strip_Experimental.Name", "ENiagaraStripScriptByteCodeOption::Strip_Experimental" },
		{ "Strip_Original.DisplayName", "Strip Original ByteCode" },
		{ "Strip_Original.Name", "ENiagaraStripScriptByteCodeOption::Strip_Original" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraStripScriptByteCodeOption::Default", (int64)ENiagaraStripScriptByteCodeOption::Default },
		{ "ENiagaraStripScriptByteCodeOption::Strip_Original", (int64)ENiagaraStripScriptByteCodeOption::Strip_Original },
		{ "ENiagaraStripScriptByteCodeOption::Strip_Experimental", (int64)ENiagaraStripScriptByteCodeOption::Strip_Experimental },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraStripScriptByteCodeOption",
	"ENiagaraStripScriptByteCodeOption",
	Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption()
{
	if (!Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption.InnerSingleton;
}
// End Enum ENiagaraStripScriptByteCodeOption

// Begin Enum ENiagaraCompilationMode
#if WITH_EDITORONLY_DATA
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCompilationMode;
static UEnum* ENiagaraCompilationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCompilationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraCompilationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCompilationMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCompilationMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraCompilationMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCompilationMode>()
{
	return ENiagaraCompilationMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraCompilationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AsyncTasks.DisplayName", "Experimental - Async Compilation" },
		{ "AsyncTasks.Name", "ENiagaraCompilationMode::AsyncTasks" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "Original.DisplayName", "Standard Compilation" },
		{ "Original.Name", "ENiagaraCompilationMode::Original" },
		{ "Verify.Hidden", "" },
		{ "Verify.Name", "ENiagaraCompilationMode::Verify" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraCompilationMode::Original", (int64)ENiagaraCompilationMode::Original },
		{ "ENiagaraCompilationMode::AsyncTasks", (int64)ENiagaraCompilationMode::AsyncTasks },
		{ "ENiagaraCompilationMode::Verify", (int64)ENiagaraCompilationMode::Verify },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCompilationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraCompilationMode",
	"ENiagaraCompilationMode",
	Z_Construct_UEnum_Niagara_ENiagaraCompilationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCompilationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCompilationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraCompilationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompilationMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraCompilationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCompilationMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCompilationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraCompilationMode.InnerSingleton;
}
#endif // WITH_EDITORONLY_DATA
// End Enum ENiagaraCompilationMode

// Begin Class UNiagaraSettings
void UNiagaraSettings::StaticRegisterNativesUNiagaraSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSettings);
UClass* Z_Construct_UClass_UNiagaraSettings_NoRegister()
{
	return UNiagaraSettings::StaticClass();
}
struct Z_Construct_UClass_UNiagaraSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Niagara" },
		{ "IncludePath", "NiagaraSettings.h" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalParameterTypes_MetaData[] = {
		{ "AllowedClasses", "/Script/CoreUObject.ScriptStruct" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPayloadTypes_MetaData[] = {
		{ "AllowedClasses", "/Script/CoreUObject.ScriptStruct" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalParameterEnums_MetaData[] = {
		{ "AllowedClasses", "/Script/CoreUObject.Enum" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSystemViewportInOrbitMode_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Sets the default navigation behavior for the system preview viewport. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Sets the default navigation behavior for the system preview viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowConvertibleInputsInStack_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If true then the \"link input\" menu will also show variables of different types, as long as there is a conversion script for them. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "If true then the \"link input\" menu will also show variables of different types, as long as there is a conversion script for them." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickSimCacheCaptureFrameCount_MetaData[] = {
		{ "Category", "SimulationCaching" },
		{ "Comment", "/** The number of frames to capture when capturing a Sim Cache from the Niagara Component Details Panel. **/" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The number of frames to capture when capturing a Sim Cache from the Niagara Component Details Panel. *" },
		{ "UIMin", "1" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSystemsSupportLargeWorldCoordinates_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If true then active effects rebase the simulation positions to not lose precision. Can be turned off if not needed to skip unnecessary rebasing calculations. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "If true then active effects rebase the simulation positions to not lose precision. Can be turned off if not needed to skip unnecessary rebasing calculations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnforceStrictStackTypes_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09 If set to true, types like positions and vectors cannot be assigned to each other without an explicit conversion step.\n\x09 If false, type checks are loosened and some types can be implicitly converted into each other.\n\x09 It is recommended to not disable this when working with large world coordinates. */" },
		{ "DisplayName", "Enforce strict type checks in the graph" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "If set to true, types like positions and vectors cannot be assigned to each other without an explicit conversion step.\nIf false, type checks are loosened and some types can be implicitly converted into each other.\nIt is recommended to not disable this when working with large world coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExperimentalVMEnabled_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09 True indicates that we will generate byte code for the new optimized VM.  Control over whether the new VM will\n\x09 be used when executing NiagaraScripts will also take into account the overrides on the system (bDisableExperimentalVM) and\n\x09 the cvars fx.NiagaraScript.StripByteCodeOnLoad and fx.ForceExecVMPath.\n\x09*/" },
		{ "DisplayName", "Enable building data for Optimized VM" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "True indicates that we will generate byte code for the new optimized VM.  Control over whether the new VM will\nbe used when executing NiagaraScripts will also take into account the overrides on the system (bDisableExperimentalVM) and\nthe cvars fx.NiagaraScript.StripByteCodeOnLoad and fx.ForceExecVMPath." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStatelessEmittersEnabled_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09""Enables Lightweight Emitters experimental feature.\n\x09Statless emitters are lightweight fixed function emitters, they are not fully programmable like regular emitters and do not run scripts on the CPU.\n\x09Particle data is extrapolated per frame for the current particle age.  This means we never store particle data, we only generate it on demand.\n\x09Systems that contain only lightweight emitters and no system script modules can take advantage of a much faster path to execute.\n\x09** There is no guarantee on backwards compatability for this feature currently.  Do not ship lightweight content. **\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Lightweight Emitters (Experimental)" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Enables Lightweight Emitters experimental feature.\nStatless emitters are lightweight fixed function emitters, they are not fully programmable like regular emitters and do not run scripts on the CPU.\nParticle data is extrapolated per frame for the current particle age.  This means we never store particle data, we only generate it on demand.\nSystems that contain only lightweight emitters and no system script modules can take advantage of a much faster path to execute.\n* There is no guarantee on backwards compatability for this feature currently.  Do not ship lightweight content. **" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccurateQuatInterpolation_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If set to true, quaternion attributes will be interpolated via slerp instead of lerp in interpolated spawn scripts. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "If set to true, quaternion attributes will be interpolated via slerp instead of lerp in interpolated spawn scripts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidNamespaceWriteSeverity_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** If the Niagara compiler sees that a script writes to a namespace that is read only (e.g. a particle script writing to a system attribute), what should it do. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "If the Niagara compiler sees that a script writes to a namespace that is read only (e.g. a particle script writing to a system attribute), what should it do." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitDeltaTime_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Whether to limit the max tick delta time or not. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Whether to limit the max tick delta time or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTimePerTick_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Limits the delta time per tick for emitters to prevent simulation spikes due to frame lags. */" },
		{ "EditCondition", "bLimitDeltaTime" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Limits the delta time per tick for emitters to prevent simulation spikes due to frame lags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEffectType_MetaData[] = {
		{ "AllowedClasses", "/Script/Niagara.NiagaraEffectType" },
		{ "Category", "Niagara" },
		{ "Comment", "/** Default effect type to use for effects that don't define their own. Can be null. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Default effect type to use for effects that don't define their own. Can be null." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredEffectType_MetaData[] = {
		{ "AllowedClasses", "/Script/Niagara.NiagaraEffectType" },
		{ "Category", "Niagara" },
		{ "Comment", "/** Specifies a required effect type which must be used for effects in the project. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Specifies a required effect type which must be used for effects in the project." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreateActorFromSystemWithNoEffectType_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Should we allow placing a Niagara System in the editor into a level which has no effect type assigned? */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Should we allow placing a Niagara System in the editor into a level which has no effect type assigned?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionPinTypeColor_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Position pin type color. The other pin colors are defined in the general editor settings. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Position pin type color. The other pin colors are defined in the general editor settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByteCodeStripOption_MetaData[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/**\n\x09 Controls how byte code will be stripped when loading assets that have multiple sets of bytecode (i.e. optimized).\n\x09 */" },
		{ "DisplayName", "Option for how to strip bytecode" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls how byte code will be stripped when loading assets that have multiple sets of bytecode (i.e. optimized)." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompilationMode_MetaData[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Option for how to compile Niagara scripts" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevels_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The quality levels Niagara uses. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The quality levels Niagara uses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentRendererWarningsPerClass_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** Info texts that the component renderer shows the user depending on the selected component class. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Info texts that the component renderer shows the user depending on the selected component class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRenderTargetFormat_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default render target format used by all Niagara Render Target Data Interfaces unless overridden. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default render target format used by all Niagara Render Target Data Interfaces unless overridden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGridFormat_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default buffer format used by all Niagara Grid Data Interfaces unless overridden. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default buffer format used by all Niagara Grid Data Interfaces unless overridden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRendererMotionVectorSetting_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default setting for motion vectors in Niagara renderers */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default setting for motion vectors in Niagara renderers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPixelCoverageMode_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default setting for pixel coverage mode when automatic is set on the Niagara Renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default setting for pixel coverage mode when automatic is set on the Niagara Renderer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSortPrecision_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default setting for sorting precision when automatic is set on the Niagara Renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default setting for sorting precision when automatic is set on the Niagara Renderer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGpuTranslucentLatency_MetaData[] = {
		{ "Category", "Renderer" },
		{ "Comment", "/** The default setting for Gpu simulation translucent draw latency. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default setting for Gpu simulation translucent draw latency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLightInverseExposureBlend_MetaData[] = {
		{ "Category", "LightRenderer" },
		{ "Comment", "/** The default InverseExposureBlend used for the light renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The default InverseExposureBlend used for the light renderer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_SupportReadingDeformedGeometry_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "Comment", "/* \n\x09When enabled we will read deformed geometry if available, i.e. data from the deformed graph / skin cache\n\x09When disable we will only read from the default vertex data which does not include morph targets, skin, etc.\n\x09""Changing this setting requires restarting the editor.\n\x09Note: Enabling this does add additional branches to the skel mesh data reading.\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Support Reading Deformed Geometry" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "When enabled we will read deformed geometry if available, i.e. data from the deformed graph / skin cache\nWhen disable we will only read from the default vertex data which does not include morph targets, skin, etc.\nChanging this setting requires restarting the editor.\nNote: Enabling this does add additional branches to the skel mesh data reading." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_Support16BitIndexWeight_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Support 16 bit index & weights" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Enabled support for 16 bit bone index & bone weight, optional to reduce shader complexity.  Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_GpuMaxInfluences_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Gpu Max Bone Influences" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls the maximum number of influences we allow the Skeletal Mesh Data Interface to use on the GPU.  Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Gpu Uniform Sampling Format" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls the format used for uniform sampling on the GPU.  Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData[] = {
		{ "Category", "SkeletalMeshDI" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Adjacency Triangle Index Format" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Controls the format used for specifying triangle indexes in adjacency buffers.  Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDIStaticMesh_AllowDistanceFields_MetaData[] = {
		{ "Category", "StaticMeshDI" },
		{ "Comment", "/**\n\x09When enabled the static mesh data interface is allowed to sample from the distance field data (if present) on the GPU.\n\x09""Enabling this feature will move all systems that contain static mesh samples into PostRenderOpaque tick group regardless of the features used.\n\x09""Changing this setting requires restarting the editor.\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Allow Distance Fields (Experimental)" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "When enabled the static mesh data interface is allowed to sample from the distance field data (if present) on the GPU.\nEnabling this feature will move all systems that contain static mesh samples into PostRenderOpaque tick group regardless of the features used.\nChanging this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_MetaData[] = {
		{ "Category", "AsyncGpuTraceDI" },
		{ "Comment", "/** \n\x09""Defines how traces tagged as 'Project Default' will be interpreted when using the AsyncGpuTrace data interface.\n\x09The system will go through (starting at element 0) to find the first provider that is available.\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Trace Provider Priorities (Experimental)" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Defines how traces tagged as 'Project Default' will be interpreted when using the AsyncGpuTrace data interface.\nThe system will go through (starting at element 0) to find the first provider that is available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimCacheAuxiliaryFileBasePath_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09""Base path for auxiliary files written out during the generation of a Niagara Sim Cache (ie: volume files).\n\x09*/" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Sim Cache Auxiliary File Base Path" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Base path for auxiliary files written out during the generation of a Niagara Sim Cache (ie: volume files)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimCacheMaxCPUMemoryVolumetrics_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09Max memory in megabytes for total CPU memory for cached volumetric data\n\x09*/" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Sim Cache Max CPU Memory For Volumetrics" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Max memory in megabytes for total CPU memory for cached volumetric data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSetRedirects_MetaData[] = {
		{ "Category", "Scalability" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalParameterTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalParameterTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPayloadTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPayloadTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalParameterEnums_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalParameterEnums;
	static void NewProp_bSystemViewportInOrbitMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemViewportInOrbitMode;
	static void NewProp_bShowConvertibleInputsInStack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConvertibleInputsInStack;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuickSimCacheCaptureFrameCount;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bSystemsSupportLargeWorldCoordinates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemsSupportLargeWorldCoordinates;
	static void NewProp_bEnforceStrictStackTypes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnforceStrictStackTypes;
	static void NewProp_bExperimentalVMEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExperimentalVMEnabled;
	static void NewProp_bStatelessEmittersEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStatelessEmittersEnabled;
	static void NewProp_bAccurateQuatInterpolation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccurateQuatInterpolation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InvalidNamespaceWriteSeverity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InvalidNamespaceWriteSeverity;
	static void NewProp_bLimitDeltaTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitDeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTimePerTick;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEffectType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredEffectType;
	static void NewProp_bAllowCreateActorFromSystemWithNoEffectType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreateActorFromSystemWithNoEffectType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionPinTypeColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ByteCodeStripOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ByteCodeStripOption;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompilationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CompilationMode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_QualityLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QualityLevels;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ComponentRendererWarningsPerClass_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentRendererWarningsPerClass_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ComponentRendererWarningsPerClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultRenderTargetFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultGridFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultGridFormat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultRendererMotionVectorSetting_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultRendererMotionVectorSetting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultPixelCoverageMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultPixelCoverageMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSortPrecision_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultSortPrecision;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultGpuTranslucentLatency_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultGpuTranslucentLatency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultLightInverseExposureBlend;
	static void NewProp_NDISkelMesh_SupportReadingDeformedGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NDISkelMesh_SupportReadingDeformedGeometry;
	static void NewProp_NDISkelMesh_Support16BitIndexWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NDISkelMesh_Support16BitIndexWeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NDISkelMesh_GpuMaxInfluences;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NDISkelMesh_GpuUniformSamplingFormat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat;
	static void NewProp_NDIStaticMesh_AllowDistanceFields_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NDIStaticMesh_AllowDistanceFields;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SimCacheAuxiliaryFileBasePath;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SimCacheMaxCPUMemoryVolumetrics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSetRedirects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformSetRedirects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_Inner = { "AdditionalParameterTypes", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes = { "AdditionalParameterTypes", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, AdditionalParameterTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalParameterTypes_MetaData), NewProp_AdditionalParameterTypes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_Inner = { "AdditionalPayloadTypes", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes = { "AdditionalPayloadTypes", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, AdditionalPayloadTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalPayloadTypes_MetaData), NewProp_AdditionalPayloadTypes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_Inner = { "AdditionalParameterEnums", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums = { "AdditionalParameterEnums", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, AdditionalParameterEnums), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalParameterEnums_MetaData), NewProp_AdditionalParameterEnums_MetaData) };
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->bSystemViewportInOrbitMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode = { "bSystemViewportInOrbitMode", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSystemViewportInOrbitMode_MetaData), NewProp_bSystemViewportInOrbitMode_MetaData) };
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->bShowConvertibleInputsInStack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack = { "bShowConvertibleInputsInStack", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowConvertibleInputsInStack_MetaData), NewProp_bShowConvertibleInputsInStack_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QuickSimCacheCaptureFrameCount = { "QuickSimCacheCaptureFrameCount", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, QuickSimCacheCaptureFrameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickSimCacheCaptureFrameCount_MetaData), NewProp_QuickSimCacheCaptureFrameCount_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->bSystemsSupportLargeWorldCoordinates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates = { "bSystemsSupportLargeWorldCoordinates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSystemsSupportLargeWorldCoordinates_MetaData), NewProp_bSystemsSupportLargeWorldCoordinates_MetaData) };
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->bEnforceStrictStackTypes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes = { "bEnforceStrictStackTypes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnforceStrictStackTypes_MetaData), NewProp_bEnforceStrictStackTypes_MetaData) };
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->bExperimentalVMEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled = { "bExperimentalVMEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExperimentalVMEnabled_MetaData), NewProp_bExperimentalVMEnabled_MetaData) };
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bStatelessEmittersEnabled_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->bStatelessEmittersEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bStatelessEmittersEnabled = { "bStatelessEmittersEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bStatelessEmittersEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStatelessEmittersEnabled_MetaData), NewProp_bStatelessEmittersEnabled_MetaData) };
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bAccurateQuatInterpolation_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->bAccurateQuatInterpolation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bAccurateQuatInterpolation = { "bAccurateQuatInterpolation", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bAccurateQuatInterpolation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccurateQuatInterpolation_MetaData), NewProp_bAccurateQuatInterpolation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_InvalidNamespaceWriteSeverity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_InvalidNamespaceWriteSeverity = { "InvalidNamespaceWriteSeverity", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, InvalidNamespaceWriteSeverity), Z_Construct_UEnum_Niagara_ENiagaraCompileErrorSeverity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidNamespaceWriteSeverity_MetaData), NewProp_InvalidNamespaceWriteSeverity_MetaData) }; // 2447914256
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bLimitDeltaTime_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->bLimitDeltaTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bLimitDeltaTime = { "bLimitDeltaTime", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bLimitDeltaTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitDeltaTime_MetaData), NewProp_bLimitDeltaTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_MaxDeltaTimePerTick = { "MaxDeltaTimePerTick", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, MaxDeltaTimePerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeltaTimePerTick_MetaData), NewProp_MaxDeltaTimePerTick_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType = { "DefaultEffectType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultEffectType), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultEffectType_MetaData), NewProp_DefaultEffectType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_RequiredEffectType = { "RequiredEffectType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, RequiredEffectType), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredEffectType_MetaData), NewProp_RequiredEffectType_MetaData) };
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bAllowCreateActorFromSystemWithNoEffectType_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->bAllowCreateActorFromSystemWithNoEffectType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bAllowCreateActorFromSystemWithNoEffectType = { "bAllowCreateActorFromSystemWithNoEffectType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bAllowCreateActorFromSystemWithNoEffectType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCreateActorFromSystemWithNoEffectType_MetaData), NewProp_bAllowCreateActorFromSystemWithNoEffectType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PositionPinTypeColor = { "PositionPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, PositionPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionPinTypeColor_MetaData), NewProp_PositionPinTypeColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ByteCodeStripOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ByteCodeStripOption = { "ByteCodeStripOption", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, ByteCodeStripOption), Z_Construct_UEnum_Niagara_ENiagaraStripScriptByteCodeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByteCodeStripOption_MetaData), NewProp_ByteCodeStripOption_MetaData) }; // 607824994
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_CompilationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_CompilationMode = { "CompilationMode", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, CompilationMode), Z_Construct_UEnum_Niagara_ENiagaraCompilationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompilationMode_MetaData), NewProp_CompilationMode_MetaData) }; // 810742757
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_Inner = { "QualityLevels", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels = { "QualityLevels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, QualityLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QualityLevels_MetaData), NewProp_QualityLevels_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_ValueProp = { "ComponentRendererWarningsPerClass", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_Key_KeyProp = { "ComponentRendererWarningsPerClass_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass = { "ComponentRendererWarningsPerClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, ComponentRendererWarningsPerClass), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentRendererWarningsPerClass_MetaData), NewProp_ComponentRendererWarningsPerClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat = { "DefaultRenderTargetFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultRenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRenderTargetFormat_MetaData), NewProp_DefaultRenderTargetFormat_MetaData) }; // 338846453
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat = { "DefaultGridFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultGridFormat), Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGridFormat_MetaData), NewProp_DefaultGridFormat_MetaData) }; // 3847478653
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting = { "DefaultRendererMotionVectorSetting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultRendererMotionVectorSetting), Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRendererMotionVectorSetting_MetaData), NewProp_DefaultRendererMotionVectorSetting_MetaData) }; // 4218560607
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode = { "DefaultPixelCoverageMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultPixelCoverageMode), Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererPixelCoverageMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPixelCoverageMode_MetaData), NewProp_DefaultPixelCoverageMode_MetaData) }; // 2249355112
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision = { "DefaultSortPrecision", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultSortPrecision), Z_Construct_UEnum_Niagara_ENiagaraDefaultSortPrecision, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSortPrecision_MetaData), NewProp_DefaultSortPrecision_MetaData) }; // 1779532442
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency = { "DefaultGpuTranslucentLatency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultGpuTranslucentLatency), Z_Construct_UEnum_Niagara_ENiagaraDefaultGpuTranslucentLatency, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGpuTranslucentLatency_MetaData), NewProp_DefaultGpuTranslucentLatency_MetaData) }; // 2146392898
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultLightInverseExposureBlend = { "DefaultLightInverseExposureBlend", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultLightInverseExposureBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLightInverseExposureBlend_MetaData), NewProp_DefaultLightInverseExposureBlend_MetaData) };
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_SupportReadingDeformedGeometry_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->NDISkelMesh_SupportReadingDeformedGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_SupportReadingDeformedGeometry = { "NDISkelMesh_SupportReadingDeformedGeometry", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_SupportReadingDeformedGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDISkelMesh_SupportReadingDeformedGeometry_MetaData), NewProp_NDISkelMesh_SupportReadingDeformedGeometry_MetaData) };
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_Support16BitIndexWeight_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->NDISkelMesh_Support16BitIndexWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_Support16BitIndexWeight = { "NDISkelMesh_Support16BitIndexWeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_Support16BitIndexWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDISkelMesh_Support16BitIndexWeight_MetaData), NewProp_NDISkelMesh_Support16BitIndexWeight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences = { "NDISkelMesh_GpuMaxInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, NDISkelMesh_GpuMaxInfluences), Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuMaxInfluences, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDISkelMesh_GpuMaxInfluences_MetaData), NewProp_NDISkelMesh_GpuMaxInfluences_MetaData) }; // 718804386
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat = { "NDISkelMesh_GpuUniformSamplingFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, NDISkelMesh_GpuUniformSamplingFormat), Z_Construct_UEnum_Niagara_ENDISkelMesh_GpuUniformSamplingFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData), NewProp_NDISkelMesh_GpuUniformSamplingFormat_MetaData) }; // 2686905577
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat = { "NDISkelMesh_AdjacencyTriangleIndexFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, NDISkelMesh_AdjacencyTriangleIndexFormat), Z_Construct_UEnum_Niagara_ENDISkelMesh_AdjacencyTriangleIndexFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData), NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat_MetaData) }; // 514828351
void Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields_SetBit(void* Obj)
{
	((UNiagaraSettings*)Obj)->NDIStaticMesh_AllowDistanceFields = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields = { "NDIStaticMesh_AllowDistanceFields", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraSettings), &Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDIStaticMesh_AllowDistanceFields_MetaData), NewProp_NDIStaticMesh_AllowDistanceFields_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_Inner = { "NDICollisionQuery_AsyncGpuTraceProviderOrder", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Niagara_ENDICollisionQuery_AsyncGpuTraceProvider, METADATA_PARAMS(0, nullptr) }; // 1848429211
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder = { "NDICollisionQuery_AsyncGpuTraceProviderOrder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, NDICollisionQuery_AsyncGpuTraceProviderOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_MetaData), NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_MetaData) }; // 1848429211
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheAuxiliaryFileBasePath = { "SimCacheAuxiliaryFileBasePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, SimCacheAuxiliaryFileBasePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimCacheAuxiliaryFileBasePath_MetaData), NewProp_SimCacheAuxiliaryFileBasePath_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheMaxCPUMemoryVolumetrics = { "SimCacheMaxCPUMemoryVolumetrics", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, SimCacheMaxCPUMemoryVolumetrics), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimCacheMaxCPUMemoryVolumetrics_MetaData), NewProp_SimCacheMaxCPUMemoryVolumetrics_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects_Inner = { "PlatformSetRedirects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraPlatformSetRedirect, METADATA_PARAMS(0, nullptr) }; // 1609687520
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects = { "PlatformSetRedirects", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraSettings, PlatformSetRedirects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformSetRedirects_MetaData), NewProp_PlatformSetRedirects_MetaData) }; // 1609687520
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemViewportInOrbitMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bShowConvertibleInputsInStack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QuickSimCacheCaptureFrameCount,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bSystemsSupportLargeWorldCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bEnforceStrictStackTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bExperimentalVMEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bStatelessEmittersEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bAccurateQuatInterpolation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_InvalidNamespaceWriteSeverity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_InvalidNamespaceWriteSeverity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bLimitDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_MaxDeltaTimePerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_RequiredEffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_bAllowCreateActorFromSystemWithNoEffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PositionPinTypeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ByteCodeStripOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ByteCodeStripOption,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_CompilationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_CompilationMode,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_ComponentRendererWarningsPerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRenderTargetFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGridFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultRendererMotionVectorSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultPixelCoverageMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultSortPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultGpuTranslucentLatency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultLightInverseExposureBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_SupportReadingDeformedGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_Support16BitIndexWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuMaxInfluences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_GpuUniformSamplingFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDISkelMesh_AdjacencyTriangleIndexFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDIStaticMesh_AllowDistanceFields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_NDICollisionQuery_AsyncGpuTraceProviderOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheAuxiliaryFileBasePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_SimCacheMaxCPUMemoryVolumetrics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_PlatformSetRedirects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSettings_Statics::ClassParams = {
	&UNiagaraSettings::StaticClass,
	"Niagara",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraSettings()
{
	if (!Z_Registration_Info_UClass_UNiagaraSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSettings.OuterSingleton, Z_Construct_UClass_UNiagaraSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraSettings.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraSettings>()
{
	return UNiagaraSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSettings);
UNiagaraSettings::~UNiagaraSettings() {}
// End Class UNiagaraSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENDISkelMesh_GpuMaxInfluences_StaticEnum, TEXT("ENDISkelMesh_GpuMaxInfluences"), &Z_Registration_Info_UEnum_ENDISkelMesh_GpuMaxInfluences, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 718804386U) },
		{ ENDISkelMesh_GpuUniformSamplingFormat_StaticEnum, TEXT("ENDISkelMesh_GpuUniformSamplingFormat"), &Z_Registration_Info_UEnum_ENDISkelMesh_GpuUniformSamplingFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2686905577U) },
		{ ENDISkelMesh_AdjacencyTriangleIndexFormat_StaticEnum, TEXT("ENDISkelMesh_AdjacencyTriangleIndexFormat"), &Z_Registration_Info_UEnum_ENDISkelMesh_AdjacencyTriangleIndexFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 514828351U) },
		{ ENiagaraDefaultRendererPixelCoverageMode_StaticEnum, TEXT("ENiagaraDefaultRendererPixelCoverageMode"), &Z_Registration_Info_UEnum_ENiagaraDefaultRendererPixelCoverageMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2249355112U) },
		{ ENiagaraDefaultSortPrecision_StaticEnum, TEXT("ENiagaraDefaultSortPrecision"), &Z_Registration_Info_UEnum_ENiagaraDefaultSortPrecision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1779532442U) },
		{ ENiagaraDefaultGpuTranslucentLatency_StaticEnum, TEXT("ENiagaraDefaultGpuTranslucentLatency"), &Z_Registration_Info_UEnum_ENiagaraDefaultGpuTranslucentLatency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2146392898U) },
		{ ENiagaraCompileErrorSeverity_StaticEnum, TEXT("ENiagaraCompileErrorSeverity"), &Z_Registration_Info_UEnum_ENiagaraCompileErrorSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2447914256U) },
		{ ENDICollisionQuery_AsyncGpuTraceProvider_StaticEnum, TEXT("ENDICollisionQuery_AsyncGpuTraceProvider"), &Z_Registration_Info_UEnum_ENDICollisionQuery_AsyncGpuTraceProvider, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1848429211U) },
		{ ENiagaraStripScriptByteCodeOption_StaticEnum, TEXT("ENiagaraStripScriptByteCodeOption"), &Z_Registration_Info_UEnum_ENiagaraStripScriptByteCodeOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 607824994U) },
#if WITH_EDITORONLY_DATA
		{ ENiagaraCompilationMode_StaticEnum, TEXT("ENiagaraCompilationMode"), &Z_Registration_Info_UEnum_ENiagaraCompilationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 810742757U) },
#endif // WITH_EDITORONLY_DATA
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSettings, UNiagaraSettings::StaticClass, TEXT("UNiagaraSettings"), &Z_Registration_Info_UClass_UNiagaraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSettings), 1181479814U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_253016050(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
