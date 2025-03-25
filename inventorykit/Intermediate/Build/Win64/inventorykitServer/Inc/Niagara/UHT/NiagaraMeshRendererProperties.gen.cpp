// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraMeshRendererProperties.h"
#include "Niagara/Public/NiagaraCommon.h"
#include "Niagara/Public/NiagaraParameterBinding.h"
#include "Niagara/Public/NiagaraRendererProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMeshRendererProperties() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMICOverride();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraMeshFacingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMeshFacingMode;
static UEnum* ENiagaraMeshFacingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshFacingMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshFacingMode>()
{
	return ENiagaraMeshFacingMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CameraPlane.Comment", "/** Has the mesh local-space X-axis point towards the closest point on the camera view plane.*/" },
		{ "CameraPlane.Name", "ENiagaraMeshFacingMode::CameraPlane" },
		{ "CameraPlane.ToolTip", "Has the mesh local-space X-axis point towards the closest point on the camera view plane." },
		{ "CameraPosition.Comment", "/** Has the mesh local-space X-axis point towards the camera's position.*/" },
		{ "CameraPosition.Name", "ENiagaraMeshFacingMode::CameraPosition" },
		{ "CameraPosition.ToolTip", "Has the mesh local-space X-axis point towards the camera's position." },
		{ "Comment", "/** This enum decides how a mesh particle will orient its \"facing\" axis relative to camera. Must keep these in sync with NiagaraMeshVertexFactory.ush*/" },
		{ "Default.Comment", "/** Ignores the camera altogether. The mesh aligns its local-space X-axis with the particles' local-space X-axis, after transforming by the Particles.Transform vector (if it exists).*/" },
		{ "Default.Name", "ENiagaraMeshFacingMode::Default" },
		{ "Default.ToolTip", "Ignores the camera altogether. The mesh aligns its local-space X-axis with the particles' local-space X-axis, after transforming by the Particles.Transform vector (if it exists)." },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "This enum decides how a mesh particle will orient its \"facing\" axis relative to camera. Must keep these in sync with NiagaraMeshVertexFactory.ush" },
		{ "Velocity.Comment", "/** The mesh aligns it's local-space X-axis with the particle's Particles.Velocity vector.*/" },
		{ "Velocity.Name", "ENiagaraMeshFacingMode::Velocity" },
		{ "Velocity.ToolTip", "The mesh aligns it's local-space X-axis with the particle's Particles.Velocity vector." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraMeshFacingMode::Default", (int64)ENiagaraMeshFacingMode::Default },
		{ "ENiagaraMeshFacingMode::Velocity", (int64)ENiagaraMeshFacingMode::Velocity },
		{ "ENiagaraMeshFacingMode::CameraPosition", (int64)ENiagaraMeshFacingMode::CameraPosition },
		{ "ENiagaraMeshFacingMode::CameraPlane", (int64)ENiagaraMeshFacingMode::CameraPlane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraMeshFacingMode",
	"ENiagaraMeshFacingMode",
	Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraMeshFacingMode.InnerSingleton;
}
// End Enum ENiagaraMeshFacingMode

// Begin Enum ENiagaraMeshPivotOffsetSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace;
static UEnum* ENiagaraMeshPivotOffsetSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshPivotOffsetSpace"));
	}
	return Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshPivotOffsetSpace>()
{
	return ENiagaraMeshPivotOffsetSpace_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Local.Comment", "/** The pivot offset is in the emitter's local space */" },
		{ "Local.Name", "ENiagaraMeshPivotOffsetSpace::Local" },
		{ "Local.ToolTip", "The pivot offset is in the emitter's local space" },
		{ "Mesh.Comment", "/** The pivot offset is in the mesh's local space (default) */" },
		{ "Mesh.Name", "ENiagaraMeshPivotOffsetSpace::Mesh" },
		{ "Mesh.ToolTip", "The pivot offset is in the mesh's local space (default)" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "Simulation.Comment", "/** The pivot offset is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise */" },
		{ "Simulation.Name", "ENiagaraMeshPivotOffsetSpace::Simulation" },
		{ "Simulation.ToolTip", "The pivot offset is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise" },
		{ "World.Comment", "/** The pivot offset is in world space */" },
		{ "World.Name", "ENiagaraMeshPivotOffsetSpace::World" },
		{ "World.ToolTip", "The pivot offset is in world space" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraMeshPivotOffsetSpace::Mesh", (int64)ENiagaraMeshPivotOffsetSpace::Mesh },
		{ "ENiagaraMeshPivotOffsetSpace::Simulation", (int64)ENiagaraMeshPivotOffsetSpace::Simulation },
		{ "ENiagaraMeshPivotOffsetSpace::World", (int64)ENiagaraMeshPivotOffsetSpace::World },
		{ "ENiagaraMeshPivotOffsetSpace::Local", (int64)ENiagaraMeshPivotOffsetSpace::Local },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraMeshPivotOffsetSpace",
	"ENiagaraMeshPivotOffsetSpace",
	Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace()
{
	if (!Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace.InnerSingleton;
}
// End Enum ENiagaraMeshPivotOffsetSpace

// Begin Enum ENiagaraMeshLockedAxisSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace;
static UEnum* ENiagaraMeshLockedAxisSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshLockedAxisSpace"));
	}
	return Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshLockedAxisSpace>()
{
	return ENiagaraMeshLockedAxisSpace_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Local.Comment", "/** The locked axis is in the emitter's local space */" },
		{ "Local.Name", "ENiagaraMeshLockedAxisSpace::Local" },
		{ "Local.ToolTip", "The locked axis is in the emitter's local space" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "Simulation.Comment", "/** The locked axis is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise */" },
		{ "Simulation.Name", "ENiagaraMeshLockedAxisSpace::Simulation" },
		{ "Simulation.ToolTip", "The locked axis is in the emitter's local space if the emitter is marked as local-space, or in world space otherwise" },
		{ "World.Comment", "/** The locked axis is in world space */" },
		{ "World.Name", "ENiagaraMeshLockedAxisSpace::World" },
		{ "World.ToolTip", "The locked axis is in world space" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraMeshLockedAxisSpace::Simulation", (int64)ENiagaraMeshLockedAxisSpace::Simulation },
		{ "ENiagaraMeshLockedAxisSpace::World", (int64)ENiagaraMeshLockedAxisSpace::World },
		{ "ENiagaraMeshLockedAxisSpace::Local", (int64)ENiagaraMeshLockedAxisSpace::Local },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraMeshLockedAxisSpace",
	"ENiagaraMeshLockedAxisSpace",
	Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace()
{
	if (!Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace.InnerSingleton;
}
// End Enum ENiagaraMeshLockedAxisSpace

// Begin Enum ENiagaraMeshLODMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMeshLODMode;
static UEnum* ENiagaraMeshLODMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraMeshLODMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraMeshLODMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMeshLODMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraMeshLODMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMeshLODMode>()
{
	return ENiagaraMeshLODMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ByComponentBounds.Comment", "/*\n\x09* The LOD level is calculated based on screen space size of the component bounds.\n\x09* All particles will be rendered with the same calculated LOD level.\n\x09* Increasing 'LOD calculation scale' will result in lower quality LODs being used, this is useful as component bounds generally are larger than the particle mesh bounds.\n\x09*/" },
		{ "ByComponentBounds.Name", "ENiagaraMeshLODMode::ByComponentBounds" },
		{ "ByComponentBounds.ToolTip", "* The LOD level is calculated based on screen space size of the component bounds.\n* All particles will be rendered with the same calculated LOD level.\n* Increasing 'LOD calculation scale' will result in lower quality LODs being used, this is useful as component bounds generally are larger than the particle mesh bounds." },
		{ "LODBias.Comment", "/**\n\x09* Takes the highest available LOD for the platform + LOD bias to render all mesh particles\n\x09* If the LOD is not streamed in or available on the platform the next available lower LOD level will be used.\n\x09* For example, LOD bias is set to 1, the current platform has Min LOD of 2 then 3 will be the used LOD.\n\x09*/" },
		{ "LODBias.Name", "ENiagaraMeshLODMode::LODBias" },
		{ "LODBias.ToolTip", "Takes the highest available LOD for the platform + LOD bias to render all mesh particles\nIf the LOD is not streamed in or available on the platform the next available lower LOD level will be used.\nFor example, LOD bias is set to 1, the current platform has Min LOD of 2 then 3 will be the used LOD." },
		{ "LODLevel.Comment", "/*\n\x09* Uses the provided LOD level to render all mesh particles.\n\x09* If the LOD is not streamed in or available on the platform the next available lower LOD level will be used.\n\x09* For example, LOD Level is set to 1 but the first available is LOD 3 then LOD 3 will be used.\n\x09*/" },
		{ "LODLevel.Name", "ENiagaraMeshLODMode::LODLevel" },
		{ "LODLevel.ToolTip", "* Uses the provided LOD level to render all mesh particles.\n* If the LOD is not streamed in or available on the platform the next available lower LOD level will be used.\n* For example, LOD Level is set to 1 but the first available is LOD 3 then LOD 3 will be used." },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "PerParticle.Comment", "/*\n\x09* The LOD level is calcuated per particle using the particle position and mesh sphere bounds.\n\x09* This involves running a dispatch & draw per LOD level.\n\x09* Calculates and renders each particle with it's calcualted LOD level.\n\x09* Increasing 'LOD calculation scale' will result in lower quality LODs being used.\n\x09*/" },
		{ "PerParticle.Name", "ENiagaraMeshLODMode::PerParticle" },
		{ "PerParticle.ToolTip", "* The LOD level is calcuated per particle using the particle position and mesh sphere bounds.\n* This involves running a dispatch & draw per LOD level.\n* Calculates and renders each particle with it's calcualted LOD level.\n* Increasing 'LOD calculation scale' will result in lower quality LODs being used." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraMeshLODMode::LODLevel", (int64)ENiagaraMeshLODMode::LODLevel },
		{ "ENiagaraMeshLODMode::LODBias", (int64)ENiagaraMeshLODMode::LODBias },
		{ "ENiagaraMeshLODMode::ByComponentBounds", (int64)ENiagaraMeshLODMode::ByComponentBounds },
		{ "ENiagaraMeshLODMode::PerParticle", (int64)ENiagaraMeshLODMode::PerParticle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraMeshLODMode",
	"ENiagaraMeshLODMode",
	Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraMeshLODMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMeshLODMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraMeshLODMode.InnerSingleton;
}
// End Enum ENiagaraMeshLODMode

// Begin ScriptStruct FNiagaraMeshMICOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride;
class UScriptStruct* FNiagaraMeshMICOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMeshMICOverride"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMeshMICOverride>()
{
	return FNiagaraMeshMICOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplacementMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMeshMICOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_OriginalMaterial = { "OriginalMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshMICOverride, OriginalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalMaterial_MetaData), NewProp_OriginalMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_ReplacementMaterial = { "ReplacementMaterial", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshMICOverride, ReplacementMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplacementMaterial_MetaData), NewProp_ReplacementMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_OriginalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewProp_ReplacementMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraMeshMICOverride",
	Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::PropPointers),
	sizeof(FNiagaraMeshMICOverride),
	alignof(FNiagaraMeshMICOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMICOverride()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride.InnerSingleton;
}
// End ScriptStruct FNiagaraMeshMICOverride

// Begin ScriptStruct FNiagaraMeshMaterialOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride;
class UScriptStruct* FNiagaraMeshMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMeshMaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMeshMaterialOverride>()
{
	return FNiagaraMeshMaterialOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitMat_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Use this UMaterialInterface if set to a valid value. This will be subordinate to UserParamBinding if it is set to a valid user variable.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Use this UMaterialInterface if set to a valid value. This will be subordinate to UserParamBinding if it is set to a valid user variable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserParamBinding_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and ExplicitMat is also set, UserParamBinding wins.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and ExplicitMat is also set, UserParamBinding wins." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplicitMat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserParamBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMeshMaterialOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat = { "ExplicitMat", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshMaterialOverride, ExplicitMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplicitMat_MetaData), NewProp_ExplicitMat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding = { "UserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshMaterialOverride, UserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserParamBinding_MetaData), NewProp_UserParamBinding_MetaData) }; // 174428838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_ExplicitMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewProp_UserParamBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraMeshMaterialOverride",
	Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::PropPointers),
	sizeof(FNiagaraMeshMaterialOverride),
	alignof(FNiagaraMeshMaterialOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride.InnerSingleton;
}
// End ScriptStruct FNiagaraMeshMaterialOverride

// Begin ScriptStruct FNiagaraMeshRendererMeshProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties;
class UScriptStruct* FNiagaraMeshRendererMeshProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMeshRendererMeshProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMeshRendererMeshProperties>()
{
	return FNiagaraMeshRendererMeshProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The mesh to use when rendering this slot */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The mesh to use when rendering this slot" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserParamBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshParameterBinding_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Binding to supported mesh types. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Binding to supported mesh types." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODLevelBinding_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Absolute LOD level to use */" },
		{ "DisplayName", "LOD Level" },
		{ "EditCondition", "LODMode == ENiagaraMeshLODMode::LODLevel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Absolute LOD level to use" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBiasBinding_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/* LOD bias to apply to the LOD calculation. */" },
		{ "DisplayName", "LOD Bias" },
		{ "EditCondition", "LODMode == ENiagaraMeshLODMode::LODBias" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "LOD bias to apply to the LOD calculation." },
		{ "UIMin", "0" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Used in LOD calculation to modify the distance, i.e. increasing the value will make lower poly LODs transition closer to the camera. */" },
		{ "DisplayName", "LOD Distance Factor" },
		{ "EditCondition", "LODMode == ENiagaraMeshLODMode::ByComponentBounds || LODMode == ENiagaraMeshLODMode::PerParticle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Used in LOD calculation to modify the distance, i.e. increasing the value will make lower poly LODs transition closer to the camera." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLODRange_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09When enabled you can restrict the LOD range we consider for LOD calculation.\n\x09This can be useful to reduce the performance impact, as it reduces the number of draw calls required.\n\x09*/" },
		{ "DisplayName", "Use LOD Range" },
		{ "EditCondition", "LODMode == ENiagaraMeshLODMode::PerParticle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "When enabled you can restrict the LOD range we consider for LOD calculation.\nThis can be useful to reduce the performance impact, as it reduces the number of draw calls required." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODRange_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Used to restrict the range of LODs we include when dynamically calculating the LOD level. */" },
		{ "DisplayName", "LOD Range" },
		{ "EditCondition", "bUseLODRange && LODMode == ENiagaraMeshLODMode::PerParticle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Used to restrict the range of LODs we include when dynamically calculating the LOD level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Scale of the mesh */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Scale of the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Rotation of the mesh */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Rotation of the mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Offset of the mesh pivot */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Offset of the mesh pivot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffsetSpace_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** What space is the pivot offset in? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "What space is the pivot offset in?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserParamBinding;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshParameterBinding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LODMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LODMode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODLevelBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODBiasBinding;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor;
	static void NewProp_bUseLODRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLODRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LODRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PivotOffsetSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotOffsetSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMeshRendererMeshProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_UserParamBinding = { "UserParamBinding", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, UserParamBinding_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserParamBinding_MetaData), NewProp_UserParamBinding_MetaData) }; // 174428838
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_MeshParameterBinding = { "MeshParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, MeshParameterBinding), Z_Construct_UScriptStruct_FNiagaraParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshParameterBinding_MetaData), NewProp_MeshParameterBinding_MetaData) }; // 2482818186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODMode = { "LODMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, LODMode), Z_Construct_UEnum_Niagara_ENiagaraMeshLODMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODMode_MetaData), NewProp_LODMode_MetaData) }; // 3844419031
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODLevelBinding = { "LODLevelBinding", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, LODLevelBinding), Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODLevelBinding_MetaData), NewProp_LODLevelBinding_MetaData) }; // 1755671658
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODBiasBinding = { "LODBiasBinding", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, LODBiasBinding), Z_Construct_UScriptStruct_FNiagaraParameterBindingWithValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBiasBinding_MetaData), NewProp_LODBiasBinding_MetaData) }; // 1755671658
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODLevel = { "LODLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, LODLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODLevel_MetaData), NewProp_LODLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, LODBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODBias_MetaData), NewProp_LODBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODDistanceFactor = { "LODDistanceFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, LODDistanceFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODDistanceFactor_MetaData), NewProp_LODDistanceFactor_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_bUseLODRange_SetBit(void* Obj)
{
	((FNiagaraMeshRendererMeshProperties*)Obj)->bUseLODRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_bUseLODRange = { "bUseLODRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNiagaraMeshRendererMeshProperties), &Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_bUseLODRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLODRange_MetaData), NewProp_bUseLODRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODRange = { "LODRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, LODRange), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODRange_MetaData), NewProp_LODRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, PivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotOffset_MetaData), NewProp_PivotOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace = { "PivotOffsetSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMeshRendererMeshProperties, PivotOffsetSpace), Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotOffsetSpace_MetaData), NewProp_PivotOffsetSpace_MetaData) }; // 1474185087
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Mesh,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_UserParamBinding,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_MeshParameterBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODMode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODLevelBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODBiasBinding,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODDistanceFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_bUseLODRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_LODRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewProp_PivotOffsetSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraMeshRendererMeshProperties",
	Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::PropPointers),
	sizeof(FNiagaraMeshRendererMeshProperties),
	alignof(FNiagaraMeshRendererMeshProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties.InnerSingleton;
}
// End ScriptStruct FNiagaraMeshRendererMeshProperties

