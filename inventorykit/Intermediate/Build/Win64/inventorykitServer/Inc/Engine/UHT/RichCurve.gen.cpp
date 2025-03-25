// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichCurve() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveCompressionFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompressedRichCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRealCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ERichCurveTangentMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERichCurveTangentMode;
static UEnum* ERichCurveTangentMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERichCurveTangentMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERichCurveTangentMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveTangentMode"));
	}
	return Z_Registration_Info_UEnum_ERichCurveTangentMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERichCurveTangentMode>()
{
	return ERichCurveTangentMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERichCurveTangentMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** If using RCIM_Cubic, this enum describes how the tangents should be controlled in editor. */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "RCTM_Auto.Comment", "/** Automatically calculates tangents to create smooth curves between values. */" },
		{ "RCTM_Auto.DisplayName", "Auto" },
		{ "RCTM_Auto.Name", "RCTM_Auto" },
		{ "RCTM_Auto.ToolTip", "Automatically calculates tangents to create smooth curves between values." },
		{ "RCTM_Break.Comment", "/** User specifies the tangent as two separate broken tangents on each side of the key which can allow a sharp change in evaluation before or after. */" },
		{ "RCTM_Break.DisplayName", "Break" },
		{ "RCTM_Break.Name", "RCTM_Break" },
		{ "RCTM_Break.ToolTip", "User specifies the tangent as two separate broken tangents on each side of the key which can allow a sharp change in evaluation before or after." },
		{ "RCTM_None.Comment", "/** No tangents. */" },
		{ "RCTM_None.Hidden", "" },
		{ "RCTM_None.Name", "RCTM_None" },
		{ "RCTM_None.ToolTip", "No tangents." },
		{ "RCTM_SmartAuto.Comment", "/** New Auto tangent that creates smoother curves than Auto. */" },
		{ "RCTM_SmartAuto.DisplayName", "Smart Auto" },
		{ "RCTM_SmartAuto.Name", "RCTM_SmartAuto" },
		{ "RCTM_SmartAuto.ToolTip", "New Auto tangent that creates smoother curves than Auto." },
		{ "RCTM_User.Comment", "/** User specifies the tangent as a unified tangent where the two tangents are locked to each other, presenting a consistent curve before and after. */" },
		{ "RCTM_User.DisplayName", "User" },
		{ "RCTM_User.Name", "RCTM_User" },
		{ "RCTM_User.ToolTip", "User specifies the tangent as a unified tangent where the two tangents are locked to each other, presenting a consistent curve before and after." },
		{ "ToolTip", "If using RCIM_Cubic, this enum describes how the tangents should be controlled in editor." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RCTM_Auto", (int64)RCTM_Auto },
		{ "RCTM_User", (int64)RCTM_User },
		{ "RCTM_Break", (int64)RCTM_Break },
		{ "RCTM_None", (int64)RCTM_None },
		{ "RCTM_SmartAuto", (int64)RCTM_SmartAuto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERichCurveTangentMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERichCurveTangentMode",
	"ERichCurveTangentMode",
	Z_Construct_UEnum_Engine_ERichCurveTangentMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveTangentMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveTangentMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERichCurveTangentMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode()
{
	if (!Z_Registration_Info_UEnum_ERichCurveTangentMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERichCurveTangentMode.InnerSingleton, Z_Construct_UEnum_Engine_ERichCurveTangentMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERichCurveTangentMode.InnerSingleton;
}
// End Enum ERichCurveTangentMode

// Begin Enum ERichCurveTangentWeightMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERichCurveTangentWeightMode;
static UEnum* ERichCurveTangentWeightMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveTangentWeightMode"));
	}
	return Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERichCurveTangentWeightMode>()
{
	return ERichCurveTangentWeightMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enumerates tangent weight modes. */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "RCTWM_WeightedArrive.Comment", "/** Only take the arrival tangent weight into account for evaluation. */" },
		{ "RCTWM_WeightedArrive.DisplayName", "Arrive" },
		{ "RCTWM_WeightedArrive.Name", "RCTWM_WeightedArrive" },
		{ "RCTWM_WeightedArrive.ToolTip", "Only take the arrival tangent weight into account for evaluation." },
		{ "RCTWM_WeightedBoth.Comment", "/** Take both the arrival and leaving tangent weights into account for evaluation. */" },
		{ "RCTWM_WeightedBoth.DisplayName", "Both" },
		{ "RCTWM_WeightedBoth.Name", "RCTWM_WeightedBoth" },
		{ "RCTWM_WeightedBoth.ToolTip", "Take both the arrival and leaving tangent weights into account for evaluation." },
		{ "RCTWM_WeightedLeave.Comment", "/** Only take the leaving tangent weight into account for evaluation. */" },
		{ "RCTWM_WeightedLeave.DisplayName", "Leave" },
		{ "RCTWM_WeightedLeave.Name", "RCTWM_WeightedLeave" },
		{ "RCTWM_WeightedLeave.ToolTip", "Only take the leaving tangent weight into account for evaluation." },
		{ "RCTWM_WeightedNone.Comment", "/** Don't take tangent weights into account. */" },
		{ "RCTWM_WeightedNone.DisplayName", "None" },
		{ "RCTWM_WeightedNone.Name", "RCTWM_WeightedNone" },
		{ "RCTWM_WeightedNone.ToolTip", "Don't take tangent weights into account." },
		{ "ToolTip", "Enumerates tangent weight modes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RCTWM_WeightedNone", (int64)RCTWM_WeightedNone },
		{ "RCTWM_WeightedArrive", (int64)RCTWM_WeightedArrive },
		{ "RCTWM_WeightedLeave", (int64)RCTWM_WeightedLeave },
		{ "RCTWM_WeightedBoth", (int64)RCTWM_WeightedBoth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERichCurveTangentWeightMode",
	"ERichCurveTangentWeightMode",
	Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode()
{
	if (!Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.InnerSingleton, Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERichCurveTangentWeightMode.InnerSingleton;
}
// End Enum ERichCurveTangentWeightMode

// Begin Enum ERichCurveCompressionFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERichCurveCompressionFormat;
static UEnum* ERichCurveCompressionFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERichCurveCompressionFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERichCurveCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveCompressionFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveCompressionFormat"));
	}
	return Z_Registration_Info_UEnum_ERichCurveCompressionFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERichCurveCompressionFormat>()
{
	return ERichCurveCompressionFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumerates curve compression options. */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "RCCF_Constant.Comment", "/** All keys use constant interpolation */" },
		{ "RCCF_Constant.DisplayName", "Constant" },
		{ "RCCF_Constant.Name", "RCCF_Constant" },
		{ "RCCF_Constant.ToolTip", "All keys use constant interpolation" },
		{ "RCCF_Cubic.Comment", "/** All keys use cubic interpolation */" },
		{ "RCCF_Cubic.DisplayName", "Cubic" },
		{ "RCCF_Cubic.Name", "RCCF_Cubic" },
		{ "RCCF_Cubic.ToolTip", "All keys use cubic interpolation" },
		{ "RCCF_Empty.Comment", "/** No keys are present */" },
		{ "RCCF_Empty.DisplayName", "Empty" },
		{ "RCCF_Empty.Name", "RCCF_Empty" },
		{ "RCCF_Empty.ToolTip", "No keys are present" },
		{ "RCCF_Linear.Comment", "/** All keys use linear interpolation */" },
		{ "RCCF_Linear.DisplayName", "Linear" },
		{ "RCCF_Linear.Name", "RCCF_Linear" },
		{ "RCCF_Linear.ToolTip", "All keys use linear interpolation" },
		{ "RCCF_Mixed.Comment", "/** Keys use mixed interpolation modes */" },
		{ "RCCF_Mixed.DisplayName", "Mixed" },
		{ "RCCF_Mixed.Name", "RCCF_Mixed" },
		{ "RCCF_Mixed.ToolTip", "Keys use mixed interpolation modes" },
		{ "RCCF_Weighted.Comment", "/** Keys use weighted interpolation modes */" },
		{ "RCCF_Weighted.DisplayName", "Weighted" },
		{ "RCCF_Weighted.Name", "RCCF_Weighted" },
		{ "RCCF_Weighted.ToolTip", "Keys use weighted interpolation modes" },
		{ "ToolTip", "Enumerates curve compression options." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RCCF_Empty", (int64)RCCF_Empty },
		{ "RCCF_Constant", (int64)RCCF_Constant },
		{ "RCCF_Linear", (int64)RCCF_Linear },
		{ "RCCF_Cubic", (int64)RCCF_Cubic },
		{ "RCCF_Mixed", (int64)RCCF_Mixed },
		{ "RCCF_Weighted", (int64)RCCF_Weighted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERichCurveCompressionFormat",
	"ERichCurveCompressionFormat",
	Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERichCurveCompressionFormat()
{
	if (!Z_Registration_Info_UEnum_ERichCurveCompressionFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERichCurveCompressionFormat.InnerSingleton, Z_Construct_UEnum_Engine_ERichCurveCompressionFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERichCurveCompressionFormat.InnerSingleton;
}
// End Enum ERichCurveCompressionFormat

// Begin Enum ERichCurveKeyTimeCompressionFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat;
static UEnum* ERichCurveKeyTimeCompressionFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERichCurveKeyTimeCompressionFormat"));
	}
	return Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ERichCurveKeyTimeCompressionFormat>()
{
	return ERichCurveKeyTimeCompressionFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumerates key time compression options. */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "RCKTCF_float32.Comment", "/** Key time uses full precision */" },
		{ "RCKTCF_float32.DisplayName", "float32" },
		{ "RCKTCF_float32.Name", "RCKTCF_float32" },
		{ "RCKTCF_float32.ToolTip", "Key time uses full precision" },
		{ "RCKTCF_uint16.Comment", "/** Key time is quantized to 16 bits */" },
		{ "RCKTCF_uint16.DisplayName", "uint16" },
		{ "RCKTCF_uint16.Name", "RCKTCF_uint16" },
		{ "RCKTCF_uint16.ToolTip", "Key time is quantized to 16 bits" },
		{ "ToolTip", "Enumerates key time compression options." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RCKTCF_uint16", (int64)RCKTCF_uint16 },
		{ "RCKTCF_float32", (int64)RCKTCF_float32 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ERichCurveKeyTimeCompressionFormat",
	"ERichCurveKeyTimeCompressionFormat",
	Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat()
{
	if (!Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.InnerSingleton, Z_Construct_UEnum_Engine_ERichCurveKeyTimeCompressionFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat.InnerSingleton;
}
// End Enum ERichCurveKeyTimeCompressionFormat

// Begin ScriptStruct FRichCurveKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RichCurveKey;
class UScriptStruct* FRichCurveKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RichCurveKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RichCurveKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichCurveKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RichCurveKey"));
	}
	return Z_Registration_Info_UScriptStruct_RichCurveKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRichCurveKey>()
{
	return FRichCurveKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRichCurveKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** One key in a rich, editable float curve */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "One key in a rich, editable float curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[] = {
		{ "Comment", "/** Interpolation mode between this key and the next */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Interpolation mode between this key and the next" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[] = {
		{ "Comment", "/** Mode for tangents at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Mode for tangents at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[] = {
		{ "Comment", "/** If either tangent at this key is 'weighted' */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If either tangent at this key is 'weighted'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Time at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Time at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Value at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Value at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[] = {
		{ "Comment", "/** If RCIM_Cubic, the arriving tangent at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If RCIM_Cubic, the arriving tangent at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[] = {
		{ "Comment", "/** If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[] = {
		{ "Comment", "/** If RCIM_Cubic, the leaving tangent at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If RCIM_Cubic, the leaving tangent at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[] = {
		{ "Comment", "/** If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichCurveKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurveKey, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpMode_MetaData), NewProp_InterpMode_MetaData) }; // 294528593
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurveKey, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentMode_MetaData), NewProp_TangentMode_MetaData) }; // 1321210525
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentWeightMode = { "TangentWeightMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurveKey, TangentWeightMode), Z_Construct_UEnum_Engine_ERichCurveTangentWeightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentWeightMode_MetaData), NewProp_TangentWeightMode_MetaData) }; // 256318866
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurveKey, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurveKey, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurveKey, ArriveTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangent_MetaData), NewProp_ArriveTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangentWeight = { "ArriveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurveKey, ArriveTangentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentWeight_MetaData), NewProp_ArriveTangentWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurveKey, LeaveTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangent_MetaData), NewProp_LeaveTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangentWeight = { "LeaveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurveKey, LeaveTangentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentWeight_MetaData), NewProp_LeaveTangentWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichCurveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_InterpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_TangentWeightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_ArriveTangentWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewProp_LeaveTangentWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichCurveKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RichCurveKey",
	Z_Construct_UScriptStruct_FRichCurveKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::PropPointers),
	sizeof(FRichCurveKey),
	alignof(FRichCurveKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurveKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRichCurveKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey()
{
	if (!Z_Registration_Info_UScriptStruct_RichCurveKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RichCurveKey.InnerSingleton, Z_Construct_UScriptStruct_FRichCurveKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RichCurveKey.InnerSingleton;
}
// End ScriptStruct FRichCurveKey

// Begin ScriptStruct FRichCurve
static_assert(std::is_polymorphic<FRichCurve>() == std::is_polymorphic<FRealCurve>(), "USTRUCT FRichCurve cannot be polymorphic unless super FRealCurve is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RichCurve;
class UScriptStruct* FRichCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RichCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RichCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRichCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RichCurve"));
	}
	return Z_Registration_Info_UScriptStruct_RichCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRichCurve>()
{
	return FRichCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRichCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A rich, editable float curve */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "A rich, editable float curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Sorted array of keys */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "Sorted array of keys" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRichCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRichCurveKey, METADATA_PARAMS(0, nullptr) }; // 283868055
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRichCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 283868055
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRichCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRichCurve_Statics::NewProp_Keys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRichCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FRealCurve,
	&NewStructOps,
	"RichCurve",
	Z_Construct_UScriptStruct_FRichCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurve_Statics::PropPointers),
	sizeof(FRichCurve),
	alignof(FRichCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRichCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRichCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRichCurve()
{
	if (!Z_Registration_Info_UScriptStruct_RichCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RichCurve.InnerSingleton, Z_Construct_UScriptStruct_FRichCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RichCurve.InnerSingleton;
}
// End ScriptStruct FRichCurve

// Begin ScriptStruct FCompressedRichCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompressedRichCurve;
class UScriptStruct* FCompressedRichCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompressedRichCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompressedRichCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompressedRichCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CompressedRichCurve"));
	}
	return Z_Registration_Info_UScriptStruct_CompressedRichCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompressedRichCurve>()
{
	return FCompressedRichCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompressedRichCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A runtime optimized representation of a FRichCurve. It consumes less memory and evaluates faster.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/RichCurve.h" },
		{ "ToolTip", "A runtime optimized representation of a FRichCurve. It consumes less memory and evaluates faster." },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompressedRichCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CompressedRichCurve",
	nullptr,
	0,
	sizeof(FCompressedRichCurve),
	alignof(FCompressedRichCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompressedRichCurve()
{
	if (!Z_Registration_Info_UScriptStruct_CompressedRichCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompressedRichCurve.InnerSingleton, Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompressedRichCurve.InnerSingleton;
}
// End ScriptStruct FCompressedRichCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERichCurveTangentMode_StaticEnum, TEXT("ERichCurveTangentMode"), &Z_Registration_Info_UEnum_ERichCurveTangentMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1321210525U) },
		{ ERichCurveTangentWeightMode_StaticEnum, TEXT("ERichCurveTangentWeightMode"), &Z_Registration_Info_UEnum_ERichCurveTangentWeightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 256318866U) },
		{ ERichCurveCompressionFormat_StaticEnum, TEXT("ERichCurveCompressionFormat"), &Z_Registration_Info_UEnum_ERichCurveCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2210842131U) },
		{ ERichCurveKeyTimeCompressionFormat_StaticEnum, TEXT("ERichCurveKeyTimeCompressionFormat"), &Z_Registration_Info_UEnum_ERichCurveKeyTimeCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2644002328U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRichCurveKey::StaticStruct, Z_Construct_UScriptStruct_FRichCurveKey_Statics::NewStructOps, TEXT("RichCurveKey"), &Z_Registration_Info_UScriptStruct_RichCurveKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRichCurveKey), 283868055U) },
		{ FRichCurve::StaticStruct, Z_Construct_UScriptStruct_FRichCurve_Statics::NewStructOps, TEXT("RichCurve"), &Z_Registration_Info_UScriptStruct_RichCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRichCurve), 1340883375U) },
		{ FCompressedRichCurve::StaticStruct, Z_Construct_UScriptStruct_FCompressedRichCurve_Statics::NewStructOps, TEXT("CompressedRichCurve"), &Z_Registration_Info_UScriptStruct_CompressedRichCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompressedRichCurve), 4023156191U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_2857843210(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
