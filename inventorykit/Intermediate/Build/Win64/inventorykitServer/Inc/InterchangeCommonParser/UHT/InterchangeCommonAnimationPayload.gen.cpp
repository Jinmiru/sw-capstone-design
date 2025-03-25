// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parsers/CommonParser/Public/InterchangeCommonAnimationPayload.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeCommonAnimationPayload() {}

// Begin Cross Module References
INTERCHANGECOMMONPARSER_API UEnum* Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode();
INTERCHANGECOMMONPARSER_API UEnum* Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode();
INTERCHANGECOMMONPARSER_API UEnum* Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode();
INTERCHANGECOMMONPARSER_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeCurve();
INTERCHANGECOMMONPARSER_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeCurveKey();
INTERCHANGECOMMONPARSER_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeStepCurve();
UPackage* Z_Construct_UPackage__Script_InterchangeCommonParser();
// End Cross Module References

// Begin Enum EInterchangeCurveInterpMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeCurveInterpMode;
static UEnum* EInterchangeCurveInterpMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode, (UObject*)Z_Construct_UPackage__Script_InterchangeCommonParser(), TEXT("EInterchangeCurveInterpMode"));
	}
	return Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.OuterSingleton;
}
template<> INTERCHANGECOMMONPARSER_API UEnum* StaticEnum<EInterchangeCurveInterpMode>()
{
	return EInterchangeCurveInterpMode_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** If using Cubic, this enum describes how the tangents should be controlled. */" },
		{ "Constant.Comment", "/** Use a constant value. Represents stepped values. */" },
		{ "Constant.Name", "EInterchangeCurveInterpMode::Constant" },
		{ "Constant.ToolTip", "Use a constant value. Represents stepped values." },
		{ "Cubic.Comment", "/** Cubic interpolation. See TangentMode for different cubic interpolation options. */" },
		{ "Cubic.Name", "EInterchangeCurveInterpMode::Cubic" },
		{ "Cubic.ToolTip", "Cubic interpolation. See TangentMode for different cubic interpolation options." },
		{ "Linear.Comment", "/** Use linear interpolation between values. */" },
		{ "Linear.Name", "EInterchangeCurveInterpMode::Linear" },
		{ "Linear.ToolTip", "Use linear interpolation between values." },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "None.Comment", "/** No interpolation. */" },
		{ "None.Name", "EInterchangeCurveInterpMode::None" },
		{ "None.ToolTip", "No interpolation." },
		{ "ToolTip", "If using Cubic, this enum describes how the tangents should be controlled." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeCurveInterpMode::Linear", (int64)EInterchangeCurveInterpMode::Linear },
		{ "EInterchangeCurveInterpMode::Constant", (int64)EInterchangeCurveInterpMode::Constant },
		{ "EInterchangeCurveInterpMode::Cubic", (int64)EInterchangeCurveInterpMode::Cubic },
		{ "EInterchangeCurveInterpMode::None", (int64)EInterchangeCurveInterpMode::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCommonParser,
	nullptr,
	"EInterchangeCurveInterpMode",
	"EInterchangeCurveInterpMode",
	Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode()
{
	if (!Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.InnerSingleton, Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeCurveInterpMode.InnerSingleton;
}
// End Enum EInterchangeCurveInterpMode

// Begin Enum EInterchangeCurveTangentMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeCurveTangentMode;
static UEnum* EInterchangeCurveTangentMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode, (UObject*)Z_Construct_UPackage__Script_InterchangeCommonParser(), TEXT("EInterchangeCurveTangentMode"));
	}
	return Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.OuterSingleton;
}
template<> INTERCHANGECOMMONPARSER_API UEnum* StaticEnum<EInterchangeCurveTangentMode>()
{
	return EInterchangeCurveTangentMode_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Automatically calculates tangents to create smooth curves between values. */" },
		{ "Auto.Name", "EInterchangeCurveTangentMode::Auto" },
		{ "Auto.ToolTip", "Automatically calculates tangents to create smooth curves between values." },
		{ "Break.Comment", "/** User specifies the tangent as two separate broken tangents on each side of the key which can allow a sharp change in evaluation before or after. */" },
		{ "Break.Name", "EInterchangeCurveTangentMode::Break" },
		{ "Break.ToolTip", "User specifies the tangent as two separate broken tangents on each side of the key which can allow a sharp change in evaluation before or after." },
		{ "Comment", "/** If using Cubic interpolation mode, this enum describes how the tangents should be controlled. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "None.Comment", "/** No tangents. */" },
		{ "None.Name", "EInterchangeCurveTangentMode::None" },
		{ "None.ToolTip", "No tangents." },
		{ "ToolTip", "If using Cubic interpolation mode, this enum describes how the tangents should be controlled." },
		{ "User.Comment", "/** User specifies the tangent as a unified tangent where the two tangents are locked to each other, presenting a consistent curve before and after. */" },
		{ "User.Name", "EInterchangeCurveTangentMode::User" },
		{ "User.ToolTip", "User specifies the tangent as a unified tangent where the two tangents are locked to each other, presenting a consistent curve before and after." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeCurveTangentMode::Auto", (int64)EInterchangeCurveTangentMode::Auto },
		{ "EInterchangeCurveTangentMode::User", (int64)EInterchangeCurveTangentMode::User },
		{ "EInterchangeCurveTangentMode::Break", (int64)EInterchangeCurveTangentMode::Break },
		{ "EInterchangeCurveTangentMode::None", (int64)EInterchangeCurveTangentMode::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCommonParser,
	nullptr,
	"EInterchangeCurveTangentMode",
	"EInterchangeCurveTangentMode",
	Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode()
{
	if (!Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.InnerSingleton, Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeCurveTangentMode.InnerSingleton;
}
// End Enum EInterchangeCurveTangentMode

// Begin Enum EInterchangeCurveTangentWeightMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode;
static UEnum* EInterchangeCurveTangentWeightMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode, (UObject*)Z_Construct_UPackage__Script_InterchangeCommonParser(), TEXT("EInterchangeCurveTangentWeightMode"));
	}
	return Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.OuterSingleton;
}
template<> INTERCHANGECOMMONPARSER_API UEnum* StaticEnum<EInterchangeCurveTangentWeightMode>()
{
	return EInterchangeCurveTangentWeightMode_StaticEnum();
}
struct Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumerates tangent weight modes. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "Enumerates tangent weight modes." },
		{ "WeightedArrive.Comment", "/** Only take the arrival tangent weight into account for evaluation. */" },
		{ "WeightedArrive.Name", "EInterchangeCurveTangentWeightMode::WeightedArrive" },
		{ "WeightedArrive.ToolTip", "Only take the arrival tangent weight into account for evaluation." },
		{ "WeightedBoth.Comment", "/** Take both the arrival and leaving tangent weights into account for evaluation. */" },
		{ "WeightedBoth.Name", "EInterchangeCurveTangentWeightMode::WeightedBoth" },
		{ "WeightedBoth.ToolTip", "Take both the arrival and leaving tangent weights into account for evaluation." },
		{ "WeightedLeave.Comment", "/** Only take the leaving tangent weight into account for evaluation. */" },
		{ "WeightedLeave.Name", "EInterchangeCurveTangentWeightMode::WeightedLeave" },
		{ "WeightedLeave.ToolTip", "Only take the leaving tangent weight into account for evaluation." },
		{ "WeightedNone.Comment", "/** Don't take tangent weights into account. */" },
		{ "WeightedNone.Name", "EInterchangeCurveTangentWeightMode::WeightedNone" },
		{ "WeightedNone.ToolTip", "Don't take tangent weights into account." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterchangeCurveTangentWeightMode::WeightedNone", (int64)EInterchangeCurveTangentWeightMode::WeightedNone },
		{ "EInterchangeCurveTangentWeightMode::WeightedArrive", (int64)EInterchangeCurveTangentWeightMode::WeightedArrive },
		{ "EInterchangeCurveTangentWeightMode::WeightedLeave", (int64)EInterchangeCurveTangentWeightMode::WeightedLeave },
		{ "EInterchangeCurveTangentWeightMode::WeightedBoth", (int64)EInterchangeCurveTangentWeightMode::WeightedBoth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InterchangeCommonParser,
	nullptr,
	"EInterchangeCurveTangentWeightMode",
	"EInterchangeCurveTangentWeightMode",
	Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode()
{
	if (!Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.InnerSingleton, Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode.InnerSingleton;
}
// End Enum EInterchangeCurveTangentWeightMode

// Begin ScriptStruct FInterchangeCurveKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeCurveKey;
class UScriptStruct* FInterchangeCurveKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeCurveKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeCurveKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeCurveKey, (UObject*)Z_Construct_UPackage__Script_InterchangeCommonParser(), TEXT("InterchangeCurveKey"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeCurveKey.OuterSingleton;
}
template<> INTERCHANGECOMMONPARSER_API UScriptStruct* StaticStruct<FInterchangeCurveKey>()
{
	return FInterchangeCurveKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* This struct contains only the key data, this is only used to pass animation data from translators to factories\n*/" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "This struct contains only the key data, this is only used to pass animation data from translators to factories" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[] = {
		{ "Comment", "/** Interpolation mode between this key and the next */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "Interpolation mode between this key and the next" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[] = {
		{ "Comment", "/** Mode for tangents at this key */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "Mode for tangents at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentWeightMode_MetaData[] = {
		{ "Comment", "/** If either tangent at this key is 'weighted' */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "If either tangent at this key is 'weighted'" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Comment", "/** Time at this key */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "Time at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Comment", "/** Value at this key */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "Value at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[] = {
		{ "Comment", "/** If RCIM_Cubic, the arriving tangent at this key */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "If RCIM_Cubic, the arriving tangent at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentWeight_MetaData[] = {
		{ "Comment", "/** If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "If RCTWM_WeightedArrive or RCTWM_WeightedBoth, the weight of the left tangent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[] = {
		{ "Comment", "/** If RCIM_Cubic, the leaving tangent at this key */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "If RCIM_Cubic, the leaving tangent at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentWeight_MetaData[] = {
		{ "Comment", "/** If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "If RCTWM_WeightedLeave or RCTWM_WeightedBoth, the weight of the right tangent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TangentMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TangentWeightMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TangentWeightMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArriveTangentWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaveTangentWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeCurveKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_InterpMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurveKey, InterpMode), Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveInterpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpMode_MetaData), NewProp_InterpMode_MetaData) }; // 4086011096
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_TangentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurveKey, TangentMode), Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentMode_MetaData), NewProp_TangentMode_MetaData) }; // 46781507
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_TangentWeightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_TangentWeightMode = { "TangentWeightMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurveKey, TangentWeightMode), Z_Construct_UEnum_InterchangeCommonParser_EInterchangeCurveTangentWeightMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentWeightMode_MetaData), NewProp_TangentWeightMode_MetaData) }; // 2477089622
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurveKey, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurveKey, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurveKey, ArriveTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangent_MetaData), NewProp_ArriveTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_ArriveTangentWeight = { "ArriveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurveKey, ArriveTangentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentWeight_MetaData), NewProp_ArriveTangentWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurveKey, LeaveTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangent_MetaData), NewProp_LeaveTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_LeaveTangentWeight = { "LeaveTangentWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurveKey, LeaveTangentWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentWeight_MetaData), NewProp_LeaveTangentWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_InterpMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_InterpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_TangentMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_TangentMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_TangentWeightMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_TangentWeightMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_ArriveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_ArriveTangentWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_LeaveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewProp_LeaveTangentWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCommonParser,
	nullptr,
	&NewStructOps,
	"InterchangeCurveKey",
	Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::PropPointers),
	sizeof(FInterchangeCurveKey),
	alignof(FInterchangeCurveKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeCurveKey()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeCurveKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeCurveKey.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeCurveKey.InnerSingleton;
}
// End ScriptStruct FInterchangeCurveKey

// Begin ScriptStruct FInterchangeCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeCurve;
class UScriptStruct* FInterchangeCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeCurve, (UObject*)Z_Construct_UPackage__Script_InterchangeCommonParser(), TEXT("InterchangeCurve"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeCurve.OuterSingleton;
}
template<> INTERCHANGECOMMONPARSER_API UScriptStruct* StaticStruct<FInterchangeCurve>()
{
	return FInterchangeCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* This struct contains only the key data, this is only used to pass animation data from interchange worker process translators to factories.\n*/" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "This struct contains only the key data, this is only used to pass animation data from interchange worker process translators to factories." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangeCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInterchangeCurveKey, METADATA_PARAMS(0, nullptr) }; // 2428118322
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 2428118322
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurve_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeCurve_Statics::NewProp_Keys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCommonParser,
	nullptr,
	&NewStructOps,
	"InterchangeCurve",
	Z_Construct_UScriptStruct_FInterchangeCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeCurve_Statics::PropPointers),
	sizeof(FInterchangeCurve),
	alignof(FInterchangeCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeCurve()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeCurve.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeCurve.InnerSingleton;
}
// End ScriptStruct FInterchangeCurve

// Begin ScriptStruct FInterchangeStepCurve
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeStepCurve;
class UScriptStruct* FInterchangeStepCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeStepCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeStepCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeStepCurve, (UObject*)Z_Construct_UPackage__Script_InterchangeCommonParser(), TEXT("InterchangeStepCurve"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeStepCurve.OuterSingleton;
}
template<> INTERCHANGECOMMONPARSER_API UScriptStruct* StaticStruct<FInterchangeStepCurve>()
{
	return FInterchangeStepCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* This struct contains only the key data, this is only used to pass animation data from translators to factories.\n*/" },
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
		{ "ToolTip", "This struct contains only the key data, this is only used to pass animation data from translators to factories." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/InterchangeCommonAnimationPayload.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyTimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeStepCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterchangeStepCurve, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyTimes_MetaData), NewProp_KeyTimes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::NewProp_KeyTimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::NewProp_KeyTimes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InterchangeCommonParser,
	nullptr,
	&NewStructOps,
	"InterchangeStepCurve",
	Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::PropPointers),
	sizeof(FInterchangeStepCurve),
	alignof(FInterchangeStepCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterchangeStepCurve()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeStepCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeStepCurve.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterchangeStepCurve.InnerSingleton;
}
// End ScriptStruct FInterchangeStepCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterchangeCurveInterpMode_StaticEnum, TEXT("EInterchangeCurveInterpMode"), &Z_Registration_Info_UEnum_EInterchangeCurveInterpMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4086011096U) },
		{ EInterchangeCurveTangentMode_StaticEnum, TEXT("EInterchangeCurveTangentMode"), &Z_Registration_Info_UEnum_EInterchangeCurveTangentMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 46781507U) },
		{ EInterchangeCurveTangentWeightMode_StaticEnum, TEXT("EInterchangeCurveTangentWeightMode"), &Z_Registration_Info_UEnum_EInterchangeCurveTangentWeightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2477089622U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInterchangeCurveKey::StaticStruct, Z_Construct_UScriptStruct_FInterchangeCurveKey_Statics::NewStructOps, TEXT("InterchangeCurveKey"), &Z_Registration_Info_UScriptStruct_InterchangeCurveKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeCurveKey), 2428118322U) },
		{ FInterchangeCurve::StaticStruct, Z_Construct_UScriptStruct_FInterchangeCurve_Statics::NewStructOps, TEXT("InterchangeCurve"), &Z_Registration_Info_UScriptStruct_InterchangeCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeCurve), 4032320874U) },
		{ FInterchangeStepCurve::StaticStruct, Z_Construct_UScriptStruct_FInterchangeStepCurve_Statics::NewStructOps, TEXT("InterchangeStepCurve"), &Z_Registration_Info_UScriptStruct_InterchangeStepCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeStepCurve), 1320605247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_767674732(TEXT("/Script/InterchangeCommonParser"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Parsers_CommonParser_Public_InterchangeCommonAnimationPayload_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
