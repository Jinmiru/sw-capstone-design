// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/NameCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNameCurve() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurveKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNameCurveKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameCurveKey;
class UScriptStruct* FNameCurveKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameCurveKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameCurveKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameCurveKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NameCurveKey"));
	}
	return Z_Registration_Info_UScriptStruct_NameCurveKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNameCurveKey>()
{
	return FNameCurveKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNameCurveKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * One key in a curve of FNames.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "One key in a curve of FNames." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Time at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Time at this key" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** Value at this key */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Value at this key" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameCurveKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameCurveKey, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameCurveKey, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameCurveKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NameCurveKey",
	Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::PropPointers),
	sizeof(FNameCurveKey),
	alignof(FNameCurveKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurveKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameCurveKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNameCurveKey()
{
	if (!Z_Registration_Info_UScriptStruct_NameCurveKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameCurveKey.InnerSingleton, Z_Construct_UScriptStruct_FNameCurveKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NameCurveKey.InnerSingleton;
}
// End ScriptStruct FNameCurveKey

// Begin ScriptStruct FNameCurve
static_assert(std::is_polymorphic<FNameCurve>() == std::is_polymorphic<FIndexedCurve>(), "USTRUCT FNameCurve cannot be polymorphic unless super FIndexedCurve is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameCurve;
class UScriptStruct* FNameCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NameCurve"));
	}
	return Z_Registration_Info_UScriptStruct_NameCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNameCurve>()
{
	return FNameCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNameCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a curve of FNames.\n */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Implements a curve of FNames." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Sorted array of keys */" },
		{ "ModuleRelativePath", "Classes/Curves/NameCurve.h" },
		{ "ToolTip", "Sorted array of keys" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNameCurveKey, METADATA_PARAMS(0, nullptr) }; // 1065323335
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 1065323335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameCurve_Statics::NewProp_Keys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FIndexedCurve,
	&NewStructOps,
	"NameCurve",
	Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurve_Statics::PropPointers),
	sizeof(FNameCurve),
	alignof(FNameCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNameCurve()
{
	if (!Z_Registration_Info_UScriptStruct_NameCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameCurve.InnerSingleton, Z_Construct_UScriptStruct_FNameCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NameCurve.InnerSingleton;
}
// End ScriptStruct FNameCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNameCurveKey::StaticStruct, Z_Construct_UScriptStruct_FNameCurveKey_Statics::NewStructOps, TEXT("NameCurveKey"), &Z_Registration_Info_UScriptStruct_NameCurveKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameCurveKey), 1065323335U) },
		{ FNameCurve::StaticStruct, Z_Construct_UScriptStruct_FNameCurve_Statics::NewStructOps, TEXT("NameCurve"), &Z_Registration_Info_UScriptStruct_NameCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameCurve), 1971777300U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h_59117420(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_NameCurve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
