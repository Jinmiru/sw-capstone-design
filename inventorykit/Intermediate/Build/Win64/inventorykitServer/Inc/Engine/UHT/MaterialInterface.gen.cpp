// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Public/MaterialTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterfaceEditorOnlyData();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNeuralProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpecularProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialUsage();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialTextureInfo();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EMaterialUsage
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialUsage;
static UEnum* EMaterialUsage_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialUsage.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialUsage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialUsage"));
	}
	return Z_Registration_Info_UEnum_EMaterialUsage.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialUsage>()
{
	return EMaterialUsage_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MATUSAGE_BeamTrails.Name", "MATUSAGE_BeamTrails" },
		{ "MATUSAGE_Clothing.Name", "MATUSAGE_Clothing" },
		{ "MATUSAGE_GeometryCache.Name", "MATUSAGE_GeometryCache" },
		{ "MATUSAGE_GeometryCollections.Name", "MATUSAGE_GeometryCollections" },
		{ "MATUSAGE_HairStrands.Name", "MATUSAGE_HairStrands" },
		{ "MATUSAGE_HeterogeneousVolumes.Name", "MATUSAGE_HeterogeneousVolumes" },
		{ "MATUSAGE_InstancedStaticMeshes.Name", "MATUSAGE_InstancedStaticMeshes" },
		{ "MATUSAGE_LidarPointCloud.Name", "MATUSAGE_LidarPointCloud" },
		{ "MATUSAGE_MAX.Name", "MATUSAGE_MAX" },
		{ "MATUSAGE_MeshParticles.Name", "MATUSAGE_MeshParticles" },
		{ "MATUSAGE_MorphTargets.Name", "MATUSAGE_MorphTargets" },
		{ "MATUSAGE_Nanite.Name", "MATUSAGE_Nanite" },
		{ "MATUSAGE_NiagaraMeshParticles.Name", "MATUSAGE_NiagaraMeshParticles" },
		{ "MATUSAGE_NiagaraRibbons.Name", "MATUSAGE_NiagaraRibbons" },
		{ "MATUSAGE_NiagaraSprites.Name", "MATUSAGE_NiagaraSprites" },
		{ "MATUSAGE_ParticleSprites.Name", "MATUSAGE_ParticleSprites" },
		{ "MATUSAGE_SkeletalMesh.Name", "MATUSAGE_SkeletalMesh" },
		{ "MATUSAGE_SplineMesh.Name", "MATUSAGE_SplineMesh" },
		{ "MATUSAGE_StaticLighting.Name", "MATUSAGE_StaticLighting" },
		{ "MATUSAGE_VirtualHeightfieldMesh.Name", "MATUSAGE_VirtualHeightfieldMesh" },
		{ "MATUSAGE_VolumetricCloud.Name", "MATUSAGE_VolumetricCloud" },
		{ "MATUSAGE_Water.Name", "MATUSAGE_Water" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MATUSAGE_SkeletalMesh", (int64)MATUSAGE_SkeletalMesh },
		{ "MATUSAGE_ParticleSprites", (int64)MATUSAGE_ParticleSprites },
		{ "MATUSAGE_BeamTrails", (int64)MATUSAGE_BeamTrails },
		{ "MATUSAGE_MeshParticles", (int64)MATUSAGE_MeshParticles },
		{ "MATUSAGE_StaticLighting", (int64)MATUSAGE_StaticLighting },
		{ "MATUSAGE_MorphTargets", (int64)MATUSAGE_MorphTargets },
		{ "MATUSAGE_SplineMesh", (int64)MATUSAGE_SplineMesh },
		{ "MATUSAGE_InstancedStaticMeshes", (int64)MATUSAGE_InstancedStaticMeshes },
		{ "MATUSAGE_GeometryCollections", (int64)MATUSAGE_GeometryCollections },
		{ "MATUSAGE_Clothing", (int64)MATUSAGE_Clothing },
		{ "MATUSAGE_NiagaraSprites", (int64)MATUSAGE_NiagaraSprites },
		{ "MATUSAGE_NiagaraRibbons", (int64)MATUSAGE_NiagaraRibbons },
		{ "MATUSAGE_NiagaraMeshParticles", (int64)MATUSAGE_NiagaraMeshParticles },
		{ "MATUSAGE_GeometryCache", (int64)MATUSAGE_GeometryCache },
		{ "MATUSAGE_Water", (int64)MATUSAGE_Water },
		{ "MATUSAGE_HairStrands", (int64)MATUSAGE_HairStrands },
		{ "MATUSAGE_LidarPointCloud", (int64)MATUSAGE_LidarPointCloud },
		{ "MATUSAGE_VirtualHeightfieldMesh", (int64)MATUSAGE_VirtualHeightfieldMesh },
		{ "MATUSAGE_Nanite", (int64)MATUSAGE_Nanite },
		{ "MATUSAGE_VolumetricCloud", (int64)MATUSAGE_VolumetricCloud },
		{ "MATUSAGE_HeterogeneousVolumes", (int64)MATUSAGE_HeterogeneousVolumes },
		{ "MATUSAGE_MAX", (int64)MATUSAGE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialUsage_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialUsage",
	"EMaterialUsage",
	Z_Construct_UEnum_Engine_EMaterialUsage_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialUsage_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialUsage_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialUsage_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialUsage()
{
	if (!Z_Registration_Info_UEnum_EMaterialUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialUsage.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialUsage_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialUsage.InnerSingleton;
}
// End Enum EMaterialUsage

// Begin ScriptStruct FLightmassMaterialInterfaceSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightmassMaterialInterfaceSettings;
class UScriptStruct* FLightmassMaterialInterfaceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightmassMaterialInterfaceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightmassMaterialInterfaceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LightmassMaterialInterfaceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LightmassMaterialInterfaceSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLightmassMaterialInterfaceSettings>()
{
	return FLightmassMaterialInterfaceSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09UMaterial interface settings for Lightmass\n */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "UMaterial interface settings for Lightmass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveBoost_MetaData[] = {
		{ "Comment", "/** Scales the emissive contribution of this material to static lighting. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Scales the emissive contribution of this material to static lighting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffuseBoost_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Scales the diffuse contribution of this material to static lighting. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Scales the diffuse contribution of this material to static lighting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExportResolutionScale_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** \n\x09 * Scales the resolution that this material's attributes were exported at. \n\x09 * This is useful for increasing material resolution when details are needed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Scales the resolution that this material's attributes were exported at.\nThis is useful for increasing material resolution when details are needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, forces translucency to cast static shadows as if the material were masked. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, forces translucency to cast static shadows as if the material were masked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCastShadowAsMasked_MetaData[] = {
		{ "Comment", "/** If true, override the bCastShadowAsMasked setting of the parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, override the bCastShadowAsMasked setting of the parent material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideEmissiveBoost_MetaData[] = {
		{ "Comment", "/** If true, override the emissive boost setting of the parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, override the emissive boost setting of the parent material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDiffuseBoost_MetaData[] = {
		{ "Comment", "/** If true, override the diffuse boost setting of the parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, override the diffuse boost setting of the parent material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideExportResolutionScale_MetaData[] = {
		{ "Comment", "/** If true, override the export resolution scale setting of the parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, override the export resolution scale setting of the parent material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmissiveBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DiffuseBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExportResolutionScale;
	static void NewProp_bCastShadowAsMasked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsMasked;
	static void NewProp_bOverrideCastShadowAsMasked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCastShadowAsMasked;
	static void NewProp_bOverrideEmissiveBoost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideEmissiveBoost;
	static void NewProp_bOverrideDiffuseBoost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDiffuseBoost;
	static void NewProp_bOverrideExportResolutionScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideExportResolutionScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassMaterialInterfaceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_EmissiveBoost = { "EmissiveBoost", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightmassMaterialInterfaceSettings, EmissiveBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmissiveBoost_MetaData), NewProp_EmissiveBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_DiffuseBoost = { "DiffuseBoost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightmassMaterialInterfaceSettings, DiffuseBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffuseBoost_MetaData), NewProp_DiffuseBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_ExportResolutionScale = { "ExportResolutionScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLightmassMaterialInterfaceSettings, ExportResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExportResolutionScale_MetaData), NewProp_ExportResolutionScale_MetaData) };
void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked_SetBit(void* Obj)
{
	((FLightmassMaterialInterfaceSettings*)Obj)->bCastShadowAsMasked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked = { "bCastShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowAsMasked_MetaData), NewProp_bCastShadowAsMasked_MetaData) };
void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked_SetBit(void* Obj)
{
	((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideCastShadowAsMasked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked = { "bOverrideCastShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCastShadowAsMasked_MetaData), NewProp_bOverrideCastShadowAsMasked_MetaData) };
void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost_SetBit(void* Obj)
{
	((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideEmissiveBoost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost = { "bOverrideEmissiveBoost", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideEmissiveBoost_MetaData), NewProp_bOverrideEmissiveBoost_MetaData) };
void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost_SetBit(void* Obj)
{
	((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideDiffuseBoost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost = { "bOverrideDiffuseBoost", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDiffuseBoost_MetaData), NewProp_bOverrideDiffuseBoost_MetaData) };
void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale_SetBit(void* Obj)
{
	((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideExportResolutionScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale = { "bOverrideExportResolutionScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideExportResolutionScale_MetaData), NewProp_bOverrideExportResolutionScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_EmissiveBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_DiffuseBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_ExportResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"LightmassMaterialInterfaceSettings",
	Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::PropPointers),
	sizeof(FLightmassMaterialInterfaceSettings),
	alignof(FLightmassMaterialInterfaceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_LightmassMaterialInterfaceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightmassMaterialInterfaceSettings.InnerSingleton, Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LightmassMaterialInterfaceSettings.InnerSingleton;
}
// End ScriptStruct FLightmassMaterialInterfaceSettings

// Begin ScriptStruct FMaterialTextureInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialTextureInfo;
class UScriptStruct* FMaterialTextureInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialTextureInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialTextureInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialTextureInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialTextureInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialTextureInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialTextureInfo>()
{
	return FMaterialTextureInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * This struct holds data about how a texture is sampled within a material.\n */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "This struct holds data about how a texture is sampled within a material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingScale_MetaData[] = {
		{ "Comment", "/** The scale used when sampling the texture */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The scale used when sampling the texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelIndex_MetaData[] = {
		{ "Comment", "/** The coordinate index used when sampling the texture */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The coordinate index used when sampling the texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[] = {
		{ "Comment", "/** The texture name. Used for debugging and also to for quick matching of the entries. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The texture name. Used for debugging and also to for quick matching of the entries." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureReference_MetaData[] = {
		{ "Comment", "/** The reference to the texture, used to keep the TextureName valid even if it gets renamed. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The reference to the texture, used to keep the TextureName valid even if it gets renamed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureIndex_MetaData[] = {
		{ "Comment", "/** \n\x09  * The texture index in the material resource the data was built from.\n\x09  * This must be transient as it depends on which shader map was used for the build.  \n\x09  */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The texture index in the material resource the data was built from.\nThis must be transient as it depends on which shader map was used for the build." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SamplingScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TextureName;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureReference;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialTextureInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_SamplingScale = { "SamplingScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialTextureInfo, SamplingScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingScale_MetaData), NewProp_SamplingScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialTextureInfo, UVChannelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVChannelIndex_MetaData), NewProp_UVChannelIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureName = { "TextureName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialTextureInfo, TextureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureName_MetaData), NewProp_TextureName_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureReference = { "TextureReference", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialTextureInfo, TextureReference), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureReference_MetaData), NewProp_TextureReference_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialTextureInfo, TextureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureIndex_MetaData), NewProp_TextureIndex_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_SamplingScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_UVChannelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureIndex,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialTextureInfo",
	Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::PropPointers),
	sizeof(FMaterialTextureInfo),
	alignof(FMaterialTextureInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialTextureInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialTextureInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialTextureInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialTextureInfo.InnerSingleton;
}
// End ScriptStruct FMaterialTextureInfo

// Begin Class UMaterialInterfaceEditorOnlyData
void UMaterialInterfaceEditorOnlyData::StaticRegisterNativesUMaterialInterfaceEditorOnlyData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInterfaceEditorOnlyData);
UClass* Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_NoRegister()
{
	return UMaterialInterfaceEditorOnlyData::StaticClass();
}
struct Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Materials/MaterialInterface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInterfaceEditorOnlyData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics::ClassParams = {
	&UMaterialInterfaceEditorOnlyData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialInterfaceEditorOnlyData()
{
	if (!Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData.OuterSingleton, Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialInterfaceEditorOnlyData>()
{
	return UMaterialInterfaceEditorOnlyData::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInterfaceEditorOnlyData)
// End Class UMaterialInterfaceEditorOnlyData

// Begin Class UMaterialInterface Function GetBaseMaterial
struct Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics
{
	struct MaterialInterface_eventGetBaseMaterial_Parms
	{
		UMaterial* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Walks up parent chain and finds the base Material that this is an instance of. Just calls the virtual GetMaterial() */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Walks up parent chain and finds the base Material that this is an instance of. Just calls the virtual GetMaterial()" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetBaseMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetBaseMaterial", nullptr, nullptr, Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::MaterialInterface_eventGetBaseMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::MaterialInterface_eventGetBaseMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInterface::execGetBaseMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterial**)Z_Param__Result=P_THIS->GetBaseMaterial();
	P_NATIVE_END;
}
// End Class UMaterialInterface Function GetBaseMaterial

// Begin Class UMaterialInterface Function GetBlendMode
struct Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics
{
	struct MaterialInterface_eventGetBlendMode_Parms
	{
		TEnumAsByte<EBlendMode> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetBlendMode_Parms, ReturnValue), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(0, nullptr) }; // 1831819339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetBlendMode", nullptr, nullptr, Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::MaterialInterface_eventGetBlendMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::MaterialInterface_eventGetBlendMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInterface_GetBlendMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetBlendMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInterface::execGetBlendMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EBlendMode>*)Z_Param__Result=P_THIS->GetBlendMode();
	P_NATIVE_END;
}
// End Class UMaterialInterface Function GetBlendMode

// Begin Class UMaterialInterface Function GetNaniteOverideMaterial
struct Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics
{
	struct MaterialInterface_eventGetNaniteOverideMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the associated nanite override material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Get the associated nanite override material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetNaniteOverideMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetNaniteOverideMaterial", nullptr, nullptr, Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::MaterialInterface_eventGetNaniteOverideMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::MaterialInterface_eventGetNaniteOverideMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInterface::execGetNaniteOverideMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetNaniteOverideMaterial();
	P_NATIVE_END;
}
// End Class UMaterialInterface Function GetNaniteOverideMaterial

// Begin Class UMaterialInterface Function GetParameterInfo
struct Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics
{
	struct MaterialInterface_eventGetParameterInfo_Parms
	{
		TEnumAsByte<EMaterialParameterAssociation> Association;
		FName ParameterName;
		UMaterialFunctionInterface* LayerFunction;
		FMaterialParameterInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerFunction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetParameterInfo_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(0, nullptr) }; // 1612887503
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetParameterInfo_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_LayerFunction = { "LayerFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetParameterInfo_Parms, LayerFunction), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetParameterInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(0, nullptr) }; // 682741679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_Association,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_LayerFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetParameterInfo", nullptr, nullptr, Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::MaterialInterface_eventGetParameterInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::MaterialInterface_eventGetParameterInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInterface_GetParameterInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInterface::execGetParameterInfo)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Association);
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(UMaterialFunctionInterface,Z_Param_LayerFunction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMaterialParameterInfo*)Z_Param__Result=P_THIS->GetParameterInfo(EMaterialParameterAssociation(Z_Param_Association),Z_Param_ParameterName,Z_Param_LayerFunction);
	P_NATIVE_END;
}
// End Class UMaterialInterface Function GetParameterInfo

// Begin Class UMaterialInterface Function GetPhysicalMaterial
struct Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics
{
	struct MaterialInterface_eventGetPhysicalMaterial_Parms
	{
		UPhysicalMaterial* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Material" },
		{ "Comment", "/**\n\x09* Return a pointer to the physical material used by this material instance.\n\x09* @return The physical material.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Return a pointer to the physical material used by this material instance.\n@return The physical material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetPhysicalMaterial_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetPhysicalMaterial", nullptr, nullptr, Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::MaterialInterface_eventGetPhysicalMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::MaterialInterface_eventGetPhysicalMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInterface::execGetPhysicalMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPhysicalMaterial**)Z_Param__Result=P_THIS->GetPhysicalMaterial();
	P_NATIVE_END;
}
// End Class UMaterialInterface Function GetPhysicalMaterial

// Begin Class UMaterialInterface Function GetPhysicalMaterialFromMap
struct Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics
{
	struct MaterialInterface_eventGetPhysicalMaterialFromMap_Parms
	{
		int32 Index;
		UPhysicalMaterial* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Material" },
		{ "Comment", "/**\n\x09 * Return a pointer to the physical material from mask map at given index.\n\x09 * @return The physical material.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Return a pointer to the physical material from mask map at given index.\n@return The physical material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetPhysicalMaterialFromMap_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetPhysicalMaterialFromMap_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetPhysicalMaterialFromMap", nullptr, nullptr, Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::MaterialInterface_eventGetPhysicalMaterialFromMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::MaterialInterface_eventGetPhysicalMaterialFromMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInterface::execGetPhysicalMaterialFromMap)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPhysicalMaterial**)Z_Param__Result=P_THIS->GetPhysicalMaterialFromMap(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UMaterialInterface Function GetPhysicalMaterialFromMap

// Begin Class UMaterialInterface Function GetPhysicalMaterialMask
struct Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics
{
	struct MaterialInterface_eventGetPhysicalMaterialMask_Parms
	{
		UPhysicalMaterialMask* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Physics|Material" },
		{ "Comment", "/**\n\x09 * Return a pointer to the physical material mask used by this material instance.\n\x09 * @return The physical material.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Return a pointer to the physical material mask used by this material instance.\n@return The physical material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventGetPhysicalMaterialMask_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterialMask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetPhysicalMaterialMask", nullptr, nullptr, Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::MaterialInterface_eventGetPhysicalMaterialMask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::MaterialInterface_eventGetPhysicalMaterialMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInterface::execGetPhysicalMaterialMask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPhysicalMaterialMask**)Z_Param__Result=P_THIS->GetPhysicalMaterialMask();
	P_NATIVE_END;
}
// End Class UMaterialInterface Function GetPhysicalMaterialMask

// Begin Class UMaterialInterface Function SetForceMipLevelsToBeResident
struct Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics
{
	struct MaterialInterface_eventSetForceMipLevelsToBeResident_Parms
	{
		bool OverrideForceMiplevelsToBeResident;
		bool bForceMiplevelsToBeResidentValue;
		float ForceDuration;
		int32 CinematicTextureGroups;
		bool bFastResponse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Force the streaming system to disregard the normal logic for the specified duration and\n\x09 * instead always load all mip-levels for all textures used by this material.\n\x09 *\n\x09 * @param OverrideForceMiplevelsToBeResident\x09- Whether to use (true) or ignore (false) the bForceMiplevelsToBeResidentValue parameter.\n\x09 * @param bForceMiplevelsToBeResidentValue\x09\x09- true forces all mips to stream in. false lets other factors decide what to do with the mips.\n\x09 * @param ForceDuration\x09\x09\x09\x09\x09\x09\x09- Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic. Negative value turns it off.\n\x09 * @param CinematicTextureGroups\x09\x09\x09\x09- Bitfield indicating texture groups that should use extra high-resolution mips\n\x09 * @param bFastResponse\x09\x09\x09\x09\x09\x09\x09- USE WITH EXTREME CAUTION! Fast response textures incur sizable GT overhead and disturb streaming metric calculation. Avoid whenever possible.\n\x09 */" },
		{ "CPP_Default_bFastResponse", "false" },
		{ "CPP_Default_CinematicTextureGroups", "0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Force the streaming system to disregard the normal logic for the specified duration and\ninstead always load all mip-levels for all textures used by this material.\n\n@param OverrideForceMiplevelsToBeResident    - Whether to use (true) or ignore (false) the bForceMiplevelsToBeResidentValue parameter.\n@param bForceMiplevelsToBeResidentValue              - true forces all mips to stream in. false lets other factors decide what to do with the mips.\n@param ForceDuration                                                 - Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic. Negative value turns it off.\n@param CinematicTextureGroups                                - Bitfield indicating texture groups that should use extra high-resolution mips\n@param bFastResponse                                                 - USE WITH EXTREME CAUTION! Fast response textures incur sizable GT overhead and disturb streaming metric calculation. Avoid whenever possible." },
	};
#endif // WITH_METADATA
	static void NewProp_OverrideForceMiplevelsToBeResident_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideForceMiplevelsToBeResident;
	static void NewProp_bForceMiplevelsToBeResidentValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMiplevelsToBeResidentValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
	static void NewProp_bFastResponse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFastResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_OverrideForceMiplevelsToBeResident_SetBit(void* Obj)
{
	((MaterialInterface_eventSetForceMipLevelsToBeResident_Parms*)Obj)->OverrideForceMiplevelsToBeResident = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_OverrideForceMiplevelsToBeResident = { "OverrideForceMiplevelsToBeResident", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), &Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_OverrideForceMiplevelsToBeResident_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bForceMiplevelsToBeResidentValue_SetBit(void* Obj)
{
	((MaterialInterface_eventSetForceMipLevelsToBeResident_Parms*)Obj)->bForceMiplevelsToBeResidentValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bForceMiplevelsToBeResidentValue = { "bForceMiplevelsToBeResidentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), &Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bForceMiplevelsToBeResidentValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_ForceDuration = { "ForceDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms, ForceDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms, CinematicTextureGroups), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bFastResponse_SetBit(void* Obj)
{
	((MaterialInterface_eventSetForceMipLevelsToBeResident_Parms*)Obj)->bFastResponse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bFastResponse = { "bFastResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), &Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bFastResponse_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_OverrideForceMiplevelsToBeResident,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bForceMiplevelsToBeResidentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_ForceDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_CinematicTextureGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bFastResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "SetForceMipLevelsToBeResident", nullptr, nullptr, Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::MaterialInterface_eventSetForceMipLevelsToBeResident_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInterface::execSetForceMipLevelsToBeResident)
{
	P_GET_UBOOL(Z_Param_OverrideForceMiplevelsToBeResident);
	P_GET_UBOOL(Z_Param_bForceMiplevelsToBeResidentValue);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForceDuration);
	P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
	P_GET_UBOOL(Z_Param_bFastResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForceMipLevelsToBeResident(Z_Param_OverrideForceMiplevelsToBeResident,Z_Param_bForceMiplevelsToBeResidentValue,Z_Param_ForceDuration,Z_Param_CinematicTextureGroups,Z_Param_bFastResponse);
	P_NATIVE_END;
}
// End Class UMaterialInterface Function SetForceMipLevelsToBeResident

// Begin Class UMaterialInterface
void UMaterialInterface::StaticRegisterNativesUMaterialInterface()
{
	UClass* Class = UMaterialInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBaseMaterial", &UMaterialInterface::execGetBaseMaterial },
		{ "GetBlendMode", &UMaterialInterface::execGetBlendMode },
		{ "GetNaniteOverideMaterial", &UMaterialInterface::execGetNaniteOverideMaterial },
		{ "GetParameterInfo", &UMaterialInterface::execGetParameterInfo },
		{ "GetPhysicalMaterial", &UMaterialInterface::execGetPhysicalMaterial },
		{ "GetPhysicalMaterialFromMap", &UMaterialInterface::execGetPhysicalMaterialFromMap },
		{ "GetPhysicalMaterialMask", &UMaterialInterface::execGetPhysicalMaterialMask },
		{ "SetForceMipLevelsToBeResident", &UMaterialInterface::execSetForceMipLevelsToBeResident },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInterface);
UClass* Z_Construct_UClass_UMaterialInterface_NoRegister()
{
	return UMaterialInterface::StaticClass();
}
struct Z_Construct_UClass_UMaterialInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Thumbnail" },
		{ "IncludePath", "Materials/MaterialInterface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceProfile_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** SubsurfaceProfile, for Screen Space Subsurface Scattering.. */" },
		{ "DisplayName", "Subsurface Profile" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "SubsurfaceProfile, for Screen Space Subsurface Scattering.." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularProfiles_MetaData[] = {
		{ "Comment", "/** Specular Profile. For internal usage, not editable/visible */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Specular Profile. For internal usage, not editable/visible" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeuralProfile_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "Comment", "/** Neural network profile. For internal usage, not editable/visible */" },
		{ "DisplayName", "Neural Profile" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Neural network profile. For internal usage, not editable/visible" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludedInBaseGame_MetaData[] = {
		{ "Comment", "/** Whether this material interface is included in the base game (and not in a DLC) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Whether this material interface is included in the base game (and not in a DLC)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTextureStreamingDataSorted_MetaData[] = {
		{ "Comment", "/** Because of redirector, the texture names need to be resorted at each load in case they changed. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Because of redirector, the texture names need to be resorted at each load in case they changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingDataVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingData_MetaData[] = {
		{ "Comment", "/** Data used by the texture streaming to know how each texture is sampled by the material. Sorted by names for quick access. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Data used by the texture streaming to know how each texture is sampled by the material. Sorted by names for quick access." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingDataMissingEntries_MetaData[] = {
		{ "Comment", "/** List of all used but missing texture indices in TextureStreamingData. Used for visualization / debugging only. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "List of all used but missing texture indices in TextureStreamingData. Used for visualization / debugging only." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh,/Script/Engine.SkeletalMesh" },
		{ "Category", "Previewing" },
		{ "Comment", "/** The mesh used by the material editor to preview the material.*/" },
		{ "ExactClass", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The mesh used by the material editor to preview the material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerParameterExpansion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverviewExpansion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this material */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Importing data and options used for this material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[] = {
		{ "Comment", "/** Unique ID for this material, used for caching during distributed lighting */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Unique ID for this material, used for caching during distributed lighting" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorOnlyData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubsurfaceProfile;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecularProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecularProfiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuralProfile;
	static void NewProp_bIncludedInBaseGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludedInBaseGame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_EDITORONLY_DATA
	static void NewProp_bTextureStreamingDataSorted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTextureStreamingDataSorted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureStreamingDataVersion;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureStreamingData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureStreamingDataMissingEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingDataMissingEntries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LayerParameterExpansion_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LayerParameterExpansion_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LayerParameterExpansion;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ParameterOverviewExpansion_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverviewExpansion_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOverviewExpansion;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingGuid;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial, "GetBaseMaterial" }, // 1220617432
		{ &Z_Construct_UFunction_UMaterialInterface_GetBlendMode, "GetBlendMode" }, // 2618034071
		{ &Z_Construct_UFunction_UMaterialInterface_GetNaniteOverideMaterial, "GetNaniteOverideMaterial" }, // 4123941367
		{ &Z_Construct_UFunction_UMaterialInterface_GetParameterInfo, "GetParameterInfo" }, // 2028330900
		{ &Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial, "GetPhysicalMaterial" }, // 2834396000
		{ &Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap, "GetPhysicalMaterialFromMap" }, // 3303152936
		{ &Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask, "GetPhysicalMaterialMask" }, // 2770008461
		{ &Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident, "SetForceMipLevelsToBeResident" }, // 389309384
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_EditorOnlyData = { "EditorOnlyData", nullptr, (EPropertyFlags)0x0124080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, EditorOnlyData), Z_Construct_UClass_UMaterialInterfaceEditorOnlyData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorOnlyData_MetaData), NewProp_EditorOnlyData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SubsurfaceProfile = { "SubsurfaceProfile", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, SubsurfaceProfile), Z_Construct_UClass_USubsurfaceProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubsurfaceProfile_MetaData), NewProp_SubsurfaceProfile_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SpecularProfiles_Inner = { "SpecularProfiles", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USpecularProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SpecularProfiles = { "SpecularProfiles", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, SpecularProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularProfiles_MetaData), NewProp_SpecularProfiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_NeuralProfile = { "NeuralProfile", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, NeuralProfile), Z_Construct_UClass_UNeuralProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeuralProfile_MetaData), NewProp_NeuralProfile_MetaData) };
void Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bIncludedInBaseGame_SetBit(void* Obj)
{
	((UMaterialInterface*)Obj)->bIncludedInBaseGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bIncludedInBaseGame = { "bIncludedInBaseGame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialInterface), &Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bIncludedInBaseGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludedInBaseGame_MetaData), NewProp_bIncludedInBaseGame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, LightmassSettings), Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmassSettings_MetaData), NewProp_LightmassSettings_MetaData) }; // 4230725829
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted_SetBit(void* Obj)
{
	((UMaterialInterface*)Obj)->bTextureStreamingDataSorted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted = { "bTextureStreamingDataSorted", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialInterface), &Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTextureStreamingDataSorted_MetaData), NewProp_bTextureStreamingDataSorted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataVersion = { "TextureStreamingDataVersion", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, TextureStreamingDataVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureStreamingDataVersion_MetaData), NewProp_TextureStreamingDataVersion_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData_Inner = { "TextureStreamingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialTextureInfo, METADATA_PARAMS(0, nullptr) }; // 3908631003
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData = { "TextureStreamingData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, TextureStreamingData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureStreamingData_MetaData), NewProp_TextureStreamingData_MetaData) }; // 3908631003
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x01240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries_Inner = { "TextureStreamingDataMissingEntries", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialTextureInfo, METADATA_PARAMS(0, nullptr) }; // 3908631003
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries = { "TextureStreamingDataMissingEntries", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, TextureStreamingDataMissingEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureStreamingDataMissingEntries_MetaData), NewProp_TextureStreamingDataMissingEntries_MetaData) }; // 3908631003
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, PreviewMesh), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData), NewProp_ThumbnailInfo_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_ValueProp = { "LayerParameterExpansion", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_Key_KeyProp = { "LayerParameterExpansion_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion = { "LayerParameterExpansion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, LayerParameterExpansion), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerParameterExpansion_MetaData), NewProp_LayerParameterExpansion_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_ValueProp = { "ParameterOverviewExpansion", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_Key_KeyProp = { "ParameterOverviewExpansion_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion = { "ParameterOverviewExpansion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, ParameterOverviewExpansion), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterOverviewExpansion_MetaData), NewProp_ParameterOverviewExpansion_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0116000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightingGuid = { "LightingGuid", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInterface, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingGuid_MetaData), NewProp_LightingGuid_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInterface_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_EditorOnlyData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SubsurfaceProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SpecularProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SpecularProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_NeuralProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bIncludedInBaseGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightmassSettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataVersion,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ThumbnailInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightingGuid,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMaterialInterface_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBlendableInterface_NoRegister, (int32)VTABLE_OFFSET(UMaterialInterface, IBlendableInterface), false },  // 641621593
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UMaterialInterface, IInterface_AssetUserData), false },  // 505316468
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInterface_Statics::ClassParams = {
	&UMaterialInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMaterialInterface_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialInterface()
{
	if (!Z_Registration_Info_UClass_UMaterialInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInterface.OuterSingleton, Z_Construct_UClass_UMaterialInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialInterface.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialInterface>()
{
	return UMaterialInterface::StaticClass();
}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInterface)
// End Class UMaterialInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialUsage_StaticEnum, TEXT("EMaterialUsage"), &Z_Registration_Info_UEnum_EMaterialUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2927299958U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLightmassMaterialInterfaceSettings::StaticStruct, Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewStructOps, TEXT("LightmassMaterialInterfaceSettings"), &Z_Registration_Info_UScriptStruct_LightmassMaterialInterfaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightmassMaterialInterfaceSettings), 4230725829U) },
		{ FMaterialTextureInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewStructOps, TEXT("MaterialTextureInfo"), &Z_Registration_Info_UScriptStruct_MaterialTextureInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialTextureInfo), 3908631003U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialInterfaceEditorOnlyData, UMaterialInterfaceEditorOnlyData::StaticClass, TEXT("UMaterialInterfaceEditorOnlyData"), &Z_Registration_Info_UClass_UMaterialInterfaceEditorOnlyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInterfaceEditorOnlyData), 727584633U) },
		{ Z_Construct_UClass_UMaterialInterface, UMaterialInterface::StaticClass, TEXT("UMaterialInterface"), &Z_Registration_Info_UClass_UMaterialInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInterface), 4129837601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_212215319(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
