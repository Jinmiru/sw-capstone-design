// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputScaleBias() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaBlendOption();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputClampConstants();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputClampState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputRange();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampConstants();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampState();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FInputScaleBias
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputScaleBias;
class UScriptStruct* FInputScaleBias::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBias.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputScaleBias.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBias, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBias"));
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBias.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBias>()
{
	return FInputScaleBias::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputScaleBias_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input modifier with scaling and biasing\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Input modifier with scaling and biasing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBias>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBias, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBias, Bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bias_MetaData), NewProp_Bias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewProp_Bias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBias_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputScaleBias",
	Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::PropPointers),
	sizeof(FInputScaleBias),
	alignof(FInputScaleBias),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputScaleBias_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBias.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputScaleBias.InnerSingleton, Z_Construct_UScriptStruct_FInputScaleBias_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBias.InnerSingleton;
}
// End ScriptStruct FInputScaleBias

// Begin ScriptStruct FInputRange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputRange;
class UScriptStruct* FInputRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputRange, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputRange"));
	}
	return Z_Registration_Info_UScriptStruct_InputRange.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputRange>()
{
	return FInputRange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputRange, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputRange, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRange_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputRange",
	Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::PropPointers),
	sizeof(FInputRange),
	alignof(FInputRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputRange()
{
	if (!Z_Registration_Info_UScriptStruct_InputRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputRange.InnerSingleton, Z_Construct_UScriptStruct_FInputRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputRange.InnerSingleton;
}
// End ScriptStruct FInputRange

// Begin ScriptStruct FInputScaleBiasClamp
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputScaleBiasClamp;
class UScriptStruct* FInputScaleBiasClamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClamp, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBiasClamp"));
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBiasClamp>()
{
	return FInputScaleBiasClamp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input modifier with remapping, scaling, biasing, clamping, and interpolation\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Input modifier with remapping, scaling, biasing, clamping, and interpolation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMapRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
	static void NewProp_bClampResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
	static void NewProp_bInterpResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBiasClamp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_SetBit(void* Obj)
{
	((FInputScaleBiasClamp*)Obj)->bMapRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMapRange_MetaData), NewProp_bMapRange_MetaData) };
void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_SetBit(void* Obj)
{
	((FInputScaleBiasClamp*)Obj)->bClampResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampResult_MetaData), NewProp_bClampResult_MetaData) };
void Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_SetBit(void* Obj)
{
	((FInputScaleBiasClamp*)Obj)->bInterpResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputScaleBiasClamp), &Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpResult_MetaData), NewProp_bInterpResult_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClamp, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRange_MetaData), NewProp_InRange_MetaData) }; // 10724739
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClamp, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutRange_MetaData), NewProp_OutRange_MetaData) }; // 10724739
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClamp, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClamp, Bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bias_MetaData), NewProp_Bias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClamp, ClampMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMin_MetaData), NewProp_ClampMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClamp, ClampMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMax_MetaData), NewProp_ClampMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClamp, InterpSpeedIncreasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeedIncreasing_MetaData), NewProp_InterpSpeedIncreasing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClamp, InterpSpeedDecreasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeedDecreasing_MetaData), NewProp_InterpSpeedDecreasing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bMapRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bClampResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_bInterpResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_OutRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_Bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_ClampMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedIncreasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewProp_InterpSpeedDecreasing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputScaleBiasClamp",
	Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::PropPointers),
	sizeof(FInputScaleBiasClamp),
	alignof(FInputScaleBiasClamp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.InnerSingleton, Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBiasClamp.InnerSingleton;
}
// End ScriptStruct FInputScaleBiasClamp

