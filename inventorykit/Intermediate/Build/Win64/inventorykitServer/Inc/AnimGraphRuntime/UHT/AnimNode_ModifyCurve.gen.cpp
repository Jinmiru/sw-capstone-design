// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_ModifyCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ModifyCurve() {}

// Begin Cross Module References
ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode();
ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

// Begin Enum EModifyCurveApplyMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifyCurveApplyMode;
static UEnum* EModifyCurveApplyMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModifyCurveApplyMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModifyCurveApplyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EModifyCurveApplyMode"));
	}
	return Z_Registration_Info_UEnum_EModifyCurveApplyMode.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EModifyCurveApplyMode>()
{
	return EModifyCurveApplyMode_StaticEnum();
}
struct Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Comment", "/** Add new value to input curve value */" },
		{ "Add.Name", "EModifyCurveApplyMode::Add" },
		{ "Add.ToolTip", "Add new value to input curve value" },
		{ "Blend.Comment", "/** Blend input with new curve value, using Alpha setting on the node */" },
		{ "Blend.Name", "EModifyCurveApplyMode::Blend" },
		{ "Blend.ToolTip", "Blend input with new curve value, using Alpha setting on the node" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "RemapCurve.Comment", "/** Remaps the new curve value between the CurveValues entry and 1.0 (.5 in CurveValues makes 0.51 map to 0.02) */" },
		{ "RemapCurve.Name", "EModifyCurveApplyMode::RemapCurve" },
		{ "RemapCurve.ToolTip", "Remaps the new curve value between the CurveValues entry and 1.0 (.5 in CurveValues makes 0.51 map to 0.02)" },
		{ "Scale.Comment", "/** Scale input value by new value */" },
		{ "Scale.Name", "EModifyCurveApplyMode::Scale" },
		{ "Scale.ToolTip", "Scale input value by new value" },
		{ "WeightedMovingAverage.Comment", "/** Blend the new curve value with the last curve value using Alpha to determine the weighting (.5 is a moving average, higher values react to new values faster, lower slower) */" },
		{ "WeightedMovingAverage.Name", "EModifyCurveApplyMode::WeightedMovingAverage" },
		{ "WeightedMovingAverage.ToolTip", "Blend the new curve value with the last curve value using Alpha to determine the weighting (.5 is a moving average, higher values react to new values faster, lower slower)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModifyCurveApplyMode::Add", (int64)EModifyCurveApplyMode::Add },
		{ "EModifyCurveApplyMode::Scale", (int64)EModifyCurveApplyMode::Scale },
		{ "EModifyCurveApplyMode::Blend", (int64)EModifyCurveApplyMode::Blend },
		{ "EModifyCurveApplyMode::WeightedMovingAverage", (int64)EModifyCurveApplyMode::WeightedMovingAverage },
		{ "EModifyCurveApplyMode::RemapCurve", (int64)EModifyCurveApplyMode::RemapCurve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	nullptr,
	"EModifyCurveApplyMode",
	"EModifyCurveApplyMode",
	Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode()
{
	if (!Z_Registration_Info_UEnum_EModifyCurveApplyMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifyCurveApplyMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModifyCurveApplyMode.InnerSingleton;
}
// End Enum EModifyCurveApplyMode

// Begin ScriptStruct FAnimNode_ModifyCurve
static_assert(std::is_polymorphic<FAnimNode_ModifyCurve>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ModifyCurve cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve;
class UScriptStruct* FAnimNode_ModifyCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_ModifyCurve"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_ModifyCurve>()
{
	return FAnimNode_ModifyCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "ToolTip", "Easy way to modify curve values on a pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveMap_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveValues_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[] = {
		{ "Category", "ModifyCurve" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_ModifyCurve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurveMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveValues;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyCurve, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // 1074011079
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_ValueProp = { "CurveMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_Key_KeyProp = { "CurveMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap = { "CurveMap", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveMap_MetaData), NewProp_CurveMap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_Inner = { "CurveValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues = { "CurveValues", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveValues_MetaData), NewProp_CurveValues_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyCurve, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveNames_MetaData), NewProp_CurveNames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyCurve, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode = { "ApplyMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyCurve, ApplyMode), Z_Construct_UEnum_AnimGraphRuntime_EModifyCurveApplyMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyMode_MetaData), NewProp_ApplyMode_MetaData) }; // 2288180925
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_SourcePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_CurveNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewProp_ApplyMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_ModifyCurve",
	Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::PropPointers),
	sizeof(FAnimNode_ModifyCurve),
	alignof(FAnimNode_ModifyCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyCurve()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve.InnerSingleton;
}
// End ScriptStruct FAnimNode_ModifyCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModifyCurveApplyMode_StaticEnum, TEXT("EModifyCurveApplyMode"), &Z_Registration_Info_UEnum_EModifyCurveApplyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2288180925U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimNode_ModifyCurve::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyCurve_Statics::NewStructOps, TEXT("AnimNode_ModifyCurve"), &Z_Registration_Info_UScriptStruct_AnimNode_ModifyCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ModifyCurve), 3453917133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_3280163961(TEXT("/Script/AnimGraphRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_ModifyCurve_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
