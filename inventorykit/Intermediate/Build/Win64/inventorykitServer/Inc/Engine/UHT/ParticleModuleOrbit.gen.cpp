// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrbit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbitBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOrbitChainMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FOrbitOptions();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EOrbitChainMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrbitChainMode;
static UEnum* EOrbitChainMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrbitChainMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrbitChainMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOrbitChainMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EOrbitChainMode"));
	}
	return Z_Registration_Info_UEnum_EOrbitChainMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EOrbitChainMode>()
{
	return EOrbitChainMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EOrbitChainMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EOChainMode_Add.Comment", "/** Add the module values to the previous results\x09\x09\x09\x09\x09\x09*/" },
		{ "EOChainMode_Add.DisplayName", "Add" },
		{ "EOChainMode_Add.Name", "EOChainMode_Add" },
		{ "EOChainMode_Add.ToolTip", "Add the module values to the previous results" },
		{ "EOChainMode_Link.Comment", "/**\x09'Break' the chain and apply the values from the\x09previous results\x09*/" },
		{ "EOChainMode_Link.DisplayName", "Link" },
		{ "EOChainMode_Link.Name", "EOChainMode_Link" },
		{ "EOChainMode_Link.ToolTip", "'Break' the chain and apply the values from the previous results" },
		{ "EOChainMode_MAX.Name", "EOChainMode_MAX" },
		{ "EOChainMode_Scale.Comment", "/**\x09Multiply the module values by the previous results\x09\x09\x09\x09\x09*/" },
		{ "EOChainMode_Scale.DisplayName", "Scale" },
		{ "EOChainMode_Scale.Name", "EOChainMode_Scale" },
		{ "EOChainMode_Scale.ToolTip", "Multiply the module values by the previous results" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOChainMode_Add", (int64)EOChainMode_Add },
		{ "EOChainMode_Scale", (int64)EOChainMode_Scale },
		{ "EOChainMode_Link", (int64)EOChainMode_Link },
		{ "EOChainMode_MAX", (int64)EOChainMode_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EOrbitChainMode",
	"EOrbitChainMode",
	Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EOrbitChainMode()
{
	if (!Z_Registration_Info_UEnum_EOrbitChainMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrbitChainMode.InnerSingleton, Z_Construct_UEnum_Engine_EOrbitChainMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrbitChainMode.InnerSingleton;
}
// End Enum EOrbitChainMode

// Begin ScriptStruct FOrbitOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OrbitOptions;
class UScriptStruct* FOrbitOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OrbitOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OrbitOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrbitOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("OrbitOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OrbitOptions.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FOrbitOptions>()
{
	return FOrbitOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOrbitOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Container struct for holding options on the data updating for the module.\n */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Container struct for holding options on the data updating for the module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessDuringSpawn_MetaData[] = {
		{ "Category", "OrbitOptions" },
		{ "Comment", "/**\n\x09 *\x09Whether to process the data during spawning.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Whether to process the data during spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProcessDuringUpdate_MetaData[] = {
		{ "Category", "OrbitOptions" },
		{ "Comment", "/**\n\x09 *\x09Whether to process the data during updating.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Whether to process the data during updating." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "OrbitOptions" },
		{ "Comment", "/**\n\x09 *\x09Whether to use emitter time during data retrieval.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Whether to use emitter time during data retrieval." },
	};
#endif // WITH_METADATA
	static void NewProp_bProcessDuringSpawn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessDuringSpawn;
	static void NewProp_bProcessDuringUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProcessDuringUpdate;
	static void NewProp_bUseEmitterTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrbitOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn_SetBit(void* Obj)
{
	((FOrbitOptions*)Obj)->bProcessDuringSpawn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn = { "bProcessDuringSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOrbitOptions), &Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessDuringSpawn_MetaData), NewProp_bProcessDuringSpawn_MetaData) };
void Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate_SetBit(void* Obj)
{
	((FOrbitOptions*)Obj)->bProcessDuringUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate = { "bProcessDuringUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOrbitOptions), &Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProcessDuringUpdate_MetaData), NewProp_bProcessDuringUpdate_MetaData) };
void Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
{
	((FOrbitOptions*)Obj)->bUseEmitterTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOrbitOptions), &Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEmitterTime_MetaData), NewProp_bUseEmitterTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrbitOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bProcessDuringUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewProp_bUseEmitterTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbitOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrbitOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"OrbitOptions",
	Z_Construct_UScriptStruct_FOrbitOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbitOptions_Statics::PropPointers),
	sizeof(FOrbitOptions),
	alignof(FOrbitOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrbitOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOrbitOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOrbitOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OrbitOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OrbitOptions.InnerSingleton, Z_Construct_UScriptStruct_FOrbitOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OrbitOptions.InnerSingleton;
}
// End ScriptStruct FOrbitOptions

// Begin Class UParticleModuleOrbit
void UParticleModuleOrbit::StaticRegisterNativesUParticleModuleOrbit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleOrbit);
UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister()
{
	return UParticleModuleOrbit::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleOrbit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Orbit" },
		{ "HideCategories", "Object Orbit Object Object" },
		{ "IncludePath", "Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChainMode_MetaData[] = {
		{ "Category", "Chaining" },
		{ "Comment", "/**\n\x09 *\x09Orbit modules will chain together in the order they appear in the module stack.\n\x09 *\x09The combination of a module with the one prior to it is defined by using one\n\x09 *\x09of the following enumerations:\n\x09 *\x09\x09""EOChainMode_Add\x09\x09""Add the values to the previous results\n\x09 *\x09\x09""EOChainMode_Scale\x09Multiply the values by the previous results\n\x09 *\x09\x09""EOChainMode_Link\x09'Break' the chain and apply the values from the\x09previous results\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "Orbit modules will chain together in the order they appear in the module stack.\nThe combination of a module with the one prior to it is defined by using one\nof the following enumerations:\n        EOChainMode_Add         Add the values to the previous results\n        EOChainMode_Scale       Multiply the values by the previous results\n        EOChainMode_Link        'Break' the chain and apply the values from the previous results" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetAmount_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** The amount to offset the sprite from the particle position. */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The amount to offset the sprite from the particle position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetOptions_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** The options associated with the OffsetAmount look-up. */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The options associated with the OffsetAmount look-up." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/**\n\x09 *\x09The amount (in 'turns') to rotate the offset about the particle position.\n\x09 *\x09\x09""0.0 = no rotation\n\x09 *\x09\x09""0.5\x09= 180 degree rotation\n\x09 *\x09\x09""1.0 = 360 degree rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The amount (in 'turns') to rotate the offset about the particle position.\n        0.0 = no rotation\n        0.5     = 180 degree rotation\n        1.0 = 360 degree rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOptions_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** The options associated with the RotationAmount look-up. */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The options associated with the RotationAmount look-up." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateAmount_MetaData[] = {
		{ "Category", "RotationRate" },
		{ "Comment", "/**\n\x09 *\x09The rate (in 'turns') at which to rotate the offset about the particle positon.\n\x09 *\x09\x09""0.0 = no rotation\n\x09 *\x09\x09""0.5\x09= 180 degree rotation\n\x09 *\x09\x09""1.0 = 360 degree rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The rate (in 'turns') at which to rotate the offset about the particle positon.\n        0.0 = no rotation\n        0.5     = 180 degree rotation\n        1.0 = 360 degree rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateOptions_MetaData[] = {
		{ "Category", "RotationRate" },
		{ "Comment", "/** The options associated with the RotationRateAmount look-up. */" },
		{ "ModuleRelativePath", "Classes/Particles/Orbit/ParticleModuleOrbit.h" },
		{ "ToolTip", "The options associated with the RotationRateAmount look-up." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChainMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRateAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRateOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleOrbit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_ChainMode = { "ChainMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleOrbit, ChainMode), Z_Construct_UEnum_Engine_EOrbitChainMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChainMode_MetaData), NewProp_ChainMode_MetaData) }; // 1973230809
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetAmount = { "OffsetAmount", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleOrbit, OffsetAmount), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetAmount_MetaData), NewProp_OffsetAmount_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetOptions = { "OffsetOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleOrbit, OffsetOptions), Z_Construct_UScriptStruct_FOrbitOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetOptions_MetaData), NewProp_OffsetOptions_MetaData) }; // 2651073246
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleOrbit, RotationAmount), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAmount_MetaData), NewProp_RotationAmount_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationOptions = { "RotationOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleOrbit, RotationOptions), Z_Construct_UScriptStruct_FOrbitOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOptions_MetaData), NewProp_RotationOptions_MetaData) }; // 2651073246
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateAmount = { "RotationRateAmount", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleOrbit, RotationRateAmount), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateAmount_MetaData), NewProp_RotationRateAmount_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateOptions = { "RotationRateOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleOrbit, RotationRateOptions), Z_Construct_UScriptStruct_FOrbitOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateOptions_MetaData), NewProp_RotationRateOptions_MetaData) }; // 2651073246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleOrbit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_ChainMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_OffsetOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrbit_Statics::NewProp_RotationRateOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleOrbit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleOrbitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleOrbit_Statics::ClassParams = {
	&UParticleModuleOrbit::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleOrbit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrbit_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleOrbit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleOrbit()
{
	if (!Z_Registration_Info_UClass_UParticleModuleOrbit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleOrbit.OuterSingleton, Z_Construct_UClass_UParticleModuleOrbit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleOrbit.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleOrbit>()
{
	return UParticleModuleOrbit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrbit);
UParticleModuleOrbit::~UParticleModuleOrbit() {}
// End Class UParticleModuleOrbit

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOrbitChainMode_StaticEnum, TEXT("EOrbitChainMode"), &Z_Registration_Info_UEnum_EOrbitChainMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1973230809U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOrbitOptions::StaticStruct, Z_Construct_UScriptStruct_FOrbitOptions_Statics::NewStructOps, TEXT("OrbitOptions"), &Z_Registration_Info_UScriptStruct_OrbitOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOrbitOptions), 2651073246U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleOrbit, UParticleModuleOrbit::StaticClass, TEXT("UParticleModuleOrbit"), &Z_Registration_Info_UClass_UParticleModuleOrbit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleOrbit), 2865056148U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_665356937(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orbit_ParticleModuleOrbit_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
