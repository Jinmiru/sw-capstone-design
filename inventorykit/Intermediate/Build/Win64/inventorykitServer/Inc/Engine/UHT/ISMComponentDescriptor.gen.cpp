// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/ISMPartition/ISMComponentDescriptor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMComponentDescriptor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODBatchingPolicy();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightmapType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptorBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftISMComponentDescriptor();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FISMComponentDescriptorBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase;
class UScriptStruct* FISMComponentDescriptorBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentDescriptorBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMComponentDescriptorBase"));
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMComponentDescriptorBase>()
{
	return FISMComponentDescriptorBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that holds the relevant properties that can help decide if instances of different \n\x09StaticMeshComponents/InstancedStaticMeshComponents/HISM can be merged into a single component. */" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
		{ "ToolTip", "Struct that holds the relevant properties that can help decide if instances of different\n      StaticMeshComponents/InstancedStaticMeshComponents/HISM can be merged into a single component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmapType_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupId_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingGroupCullingPriority_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCustomNavigableGeometry_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStartCullDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceEndCullDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceLODDistanceScale_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureCullMips_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODBatchingPolicy_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEmissiveLightSource_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastContactShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastHiddenShadow_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLightingWhileHidden_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiscardOnLoad_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRayTracing_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInGame_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditorOnly_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateWorldPositionOffset_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseCulling_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGpuLodSelection_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInHLOD_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderForActorPlacementWhenHidden_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultCollision_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "bGenerateOverlapEvents" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlapEvents_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "CustomDepthStencilWriteMask" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideNavigationExport_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceNavigationObstacle_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillCollisionUnderneathForNavmesh_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffsetDisableDistance_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowCacheInvalidationBehavior_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetailMode_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightmapType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightmapType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingGroupId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RayTracingGroupCullingPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RayTracingGroupCullingPriority;
	static const UECodeGen_Private::FBytePropertyParams NewProp_bHasCustomNavigableGeometry;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceStartCullDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceEndCullDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InstanceLODDistanceScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureCullMips;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HLODBatchingPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HLODBatchingPolicy;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bCastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
	static void NewProp_bEmissiveLightSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmissiveLightSource;
	static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
	static void NewProp_bCastStaticShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow;
	static void NewProp_bCastContactShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastContactShadow;
	static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
	static void NewProp_bCastHiddenShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastHiddenShadow;
	static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
	static void NewProp_bAffectDynamicIndirectLightingWhileHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLightingWhileHidden;
	static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
	static void NewProp_bReceivesDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
	static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
	static void NewProp_bUseAsOccluder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
	static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
	static void NewProp_bEnableDiscardOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiscardOnLoad;
	static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
	static void NewProp_bVisibleInRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRayTracing;
	static void NewProp_bHiddenInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInGame;
	static void NewProp_bIsEditorOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditorOnly;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static void NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateWorldPositionOffset;
	static void NewProp_bReverseCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseCulling;
	static void NewProp_bUseGpuLodSelection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGpuLodSelection;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIncludeInHLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInHLOD;
	static void NewProp_bConsiderForActorPlacementWhenHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderForActorPlacementWhenHidden;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bUseDefaultCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultCollision;
	static void NewProp_bGenerateOverlapEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlapEvents;
	static void NewProp_bOverrideNavigationExport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideNavigationExport;
	static void NewProp_bForceNavigationObstacle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNavigationObstacle;
	static void NewProp_bFillCollisionUnderneathForNavmesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCollisionUnderneathForNavmesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPositionOffsetDisableDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowCacheInvalidationBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShadowCacheInvalidationBehavior;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DetailMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMComponentDescriptorBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, Hash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hash_MetaData), NewProp_Hash_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClass_MetaData), NewProp_ComponentClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mobility_MetaData), NewProp_Mobility_MetaData) }; // 2012069661
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureRenderPassType_MetaData), NewProp_VirtualTextureRenderPassType_MetaData) }; // 531654431
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType = { "LightmapType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, LightmapType), Z_Construct_UEnum_Engine_ELightmapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmapType_MetaData), NewProp_LightmapType_MetaData) }; // 1850895107
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 828539464
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupId = { "RayTracingGroupId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, RayTracingGroupId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingGroupId_MetaData), NewProp_RayTracingGroupId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority = { "RayTracingGroupCullingPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, RayTracingGroupCullingPriority), Z_Construct_UEnum_Engine_ERayTracingGroupCullingPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingGroupCullingPriority_MetaData), NewProp_RayTracingGroupCullingPriority_MetaData) }; // 1987203214
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHasCustomNavigableGeometry = { "bHasCustomNavigableGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, bHasCustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCustomNavigableGeometry_MetaData), NewProp_bHasCustomNavigableGeometry_MetaData) }; // 4074914048
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilWriteMask_MetaData), NewProp_CustomDepthStencilWriteMask_MetaData) }; // 2385485039
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 3706165537
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceStartCullDistance = { "InstanceStartCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, InstanceStartCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceStartCullDistance_MetaData), NewProp_InstanceStartCullDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceEndCullDistance = { "InstanceEndCullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, InstanceEndCullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceEndCullDistance_MetaData), NewProp_InstanceEndCullDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceLODDistanceScale = { "InstanceLODDistanceScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, InstanceLODDistanceScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceLODDistanceScale_MetaData), NewProp_InstanceLODDistanceScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureCullMips = { "VirtualTextureCullMips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, VirtualTextureCullMips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureCullMips_MetaData), NewProp_VirtualTextureCullMips_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, TranslucencySortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencySortPriority_MetaData), NewProp_TranslucencySortPriority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_OverriddenLightMapRes = { "OverriddenLightMapRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, OverriddenLightMapRes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverriddenLightMapRes_MetaData), NewProp_OverriddenLightMapRes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, CustomDepthStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData), NewProp_CustomDepthStencilValue_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy = { "HLODBatchingPolicy", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, HLODBatchingPolicy), Z_Construct_UEnum_Engine_EHLODBatchingPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODBatchingPolicy_MetaData), NewProp_HLODBatchingPolicy_MetaData) }; // 2028751023
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bCastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadow_MetaData), NewProp_bCastShadow_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEmissiveLightSource_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bEmissiveLightSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEmissiveLightSource = { "bEmissiveLightSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEmissiveLightSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEmissiveLightSource_MetaData), NewProp_bEmissiveLightSource_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bCastDynamicShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDynamicShadow_MetaData), NewProp_bCastDynamicShadow_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bCastStaticShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow = { "bCastStaticShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastStaticShadow_MetaData), NewProp_bCastStaticShadow_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bCastContactShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow = { "bCastContactShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastContactShadow_MetaData), NewProp_bCastContactShadow_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bCastShadowAsTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowAsTwoSided_MetaData), NewProp_bCastShadowAsTwoSided_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastHiddenShadow_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bCastHiddenShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastHiddenShadow = { "bCastHiddenShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastHiddenShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastHiddenShadow_MetaData), NewProp_bCastHiddenShadow_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bAffectDynamicIndirectLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDynamicIndirectLighting_MetaData), NewProp_bAffectDynamicIndirectLighting_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLightingWhileHidden_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bAffectDynamicIndirectLightingWhileHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLightingWhileHidden = { "bAffectDynamicIndirectLightingWhileHidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLightingWhileHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDynamicIndirectLightingWhileHidden_MetaData), NewProp_bAffectDynamicIndirectLightingWhileHidden_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bAffectDistanceFieldLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDistanceFieldLighting_MetaData), NewProp_bAffectDistanceFieldLighting_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bReceivesDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivesDecals_MetaData), NewProp_bReceivesDecals_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bOverrideLightMapRes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes = { "bOverrideLightMapRes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLightMapRes_MetaData), NewProp_bOverrideLightMapRes_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bUseAsOccluder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsOccluder_MetaData), NewProp_bUseAsOccluder_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bEnableDensityScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDensityScaling_MetaData), NewProp_bEnableDensityScaling_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bEnableDiscardOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad = { "bEnableDiscardOnLoad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiscardOnLoad_MetaData), NewProp_bEnableDiscardOnLoad_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bRenderCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData), NewProp_bRenderCustomDepth_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bVisibleInRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing = { "bVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleInRayTracing_MetaData), NewProp_bVisibleInRayTracing_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bHiddenInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame = { "bHiddenInGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHiddenInGame_MetaData), NewProp_bHiddenInGame_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bIsEditorOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly = { "bIsEditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEditorOnly_MetaData), NewProp_bIsEditorOnly_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bEvaluateWorldPositionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset = { "bEvaluateWorldPositionOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateWorldPositionOffset_MetaData), NewProp_bEvaluateWorldPositionOffset_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bReverseCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling = { "bReverseCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseCulling_MetaData), NewProp_bReverseCulling_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseGpuLodSelection_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bUseGpuLodSelection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseGpuLodSelection = { "bUseGpuLodSelection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseGpuLodSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGpuLodSelection_MetaData), NewProp_bUseGpuLodSelection_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bIncludeInHLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD = { "bIncludeInHLOD", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeInHLOD_MetaData), NewProp_bIncludeInHLOD_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bConsiderForActorPlacementWhenHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden = { "bConsiderForActorPlacementWhenHidden", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsiderForActorPlacementWhenHidden_MetaData), NewProp_bConsiderForActorPlacementWhenHidden_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bUseDefaultCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision = { "bUseDefaultCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDefaultCollision_MetaData), NewProp_bUseDefaultCollision_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bGenerateOverlapEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents = { "bGenerateOverlapEvents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateOverlapEvents_MetaData), NewProp_bGenerateOverlapEvents_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideNavigationExport_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bOverrideNavigationExport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideNavigationExport = { "bOverrideNavigationExport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideNavigationExport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideNavigationExport_MetaData), NewProp_bOverrideNavigationExport_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bForceNavigationObstacle_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bForceNavigationObstacle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bForceNavigationObstacle = { "bForceNavigationObstacle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bForceNavigationObstacle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceNavigationObstacle_MetaData), NewProp_bForceNavigationObstacle_MetaData) };
void Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bFillCollisionUnderneathForNavmesh_SetBit(void* Obj)
{
	((FISMComponentDescriptorBase*)Obj)->bFillCollisionUnderneathForNavmesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bFillCollisionUnderneathForNavmesh = { "bFillCollisionUnderneathForNavmesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FISMComponentDescriptorBase), &Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bFillCollisionUnderneathForNavmesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillCollisionUnderneathForNavmesh_MetaData), NewProp_bFillCollisionUnderneathForNavmesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_WorldPositionOffsetDisableDistance = { "WorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, WorldPositionOffsetDisableDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOffsetDisableDistance_MetaData), NewProp_WorldPositionOffsetDisableDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ShadowCacheInvalidationBehavior = { "ShadowCacheInvalidationBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, ShadowCacheInvalidationBehavior), Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowCacheInvalidationBehavior_MetaData), NewProp_ShadowCacheInvalidationBehavior_MetaData) }; // 2141891292
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_DetailMode = { "DetailMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptorBase, DetailMode), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetailMode_MetaData), NewProp_DetailMode_MetaData) }; // 3549946733
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Hash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ComponentClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_Mobility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureRenderPassType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightmapType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_RayTracingGroupCullingPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHasCustomNavigableGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilWriteMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_BodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceStartCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceEndCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_InstanceLODDistanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_VirtualTextureCullMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_TranslucencySortPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_OverriddenLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_CustomDepthStencilValue,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_HLODBatchingPolicy,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEmissiveLightSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastDynamicShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastStaticShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastContactShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastShadowAsTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bCastHiddenShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDynamicIndirectLightingWhileHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bAffectDistanceFieldLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReceivesDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseAsOccluder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDensityScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEnableDiscardOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bRenderCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisibleInRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bHiddenInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIsEditorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bEvaluateWorldPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bReverseCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseGpuLodSelection,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bIncludeInHLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bConsiderForActorPlacementWhenHidden,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bUseDefaultCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bGenerateOverlapEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bOverrideNavigationExport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bForceNavigationObstacle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_bFillCollisionUnderneathForNavmesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_WorldPositionOffsetDisableDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_ShadowCacheInvalidationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewProp_DetailMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ISMComponentDescriptorBase",
	Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::PropPointers),
	sizeof(FISMComponentDescriptorBase),
	alignof(FISMComponentDescriptorBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptorBase()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.InnerSingleton, Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase.InnerSingleton;
}
// End ScriptStruct FISMComponentDescriptorBase

// Begin ScriptStruct FISMComponentDescriptor
static_assert(std::is_polymorphic<FISMComponentDescriptor>() == std::is_polymorphic<FISMComponentDescriptorBase>(), "USTRUCT FISMComponentDescriptor cannot be polymorphic unless super FISMComponentDescriptorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMComponentDescriptor;
class UScriptStruct* FISMComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ISMComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FISMComponentDescriptor>()
{
	return FISMComponentDescriptor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeVirtualTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMComponentDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptor, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptor, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FISMComponentDescriptor, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextures_MetaData), NewProp_RuntimeVirtualTextures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FISMComponentDescriptorBase,
	&NewStructOps,
	"ISMComponentDescriptor",
	Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::PropPointers),
	sizeof(FISMComponentDescriptor),
	alignof(FISMComponentDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ISMComponentDescriptor.InnerSingleton;
}
// End ScriptStruct FISMComponentDescriptor

// Begin ScriptStruct FSoftISMComponentDescriptor
static_assert(std::is_polymorphic<FSoftISMComponentDescriptor>() == std::is_polymorphic<FISMComponentDescriptorBase>(), "USTRUCT FSoftISMComponentDescriptor cannot be polymorphic unless super FISMComponentDescriptorBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor;
class UScriptStruct* FSoftISMComponentDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoftISMComponentDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoftISMComponentDescriptor>()
{
	return FSoftISMComponentDescriptor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "DisplayAfter", "ComponentClass" },
		{ "ModuleRelativePath", "Public/ISMPartition/ISMComponentDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverlayMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RuntimeVirtualTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftISMComponentDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftISMComponentDescriptor, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftISMComponentDescriptor, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftISMComponentDescriptor, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayMaterial_MetaData), NewProp_OverlayMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSoftISMComponentDescriptor, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextures_MetaData), NewProp_RuntimeVirtualTextures_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_OverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewProp_RuntimeVirtualTextures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FISMComponentDescriptorBase,
	&NewStructOps,
	"SoftISMComponentDescriptor",
	Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::PropPointers),
	sizeof(FSoftISMComponentDescriptor),
	alignof(FSoftISMComponentDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSoftISMComponentDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor.InnerSingleton;
}
// End ScriptStruct FSoftISMComponentDescriptor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FISMComponentDescriptorBase::StaticStruct, Z_Construct_UScriptStruct_FISMComponentDescriptorBase_Statics::NewStructOps, TEXT("ISMComponentDescriptorBase"), &Z_Registration_Info_UScriptStruct_ISMComponentDescriptorBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMComponentDescriptorBase), 2604322333U) },
		{ FISMComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FISMComponentDescriptor_Statics::NewStructOps, TEXT("ISMComponentDescriptor"), &Z_Registration_Info_UScriptStruct_ISMComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMComponentDescriptor), 4185037056U) },
		{ FSoftISMComponentDescriptor::StaticStruct, Z_Construct_UScriptStruct_FSoftISMComponentDescriptor_Statics::NewStructOps, TEXT("SoftISMComponentDescriptor"), &Z_Registration_Info_UScriptStruct_SoftISMComponentDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftISMComponentDescriptor), 3397650699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_2897497761(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ISMPartition_ISMComponentDescriptor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
