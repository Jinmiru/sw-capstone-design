// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCurve() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRealCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurveKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FSimpleCurveKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleCurveKey;
class UScriptStruct* FSimpleCurveKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleCurveKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleCurveKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCurveKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SimpleCurveKey"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleCurveKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSimpleCurveKey>()
{
	return FSimpleCurveKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleCurveKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** One key in a rich, editable float curve */" },
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "One key in a rich, editable float curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Time at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "Time at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Value at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "Value at this key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleCurveKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleCurveKey, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleCurveKey, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SimpleCurveKey",
	Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::PropPointers),
	sizeof(FSimpleCurveKey),
	alignof(FSimpleCurveKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurveKey()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleCurveKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleCurveKey.InnerSingleton, Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleCurveKey.InnerSingleton;
}
// End ScriptStruct FSimpleCurveKey

// Begin ScriptStruct FSimpleCurve
static_assert(std::is_polymorphic<FSimpleCurve>() == std::is_polymorphic<FRealCurve>(), "USTRUCT FSimpleCurve cannot be polymorphic unless super FRealCurve is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleCurve;
class UScriptStruct* FSimpleCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SimpleCurve"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSimpleCurve>()
{
	return FSimpleCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** A rich, editable float curve */" },
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "A rich, editable float curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[] = {
		{ "Comment", "/** Interpolation mode between this key and the next */" },
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "Interpolation mode between this key and the next" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Sorted array of keys */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Curves/SimpleCurve.h" },
		{ "ToolTip", "Sorted array of keys" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleCurve, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpMode_MetaData), NewProp_InterpMode_MetaData) }; // 294528593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSimpleCurveKey, METADATA_PARAMS(0, nullptr) }; // 129315036
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 129315036
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_InterpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewProp_Keys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FRealCurve,
	&NewStructOps,
	"SimpleCurve",
	Z_Construct_UScriptStruct_FSimpleCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurve_Statics::PropPointers),
	sizeof(FSimpleCurve),
	alignof(FSimpleCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurve()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleCurve.InnerSingleton, Z_Construct_UScriptStruct_FSimpleCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleCurve.InnerSingleton;
}
// End ScriptStruct FSimpleCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_SimpleCurve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleCurveKey::StaticStruct, Z_Construct_UScriptStruct_FSimpleCurveKey_Statics::NewStructOps, TEXT("SimpleCurveKey"), &Z_Registration_Info_UScriptStruct_SimpleCurveKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleCurveKey), 129315036U) },
		{ FSimpleCurve::StaticStruct, Z_Construct_UScriptStruct_FSimpleCurve_Statics::NewStructOps, TEXT("SimpleCurve"), &Z_Registration_Info_UScriptStruct_SimpleCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleCurve), 3833168476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_SimpleCurve_h_2492276577(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_SimpleCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_SimpleCurve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