// Begin ScriptStruct FInputClampConstants
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputClampConstants;
class UScriptStruct* FInputClampConstants::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputClampConstants.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputClampConstants.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputClampConstants, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputClampConstants"));
	}
	return Z_Registration_Info_UScriptStruct_InputClampConstants.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputClampConstants>()
{
	return FInputClampConstants::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputClampConstants_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input modifier with clamping and interpolation\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Input modifier with clamping and interpolation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bClampResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
	static void NewProp_bInterpResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputClampConstants>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult_SetBit(void* Obj)
{
	((FInputClampConstants*)Obj)->bClampResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputClampConstants), &Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampResult_MetaData), NewProp_bClampResult_MetaData) };
void Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult_SetBit(void* Obj)
{
	((FInputClampConstants*)Obj)->bInterpResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputClampConstants), &Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpResult_MetaData), NewProp_bInterpResult_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputClampConstants, ClampMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMin_MetaData), NewProp_ClampMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputClampConstants, ClampMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMax_MetaData), NewProp_ClampMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputClampConstants, InterpSpeedIncreasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeedIncreasing_MetaData), NewProp_InterpSpeedIncreasing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputClampConstants, InterpSpeedDecreasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeedDecreasing_MetaData), NewProp_InterpSpeedDecreasing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputClampConstants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bClampResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_bInterpResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_ClampMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedIncreasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewProp_InterpSpeedDecreasing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputClampConstants_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputClampConstants",
	Z_Construct_UScriptStruct_FInputClampConstants_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::PropPointers),
	sizeof(FInputClampConstants),
	alignof(FInputClampConstants),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampConstants_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputClampConstants_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputClampConstants()
{
	if (!Z_Registration_Info_UScriptStruct_InputClampConstants.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputClampConstants.InnerSingleton, Z_Construct_UScriptStruct_FInputClampConstants_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputClampConstants.InnerSingleton;
}
// End ScriptStruct FInputClampConstants

// Begin ScriptStruct FInputClampState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputClampState;
class UScriptStruct* FInputClampState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputClampState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputClampState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputClampState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputClampState"));
	}
	return Z_Registration_Info_UScriptStruct_InputClampState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputClampState>()
{
	return FInputClampState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputClampState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Mutable state struct to be used with FInputClampConstants\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Mutable state struct to be used with FInputClampConstants" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputClampState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputClampState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputClampState",
	nullptr,
	0,
	sizeof(FInputClampState),
	alignof(FInputClampState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputClampState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputClampState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputClampState()
{
	if (!Z_Registration_Info_UScriptStruct_InputClampState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputClampState.InnerSingleton, Z_Construct_UScriptStruct_FInputClampState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputClampState.InnerSingleton;
}
// End ScriptStruct FInputClampState

// Begin ScriptStruct FInputScaleBiasClampConstants
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants;
class UScriptStruct* FInputScaleBiasClampConstants::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBiasClampConstants"));
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBiasClampConstants>()
{
	return FInputScaleBiasClampConstants::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMapRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClampResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInterpResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutRange_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bMapRange" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMin_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClampMax_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bClampResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedIncreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedDecreasing_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bInterpResult" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bMapRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMapRange;
	static void NewProp_bClampResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampResult;
	static void NewProp_bInterpResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClampMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedIncreasing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedDecreasing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBiasClampConstants>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange_SetBit(void* Obj)
{
	((FInputScaleBiasClampConstants*)Obj)->bMapRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange = { "bMapRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputScaleBiasClampConstants), &Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMapRange_MetaData), NewProp_bMapRange_MetaData) };
void Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult_SetBit(void* Obj)
{
	((FInputScaleBiasClampConstants*)Obj)->bClampResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult = { "bClampResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputScaleBiasClampConstants), &Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClampResult_MetaData), NewProp_bClampResult_MetaData) };
void Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult_SetBit(void* Obj)
{
	((FInputScaleBiasClampConstants*)Obj)->bInterpResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult = { "bInterpResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputScaleBiasClampConstants), &Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInterpResult_MetaData), NewProp_bInterpResult_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InRange = { "InRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClampConstants, InRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRange_MetaData), NewProp_InRange_MetaData) }; // 10724739
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_OutRange = { "OutRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClampConstants, OutRange), Z_Construct_UScriptStruct_FInputRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutRange_MetaData), NewProp_OutRange_MetaData) }; // 10724739
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClampConstants, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClampConstants, Bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bias_MetaData), NewProp_Bias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMin = { "ClampMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClampConstants, ClampMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMin_MetaData), NewProp_ClampMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMax = { "ClampMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClampConstants, ClampMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClampMax_MetaData), NewProp_ClampMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedIncreasing = { "InterpSpeedIncreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClampConstants, InterpSpeedIncreasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeedIncreasing_MetaData), NewProp_InterpSpeedIncreasing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedDecreasing = { "InterpSpeedDecreasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputScaleBiasClampConstants, InterpSpeedDecreasing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeedDecreasing_MetaData), NewProp_InterpSpeedDecreasing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bMapRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bClampResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_bInterpResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_OutRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_Bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_ClampMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedIncreasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewProp_InterpSpeedDecreasing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputScaleBiasClampConstants",
	Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::PropPointers),
	sizeof(FInputScaleBiasClampConstants),
	alignof(FInputScaleBiasClampConstants),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampConstants()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.InnerSingleton, Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants.InnerSingleton;
}
// End ScriptStruct FInputScaleBiasClampConstants

// Begin ScriptStruct FInputScaleBiasClampState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputScaleBiasClampState;
class UScriptStruct* FInputScaleBiasClampState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputScaleBiasClampState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputScaleBiasClampState"));
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputScaleBiasClampState>()
{
	return FInputScaleBiasClampState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Mutable state struct to be used with FInputScaleBiasClampConstants\n" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "Mutable state struct to be used with FInputScaleBiasClampConstants" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputScaleBiasClampState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputScaleBiasClampState",
	nullptr,
	0,
	sizeof(FInputScaleBiasClampState),
	alignof(FInputScaleBiasClampState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClampState()
{
	if (!Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.InnerSingleton, Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputScaleBiasClampState.InnerSingleton;
}
// End ScriptStruct FInputScaleBiasClampState

// Begin Enum EAnimAlphaInputType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimAlphaInputType;
static UEnum* EAnimAlphaInputType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimAlphaInputType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimAlphaInputType"));
	}
	return Z_Registration_Info_UEnum_EAnimAlphaInputType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAnimAlphaInputType>()
{
	return EAnimAlphaInputType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.DisplayName", "Bool Value" },
		{ "Bool.Name", "EAnimAlphaInputType::Bool" },
		{ "Comment", "// AnimNodes using an Alpha can choose how it is driven.\n" },
		{ "Curve.DisplayName", "Anim Curve Value" },
		{ "Curve.Name", "EAnimAlphaInputType::Curve" },
		{ "Float.DisplayName", "Float Value" },
		{ "Float.Name", "EAnimAlphaInputType::Float" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
		{ "ToolTip", "AnimNodes using an Alpha can choose how it is driven." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimAlphaInputType::Float", (int64)EAnimAlphaInputType::Float },
		{ "EAnimAlphaInputType::Bool", (int64)EAnimAlphaInputType::Bool },
		{ "EAnimAlphaInputType::Curve", (int64)EAnimAlphaInputType::Curve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAnimAlphaInputType",
	"EAnimAlphaInputType",
	Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType()
{
	if (!Z_Registration_Info_UEnum_EAnimAlphaInputType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimAlphaInputType.InnerSingleton, Z_Construct_UEnum_Engine_EAnimAlphaInputType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimAlphaInputType.InnerSingleton;
}
// End Enum EAnimAlphaInputType

// Begin ScriptStruct FInputAlphaBoolBlend
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend;
class UScriptStruct* FInputAlphaBoolBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAlphaBoolBlend, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputAlphaBoolBlend"));
	}
	return Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAlphaBoolBlend>()
{
	return FInputAlphaBoolBlend::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOption_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/InputScaleBias.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendOption;
	static void NewProp_bInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAlphaBoolBlend>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendInTime_MetaData), NewProp_BlendInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOutTime_MetaData), NewProp_BlendOutTime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption = { "BlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, BlendOption), Z_Construct_UEnum_Engine_EAlphaBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOption_MetaData), NewProp_BlendOption_MetaData) }; // 2114278366
void Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_SetBit(void* Obj)
{
	((FInputAlphaBoolBlend*)Obj)->bInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputAlphaBoolBlend), &Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInitialized_MetaData), NewProp_bInitialized_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, CustomCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCurve_MetaData), NewProp_CustomCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend = { "AlphaBlend", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputAlphaBoolBlend, AlphaBlend), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaBlend_MetaData), NewProp_AlphaBlend_MetaData) }; // 879909083
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_BlendOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_bInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_CustomCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewProp_AlphaBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InputAlphaBoolBlend",
	Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::PropPointers),
	sizeof(FInputAlphaBoolBlend),
	alignof(FInputAlphaBoolBlend),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend()
{
	if (!Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.InnerSingleton, Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend.InnerSingleton;
}
// End ScriptStruct FInputAlphaBoolBlend

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimAlphaInputType_StaticEnum, TEXT("EAnimAlphaInputType"), &Z_Registration_Info_UEnum_EAnimAlphaInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3333507802U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputScaleBias::StaticStruct, Z_Construct_UScriptStruct_FInputScaleBias_Statics::NewStructOps, TEXT("InputScaleBias"), &Z_Registration_Info_UScriptStruct_InputScaleBias, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputScaleBias), 3603290969U) },
		{ FInputRange::StaticStruct, Z_Construct_UScriptStruct_FInputRange_Statics::NewStructOps, TEXT("InputRange"), &Z_Registration_Info_UScriptStruct_InputRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputRange), 10724739U) },
		{ FInputScaleBiasClamp::StaticStruct, Z_Construct_UScriptStruct_FInputScaleBiasClamp_Statics::NewStructOps, TEXT("InputScaleBiasClamp"), &Z_Registration_Info_UScriptStruct_InputScaleBiasClamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputScaleBiasClamp), 1905782755U) },
		{ FInputClampConstants::StaticStruct, Z_Construct_UScriptStruct_FInputClampConstants_Statics::NewStructOps, TEXT("InputClampConstants"), &Z_Registration_Info_UScriptStruct_InputClampConstants, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputClampConstants), 1762088525U) },
		{ FInputClampState::StaticStruct, Z_Construct_UScriptStruct_FInputClampState_Statics::NewStructOps, TEXT("InputClampState"), &Z_Registration_Info_UScriptStruct_InputClampState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputClampState), 3775112682U) },
		{ FInputScaleBiasClampConstants::StaticStruct, Z_Construct_UScriptStruct_FInputScaleBiasClampConstants_Statics::NewStructOps, TEXT("InputScaleBiasClampConstants"), &Z_Registration_Info_UScriptStruct_InputScaleBiasClampConstants, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputScaleBiasClampConstants), 4085056744U) },
		{ FInputScaleBiasClampState::StaticStruct, Z_Construct_UScriptStruct_FInputScaleBiasClampState_Statics::NewStructOps, TEXT("InputScaleBiasClampState"), &Z_Registration_Info_UScriptStruct_InputScaleBiasClampState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputScaleBiasClampState), 3419953940U) },
		{ FInputAlphaBoolBlend::StaticStruct, Z_Construct_UScriptStruct_FInputAlphaBoolBlend_Statics::NewStructOps, TEXT("InputAlphaBoolBlend"), &Z_Registration_Info_UScriptStruct_InputAlphaBoolBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAlphaBoolBlend), 3261382999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_3729203752(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_InputScaleBias_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
