// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntegralCurve() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FIntegralKey
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegralKey;
class UScriptStruct* FIntegralKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegralKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegralKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegralKey, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("IntegralKey"));
	}
	return Z_Registration_Info_UScriptStruct_IntegralKey.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIntegralKey>()
{
	return FIntegralKey::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntegralKey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** An integral key, which holds the key time and the key value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "An integral key, which holds the key time and the key value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The keyed time */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "The keyed time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The keyed integral value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "The keyed integral value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegralKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntegralKey, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntegralKey, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralKey_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegralKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"IntegralKey",
	Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::PropPointers),
	sizeof(FIntegralKey),
	alignof(FIntegralKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntegralKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntegralKey()
{
	if (!Z_Registration_Info_UScriptStruct_IntegralKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegralKey.InnerSingleton, Z_Construct_UScriptStruct_FIntegralKey_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntegralKey.InnerSingleton;
}
// End ScriptStruct FIntegralKey

// Begin ScriptStruct FIntegralCurve
static_assert(std::is_polymorphic<FIntegralCurve>() == std::is_polymorphic<FIndexedCurve>(), "USTRUCT FIntegralCurve cannot be polymorphic unless super FIndexedCurve is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegralCurve;
class UScriptStruct* FIntegralCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegralCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegralCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegralCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("IntegralCurve"));
	}
	return Z_Registration_Info_UScriptStruct_IntegralCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FIntegralCurve>()
{
	return FIntegralCurve::StaticStruct();
}
struct Z_Construct_UScriptStruct_FIntegralCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** An integral curve, which holds the key time and the key value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "An integral curve, which holds the key time and the key value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** The keys, ordered by time */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "The keys, ordered by time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Default value */" },
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
		{ "ToolTip", "Default value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultValueBeforeFirstKey_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/IntegralCurve.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
	static void NewProp_bUseDefaultValueBeforeFirstKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultValueBeforeFirstKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegralCurve>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntegralKey, METADATA_PARAMS(0, nullptr) }; // 1591622343
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntegralCurve, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Keys_MetaData), NewProp_Keys_MetaData) }; // 1591622343
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIntegralCurve, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
void Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_SetBit(void* Obj)
{
	((FIntegralCurve*)Obj)->bUseDefaultValueBeforeFirstKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey = { "bUseDefaultValueBeforeFirstKey", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIntegralCurve), &Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultValueBeforeFirstKey_MetaData), NewProp_bUseDefaultValueBeforeFirstKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_Keys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_DefaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewProp_bUseDefaultValueBeforeFirstKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegralCurve_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FIndexedCurve,
	&NewStructOps,
	"IntegralCurve",
	Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::PropPointers),
	sizeof(FIntegralCurve),
	alignof(FIntegralCurve),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegralCurve_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIntegralCurve_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve()
{
	if (!Z_Registration_Info_UScriptStruct_IntegralCurve.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegralCurve.InnerSingleton, Z_Construct_UScriptStruct_FIntegralCurve_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_IntegralCurve.InnerSingleton;
}
// End ScriptStruct FIntegralCurve

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIntegralKey::StaticStruct, Z_Construct_UScriptStruct_FIntegralKey_Statics::NewStructOps, TEXT("IntegralKey"), &Z_Registration_Info_UScriptStruct_IntegralKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegralKey), 1591622343U) },
		{ FIntegralCurve::StaticStruct, Z_Construct_UScriptStruct_FIntegralCurve_Statics::NewStructOps, TEXT("IntegralCurve"), &Z_Registration_Info_UScriptStruct_IntegralCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegralCurve), 1346212987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h_3337461820(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_IntegralCurve_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
