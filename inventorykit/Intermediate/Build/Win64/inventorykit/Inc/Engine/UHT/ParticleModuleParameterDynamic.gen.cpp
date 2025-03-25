// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/Parameter/ParticleModuleParameterDynamic.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleParameterDynamic() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterDynamic();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleParameterDynamic_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEmitterDynamicParameter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EEmitterDynamicParameterValue
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEmitterDynamicParameterValue;
static UEnum* EEmitterDynamicParameterValue_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterDynamicParameterValue"));
	}
	return Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EEmitterDynamicParameterValue>()
{
	return EEmitterDynamicParameterValue_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""EmitterDynamicParameterValue\n *\x09""Enumeration indicating the way a dynamic parameter should be set.\n */" },
		{ "EDPV_AutoSet.Comment", "/** AutoSet - ignore values set in the distribution, another module will handle this data */" },
		{ "EDPV_AutoSet.Name", "EDPV_AutoSet" },
		{ "EDPV_AutoSet.ToolTip", "AutoSet - ignore values set in the distribution, another module will handle this data" },
		{ "EDPV_MAX.Name", "EDPV_MAX" },
		{ "EDPV_UserSet.Comment", "/** UserSet - use the user set values in the distribution (the default) */" },
		{ "EDPV_UserSet.Name", "EDPV_UserSet" },
		{ "EDPV_UserSet.ToolTip", "UserSet - use the user set values in the distribution (the default)" },
		{ "EDPV_VelocityMag.Comment", "/** VelocityMag - pass the particle velocity magnitude thru */" },
		{ "EDPV_VelocityMag.Name", "EDPV_VelocityMag" },
		{ "EDPV_VelocityMag.ToolTip", "VelocityMag - pass the particle velocity magnitude thru" },
		{ "EDPV_VelocityX.Comment", "/** VelocityX - pass the particle velocity along the X-axis thru */" },
		{ "EDPV_VelocityX.Name", "EDPV_VelocityX" },
		{ "EDPV_VelocityX.ToolTip", "VelocityX - pass the particle velocity along the X-axis thru" },
		{ "EDPV_VelocityY.Comment", "/** VelocityY - pass the particle velocity along the Y-axis thru */" },
		{ "EDPV_VelocityY.Name", "EDPV_VelocityY" },
		{ "EDPV_VelocityY.ToolTip", "VelocityY - pass the particle velocity along the Y-axis thru" },
		{ "EDPV_VelocityZ.Comment", "/** VelocityZ - pass the particle velocity along the Z-axis thru */" },
		{ "EDPV_VelocityZ.Name", "EDPV_VelocityZ" },
		{ "EDPV_VelocityZ.ToolTip", "VelocityZ - pass the particle velocity along the Z-axis thru" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "EmitterDynamicParameterValue\nEnumeration indicating the way a dynamic parameter should be set." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDPV_UserSet", (int64)EDPV_UserSet },
		{ "EDPV_AutoSet", (int64)EDPV_AutoSet },
		{ "EDPV_VelocityX", (int64)EDPV_VelocityX },
		{ "EDPV_VelocityY", (int64)EDPV_VelocityY },
		{ "EDPV_VelocityZ", (int64)EDPV_VelocityZ },
		{ "EDPV_VelocityMag", (int64)EDPV_VelocityMag },
		{ "EDPV_MAX", (int64)EDPV_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EEmitterDynamicParameterValue",
	"EEmitterDynamicParameterValue",
	Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue()
{
	if (!Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.InnerSingleton, Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEmitterDynamicParameterValue.InnerSingleton;
}
// End Enum EEmitterDynamicParameterValue

// Begin ScriptStruct FEmitterDynamicParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EmitterDynamicParameter;
class UScriptStruct* FEmitterDynamicParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmitterDynamicParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EmitterDynamicParameter"));
	}
	return Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEmitterDynamicParameter>()
{
	return FEmitterDynamicParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper structure for displaying the parameter. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "Helper structure for displaying the parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** The parameter name - from the material DynamicParameter expression. READ-ONLY */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "The parameter name - from the material DynamicParameter expression. READ-ONLY" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** If true, use the EmitterTime to retrieve the value, otherwise use Particle RelativeTime. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "If true, use the EmitterTime to retrieve the value, otherwise use Particle RelativeTime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnTimeOnly_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** If true, only set the value at spawn time of the particle, otherwise update each frame. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "If true, only set the value at spawn time of the particle, otherwise update each frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueMethod_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** Where to get the parameter value from. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "Where to get the parameter value from." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleVelocityByParamValue_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** If true, scale the velocity value selected in ValueMethod by the evaluated ParamValue. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "If true, scale the velocity value selected in ValueMethod by the evaluated ParamValue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamValue_MetaData[] = {
		{ "Category", "EmitterDynamicParameter" },
		{ "Comment", "/** The distriubtion for the parameter value. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "The distriubtion for the parameter value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
	static void NewProp_bUseEmitterTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
	static void NewProp_bSpawnTimeOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnTimeOnly;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueMethod;
	static void NewProp_bScaleVelocityByParamValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleVelocityByParamValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParamValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmitterDynamicParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEmitterDynamicParameter, ParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamName_MetaData), NewProp_ParamName_MetaData) };
void Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
{
	((FEmitterDynamicParameter*)Obj)->bUseEmitterTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEmitterDynamicParameter), &Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEmitterTime_MetaData), NewProp_bUseEmitterTime_MetaData) };
void Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_SetBit(void* Obj)
{
	((FEmitterDynamicParameter*)Obj)->bSpawnTimeOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly = { "bSpawnTimeOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEmitterDynamicParameter), &Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnTimeOnly_MetaData), NewProp_bSpawnTimeOnly_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod = { "ValueMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEmitterDynamicParameter, ValueMethod), Z_Construct_UEnum_Engine_EEmitterDynamicParameterValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueMethod_MetaData), NewProp_ValueMethod_MetaData) }; // 576361751
void Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_SetBit(void* Obj)
{
	((FEmitterDynamicParameter*)Obj)->bScaleVelocityByParamValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue = { "bScaleVelocityByParamValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FEmitterDynamicParameter), &Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleVelocityByParamValue_MetaData), NewProp_bScaleVelocityByParamValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue = { "ParamValue", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEmitterDynamicParameter, ParamValue), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamValue_MetaData), NewProp_ParamValue_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bUseEmitterTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bSpawnTimeOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ValueMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_bScaleVelocityByParamValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewProp_ParamValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"EmitterDynamicParameter",
	Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::PropPointers),
	sizeof(FEmitterDynamicParameter),
	alignof(FEmitterDynamicParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEmitterDynamicParameter()
{
	if (!Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.InnerSingleton, Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EmitterDynamicParameter.InnerSingleton;
}
// End ScriptStruct FEmitterDynamicParameter

// Begin Class UParticleModuleParameterDynamic
void UParticleModuleParameterDynamic::StaticRegisterNativesUParticleModuleParameterDynamic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleParameterDynamic);
UClass* Z_Construct_UClass_UParticleModuleParameterDynamic_NoRegister()
{
	return UParticleModuleParameterDynamic::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleParameterDynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Dynamic" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicParams_MetaData[] = {
		{ "Category", "ParticleModuleParameterDynamic" },
		{ "Comment", "/** The dynamic parameters this module uses. */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "The dynamic parameters this module uses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFlags_MetaData[] = {
		{ "Comment", "/** Flags for optimizing update */" },
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
		{ "ToolTip", "Flags for optimizing update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Parameter/ParticleModuleParameterDynamic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicParams_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicParams;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateFlags;
	static void NewProp_bUsesVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleParameterDynamic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_Inner = { "DynamicParams", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEmitterDynamicParameter, METADATA_PARAMS(0, nullptr) }; // 1944606314
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams = { "DynamicParams", nullptr, (EPropertyFlags)0x0010008000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleParameterDynamic, DynamicParams), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicParams_MetaData), NewProp_DynamicParams_MetaData) }; // 1944606314
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags = { "UpdateFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleParameterDynamic, UpdateFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateFlags_MetaData), NewProp_UpdateFlags_MetaData) };
void Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_SetBit(void* Obj)
{
	((UParticleModuleParameterDynamic*)Obj)->bUsesVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity = { "bUsesVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleParameterDynamic), &Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesVelocity_MetaData), NewProp_bUsesVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_DynamicParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_UpdateFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::NewProp_bUsesVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleParameterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::ClassParams = {
	&UParticleModuleParameterDynamic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleParameterDynamic()
{
	if (!Z_Registration_Info_UClass_UParticleModuleParameterDynamic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleParameterDynamic.OuterSingleton, Z_Construct_UClass_UParticleModuleParameterDynamic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleParameterDynamic.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleParameterDynamic>()
{
	return UParticleModuleParameterDynamic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleParameterDynamic);
UParticleModuleParameterDynamic::~UParticleModuleParameterDynamic() {}
// End Class UParticleModuleParameterDynamic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEmitterDynamicParameterValue_StaticEnum, TEXT("EEmitterDynamicParameterValue"), &Z_Registration_Info_UEnum_EEmitterDynamicParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 576361751U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEmitterDynamicParameter::StaticStruct, Z_Construct_UScriptStruct_FEmitterDynamicParameter_Statics::NewStructOps, TEXT("EmitterDynamicParameter"), &Z_Registration_Info_UScriptStruct_EmitterDynamicParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEmitterDynamicParameter), 1944606314U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleParameterDynamic, UParticleModuleParameterDynamic::StaticClass, TEXT("UParticleModuleParameterDynamic"), &Z_Registration_Info_UClass_UParticleModuleParameterDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleParameterDynamic), 537711514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_324882984(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Parameter_ParticleModuleParameterDynamic_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
