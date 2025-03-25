// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Internal/Stateless/NiagaraStatelessDistribution.h"
#include "Niagara/Public/NiagaraTypes.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStatelessDistribution() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDistributionMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionBase();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionColor();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionVector2();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionVector3();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraDistributionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDistributionMode;
static UEnum* ENiagaraDistributionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDistributionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraDistributionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDistributionMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDistributionMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraDistributionMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDistributionMode>()
{
	return ENiagaraDistributionMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraDistributionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Binding.Name", "ENiagaraDistributionMode::Binding" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
		{ "NonUniformConstant.Name", "ENiagaraDistributionMode::NonUniformConstant" },
		{ "NonUniformCurve.Name", "ENiagaraDistributionMode::NonUniformCurve" },
		{ "NonUniformRange.Name", "ENiagaraDistributionMode::NonUniformRange" },
		{ "UniformConstant.Name", "ENiagaraDistributionMode::UniformConstant" },
		{ "UniformCurve.Name", "ENiagaraDistributionMode::UniformCurve" },
		{ "UniformRange.Name", "ENiagaraDistributionMode::UniformRange" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraDistributionMode::Binding", (int64)ENiagaraDistributionMode::Binding },
		{ "ENiagaraDistributionMode::UniformConstant", (int64)ENiagaraDistributionMode::UniformConstant },
		{ "ENiagaraDistributionMode::NonUniformConstant", (int64)ENiagaraDistributionMode::NonUniformConstant },
		{ "ENiagaraDistributionMode::UniformRange", (int64)ENiagaraDistributionMode::UniformRange },
		{ "ENiagaraDistributionMode::NonUniformRange", (int64)ENiagaraDistributionMode::NonUniformRange },
		{ "ENiagaraDistributionMode::UniformCurve", (int64)ENiagaraDistributionMode::UniformCurve },
		{ "ENiagaraDistributionMode::NonUniformCurve", (int64)ENiagaraDistributionMode::NonUniformCurve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDistributionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraDistributionMode",
	"ENiagaraDistributionMode",
	Z_Construct_UEnum_Niagara_ENiagaraDistributionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDistributionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDistributionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraDistributionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraDistributionMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraDistributionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDistributionMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDistributionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraDistributionMode.InnerSingleton;
}
// End Enum ENiagaraDistributionMode

// Begin ScriptStruct FNiagaraDistributionBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionBase;
class UScriptStruct* FNiagaraDistributionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionBase, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionBase"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionBase.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionBase>()
{
	return FNiagaraDistributionBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterBinding_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelConstantsAndRanges_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChannelCurves_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLutSampleCount_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterBinding;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChannelConstantsAndRanges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelConstantsAndRanges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelCurves;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLutSampleCount;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionBase, Mode), Z_Construct_UEnum_Niagara_ENiagaraDistributionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 175835167
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ParameterBinding = { "ParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionBase, ParameterBinding), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterBinding_MetaData), NewProp_ParameterBinding_MetaData) }; // 2955719795
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ChannelConstantsAndRanges_Inner = { "ChannelConstantsAndRanges", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ChannelConstantsAndRanges = { "ChannelConstantsAndRanges", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionBase, ChannelConstantsAndRanges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelConstantsAndRanges_MetaData), NewProp_ChannelConstantsAndRanges_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ChannelCurves_Inner = { "ChannelCurves", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(0, nullptr) }; // 1340883375
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ChannelCurves = { "ChannelCurves", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionBase, ChannelCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChannelCurves_MetaData), NewProp_ChannelCurves_MetaData) }; // 1340883375
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_MaxLutSampleCount = { "MaxLutSampleCount", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionBase, MaxLutSampleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLutSampleCount_MetaData), NewProp_MaxLutSampleCount_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ParameterBinding,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ChannelConstantsAndRanges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ChannelConstantsAndRanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ChannelCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_ChannelCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewProp_MaxLutSampleCount,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDistributionBase",
	Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::PropPointers),
	sizeof(FNiagaraDistributionBase),
	alignof(FNiagaraDistributionBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionBase()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionBase.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionBase.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionBase

// Begin ScriptStruct FNiagaraDistributionRangeInt
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeInt;
class UScriptStruct* FNiagaraDistributionRangeInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionRangeInt"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeInt.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionRangeInt>()
{
	return FNiagaraDistributionRangeInt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterBinding_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterBinding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Min;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionRangeInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeInt, Mode), Z_Construct_UEnum_Niagara_ENiagaraDistributionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 175835167
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_ParameterBinding = { "ParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeInt, ParameterBinding), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterBinding_MetaData), NewProp_ParameterBinding_MetaData) }; // 2955719795
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeInt, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeInt, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_ParameterBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDistributionRangeInt",
	Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::PropPointers),
	sizeof(FNiagaraDistributionRangeInt),
	alignof(FNiagaraDistributionRangeInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeInt.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeInt.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionRangeInt

// Begin ScriptStruct FNiagaraDistributionRangeFloat
static_assert(std::is_polymorphic<FNiagaraDistributionRangeFloat>() == std::is_polymorphic<FNiagaraDistributionBase>(), "USTRUCT FNiagaraDistributionRangeFloat cannot be polymorphic unless super FNiagaraDistributionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeFloat;
class UScriptStruct* FNiagaraDistributionRangeFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionRangeFloat"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeFloat.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionRangeFloat>()
{
	return FNiagaraDistributionRangeFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionRangeFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeFloat, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeFloat, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraDistributionBase,
	&NewStructOps,
	"NiagaraDistributionRangeFloat",
	Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::PropPointers),
	sizeof(FNiagaraDistributionRangeFloat),
	alignof(FNiagaraDistributionRangeFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeFloat.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeFloat.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionRangeFloat

// Begin ScriptStruct FNiagaraDistributionRangeVector2
static_assert(std::is_polymorphic<FNiagaraDistributionRangeVector2>() == std::is_polymorphic<FNiagaraDistributionBase>(), "USTRUCT FNiagaraDistributionRangeVector2 cannot be polymorphic unless super FNiagaraDistributionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector2;
class UScriptStruct* FNiagaraDistributionRangeVector2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionRangeVector2"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector2.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionRangeVector2>()
{
	return FNiagaraDistributionRangeVector2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionRangeVector2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeVector2, Min), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeVector2, Max), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraDistributionBase,
	&NewStructOps,
	"NiagaraDistributionRangeVector2",
	Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::PropPointers),
	sizeof(FNiagaraDistributionRangeVector2),
	alignof(FNiagaraDistributionRangeVector2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector2.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector2.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionRangeVector2

// Begin ScriptStruct FNiagaraDistributionRangeVector3
static_assert(std::is_polymorphic<FNiagaraDistributionRangeVector3>() == std::is_polymorphic<FNiagaraDistributionBase>(), "USTRUCT FNiagaraDistributionRangeVector3 cannot be polymorphic unless super FNiagaraDistributionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector3;
class UScriptStruct* FNiagaraDistributionRangeVector3::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector3.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector3.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionRangeVector3"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector3.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionRangeVector3>()
{
	return FNiagaraDistributionRangeVector3::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionRangeVector3>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeVector3, Min), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeVector3, Max), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraDistributionBase,
	&NewStructOps,
	"NiagaraDistributionRangeVector3",
	Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::PropPointers),
	sizeof(FNiagaraDistributionRangeVector3),
	alignof(FNiagaraDistributionRangeVector3),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector3.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector3.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector3.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionRangeVector3

// Begin ScriptStruct FNiagaraDistributionRangeColor
static_assert(std::is_polymorphic<FNiagaraDistributionRangeColor>() == std::is_polymorphic<FNiagaraDistributionBase>(), "USTRUCT FNiagaraDistributionRangeColor cannot be polymorphic unless super FNiagaraDistributionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeColor;
class UScriptStruct* FNiagaraDistributionRangeColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionRangeColor"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeColor.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionRangeColor>()
{
	return FNiagaraDistributionRangeColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionRangeColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeColor, Min), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionRangeColor, Max), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraDistributionBase,
	&NewStructOps,
	"NiagaraDistributionRangeColor",
	Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::PropPointers),
	sizeof(FNiagaraDistributionRangeColor),
	alignof(FNiagaraDistributionRangeColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeColor.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeColor.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionRangeColor

// Begin ScriptStruct FNiagaraDistributionFloat
static_assert(std::is_polymorphic<FNiagaraDistributionFloat>() == std::is_polymorphic<FNiagaraDistributionBase>(), "USTRUCT FNiagaraDistributionFloat cannot be polymorphic unless super FNiagaraDistributionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionFloat;
class UScriptStruct* FNiagaraDistributionFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionFloat, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionFloat"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionFloat.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionFloat>()
{
	return FNiagaraDistributionFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionFloat, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraDistributionBase,
	&NewStructOps,
	"NiagaraDistributionFloat",
	Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::PropPointers),
	sizeof(FNiagaraDistributionFloat),
	alignof(FNiagaraDistributionFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionFloat()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionFloat.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionFloat.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionFloat

// Begin ScriptStruct FNiagaraDistributionVector2
static_assert(std::is_polymorphic<FNiagaraDistributionVector2>() == std::is_polymorphic<FNiagaraDistributionBase>(), "USTRUCT FNiagaraDistributionVector2 cannot be polymorphic unless super FNiagaraDistributionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionVector2;
class UScriptStruct* FNiagaraDistributionVector2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionVector2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionVector2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionVector2, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionVector2"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionVector2.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionVector2>()
{
	return FNiagaraDistributionVector2::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionVector2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionVector2, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraDistributionBase,
	&NewStructOps,
	"NiagaraDistributionVector2",
	Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::PropPointers),
	sizeof(FNiagaraDistributionVector2),
	alignof(FNiagaraDistributionVector2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionVector2()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionVector2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionVector2.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionVector2.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionVector2

// Begin ScriptStruct FNiagaraDistributionVector3
static_assert(std::is_polymorphic<FNiagaraDistributionVector3>() == std::is_polymorphic<FNiagaraDistributionBase>(), "USTRUCT FNiagaraDistributionVector3 cannot be polymorphic unless super FNiagaraDistributionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionVector3;
class UScriptStruct* FNiagaraDistributionVector3::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionVector3.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionVector3.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionVector3, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionVector3"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionVector3.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionVector3>()
{
	return FNiagaraDistributionVector3::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionVector3>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionVector3, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraDistributionBase,
	&NewStructOps,
	"NiagaraDistributionVector3",
	Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::PropPointers),
	sizeof(FNiagaraDistributionVector3),
	alignof(FNiagaraDistributionVector3),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionVector3()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionVector3.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionVector3.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionVector3.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionVector3

// Begin ScriptStruct FNiagaraDistributionColor
static_assert(std::is_polymorphic<FNiagaraDistributionColor>() == std::is_polymorphic<FNiagaraDistributionBase>(), "USTRUCT FNiagaraDistributionColor cannot be polymorphic unless super FNiagaraDistributionBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDistributionColor;
class UScriptStruct* FNiagaraDistributionColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDistributionColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDistributionColor, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDistributionColor"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionColor.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDistributionColor>()
{
	return FNiagaraDistributionColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Internal/Stateless/NiagaraStatelessDistribution.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDistributionColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDistributionColor, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::NewProp_Values,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	Z_Construct_UScriptStruct_FNiagaraDistributionBase,
	&NewStructOps,
	"NiagaraDistributionColor",
	Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::PropPointers),
	sizeof(FNiagaraDistributionColor),
	alignof(FNiagaraDistributionColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDistributionColor()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDistributionColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDistributionColor.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDistributionColor.InnerSingleton;
}
// End ScriptStruct FNiagaraDistributionColor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraDistributionMode_StaticEnum, TEXT("ENiagaraDistributionMode"), &Z_Registration_Info_UEnum_ENiagaraDistributionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 175835167U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraDistributionBase::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionBase_Statics::NewStructOps, TEXT("NiagaraDistributionBase"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionBase), 3778112769U) },
		{ FNiagaraDistributionRangeInt::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionRangeInt_Statics::NewStructOps, TEXT("NiagaraDistributionRangeInt"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionRangeInt), 2392440345U) },
		{ FNiagaraDistributionRangeFloat::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionRangeFloat_Statics::NewStructOps, TEXT("NiagaraDistributionRangeFloat"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionRangeFloat), 1814083401U) },
		{ FNiagaraDistributionRangeVector2::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector2_Statics::NewStructOps, TEXT("NiagaraDistributionRangeVector2"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionRangeVector2), 1029937019U) },
		{ FNiagaraDistributionRangeVector3::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionRangeVector3_Statics::NewStructOps, TEXT("NiagaraDistributionRangeVector3"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeVector3, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionRangeVector3), 196473061U) },
		{ FNiagaraDistributionRangeColor::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionRangeColor_Statics::NewStructOps, TEXT("NiagaraDistributionRangeColor"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionRangeColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionRangeColor), 3721855970U) },
		{ FNiagaraDistributionFloat::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionFloat_Statics::NewStructOps, TEXT("NiagaraDistributionFloat"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionFloat), 1780836428U) },
		{ FNiagaraDistributionVector2::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionVector2_Statics::NewStructOps, TEXT("NiagaraDistributionVector2"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionVector2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionVector2), 3321022569U) },
		{ FNiagaraDistributionVector3::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionVector3_Statics::NewStructOps, TEXT("NiagaraDistributionVector3"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionVector3, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionVector3), 274836187U) },
		{ FNiagaraDistributionColor::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDistributionColor_Statics::NewStructOps, TEXT("NiagaraDistributionColor"), &Z_Registration_Info_UScriptStruct_NiagaraDistributionColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDistributionColor), 1021070030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_4045912738(TEXT("/Script/Niagara"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_Stateless_NiagaraStatelessDistribution_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