// Begin Class UNiagaraMeshRendererProperties
void UNiagaraMeshRendererProperties::StaticRegisterNativesUNiagaraMeshRendererProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraMeshRendererProperties);
UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties_NoRegister()
{
	return UNiagaraMeshRendererProperties::StaticClass();
}
struct Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Renderer" },
		{ "IncludePath", "NiagaraMeshRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09 * The static mesh(es) to be instanced when rendering mesh particles.\n\x09 *\n\x09 * NOTES:\n\x09 * - If \"Override Material\" is not specified, the mesh's material is used. Override materials must have the Niagara Mesh Particles flag checked.\n\x09 * - If \"Enable Mesh Flipbook\" is specified, this mesh is assumed to be the first frame of the flipbook.\n\x09 */" },
		{ "EditCondition", "!bEnableMeshFlipbook" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The static mesh(es) to be instanced when rendering mesh particles.\n\nNOTES:\n- If \"Override Material\" is not specified, the mesh's material is used. Override materials must have the Niagara Mesh Particles flag checked.\n- If \"Enable Mesh Flipbook\" is specified, this mesh is assumed to be the first frame of the flipbook." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Whether or not to draw a single element for the Emitter or to draw the particles.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Whether or not to draw a single element for the Emitter or to draw the particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Determines how we sort the particles prior to rendering.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Determines how we sort the particles prior to rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SortPrecision_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Sort precision to use when sorting is active. */" },
		{ "DisplayAfter", "bSortOnlyWhenTranslucent" },
		{ "EditCondition", "SortMode != ENiagaraSortMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Sort precision to use when sorting is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GpuTranslucentLatency_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09Gpu simulations run at different points in the frame depending on what features are used, i.e. depth buffer, distance fields, etc.\n\x09Opaque materials will run latent when these features are used.\n\x09Translucent materials can choose if they want to use this frames or the previous frames data to match opaque draws.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Gpu simulations run at different points in the frame depending on what features are used, i.e. depth buffer, distance fields, etc.\nOpaque materials will run latent when these features are used.\nTranslucent materials can choose if they want to use this frames or the previous frames data to match opaque draws." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterials_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Whether or not to use the OverrideMaterials array instead of the mesh's existing materials.*/" },
		{ "DisplayName", "Enable Material Overrides" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Whether or not to use the OverrideMaterials array instead of the mesh's existing materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHeterogeneousVolumes_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Whether or not to render with heterogeneous volumes.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Whether or not to render with heterogeneous volumes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSortOnlyWhenTranslucent_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** If true, the particles are only sorted when using a translucent material. */" },
		{ "EditCondition", "SortMode != ENiagaraSortMode::None" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true, the particles are only sorted when using a translucent material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSubImageBlend_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor.*/" },
		{ "DisplayName", "Sub UV Blending Enabled" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true, blends the sub-image UV lookup with its next adjacent member using the fractional part of the SubImageIndex float value as the linear interpolation factor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFrustumCulling_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** Enables frustum culling of individual mesh particles */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Enables frustum culling of individual mesh particles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCameraDistanceCulling_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** Enables frustum culling of individual mesh particles */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Enables frustum culling of individual mesh particles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMeshFlipbook_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** When checked, will treat 'ParticleMesh' as the first frame of the flipbook, and will use the other mesh flipbook options to find the other frames */" },
		{ "DisplayAfter", "MeshBoundsScale" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "When checked, will treat 'ParticleMesh' as the first frame of the flipbook, and will use the other mesh flipbook options to find the other frames" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockedAxisEnable_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** If true and in a non-default facing mode, will lock facing direction to an arbitrary plane of rotation */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If true and in a non-default facing mode, will lock facing direction to an arbitrary plane of rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When disabled the renderer will not cast shadows.\n\x09The component controls if shadows are enabled, this flag allows you to disable the renderer casting shadows.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "When disabled the renderer will not cast shadows.\nThe component controls if shadows are enabled, this flag allows you to disable the renderer casting shadows." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** The materials to be used instead of the StaticMesh's materials. Note that each material must have the Niagara Mesh Particles flag checked. If the ParticleMesh\n\x09requires more materials than exist in this array or any entry in this array is set to None, we will use the ParticleMesh's existing Material instead.*/" },
		{ "EditCondition", "bOverrideMaterials" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The materials to be used instead of the StaticMesh's materials. Note that each material must have the Niagara Mesh Particles flag checked. If the ParticleMesh\n      requires more materials than exist in this array or any entry in this array is set to None, we will use the ParticleMesh's existing Material instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MICOverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubImageSize_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "When using SubImage lookups for particles, this variable contains the number of columns in X and the number of rows in Y." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxis_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Arbitrary axis by which to lock facing rotations */" },
		{ "DisplayAfter", "bLockedAxisEnable" },
		{ "EditCondition", "bLockedAxisEnable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Arbitrary axis by which to lock facing rotations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshBoundsScale_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09Scale factor applied to all of the meshes bounds.\n\x09This impacts distance based and per instance frustum culling.  Per instance frustum culling is enabled by default\n\x09when GPU scene is enabled.  When using WPO with a material that may expand the mesh beyond the original bounds instances\n\x09""can be frustum culled incorrectly, this allows you to grow the bounds to avoid this issue.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Scale factor applied to all of the meshes bounds.\nThis impacts distance based and per instance frustum culling.  Per instance frustum culling is enabled by default\nwhen GPU scene is enabled.  When using WPO with a material that may expand the mesh beyond the original bounds instances\ncan be frustum culled incorrectly, this allows you to grow the bounds to avoid this issue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacingMode_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Determines how the mesh orients itself relative to the camera. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Determines how the mesh orients itself relative to the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedAxisSpace_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/** Specifies what space the locked axis is in */" },
		{ "DisplayAfter", "LockedAxis" },
		{ "EditCondition", "bLockedAxisEnable" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Specifies what space the locked axis is in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCameraDistance_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bEnableCameraDistanceCulling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCameraDistance_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ClampMin", "0.000000" },
		{ "EditCondition", "bEnableCameraDistanceCulling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Visibility" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for color when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for color when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for velocity when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for velocity when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshOrientationBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for orienting meshes when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for orienting meshes when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for scale when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for scale when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubImageIndexBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for sprite sub-image indexing when generating sprites?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for sprite sub-image indexing when generating sprites?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial1Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial2Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial3Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRandomBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for material randoms when generating instanced meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for material randoms when generating instanced meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomSortingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use custom sorting of particles in this emitter. */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use custom sorting of particles in this emitter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedAgeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for Normalized Age? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for Normalized Age?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraOffsetBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for camera offset when rendering meshes?*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for camera offset when rendering meshes?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for the renderer visibility tag? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the renderer visibility tag?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndexBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use to pick the element in the mesh array on the mesh renderer? */" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to pick the element in the mesh array on the mesh renderer?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameters_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.*/" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevPositionBinding_MetaData[] = {
		{ "Comment", "// The following bindings are not provided by the user, but are filled based on what other bindings are set to, and the value of bGenerateAccurateMotionVectors\n" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The following bindings are not provided by the user, but are filled based on what other bindings are set to, and the value of bGenerateAccurateMotionVectors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevScaleBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevMeshOrientationBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevCameraOffsetBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevVelocityBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstFlipbookFrame_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09 * The static mesh to use for the first frame of the flipbook. Its name will also be used to find subsequent frames of a similar name.\n\x09 * NOTE: The subsequent frames are expected to exist in the same content directory as the first frame of the flipbook, otherwise they\n\x09 * will not be found or used.\n\x09 */" },
		{ "DisplayAfter", "bEnableMeshFlipbook" },
		{ "EditCondition", "bEnableMeshFlipbook" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "The static mesh to use for the first frame of the flipbook. Its name will also be used to find subsequent frames of a similar name.\nNOTE: The subsequent frames are expected to exist in the same content directory as the first frame of the flipbook, otherwise they\nwill not be found or used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookSuffixFormat_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "Comment", "/**\n\x09 * Provides the format of the suffix of the names of the static meshes when searching for flipbook frames. \"{frame_number}\" is used to mark\n\x09 * where the frame number should appear in the suffix. If \"Particle Mesh\" contains this suffix, the number in its name will be treated as\n\x09 * the starting frame index. Otherwise, it will assume \"Particle Mesh\" is frame number 0, and that subsequent frames follow this format,\n\x09 * starting with frame number 1.\n\x09 */" },
		{ "DisplayAfter", "bEnableMeshFlipbook" },
		{ "EditCondition", "bEnableMeshFlipbook && FirstFlipbookFrame != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "Provides the format of the suffix of the names of the static meshes when searching for flipbook frames. \"{frame_number}\" is used to mark\nwhere the frame number should appear in the suffix. If \"Particle Mesh\" contains this suffix, the number in its name will be treated as\nthe starting frame index. Otherwise, it will assume \"Particle Mesh\" is frame number 0, and that subsequent frames follow this format,\nstarting with frame number 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookSuffixNumDigits_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* The number of digits to expect in the frame number of the flipbook page. A value of 1 will expect no leading zeros in the package names,\n\x09* and can also be used for names with frame numbers that extend to 10 and beyond (Example: Frame_1, Frame_2, ..., Frame_10, Frame_11, etc.)\n\x09*/" },
		{ "DisplayAfter", "bEnableMeshFlipbook" },
		{ "EditCondition", "bEnableMeshFlipbook && FirstFlipbookFrame != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "The number of digits to expect in the frame number of the flipbook page. A value of 1 will expect no leading zeros in the package names,\nand can also be used for names with frame numbers that extend to 10 and beyond (Example: Frame_1, Frame_2, ..., Frame_10, Frame_11, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFlipbookFrames_MetaData[] = {
		{ "Category", "Mesh Rendering" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of frames (static meshes) to be included in the flipbook. */" },
		{ "DisplayAfter", "bEnableMeshFlipbook" },
		{ "EditCondition", "bEnableMeshFlipbook && FirstFlipbookFrame != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "NoSpinbox", "TRUE" },
		{ "ToolTip", "The number of frames (static meshes) to be included in the flipbook." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParamValidMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleMesh_MetaData[] = {
		{ "Comment", "// These properties are deprecated and moved to FNiagaraMeshRendererMeshProperties\n" },
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
		{ "ToolTip", "These properties are deprecated and moved to FNiagaraMeshRendererMeshProperties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotOffsetSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMeshRendererProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortPrecision_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortPrecision;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GpuTranslucentLatency_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuTranslucentLatency;
	static void NewProp_bOverrideMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterials;
	static void NewProp_bUseHeterogeneousVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHeterogeneousVolumes;
	static void NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSortOnlyWhenTranslucent;
	static void NewProp_bSubImageBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubImageBlend;
	static void NewProp_bEnableFrustumCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFrustumCulling;
	static void NewProp_bEnableCameraDistanceCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCameraDistanceCulling;
	static void NewProp_bEnableMeshFlipbook_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMeshFlipbook;
	static void NewProp_bLockedAxisEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockedAxisEnable;
	static void NewProp_bCastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MICOverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MICOverrideMaterials;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LockedAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshBoundsScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FacingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FacingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LockedAxisSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LockedAxisSpace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCameraDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCameraDistance;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RendererVisibility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshOrientationBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageIndexBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterialBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial1Binding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial2Binding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial3Binding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialRandomBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSortingBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedAgeBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOffsetBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshIndexBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameters;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameterBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialParameterBindings;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevPositionBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevScaleBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevMeshOrientationBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevCameraOffsetBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevVelocityBinding;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstFlipbookFrame;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FlipbookSuffixFormat;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_FlipbookSuffixNumDigits;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumFlipbookFrames;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaterialParamValidMask;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PivotOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PivotOffsetSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotOffsetSpace;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMeshRendererProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties, METADATA_PARAMS(0, nullptr) }; // 2681403173
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) }; // 2681403173
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SourceMode), Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 2982988763
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode = { "SortMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SortMode), Z_Construct_UEnum_Niagara_ENiagaraSortMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortMode_MetaData), NewProp_SortMode_MetaData) }; // 1350096376
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision = { "SortPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SortPrecision), Z_Construct_UEnum_Niagara_ENiagaraRendererSortPrecision, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SortPrecision_MetaData), NewProp_SortPrecision_MetaData) }; // 1468736600
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency = { "GpuTranslucentLatency", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, GpuTranslucentLatency), Z_Construct_UEnum_Niagara_ENiagaraRendererGpuTranslucentLatency, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GpuTranslucentLatency_MetaData), NewProp_GpuTranslucentLatency_MetaData) }; // 222740437
void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit(void* Obj)
{
	((UNiagaraMeshRendererProperties*)Obj)->bOverrideMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials = { "bOverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMaterials_MetaData), NewProp_bOverrideMaterials_MetaData) };
void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes_SetBit(void* Obj)
{
	((UNiagaraMeshRendererProperties*)Obj)->bUseHeterogeneousVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes = { "bUseHeterogeneousVolumes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHeterogeneousVolumes_MetaData), NewProp_bUseHeterogeneousVolumes_MetaData) };
void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit(void* Obj)
{
	((UNiagaraMeshRendererProperties*)Obj)->bSortOnlyWhenTranslucent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent = { "bSortOnlyWhenTranslucent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSortOnlyWhenTranslucent_MetaData), NewProp_bSortOnlyWhenTranslucent_MetaData) };
void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_SetBit(void* Obj)
{
	((UNiagaraMeshRendererProperties*)Obj)->bSubImageBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend = { "bSubImageBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSubImageBlend_MetaData), NewProp_bSubImageBlend_MetaData) };
void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_SetBit(void* Obj)
{
	((UNiagaraMeshRendererProperties*)Obj)->bEnableFrustumCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling = { "bEnableFrustumCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFrustumCulling_MetaData), NewProp_bEnableFrustumCulling_MetaData) };
void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_SetBit(void* Obj)
{
	((UNiagaraMeshRendererProperties*)Obj)->bEnableCameraDistanceCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling = { "bEnableCameraDistanceCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCameraDistanceCulling_MetaData), NewProp_bEnableCameraDistanceCulling_MetaData) };
void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_SetBit(void* Obj)
{
	((UNiagaraMeshRendererProperties*)Obj)->bEnableMeshFlipbook = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook = { "bEnableMeshFlipbook", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMeshFlipbook_MetaData), NewProp_bEnableMeshFlipbook_MetaData) };
void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_SetBit(void* Obj)
{
	((UNiagaraMeshRendererProperties*)Obj)->bLockedAxisEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable = { "bLockedAxisEnable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockedAxisEnable_MetaData), NewProp_bLockedAxisEnable_MetaData) };
void Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bCastShadows_SetBit(void* Obj)
{
	((UNiagaraMeshRendererProperties*)Obj)->bCastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraMeshRendererProperties), &Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadows_MetaData), NewProp_bCastShadows_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride, METADATA_PARAMS(0, nullptr) }; // 690751858
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) }; // 690751858
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials_Inner = { "MICOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraMeshMICOverride, METADATA_PARAMS(0, nullptr) }; // 3214949447
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials = { "MICOverrideMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MICOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MICOverrideMaterials_MetaData), NewProp_MICOverrideMaterials_MetaData) }; // 3214949447
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize = { "SubImageSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SubImageSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubImageSize_MetaData), NewProp_SubImageSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis = { "LockedAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, LockedAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedAxis_MetaData), NewProp_LockedAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshBoundsScale = { "MeshBoundsScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MeshBoundsScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshBoundsScale_MetaData), NewProp_MeshBoundsScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode = { "FacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FacingMode), Z_Construct_UEnum_Niagara_ENiagaraMeshFacingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacingMode_MetaData), NewProp_FacingMode_MetaData) }; // 4250820276
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace = { "LockedAxisSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, LockedAxisSpace), Z_Construct_UEnum_Niagara_ENiagaraMeshLockedAxisSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedAxisSpace_MetaData), NewProp_LockedAxisSpace_MetaData) }; // 3843364179
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance = { "MinCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MinCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCameraDistance_MetaData), NewProp_MinCameraDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance = { "MaxCameraDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaxCameraDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCameraDistance_MetaData), NewProp_MaxCameraDistance_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, RendererVisibility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererVisibility_MetaData), NewProp_RendererVisibility_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionBinding_MetaData), NewProp_PositionBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBinding_MetaData), NewProp_ColorBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding = { "VelocityBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, VelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityBinding_MetaData), NewProp_VelocityBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding = { "MeshOrientationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MeshOrientationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshOrientationBinding_MetaData), NewProp_MeshOrientationBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding = { "ScaleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleBinding_MetaData), NewProp_ScaleBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding = { "SubImageIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, SubImageIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubImageIndexBinding_MetaData), NewProp_SubImageIndexBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding = { "DynamicMaterialBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterialBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterialBinding_MetaData), NewProp_DynamicMaterialBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding = { "DynamicMaterial1Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial1Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial1Binding_MetaData), NewProp_DynamicMaterial1Binding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding = { "DynamicMaterial2Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial2Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial2Binding_MetaData), NewProp_DynamicMaterial2Binding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding = { "DynamicMaterial3Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, DynamicMaterial3Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial3Binding_MetaData), NewProp_DynamicMaterial3Binding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding = { "MaterialRandomBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialRandomBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialRandomBinding_MetaData), NewProp_MaterialRandomBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding = { "CustomSortingBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, CustomSortingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomSortingBinding_MetaData), NewProp_CustomSortingBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding = { "NormalizedAgeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, NormalizedAgeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedAgeBinding_MetaData), NewProp_NormalizedAgeBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding = { "CameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, CameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraOffsetBinding_MetaData), NewProp_CameraOffsetBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererVisibilityTagBinding_MetaData), NewProp_RendererVisibilityTagBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding = { "MeshIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MeshIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshIndexBinding_MetaData), NewProp_MeshIndexBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameters = { "MaterialParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialParameters), Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParameters_MetaData), NewProp_MaterialParameters_MetaData) }; // 2755820487
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding, METADATA_PARAMS(0, nullptr) }; // 495246681
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialParameterBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParameterBindings_MetaData), NewProp_MaterialParameterBindings_MetaData) }; // 495246681
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding = { "PrevPositionBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevPositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevPositionBinding_MetaData), NewProp_PrevPositionBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding = { "PrevScaleBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevScaleBinding_MetaData), NewProp_PrevScaleBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding = { "PrevMeshOrientationBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevMeshOrientationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevMeshOrientationBinding_MetaData), NewProp_PrevMeshOrientationBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding = { "PrevCameraOffsetBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevCameraOffsetBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevCameraOffsetBinding_MetaData), NewProp_PrevCameraOffsetBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding = { "PrevVelocityBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PrevVelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevVelocityBinding_MetaData), NewProp_PrevVelocityBinding_MetaData) }; // 1753925894
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame = { "FirstFlipbookFrame", nullptr, (EPropertyFlags)0x0114000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FirstFlipbookFrame), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstFlipbookFrame_MetaData), NewProp_FirstFlipbookFrame_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat = { "FlipbookSuffixFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FlipbookSuffixFormat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookSuffixFormat_MetaData), NewProp_FlipbookSuffixFormat_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits = { "FlipbookSuffixNumDigits", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, FlipbookSuffixNumDigits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookSuffixNumDigits_MetaData), NewProp_FlipbookSuffixNumDigits_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames = { "NumFlipbookFrames", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, NumFlipbookFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFlipbookFrames_MetaData), NewProp_NumFlipbookFrames_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParamValidMask = { "MaterialParamValidMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, MaterialParamValidMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParamValidMask_MetaData), NewProp_MaterialParamValidMask_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh = { "ParticleMesh", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, ParticleMesh_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleMesh_MetaData), NewProp_ParticleMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset = { "PivotOffset", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PivotOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotOffset_MetaData), NewProp_PivotOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace = { "PivotOffsetSpace", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraMeshRendererProperties, PivotOffsetSpace_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraMeshPivotOffsetSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotOffsetSpace_MetaData), NewProp_PivotOffsetSpace_MetaData) }; // 1474185087
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SortPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_GpuTranslucentLatency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bOverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bUseHeterogeneousVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSortOnlyWhenTranslucent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bSubImageBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableFrustumCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableCameraDistanceCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bEnableMeshFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bLockedAxisEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_bCastShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MICOverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshBoundsScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FacingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_LockedAxisSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MinCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaxCameraDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PositionBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ColorBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_VelocityBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshOrientationBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ScaleBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_SubImageIndexBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterialBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial1Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial2Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_DynamicMaterial3Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialRandomBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CustomSortingBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NormalizedAgeBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_CameraOffsetBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MeshIndexBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameters,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParameterBindings,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevPositionBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevScaleBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevMeshOrientationBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevCameraOffsetBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PrevVelocityBinding,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FirstFlipbookFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_FlipbookSuffixNumDigits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_NumFlipbookFrames,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_MaterialParamValidMask,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_ParticleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::NewProp_PivotOffsetSpace,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::ClassParams = {
	&UNiagaraMeshRendererProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraMeshRendererProperties()
{
	if (!Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraMeshRendererProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraMeshRendererProperties>()
{
	return UNiagaraMeshRendererProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMeshRendererProperties);
UNiagaraMeshRendererProperties::~UNiagaraMeshRendererProperties() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraMeshRendererProperties)
// End Class UNiagaraMeshRendererProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraMeshFacingMode_StaticEnum, TEXT("ENiagaraMeshFacingMode"), &Z_Registration_Info_UEnum_ENiagaraMeshFacingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4250820276U) },
		{ ENiagaraMeshPivotOffsetSpace_StaticEnum, TEXT("ENiagaraMeshPivotOffsetSpace"), &Z_Registration_Info_UEnum_ENiagaraMeshPivotOffsetSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1474185087U) },
		{ ENiagaraMeshLockedAxisSpace_StaticEnum, TEXT("ENiagaraMeshLockedAxisSpace"), &Z_Registration_Info_UEnum_ENiagaraMeshLockedAxisSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3843364179U) },
		{ ENiagaraMeshLODMode_StaticEnum, TEXT("ENiagaraMeshLODMode"), &Z_Registration_Info_UEnum_ENiagaraMeshLODMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3844419031U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraMeshMICOverride::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMeshMICOverride_Statics::NewStructOps, TEXT("NiagaraMeshMICOverride"), &Z_Registration_Info_UScriptStruct_NiagaraMeshMICOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMeshMICOverride), 3214949447U) },
		{ FNiagaraMeshMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMeshMaterialOverride_Statics::NewStructOps, TEXT("NiagaraMeshMaterialOverride"), &Z_Registration_Info_UScriptStruct_NiagaraMeshMaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMeshMaterialOverride), 690751858U) },
		{ FNiagaraMeshRendererMeshProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMeshRendererMeshProperties_Statics::NewStructOps, TEXT("NiagaraMeshRendererMeshProperties"), &Z_Registration_Info_UScriptStruct_NiagaraMeshRendererMeshProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMeshRendererMeshProperties), 2681403173U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraMeshRendererProperties, UNiagaraMeshRendererProperties::StaticClass, TEXT("UNiagaraMeshRendererProperties"), &Z_Registration_Info_UClass_UNiagaraMeshRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraMeshRendererProperties), 1087268907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_540188842(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraMeshRendererProperties_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
