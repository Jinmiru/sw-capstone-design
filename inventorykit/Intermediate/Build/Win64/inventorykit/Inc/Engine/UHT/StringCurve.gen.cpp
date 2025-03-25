// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringCurve() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurveKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FStringCurveKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringCurveKey;
class UScriptStruct* FStringCurveKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringCurveKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringCurveKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringCurveKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StringCurveKey"));
	}
	return Z_Registration_Info_UScriptStruct_StringCurveKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStringCurveKey>()
{
	return FStringCurveKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStringCurveKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * One key in a curve of FStrings.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "One key in a curve of FStrings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Time at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Time at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Value at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Value at this key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringCurveKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStringCurveKey, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStringCurveKey, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringCurveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringCurveKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"StringCurveKey",
	Z_Construct_UScriptStruct_FStringCurveKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurveKey_Statics::PropPointers),
	sizeof(FStringCurveKey),
	alignof(FStringCurveKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurveKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStringCurveKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStringCurveKey()
{
	if (!Z_Registration_Info_UScriptStruct_StringCurveKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringCurveKey.InnerSingleton, Z_Construct_UScriptStruct_FStringCurveKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StringCurveKey.InnerSingleton;
}
// End ScriptStruct FStringCurveKey

// Begin ScriptStruct FStringCurve
static_assert(std::is_polymorphic<FStringCurve>() == std::is_polymorphic<FIndexedCurve>(), "USTRUCT FStringCurve cannot be polymorphic unless super FIndexedCurve is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringCurve;
class UScriptStruct* FStringCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StringCurve"));
	}
	return Z_Registration_Info_UScriptStruct_StringCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStringCurve>()
{
	return FStringCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStringCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a curve of FStrings.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Implements a curve of FStrings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Default value */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Default value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Sorted array of keys */" },
		{ "ModuleRelativePath", "Classes/Curves/StringCurve.h" },
		{ "ToolTip", "Sorted array of keys" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStringCurve, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStringCurveKey, METADATA_PARAMS(0, nullptr) }; // 3523800476
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStringCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 3523800476
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStringCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStringCurve_Statics::NewProp_Keys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FIndexedCurve,
	&NewStructOps,
	"StringCurve",
	Z_Construct_UScriptStruct_FStringCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurve_Statics::PropPointers),
	sizeof(FStringCurve),
	alignof(FStringCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStringCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStringCurve()
{
	if (!Z_Registration_Info_UScriptStruct_StringCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringCurve.InnerSingleton, Z_Construct_UScriptStruct_FStringCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StringCurve.InnerSingleton;
}
// End ScriptStruct FStringCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStringCurveKey::StaticStruct, Z_Construct_UScriptStruct_FStringCurveKey_Statics::NewStructOps, TEXT("StringCurveKey"), &Z_Registration_Info_UScriptStruct_StringCurveKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringCurveKey), 3523800476U) },
		{ FStringCurve::StaticStruct, Z_Construct_UScriptStruct_FStringCurve_Statics::NewStructOps, TEXT("StringCurve"), &Z_Registration_Info_UScriptStruct_StringCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringCurve), 2972747350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h_1320280948(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_StringCurve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
