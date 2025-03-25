// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModule() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EModuleType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleCurvePair();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EModuleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModuleType;
static UEnum* EModuleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModuleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModuleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EModuleType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EModuleType"));
	}
	return Z_Registration_Info_UEnum_EModuleType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EModuleType>()
{
	return EModuleType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EModuleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** ModuleType\n *\x09Indicates the kind of emitter the module can be applied to.\n *\x09ie, EPMT_Beam - only applies to beam emitters.\n *\n *\x09The TypeData field is present to speed up finding the TypeData module.\n */" },
		{ "EPMT_Beam.Comment", "/** Beam - only applied to beam emitters\x09\x09\x09*/" },
		{ "EPMT_Beam.DisplayName", "Beam" },
		{ "EPMT_Beam.Name", "EPMT_Beam" },
		{ "EPMT_Beam.ToolTip", "Beam - only applied to beam emitters" },
		{ "EPMT_Event.Comment", "/** Event - event related modules\x09\x09\x09\x09\x09*/" },
		{ "EPMT_Event.DisplayName", "Event" },
		{ "EPMT_Event.Name", "EPMT_Event" },
		{ "EPMT_Event.ToolTip", "Event - event related modules" },
		{ "EPMT_General.Comment", "/** General - all emitter types can use it\x09\x09\x09*/" },
		{ "EPMT_General.DisplayName", "General" },
		{ "EPMT_General.Name", "EPMT_General" },
		{ "EPMT_General.ToolTip", "General - all emitter types can use it" },
		{ "EPMT_Light.Comment", "/** Light related modules\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "EPMT_Light.DisplayName", "Light" },
		{ "EPMT_Light.Name", "EPMT_Light" },
		{ "EPMT_Light.ToolTip", "Light related modules" },
		{ "EPMT_MAX.Name", "EPMT_MAX" },
		{ "EPMT_Required.Comment", "/** Required - all emitter types REQUIRE it\x09\x09\x09*/" },
		{ "EPMT_Required.DisplayName", "Required" },
		{ "EPMT_Required.Name", "EPMT_Required" },
		{ "EPMT_Required.ToolTip", "Required - all emitter types REQUIRE it" },
		{ "EPMT_Spawn.Comment", "/** Spawn - all emitter types REQUIRE it\x09\x09\x09*/" },
		{ "EPMT_Spawn.DisplayName", "Spawn" },
		{ "EPMT_Spawn.Name", "EPMT_Spawn" },
		{ "EPMT_Spawn.ToolTip", "Spawn - all emitter types REQUIRE it" },
		{ "EPMT_SubUV.Comment", "/** SubUV related modules\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "EPMT_SubUV.DisplayName", "SubUV" },
		{ "EPMT_SubUV.Name", "EPMT_SubUV" },
		{ "EPMT_SubUV.ToolTip", "SubUV related modules" },
		{ "EPMT_Trail.Comment", "/** Trail - only applied to trail emitters\x09\x09\x09*/" },
		{ "EPMT_Trail.DisplayName", "Trail" },
		{ "EPMT_Trail.Name", "EPMT_Trail" },
		{ "EPMT_Trail.ToolTip", "Trail - only applied to trail emitters" },
		{ "EPMT_TypeData.Comment", "/** TypeData - TypeData modules\x09\x09\x09\x09\x09\x09*/" },
		{ "EPMT_TypeData.DisplayName", "Type Data" },
		{ "EPMT_TypeData.Name", "EPMT_TypeData" },
		{ "EPMT_TypeData.ToolTip", "TypeData - TypeData modules" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "ModuleType\n   Indicates the kind of emitter the module can be applied to.\n   ie, EPMT_Beam - only applies to beam emitters.\n\n   The TypeData field is present to speed up finding the TypeData module." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPMT_General", (int64)EPMT_General },
		{ "EPMT_TypeData", (int64)EPMT_TypeData },
		{ "EPMT_Beam", (int64)EPMT_Beam },
		{ "EPMT_Trail", (int64)EPMT_Trail },
		{ "EPMT_Spawn", (int64)EPMT_Spawn },
		{ "EPMT_Required", (int64)EPMT_Required },
		{ "EPMT_Event", (int64)EPMT_Event },
		{ "EPMT_Light", (int64)EPMT_Light },
		{ "EPMT_SubUV", (int64)EPMT_SubUV },
		{ "EPMT_MAX", (int64)EPMT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EModuleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EModuleType",
	"EModuleType",
	Z_Construct_UEnum_Engine_EModuleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModuleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EModuleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EModuleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EModuleType()
{
	if (!Z_Registration_Info_UEnum_EModuleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModuleType.InnerSingleton, Z_Construct_UEnum_Engine_EModuleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModuleType.InnerSingleton;
}
// End Enum EModuleType

// Begin Enum EParticleSourceSelectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSourceSelectionMethod;
static UEnum* EParticleSourceSelectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSourceSelectionMethod"));
	}
	return Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EParticleSourceSelectionMethod>()
{
	return EParticleSourceSelectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09Particle Selection Method, for any emitters that utilize particles\n *\x09""as the source points.\n */" },
		{ "EPSSM_MAX.Name", "EPSSM_MAX" },
		{ "EPSSM_Random.Comment", "/** Random\x09\x09- select a particle at random\x09\x09*/" },
		{ "EPSSM_Random.DisplayName", "Random" },
		{ "EPSSM_Random.Name", "EPSSM_Random" },
		{ "EPSSM_Random.ToolTip", "Random         - select a particle at random" },
		{ "EPSSM_Sequential.Comment", "/** Sequential\x09- select a particle in order\x09\x09*/" },
		{ "EPSSM_Sequential.DisplayName", "Sequential" },
		{ "EPSSM_Sequential.Name", "EPSSM_Sequential" },
		{ "EPSSM_Sequential.ToolTip", "Sequential     - select a particle in order" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "Particle Selection Method, for any emitters that utilize particles\nas the source points." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPSSM_Random", (int64)EPSSM_Random },
		{ "EPSSM_Sequential", (int64)EPSSM_Sequential },
		{ "EPSSM_MAX", (int64)EPSSM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EParticleSourceSelectionMethod",
	"EParticleSourceSelectionMethod",
	Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod()
{
	if (!Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSourceSelectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EParticleSourceSelectionMethod.InnerSingleton;
}
// End Enum EParticleSourceSelectionMethod

// Begin ScriptStruct FParticleCurvePair
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleCurvePair;
class UScriptStruct* FParticleCurvePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleCurvePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleCurvePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleCurvePair, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleCurvePair"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleCurvePair.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleCurvePair>()
{
	return FParticleCurvePair::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleCurvePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleCurvePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleCurvePair, CurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_MetaData), NewProp_CurveName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject = { "CurveObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleCurvePair, CurveObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveObject_MetaData), NewProp_CurveObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewProp_CurveObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleCurvePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ParticleCurvePair",
	Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::PropPointers),
	sizeof(FParticleCurvePair),
	alignof(FParticleCurvePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleCurvePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleCurvePair()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleCurvePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleCurvePair.InnerSingleton, Z_Construct_UScriptStruct_FParticleCurvePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleCurvePair.InnerSingleton;
}
// End ScriptStruct FParticleCurvePair

// Begin ScriptStruct FParticleRandomSeedInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo;
class UScriptStruct* FParticleRandomSeedInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticleRandomSeedInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParticleRandomSeedInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParticleRandomSeedInfo>()
{
	return FParticleRandomSeedInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** The name to expose to the placed instances for setting this seed */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The name to expose to the placed instances for setting this seed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGetSeedFromInstance_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09If true, the module will attempt to get the seed from the owner\n\x09 *\x09instance. If that fails, it will fall back to getting it from\n\x09 *\x09the RandomSeeds array.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module will attempt to get the seed from the owner\ninstance. If that fails, it will fall back to getting it from\nthe RandomSeeds array." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInstanceSeedIsIndex_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09If true, the seed value retrieved from the instance will be an\n\x09 *\x09index into the array of seeds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the seed value retrieved from the instance will be an\nindex into the array of seeds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetSeedOnEmitterLooping_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09If true, then reset the seed upon the emitter looping.\n\x09 *\x09""For looping environmental effects this should likely be set to false to avoid\n\x09 *\x09""a repeating pattern.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, then reset the seed upon the emitter looping.\nFor looping environmental effects this should likely be set to false to avoid\na repeating pattern." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomlySelectSeedArray_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/**\n\x09*\x09If true, then randomly select a seed entry from the RandomSeeds array\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, then randomly select a seed entry from the RandomSeeds array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeeds_MetaData[] = {
		{ "Category", "ParticleRandomSeedInfo" },
		{ "Comment", "/** \n\x09 *\x09The random seed values to utilize for the module. \n\x09 *\x09More than 1 means the instance will randomly select one.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The random seed values to utilize for the module.\nMore than 1 means the instance will randomly select one." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static void NewProp_bGetSeedFromInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetSeedFromInstance;
	static void NewProp_bInstanceSeedIsIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceSeedIsIndex;
	static void NewProp_bResetSeedOnEmitterLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSeedOnEmitterLooping;
	static void NewProp_bRandomlySelectSeedArray_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomlySelectSeedArray;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeeds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RandomSeeds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticleRandomSeedInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleRandomSeedInfo, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_SetBit(void* Obj)
{
	((FParticleRandomSeedInfo*)Obj)->bGetSeedFromInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance = { "bGetSeedFromInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGetSeedFromInstance_MetaData), NewProp_bGetSeedFromInstance_MetaData) };
void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_SetBit(void* Obj)
{
	((FParticleRandomSeedInfo*)Obj)->bInstanceSeedIsIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex = { "bInstanceSeedIsIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInstanceSeedIsIndex_MetaData), NewProp_bInstanceSeedIsIndex_MetaData) };
void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_SetBit(void* Obj)
{
	((FParticleRandomSeedInfo*)Obj)->bResetSeedOnEmitterLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping = { "bResetSeedOnEmitterLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetSeedOnEmitterLooping_MetaData), NewProp_bResetSeedOnEmitterLooping_MetaData) };
void Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_SetBit(void* Obj)
{
	((FParticleRandomSeedInfo*)Obj)->bRandomlySelectSeedArray = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray = { "bRandomlySelectSeedArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FParticleRandomSeedInfo), &Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomlySelectSeedArray_MetaData), NewProp_bRandomlySelectSeedArray_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_Inner = { "RandomSeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds = { "RandomSeeds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticleRandomSeedInfo, RandomSeeds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeeds_MetaData), NewProp_RandomSeeds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bGetSeedFromInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bInstanceSeedIsIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bResetSeedOnEmitterLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_bRandomlySelectSeedArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewProp_RandomSeeds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ParticleRandomSeedInfo",
	Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::PropPointers),
	sizeof(FParticleRandomSeedInfo),
	alignof(FParticleRandomSeedInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticleRandomSeedInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.InnerSingleton, Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo.InnerSingleton;
}
// End ScriptStruct FParticleRandomSeedInfo

// Begin Class UParticleModule
void UParticleModule::StaticRegisterNativesUParticleModule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModule);
UClass* Z_Construct_UClass_UParticleModule_NoRegister()
{
	return UParticleModule::StaticClass();
}
struct Z_Construct_UClass_UParticleModule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleModule.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnModule_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during Spawning\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during Spawning" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateModule_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during Updating\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during Updating" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFinalUpdateModule_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during final update\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during final update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateForGPUEmitter_MetaData[] = {
		{ "Comment", "/** If true, the module performs operations on particles during update and/or final update for GPU emitters*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module performs operations on particles during update and/or final update for GPU emitters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCurvesAsColor_MetaData[] = {
		{ "Comment", "/** If true, the module displays FVector curves as colors\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module displays FVector curves as colors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_b3DDrawMode_MetaData[] = {
		{ "Category", "Cascade" },
		{ "Comment", "/** If true, the module should render its 3D visualization helper\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module should render its 3D visualization helper" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupported3DDrawMode_MetaData[] = {
		{ "Comment", "/** If true, the module supports rendering a 3D visualization helper\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module supports rendering a 3D visualization helper" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** If true, the module is enabled\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module is enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditable_MetaData[] = {
		{ "Comment", "/** If true, the module has had editing enabled on it\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module has had editing enabled on it" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODDuplicate_MetaData[] = {
		{ "Comment", "/**\n\x09*\x09If true, this flag indicates that auto-generation for LOD will result in\n\x09*\x09""an exact duplicate of the module, regardless of the percentage.\n\x09*\x09If false, it will result in a module with different settings.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, this flag indicates that auto-generation for LOD will result in\nan exact duplicate of the module, regardless of the percentage.\nIf false, it will result in a module with different settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsRandomSeed_MetaData[] = {
		{ "Comment", "/** If true, the module supports RandomSeed setting */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module supports RandomSeed setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresLoopingNotification_MetaData[] = {
		{ "Comment", "/** If true, the module should be told when looping */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "If true, the module should be told when looping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODValidity_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The LOD levels this module is present in.\n\x09 *\x09""Bit-flags are used to indicate validity for a given LOD level.\n\x09 *\x09""For example, if\n\x09 *\x09\x09((1 << Level) & LODValidity) != 0\n\x09 *\x09then the module is used in that LOD.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The LOD levels this module is present in.\nBit-flags are used to indicate validity for a given LOD level.\nFor example, if\n        ((1 << Level) & LODValidity) != 0\nthen the module is used in that LOD." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleEditorColor_MetaData[] = {
		{ "Category", "Cascade" },
		{ "Comment", "/** The color to draw the modules curves in the curve editor. \n\x09 *\x09If bCurvesAsColor is true, it overrides this value.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleModule.h" },
		{ "ToolTip", "The color to draw the modules curves in the curve editor.\n    If bCurvesAsColor is true, it overrides this value." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static void NewProp_bSpawnModule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnModule;
	static void NewProp_bUpdateModule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateModule;
	static void NewProp_bFinalUpdateModule_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinalUpdateModule;
	static void NewProp_bUpdateForGPUEmitter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateForGPUEmitter;
	static void NewProp_bCurvesAsColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCurvesAsColor;
	static void NewProp_b3DDrawMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_b3DDrawMode;
	static void NewProp_bSupported3DDrawMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupported3DDrawMode;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bEditable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditable;
	static void NewProp_LODDuplicate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LODDuplicate;
	static void NewProp_bSupportsRandomSeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsRandomSeed;
	static void NewProp_bRequiresLoopingNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresLoopingNotification;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LODValidity;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleEditorColor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bSpawnModule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule = { "bSpawnModule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnModule_MetaData), NewProp_bSpawnModule_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bUpdateModule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule = { "bUpdateModule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateModule_MetaData), NewProp_bUpdateModule_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bFinalUpdateModule = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule = { "bFinalUpdateModule", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFinalUpdateModule_MetaData), NewProp_bFinalUpdateModule_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bUpdateForGPUEmitter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter = { "bUpdateForGPUEmitter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateForGPUEmitter_MetaData), NewProp_bUpdateForGPUEmitter_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bCurvesAsColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor = { "bCurvesAsColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCurvesAsColor_MetaData), NewProp_bCurvesAsColor_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->b3DDrawMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode = { "b3DDrawMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_b3DDrawMode_MetaData), NewProp_b3DDrawMode_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bSupported3DDrawMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode = { "bSupported3DDrawMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupported3DDrawMode_MetaData), NewProp_bSupported3DDrawMode_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bEditable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable = { "bEditable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditable_MetaData), NewProp_bEditable_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->LODDuplicate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate = { "LODDuplicate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODDuplicate_MetaData), NewProp_LODDuplicate_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bSupportsRandomSeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed = { "bSupportsRandomSeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportsRandomSeed_MetaData), NewProp_bSupportsRandomSeed_MetaData) };
void Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_SetBit(void* Obj)
{
	((UParticleModule*)Obj)->bRequiresLoopingNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification = { "bRequiresLoopingNotification", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModule), &Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresLoopingNotification_MetaData), NewProp_bRequiresLoopingNotification_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity = { "LODValidity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModule, LODValidity), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODValidity_MetaData), NewProp_LODValidity_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor = { "ModuleEditorColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModule, ModuleEditorColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleEditorColor_MetaData), NewProp_ModuleEditorColor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSpawnModule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateModule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bFinalUpdateModule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bUpdateForGPUEmitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bCurvesAsColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_b3DDrawMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupported3DDrawMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bEditable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_LODDuplicate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bSupportsRandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_bRequiresLoopingNotification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_LODValidity,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModule_Statics::NewProp_ModuleEditorColor,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModule_Statics::ClassParams = {
	&UParticleModule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModule()
{
	if (!Z_Registration_Info_UClass_UParticleModule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModule.OuterSingleton, Z_Construct_UClass_UParticleModule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModule.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModule>()
{
	return UParticleModule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModule);
UParticleModule::~UParticleModule() {}
// End Class UParticleModule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModuleType_StaticEnum, TEXT("EModuleType"), &Z_Registration_Info_UEnum_EModuleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2439179198U) },
		{ EParticleSourceSelectionMethod_StaticEnum, TEXT("EParticleSourceSelectionMethod"), &Z_Registration_Info_UEnum_EParticleSourceSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4274561990U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParticleCurvePair::StaticStruct, Z_Construct_UScriptStruct_FParticleCurvePair_Statics::NewStructOps, TEXT("ParticleCurvePair"), &Z_Registration_Info_UScriptStruct_ParticleCurvePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleCurvePair), 3494158510U) },
		{ FParticleRandomSeedInfo::StaticStruct, Z_Construct_UScriptStruct_FParticleRandomSeedInfo_Statics::NewStructOps, TEXT("ParticleRandomSeedInfo"), &Z_Registration_Info_UScriptStruct_ParticleRandomSeedInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticleRandomSeedInfo), 2841392657U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModule, UParticleModule::StaticClass, TEXT("UParticleModule"), &Z_Registration_Info_UClass_UParticleModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModule), 2497036550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_977089480(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleModule_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
