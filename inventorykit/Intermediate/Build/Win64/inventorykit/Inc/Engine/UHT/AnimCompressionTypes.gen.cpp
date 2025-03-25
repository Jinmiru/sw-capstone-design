// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/Animation/AnimCompressionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompressionTypes() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationErrorStats();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum AnimationKeyFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimationKeyFormat;
static UEnum* AnimationKeyFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimationKeyFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationKeyFormat"));
	}
	return Z_Registration_Info_UEnum_AnimationKeyFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<AnimationKeyFormat>()
{
	return AnimationKeyFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AKF_ConstantKeyLerp.Name", "AKF_ConstantKeyLerp" },
		{ "AKF_MAX.Name", "AKF_MAX" },
		{ "AKF_PerTrackCompression.Name", "AKF_PerTrackCompression" },
		{ "AKF_VariableKeyLerp.Name", "AKF_VariableKeyLerp" },
		{ "Comment", "/**\n * Indicates animation data key format.\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
		{ "ToolTip", "Indicates animation data key format." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AKF_ConstantKeyLerp", (int64)AKF_ConstantKeyLerp },
		{ "AKF_VariableKeyLerp", (int64)AKF_VariableKeyLerp },
		{ "AKF_PerTrackCompression", (int64)AKF_PerTrackCompression },
		{ "AKF_MAX", (int64)AKF_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"AnimationKeyFormat",
	"AnimationKeyFormat",
	Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_AnimationKeyFormat()
{
	if (!Z_Registration_Info_UEnum_AnimationKeyFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimationKeyFormat.InnerSingleton, Z_Construct_UEnum_Engine_AnimationKeyFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_AnimationKeyFormat.InnerSingleton;
}
// End Enum AnimationKeyFormat

// Begin ScriptStruct FAnimationErrorStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationErrorStats;
class UScriptStruct* FAnimationErrorStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationErrorStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationErrorStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationErrorStats, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationErrorStats"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationErrorStats.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationErrorStats>()
{
	return FAnimationErrorStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationErrorStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* A set of error statistics for an animation, gathered by FAnimationUtils::ComputeCompressionError\n*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
		{ "ToolTip", "A set of error statistics for an animation, gathered by FAnimationUtils::ComputeCompressionError" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationErrorStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimationErrorStats",
	nullptr,
	0,
	sizeof(FAnimationErrorStats),
	alignof(FAnimationErrorStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationErrorStats()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationErrorStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationErrorStats.InnerSingleton, Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationErrorStats.InnerSingleton;
}
// End ScriptStruct FAnimationErrorStats

// Begin ScriptStruct FAnimCompressedCurveIndexedName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimCompressedCurveIndexedName;
class UScriptStruct* FAnimCompressedCurveIndexedName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimCompressedCurveIndexedName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimCompressedCurveIndexedName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimCompressedCurveIndexedName"));
	}
	return Z_Registration_Info_UScriptStruct_AnimCompressedCurveIndexedName.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimCompressedCurveIndexedName>()
{
	return FAnimCompressedCurveIndexedName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
		{ "Comment", "// Name of the curve, used for sorting\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimCompressionTypes.h" },
		{ "ToolTip", "Name of the curve, used for sorting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimCompressedCurveIndexedName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimCompressedCurveIndexedName, CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_MetaData), NewProp_CurveName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::NewProp_CurveName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AnimCompressedCurveIndexedName",
	Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::PropPointers),
	sizeof(FAnimCompressedCurveIndexedName),
	alignof(FAnimCompressedCurveIndexedName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName()
{
	if (!Z_Registration_Info_UScriptStruct_AnimCompressedCurveIndexedName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimCompressedCurveIndexedName.InnerSingleton, Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimCompressedCurveIndexedName.InnerSingleton;
}
// End ScriptStruct FAnimCompressedCurveIndexedName

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ AnimationKeyFormat_StaticEnum, TEXT("AnimationKeyFormat"), &Z_Registration_Info_UEnum_AnimationKeyFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3995964946U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimationErrorStats::StaticStruct, Z_Construct_UScriptStruct_FAnimationErrorStats_Statics::NewStructOps, TEXT("AnimationErrorStats"), &Z_Registration_Info_UScriptStruct_AnimationErrorStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationErrorStats), 630094007U) },
		{ FAnimCompressedCurveIndexedName::StaticStruct, Z_Construct_UScriptStruct_FAnimCompressedCurveIndexedName_Statics::NewStructOps, TEXT("AnimCompressedCurveIndexedName"), &Z_Registration_Info_UScriptStruct_AnimCompressedCurveIndexedName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimCompressedCurveIndexedName), 224439112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_2451776578(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimCompressionTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
