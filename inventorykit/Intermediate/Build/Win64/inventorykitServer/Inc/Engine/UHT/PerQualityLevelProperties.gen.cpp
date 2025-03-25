// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/PerQualityLevelProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerQualityLevelProperties() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPerQualityLevels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EPerQualityLevels
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPerQualityLevels;
static UEnum* EPerQualityLevels_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPerQualityLevels, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPerQualityLevels"));
	}
	return Z_Registration_Info_UEnum_EPerQualityLevels.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EPerQualityLevels>()
{
	return EPerQualityLevels_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EPerQualityLevels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cinematic.Name", "EPerQualityLevels::Cinematic" },
		{ "Epic.Name", "EPerQualityLevels::Epic" },
		{ "High.Name", "EPerQualityLevels::High" },
		{ "Low.Name", "EPerQualityLevels::Low" },
		{ "Medium.Name", "EPerQualityLevels::Medium" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
		{ "Num.Name", "EPerQualityLevels::Num" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPerQualityLevels::Low", (int64)EPerQualityLevels::Low },
		{ "EPerQualityLevels::Medium", (int64)EPerQualityLevels::Medium },
		{ "EPerQualityLevels::High", (int64)EPerQualityLevels::High },
		{ "EPerQualityLevels::Epic", (int64)EPerQualityLevels::Epic },
		{ "EPerQualityLevels::Cinematic", (int64)EPerQualityLevels::Cinematic },
		{ "EPerQualityLevels::Num", (int64)EPerQualityLevels::Num },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EPerQualityLevels",
	"EPerQualityLevels",
	Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EPerQualityLevels()
{
	if (!Z_Registration_Info_UEnum_EPerQualityLevels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPerQualityLevels.InnerSingleton, Z_Construct_UEnum_Engine_EPerQualityLevels_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPerQualityLevels.InnerSingleton;
}
// End Enum EPerQualityLevels

// Begin ScriptStruct FPerQualityLevelInt
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerQualityLevelInt;
class UScriptStruct* FPerQualityLevelInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerQualityLevelInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerQualityLevelInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerQualityLevelInt, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerQualityLevelInt"));
	}
	return Z_Registration_Info_UScriptStruct_PerQualityLevelInt.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerQualityLevelInt>()
{
	return FPerQualityLevelInt::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "PerQualityLevel" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerQuality_MetaData[] = {
		{ "Category", "PerQualityLevel" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerQuality_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerQuality_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerQualityLevelInt>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerQualityLevelInt, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_ValueProp = { "PerQuality", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_Key_KeyProp = { "PerQuality_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality = { "PerQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerQualityLevelInt, PerQuality), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerQuality_MetaData), NewProp_PerQuality_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewProp_PerQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PerQualityLevelInt",
	Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::PropPointers),
	sizeof(FPerQualityLevelInt),
	alignof(FPerQualityLevelInt),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt()
{
	if (!Z_Registration_Info_UScriptStruct_PerQualityLevelInt.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerQualityLevelInt.InnerSingleton, Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerQualityLevelInt.InnerSingleton;
}
// End ScriptStruct FPerQualityLevelInt

// Begin ScriptStruct FPerQualityLevelFloat
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerQualityLevelFloat;
class UScriptStruct* FPerQualityLevelFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerQualityLevelFloat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerQualityLevelFloat"));
	}
	return Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerQualityLevelFloat>()
{
	return FPerQualityLevelFloat::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Default_MetaData[] = {
		{ "Category", "PerQualityLevel" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerQuality_MetaData[] = {
		{ "Category", "PerQualityLevel" },
		{ "ModuleRelativePath", "Public/PerQualityLevelProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Default;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerQuality_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PerQuality_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PerQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerQualityLevelFloat>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerQualityLevelFloat, Default), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Default_MetaData), NewProp_Default_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_ValueProp = { "PerQuality", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_Key_KeyProp = { "PerQuality_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality = { "PerQuality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerQualityLevelFloat, PerQuality), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerQuality_MetaData), NewProp_PerQuality_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_Default,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewProp_PerQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"PerQualityLevelFloat",
	Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::PropPointers),
	sizeof(FPerQualityLevelFloat),
	alignof(FPerQualityLevelFloat),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelFloat()
{
	if (!Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.InnerSingleton, Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerQualityLevelFloat.InnerSingleton;
}
// End ScriptStruct FPerQualityLevelFloat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPerQualityLevels_StaticEnum, TEXT("EPerQualityLevels"), &Z_Registration_Info_UEnum_EPerQualityLevels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 702377748U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerQualityLevelInt::StaticStruct, Z_Construct_UScriptStruct_FPerQualityLevelInt_Statics::NewStructOps, TEXT("PerQualityLevelInt"), &Z_Registration_Info_UScriptStruct_PerQualityLevelInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerQualityLevelInt), 178663833U) },
		{ FPerQualityLevelFloat::StaticStruct, Z_Construct_UScriptStruct_FPerQualityLevelFloat_Statics::NewStructOps, TEXT("PerQualityLevelFloat"), &Z_Registration_Info_UScriptStruct_PerQualityLevelFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerQualityLevelFloat), 2915177448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_815946437(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_PerQualityLevelProperties_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
