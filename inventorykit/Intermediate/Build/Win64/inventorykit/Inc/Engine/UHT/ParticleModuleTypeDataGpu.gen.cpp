// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataGpu() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu();
ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleCollisionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatDistribution();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteResourceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FGPUSpriteLocalVectorFieldInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo;
class UScriptStruct* FGPUSpriteLocalVectorFieldInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteLocalVectorFieldInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGPUSpriteLocalVectorFieldInfo>()
{
	return FGPUSpriteLocalVectorFieldInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data needed for local vector fields.\n */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Data needed for local vector fields." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[] = {
		{ "Comment", "/** Local vector field to apply to this emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field to apply to this emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Comment", "/** Local vector field transform. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInitialRotation_MetaData[] = {
		{ "Comment", "/** Minimum initial rotation. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Minimum initial rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInitialRotation_MetaData[] = {
		{ "Comment", "/** Maximum initial rotation. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Maximum initial rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Comment", "/** Local vector field rotation rate. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field rotation rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Comment", "/** Local vector field intensity. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field intensity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[] = {
		{ "Comment", "/** Local vector field tightness. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field tightness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreComponentTransform_MetaData[] = {
		{ "Comment", "/* Ignore Components Transform\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Ignore Components Transform" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[] = {
		{ "Comment", "/** Tile vector field in x axis? */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tile vector field in x axis?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[] = {
		{ "Comment", "/** Tile vector field in y axis? */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tile vector field in y axis?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[] = {
		{ "Comment", "/** Tile vector field in z axis? */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tile vector field in z axis?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixDT_MetaData[] = {
		{ "Comment", "/** Use fix delta time in the simulation? */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Use fix delta time in the simulation?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Field;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinInitialRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxInitialRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tightness;
	static void NewProp_bIgnoreComponentTransform_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreComponentTransform;
	static void NewProp_bTileX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileX;
	static void NewProp_bTileY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileY;
	static void NewProp_bTileZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileZ;
	static void NewProp_bUseFixDT_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixDT;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteLocalVectorFieldInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Field), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Field_MetaData), NewProp_Field_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation = { "MinInitialRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, MinInitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInitialRotation_MetaData), NewProp_MinInitialRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation = { "MaxInitialRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, MaxInitialRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInitialRotation_MetaData), NewProp_MaxInitialRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness = { "Tightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteLocalVectorFieldInfo, Tightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tightness_MetaData), NewProp_Tightness_MetaData) };
void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_SetBit(void* Obj)
{
	((FGPUSpriteLocalVectorFieldInfo*)Obj)->bIgnoreComponentTransform = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform = { "bIgnoreComponentTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreComponentTransform_MetaData), NewProp_bIgnoreComponentTransform_MetaData) };
void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_SetBit(void* Obj)
{
	((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX = { "bTileX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileX_MetaData), NewProp_bTileX_MetaData) };
void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_SetBit(void* Obj)
{
	((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY = { "bTileY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileY_MetaData), NewProp_bTileY_MetaData) };
void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_SetBit(void* Obj)
{
	((FGPUSpriteLocalVectorFieldInfo*)Obj)->bTileZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ = { "bTileZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTileZ_MetaData), NewProp_bTileZ_MetaData) };
void Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_SetBit(void* Obj)
{
	((FGPUSpriteLocalVectorFieldInfo*)Obj)->bUseFixDT = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT = { "bUseFixDT", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteLocalVectorFieldInfo), &Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFixDT_MetaData), NewProp_bUseFixDT_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Field,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MinInitialRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_MaxInitialRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_Tightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bIgnoreComponentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bTileZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewProp_bUseFixDT,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"GPUSpriteLocalVectorFieldInfo",
	Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::PropPointers),
	sizeof(FGPUSpriteLocalVectorFieldInfo),
	alignof(FGPUSpriteLocalVectorFieldInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.InnerSingleton, Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo.InnerSingleton;
}
// End ScriptStruct FGPUSpriteLocalVectorFieldInfo

// Begin ScriptStruct FGPUSpriteEmitterInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo;
class UScriptStruct* FGPUSpriteEmitterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteEmitterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGPUSpriteEmitterInfo>()
{
	return FGPUSpriteEmitterInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The data needed by the runtime to simulate sprites.\n */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The data needed by the runtime to simulate sprites." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredModule_MetaData[] = {
		{ "Comment", "/** The required module. Needed for now, but should be divorced from the runtime. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The required module. Needed for now, but should be divorced from the runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnModule_MetaData[] = {
		{ "Comment", "/** The spawn module. Needed for now, but should be divorced from the runtime. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The spawn module. Needed for now, but should be divorced from the runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPerUnitModule_MetaData[] = {
		{ "Comment", "/** The spawn-per-unit module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The spawn-per-unit module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnModules_MetaData[] = {
		{ "Comment", "/** List of spawn modules that must be evaluated at runtime. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "List of spawn modules that must be evaluated at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalVectorField_MetaData[] = {
		{ "Comment", "/** Local vector field info. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Local vector field info." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorFieldScale_MetaData[] = {
		{ "Comment", "/** Per-particle vector field scale. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Per-particle vector field scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[] = {
		{ "Comment", "/** Per-particle drag coefficient. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Per-particle drag coefficient." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointAttractorStrength_MetaData[] = {
		{ "Comment", "/** Point attractor strength over time. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Point attractor strength over time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resilience_MetaData[] = {
		{ "Comment", "/** Damping factor applied to particle collisions. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Damping factor applied to particle collisions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantAcceleration_MetaData[] = {
		{ "Comment", "/** Constant acceleration to apply to particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Constant acceleration to apply to particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointAttractorPosition_MetaData[] = {
		{ "Comment", "/** Point attractor position. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Point attractor position." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointAttractorRadiusSq_MetaData[] = {
		{ "Comment", "/** Point attractor radius, squared. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Point attractor radius, squared." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetBase_MetaData[] = {
		{ "Comment", "/** Amount by which to offset particles when they are spawned. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Amount by which to offset particles when they are spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvMaxSize_MetaData[] = {
		{ "Comment", "/** One over the maximum size of a sprite particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "One over the maximum size of a sprite particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvRotationRateScale_MetaData[] = {
		{ "Comment", "/** The inverse scale to apply to rotation rate. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The inverse scale to apply to rotation rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLifetime_MetaData[] = {
		{ "Comment", "/** The maximum lifetime of particles in this emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The maximum lifetime of particles in this emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxParticleCount_MetaData[] = {
		{ "Comment", "/** The maximum number of particles expected for this emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The maximum number of particles expected for this emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[] = {
		{ "Comment", "/** The method for aligning the particle based on the camera. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The method for aligning the particle based on the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlag_MetaData[] = {
		{ "Comment", "/** The method for locking the particles to a particular axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The method for locking the particles to a particular axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
		{ "Comment", "/** If true, collisions are enabled for this emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, collisions are enabled for this emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityForMotionBlur_MetaData[] = {
		{ "Comment", "/** If true, use velocity to approximate motion blur */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, use velocity to approximate motion blur" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[] = {
		{ "Comment", "/** If true, removes the HMD view roll (e.g. in VR) */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_Square */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_FacingCameraPosition */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicColor_MetaData[] = {
		{ "Comment", "/** Dynamic color scale from the ColorOverLife module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic color scale from the ColorOverLife module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicAlpha_MetaData[] = {
		{ "Comment", "/** Dynamic alpha scale from the ColorOverLife module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic alpha scale from the ColorOverLife module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicColorScale_MetaData[] = {
		{ "Comment", "/** Dynamic color scale from the ColorScaleOverLife module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic color scale from the ColorScaleOverLife module." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicAlphaScale_MetaData[] = {
		{ "Comment", "/** Dynamic alpha scale from the ColorScaleOverLife module. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Dynamic alpha scale from the ColorScaleOverLife module." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequiredModule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnModule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPerUnitModule;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnModules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnModules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVectorField;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorFieldScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragCoefficient;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointAttractorStrength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resilience;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointAttractorPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointAttractorRadiusSq;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvMaxSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvRotationRateScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLifetime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxParticleCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockAxisFlag;
	static void NewProp_bEnableCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionMode;
	static void NewProp_bUseVelocityForMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityForMotionBlur;
	static void NewProp_bRemoveHMDRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicColorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicAlphaScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteEmitterInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule = { "RequiredModule", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, RequiredModule), Z_Construct_UClass_UParticleModuleRequired_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredModule_MetaData), NewProp_RequiredModule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule = { "SpawnModule", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnModule), Z_Construct_UClass_UParticleModuleSpawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnModule_MetaData), NewProp_SpawnModule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule = { "SpawnPerUnitModule", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnPerUnitModule), Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPerUnitModule_MetaData), NewProp_SpawnPerUnitModule_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_Inner = { "SpawnModules", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules = { "SpawnModules", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, SpawnModules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnModules_MetaData), NewProp_SpawnModules_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField = { "LocalVectorField", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, LocalVectorField), Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalVectorField_MetaData), NewProp_LocalVectorField_MetaData) }; // 3567499779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale = { "VectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, VectorFieldScale), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorFieldScale_MetaData), NewProp_VectorFieldScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DragCoefficient), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCoefficient_MetaData), NewProp_DragCoefficient_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength = { "PointAttractorStrength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorStrength), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointAttractorStrength_MetaData), NewProp_PointAttractorStrength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience = { "Resilience", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, Resilience), Z_Construct_UScriptStruct_FFloatDistribution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resilience_MetaData), NewProp_Resilience_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration = { "ConstantAcceleration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, ConstantAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantAcceleration_MetaData), NewProp_ConstantAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition = { "PointAttractorPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointAttractorPosition_MetaData), NewProp_PointAttractorPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq = { "PointAttractorRadiusSq", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, PointAttractorRadiusSq), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointAttractorRadiusSq_MetaData), NewProp_PointAttractorRadiusSq_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase = { "OrbitOffsetBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, OrbitOffsetBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitOffsetBase_MetaData), NewProp_OrbitOffsetBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange = { "OrbitOffsetRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, OrbitOffsetRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitOffsetRange_MetaData), NewProp_OrbitOffsetRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize = { "InvMaxSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, InvMaxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvMaxSize_MetaData), NewProp_InvMaxSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale = { "InvRotationRateScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, InvRotationRateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvRotationRateScale_MetaData), NewProp_InvRotationRateScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime = { "MaxLifetime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLifetime_MetaData), NewProp_MaxLifetime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount = { "MaxParticleCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxParticleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxParticleCount_MetaData), NewProp_MaxParticleCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment = { "ScreenAlignment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenAlignment_MetaData), NewProp_ScreenAlignment_MetaData) }; // 2256829574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag = { "LockAxisFlag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, LockAxisFlag), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockAxisFlag_MetaData), NewProp_LockAxisFlag_MetaData) }; // 2670916187
void Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
{
	((FGPUSpriteEmitterInfo*)Obj)->bEnableCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteEmitterInfo), &Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCollision_MetaData), NewProp_bEnableCollision_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, CollisionMode), Z_Construct_UEnum_Engine_EParticleCollisionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMode_MetaData), NewProp_CollisionMode_MetaData) }; // 2813245432
void Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bUseVelocityForMotionBlur_SetBit(void* Obj)
{
	((FGPUSpriteEmitterInfo*)Obj)->bUseVelocityForMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bUseVelocityForMotionBlur = { "bUseVelocityForMotionBlur", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteEmitterInfo), &Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bUseVelocityForMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVelocityForMotionBlur_MetaData), NewProp_bUseVelocityForMotionBlur_MetaData) };
void Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_SetBit(void* Obj)
{
	((FGPUSpriteEmitterInfo*)Obj)->bRemoveHMDRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll = { "bRemoveHMDRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteEmitterInfo), &Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveHMDRoll_MetaData), NewProp_bRemoveHMDRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MinFacingCameraBlendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFacingCameraBlendDistance_MetaData), NewProp_MinFacingCameraBlendDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, MaxFacingCameraBlendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFacingCameraBlendDistance_MetaData), NewProp_MaxFacingCameraBlendDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor = { "DynamicColor", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicColor), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicColor_MetaData), NewProp_DynamicColor_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha = { "DynamicAlpha", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicAlpha), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicAlpha_MetaData), NewProp_DynamicAlpha_MetaData) }; // 3711494764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale = { "DynamicColorScale", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicColorScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicColorScale_MetaData), NewProp_DynamicColorScale_MetaData) }; // 1238237137
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale = { "DynamicAlphaScale", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteEmitterInfo, DynamicAlphaScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicAlphaScale_MetaData), NewProp_DynamicAlphaScale_MetaData) }; // 3711494764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_RequiredModule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnPerUnitModule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_SpawnModules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LocalVectorField,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_VectorFieldScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DragCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_Resilience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ConstantAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_PointAttractorRadiusSq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_OrbitOffsetRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvMaxSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_InvRotationRateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxParticleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_ScreenAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_LockAxisFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bEnableCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_CollisionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bUseVelocityForMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_bRemoveHMDRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MinFacingCameraBlendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_MaxFacingCameraBlendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewProp_DynamicAlphaScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"GPUSpriteEmitterInfo",
	Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::PropPointers),
	sizeof(FGPUSpriteEmitterInfo),
	alignof(FGPUSpriteEmitterInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo()
{
	if (!Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.InnerSingleton, Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo.InnerSingleton;
}
// End ScriptStruct FGPUSpriteEmitterInfo

// Begin ScriptStruct FGPUSpriteResourceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GPUSpriteResourceData;
class UScriptStruct* FGPUSpriteResourceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGPUSpriteResourceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("GPUSpriteResourceData"));
	}
	return Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FGPUSpriteResourceData>()
{
	return FGPUSpriteResourceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The source data for runtime resources.\n */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The source data for runtime resources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizedColorSamples_MetaData[] = {
		{ "Comment", "/** Quantized color samples. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Quantized color samples." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizedMiscSamples_MetaData[] = {
		{ "Comment", "/** Quantized samples for misc curve attributes to be evaluated at runtime. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Quantized samples for misc curve attributes to be evaluated at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuantizedSimulationAttrSamples_MetaData[] = {
		{ "Comment", "/** Quantized samples for simulation attributes. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Quantized samples for simulation attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorScale_MetaData[] = {
		{ "Comment", "/** Scale and bias to be applied to the color of sprites. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale and bias to be applied to the color of sprites." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiscScale_MetaData[] = {
		{ "Comment", "/** Scale and bias to be applied to the misc curve. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale and bias to be applied to the misc curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MiscBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationAttrCurveScale_MetaData[] = {
		{ "Comment", "/** Scale and bias to be applied to the simulation attribute curves. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale and bias to be applied to the simulation attribute curves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulationAttrCurveBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[] = {
		{ "Comment", "/** Size of subimages. X:SubImageCountH Y:SubImageCountV Z:1/SubImageCountH W:1/SubImageCountV */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Size of subimages. X:SubImageCountH Y:SubImageCountV Z:1/SubImageCountH W:1/SubImageCountV" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeBySpeed_MetaData[] = {
		{ "Comment", "/** SizeBySpeed parameters. XY=SpeedScale ZW=MaxSpeedScale. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "SizeBySpeed parameters. XY=SpeedScale ZW=MaxSpeedScale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantAcceleration_MetaData[] = {
		{ "Comment", "/** Constant acceleration to apply to particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Constant acceleration to apply to particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetBase_MetaData[] = {
		{ "Comment", "/** Offset at which to orbit. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Offset at which to orbit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitOffsetRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitFrequencyBase_MetaData[] = {
		{ "Comment", "/** Frequency at which the particle orbits around each axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Frequency at which the particle orbits around each axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitFrequencyRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitPhaseBase_MetaData[] = {
		{ "Comment", "/** Phase offset of orbit around each axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Phase offset of orbit around each axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrbitPhaseRange_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to global vector fields. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to global vector fields." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVectorFieldTightness_MetaData[] = {
		{ "Comment", "/** Tightness override value for the global vector fields. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Tightness override value for the global vector fields." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerParticleVectorFieldScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle vector field scale. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle vector field scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerParticleVectorFieldBias_MetaData[] = {
		{ "Comment", "/** Bias to apply to per-particle vector field scale. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle vector field scale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle drag coefficient. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle drag coefficient." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficientBias_MetaData[] = {
		{ "Comment", "/** Bias to apply to per-particle drag coefficient. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle drag coefficient." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResilienceScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle damping factor. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle damping factor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResilienceBias_MetaData[] = {
		{ "Comment", "/** Bias to apply to per-particle damping factor. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle damping factor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadiusScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle size for collision. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle size for collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadiusBias_MetaData[] = {
		{ "Comment", "/** Bias to apply to per-particle size for collision. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias to apply to per-particle size for collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTimeBias_MetaData[] = {
		{ "Comment", "/** Bias applied to relative time upon collision. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Bias applied to relative time upon collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRandomSpread_MetaData[] = {
		{ "Comment", "/** Control on reflection's random distribution spread. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Control on reflection's random distribution spread." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRandomDistribution_MetaData[] = {
		{ "Comment", "/** Control on reflection's random distribution when colliding. (1=uniform distribution) */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Control on reflection's random distribution when colliding. (1=uniform distribution)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneMinusFriction_MetaData[] = {
		{ "Comment", "/** One minus the coefficient of friction applied to particles upon collision. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "One minus the coefficient of friction applied to particles upon collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to per-particle rotation rate. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Scale to apply to per-particle rotation rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMotionBlurAmount_MetaData[] = {
		{ "Comment", "/** How much to stretch sprites based on camera motion blur. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "How much to stretch sprites based on camera motion blur." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[] = {
		{ "Comment", "/** Screen alignment for particles. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Screen alignment for particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlag_MetaData[] = {
		{ "Comment", "/** The method for locking the particles to a particular axis. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The method for locking the particles to a particular axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[] = {
		{ "Comment", "/** Pivot offset in UV space for placing the verts of each particle. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Pivot offset in UV space for placing the verts of each particle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityForMotionBlur_MetaData[] = {
		{ "Comment", "/** If true, use velocity to approximate motion blur */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, use velocity to approximate motion blur" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[] = {
		{ "Comment", "/** If true, removes the HMD view roll (e.g. in VR) */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[] = {
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_Square */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
		{ "Comment", "/** The distance at which PSA_FacingCameraDistanceBlend\x09is fully PSA_FacingCameraPosition */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizedColorSamples_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuantizedColorSamples;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizedMiscSamples_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuantizedMiscSamples;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuantizedSimulationAttrSamples_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuantizedSimulationAttrSamples;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MiscScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MiscBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationAttrCurveScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationAttrCurveBias;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SizeBySpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantAcceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitOffsetRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitFrequencyBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitFrequencyRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitPhaseBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OrbitPhaseRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalVectorFieldTightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerParticleVectorFieldScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerParticleVectorFieldBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficientScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficientBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResilienceScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResilienceBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadiusScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadiusBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionTimeBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRandomSpread;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRandomDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OneMinusFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRateScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraMotionBlurAmount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockAxisFlag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
	static void NewProp_bUseVelocityForMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityForMotionBlur;
	static void NewProp_bRemoveHMDRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGPUSpriteResourceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_Inner = { "QuantizedColorSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples = { "QuantizedColorSamples", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedColorSamples), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizedColorSamples_MetaData), NewProp_QuantizedColorSamples_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_Inner = { "QuantizedMiscSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples = { "QuantizedMiscSamples", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedMiscSamples), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizedMiscSamples_MetaData), NewProp_QuantizedMiscSamples_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_Inner = { "QuantizedSimulationAttrSamples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples = { "QuantizedSimulationAttrSamples", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, QuantizedSimulationAttrSamples), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuantizedSimulationAttrSamples_MetaData), NewProp_QuantizedSimulationAttrSamples_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ColorScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorScale_MetaData), NewProp_ColorScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias = { "ColorBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ColorBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBias_MetaData), NewProp_ColorBias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale = { "MiscScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, MiscScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiscScale_MetaData), NewProp_MiscScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias = { "MiscBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, MiscBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MiscBias_MetaData), NewProp_MiscBias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale = { "SimulationAttrCurveScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, SimulationAttrCurveScale), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationAttrCurveScale_MetaData), NewProp_SimulationAttrCurveScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias = { "SimulationAttrCurveBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, SimulationAttrCurveBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulationAttrCurveBias_MetaData), NewProp_SimulationAttrCurveBias_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize = { "SubImageSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, SubImageSize), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubImageSize_MetaData), NewProp_SubImageSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed = { "SizeBySpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, SizeBySpeed), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeBySpeed_MetaData), NewProp_SizeBySpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration = { "ConstantAcceleration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ConstantAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantAcceleration_MetaData), NewProp_ConstantAcceleration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase = { "OrbitOffsetBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitOffsetBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitOffsetBase_MetaData), NewProp_OrbitOffsetBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange = { "OrbitOffsetRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitOffsetRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitOffsetRange_MetaData), NewProp_OrbitOffsetRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase = { "OrbitFrequencyBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitFrequencyBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitFrequencyBase_MetaData), NewProp_OrbitFrequencyBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange = { "OrbitFrequencyRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitFrequencyRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitFrequencyRange_MetaData), NewProp_OrbitFrequencyRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase = { "OrbitPhaseBase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitPhaseBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitPhaseBase_MetaData), NewProp_OrbitPhaseBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange = { "OrbitPhaseRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OrbitPhaseRange), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrbitPhaseRange_MetaData), NewProp_OrbitPhaseRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale = { "GlobalVectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, GlobalVectorFieldScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVectorFieldScale_MetaData), NewProp_GlobalVectorFieldScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness = { "GlobalVectorFieldTightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, GlobalVectorFieldTightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVectorFieldTightness_MetaData), NewProp_GlobalVectorFieldTightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale = { "PerParticleVectorFieldScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, PerParticleVectorFieldScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerParticleVectorFieldScale_MetaData), NewProp_PerParticleVectorFieldScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias = { "PerParticleVectorFieldBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, PerParticleVectorFieldBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerParticleVectorFieldBias_MetaData), NewProp_PerParticleVectorFieldBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale = { "DragCoefficientScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, DragCoefficientScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCoefficientScale_MetaData), NewProp_DragCoefficientScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias = { "DragCoefficientBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, DragCoefficientBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCoefficientBias_MetaData), NewProp_DragCoefficientBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale = { "ResilienceScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ResilienceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResilienceScale_MetaData), NewProp_ResilienceScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias = { "ResilienceBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ResilienceBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResilienceBias_MetaData), NewProp_ResilienceBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale = { "CollisionRadiusScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRadiusScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRadiusScale_MetaData), NewProp_CollisionRadiusScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias = { "CollisionRadiusBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRadiusBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRadiusBias_MetaData), NewProp_CollisionRadiusBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias = { "CollisionTimeBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionTimeBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTimeBias_MetaData), NewProp_CollisionTimeBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread = { "CollisionRandomSpread", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRandomSpread), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRandomSpread_MetaData), NewProp_CollisionRandomSpread_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution = { "CollisionRandomDistribution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CollisionRandomDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRandomDistribution_MetaData), NewProp_CollisionRandomDistribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction = { "OneMinusFriction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, OneMinusFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneMinusFriction_MetaData), NewProp_OneMinusFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale = { "RotationRateScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, RotationRateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateScale_MetaData), NewProp_RotationRateScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount = { "CameraMotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, CameraMotionBlurAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMotionBlurAmount_MetaData), NewProp_CameraMotionBlurAmount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment = { "ScreenAlignment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenAlignment_MetaData), NewProp_ScreenAlignment_MetaData) }; // 2256829574
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag = { "LockAxisFlag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, LockAxisFlag), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockAxisFlag_MetaData), NewProp_LockAxisFlag_MetaData) }; // 2670916187
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, PivotOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotOffset_MetaData), NewProp_PivotOffset_MetaData) };
void Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bUseVelocityForMotionBlur_SetBit(void* Obj)
{
	((FGPUSpriteResourceData*)Obj)->bUseVelocityForMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bUseVelocityForMotionBlur = { "bUseVelocityForMotionBlur", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteResourceData), &Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bUseVelocityForMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVelocityForMotionBlur_MetaData), NewProp_bUseVelocityForMotionBlur_MetaData) };
void Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_SetBit(void* Obj)
{
	((FGPUSpriteResourceData*)Obj)->bRemoveHMDRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll = { "bRemoveHMDRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FGPUSpriteResourceData), &Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveHMDRoll_MetaData), NewProp_bRemoveHMDRoll_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance = { "MinFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, MinFacingCameraBlendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFacingCameraBlendDistance_MetaData), NewProp_MinFacingCameraBlendDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance = { "MaxFacingCameraBlendDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGPUSpriteResourceData, MaxFacingCameraBlendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFacingCameraBlendDistance_MetaData), NewProp_MaxFacingCameraBlendDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedColorSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedMiscSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_QuantizedSimulationAttrSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ColorBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MiscBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SimulationAttrCurveBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SubImageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_SizeBySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ConstantAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitOffsetRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitFrequencyRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OrbitPhaseRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_GlobalVectorFieldTightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PerParticleVectorFieldBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_DragCoefficientBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ResilienceBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRadiusBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionTimeBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomSpread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CollisionRandomDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_OneMinusFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_RotationRateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_CameraMotionBlurAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_ScreenAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_LockAxisFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_PivotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bUseVelocityForMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_bRemoveHMDRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MinFacingCameraBlendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewProp_MaxFacingCameraBlendDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"GPUSpriteResourceData",
	Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::PropPointers),
	sizeof(FGPUSpriteResourceData),
	alignof(FGPUSpriteResourceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGPUSpriteResourceData()
{
	if (!Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.InnerSingleton, Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GPUSpriteResourceData.InnerSingleton;
}
// End ScriptStruct FGPUSpriteResourceData

// Begin Class UParticleModuleTypeDataGpu
void UParticleModuleTypeDataGpu::StaticRegisterNativesUParticleModuleTypeDataGpu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTypeDataGpu);
UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister()
{
	return UParticleModuleTypeDataGpu::StaticClass();
}
struct Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "GPU Sprites" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmitterInfo_MetaData[] = {
		{ "Comment", "/** Information for runtime simulation. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Information for runtime simulation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceData_MetaData[] = {
		{ "Comment", "/** Data used to initialize runtime resources. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "Data used to initialize runtime resources." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMotionBlurAmount_MetaData[] = {
		{ "Category", "ParticleModuleTypeDataGpu" },
		{ "Comment", "/** TEMP: How much to stretch sprites based on camera motion blur. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "TEMP: How much to stretch sprites based on camera motion blur." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearExistingParticlesOnInit_MetaData[] = {
		{ "Category", "ParticleModuleTypeDataGpu" },
		{ "Comment", "/** When true, all existing partilces are cleared when the emitter is initialized. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h" },
		{ "ToolTip", "When true, all existing partilces are cleared when the emitter is initialized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResourceData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraMotionBlurAmount;
	static void NewProp_bClearExistingParticlesOnInit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearExistingParticlesOnInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataGpu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo = { "EmitterInfo", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataGpu, EmitterInfo), Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmitterInfo_MetaData), NewProp_EmitterInfo_MetaData) }; // 3898749728
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData = { "ResourceData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataGpu, ResourceData), Z_Construct_UScriptStruct_FGPUSpriteResourceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceData_MetaData), NewProp_ResourceData_MetaData) }; // 1346577209
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount = { "CameraMotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UParticleModuleTypeDataGpu, CameraMotionBlurAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMotionBlurAmount_MetaData), NewProp_CameraMotionBlurAmount_MetaData) };
void Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_SetBit(void* Obj)
{
	((UParticleModuleTypeDataGpu*)Obj)->bClearExistingParticlesOnInit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit = { "bClearExistingParticlesOnInit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UParticleModuleTypeDataGpu), &Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearExistingParticlesOnInit_MetaData), NewProp_bClearExistingParticlesOnInit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_EmitterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_ResourceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_CameraMotionBlurAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::NewProp_bClearExistingParticlesOnInit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::ClassParams = {
	&UParticleModuleTypeDataGpu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::PropPointers),
	0,
	0x008810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticleModuleTypeDataGpu()
{
	if (!Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.OuterSingleton, Z_Construct_UClass_UParticleModuleTypeDataGpu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticleModuleTypeDataGpu.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataGpu>()
{
	return UParticleModuleTypeDataGpu::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataGpu);
UParticleModuleTypeDataGpu::~UParticleModuleTypeDataGpu() {}
// End Class UParticleModuleTypeDataGpu

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGPUSpriteLocalVectorFieldInfo::StaticStruct, Z_Construct_UScriptStruct_FGPUSpriteLocalVectorFieldInfo_Statics::NewStructOps, TEXT("GPUSpriteLocalVectorFieldInfo"), &Z_Registration_Info_UScriptStruct_GPUSpriteLocalVectorFieldInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGPUSpriteLocalVectorFieldInfo), 3567499779U) },
		{ FGPUSpriteEmitterInfo::StaticStruct, Z_Construct_UScriptStruct_FGPUSpriteEmitterInfo_Statics::NewStructOps, TEXT("GPUSpriteEmitterInfo"), &Z_Registration_Info_UScriptStruct_GPUSpriteEmitterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGPUSpriteEmitterInfo), 3898749728U) },
		{ FGPUSpriteResourceData::StaticStruct, Z_Construct_UScriptStruct_FGPUSpriteResourceData_Statics::NewStructOps, TEXT("GPUSpriteResourceData"), &Z_Registration_Info_UScriptStruct_GPUSpriteResourceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGPUSpriteResourceData), 1346577209U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTypeDataGpu, UParticleModuleTypeDataGpu::StaticClass, TEXT("UParticleModuleTypeDataGpu"), &Z_Registration_Info_UClass_UParticleModuleTypeDataGpu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTypeDataGpu), 3134843876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_1321704274(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataGpu_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
